#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <ILI9341_t3.h>
#include <font_Arial.h>
#include <XPT2046_Touchscreen.h>
#include <SPI.h>
#include "Utils.h"

#define CS_PIN  31
#define TIRQ_PIN  35
#define TFT_DC      20
#define TFT_CS      21
#define TFT_RST    255  // 255 = unused, connect to 3.3V
#define TFT_MOSI     7
#define TFT_SCLK    14
#define TFT_MISO    12

#define FLANGE_DELAY_LENGTH (4*AUDIO_BLOCK_SAMPLES)
#define CHORUS_DELAY_LENGTH (16*AUDIO_BLOCK_SAMPLES)

short flangerDelayLine[FLANGE_DELAY_LENGTH];
short chorusDelayLine[CHORUS_DELAY_LENGTH];

ILI9341_t3 tft = ILI9341_t3(TFT_CS, TFT_DC, TFT_RST, TFT_MOSI, TFT_SCLK, TFT_MISO);
XPT2046_Touchscreen ts(CS_PIN, TIRQ_PIN);  // Param 2 - Touch IRQ Pin - interrupt enabled polling

AudioInputI2S            in_I2S;           //xy=86.03125762939453,167.03125
AudioEffectBitcrusher    fx_BitCrush;    //xy=314,163
AudioEffectFreeverb      fx_Reverb;
AudioEffectFlange        fx_Flange;
AudioEffectChorus        fx_Chorus;
AudioFilterStateVariable fx_Filter;
AudioEffectDelay         fx_Delay;
AudioMixer4              mix_Delay;
AudioOutputI2S           out_I2S;           //xy=556.0000190734863,172.99999856948853
AudioControlSGTL5000     sgtl5000_1;     //xy=317.00001525878906,328.00000286102295

#include "AudioMux.h"
#include "FifteenStep.h"

AudioMux mux_Main;
AudioConnection mux_BitCrush1(fx_BitCrush, 0, mux_Main, 1);
AudioConnection mux_BitCrush2(mux_Main, 1, fx_BitCrush, 0);

AudioConnection mux_Reverb1(fx_Reverb, 0, mux_Main, 2);
AudioConnection mux_Reverb2(mux_Main, 2, fx_Reverb, 0);

AudioConnection mux_Flange1(fx_Flange, 0, mux_Main, 3);
AudioConnection mux_Flange2(mux_Main, 3, fx_Flange, 0);

AudioConnection mux_FilterLP1(fx_Filter, 0, mux_Main, 4);
AudioConnection mux_FilterLP2(mux_Main, 4, fx_Filter, 0);
AudioConnection mux_FilterHP1(fx_Filter, 0, mux_Main, 5);
AudioConnection mux_FilterHP2(mux_Main, 5, fx_Filter, 0);
AudioConnection mux_FilterBP1(fx_Filter, 0, mux_Main, 6);
AudioConnection mux_FilterBP2(mux_Main, 6, fx_Filter, 0);

AudioConnection mux_Chours1(fx_Chorus, 0, mux_Main, 7);
AudioConnection mux_Chours2(mux_Main, 7, fx_Chorus, 0);

AudioConnection delay_Tap0(fx_Delay,  0, mix_Delay, 0);
AudioConnection delay_Tap2(fx_Delay,  1, mix_Delay, 1);
AudioConnection delay_Tap1(fx_Delay,  2, mix_Delay, 2);
AudioConnection delay_Tap3(fx_Delay,  3, mix_Delay, 3);
AudioConnection mux_Delay1(mix_Delay, 0, mux_Main,  8);
AudioConnection mux_Delay2(mux_Main,  8, mix_Delay, 0);

AudioConnection mux_BusIn (in_I2S,   0, mux_Main, 0);
AudioConnection mux_BusOut(mux_Main, 0, out_I2S, 0);

FifteenStep sequencer = FifteenStep();
static uint32_t next;

void setup()
{
	Serial.begin(115200);

  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(ILI9341_BLACK);
  ts.begin();
  ts.setRotation(1);
  
	AudioMemory(120);
	next = millis() + 1000;
	AudioNoInterrupts();
    
	sgtl5000_1.enable();
	sgtl5000_1.volume(0.65);
    fx_BitCrush.bits(4);
    fx_BitCrush.sampleRate(22500);
    fx_Reverb.roomsize(0.5);
    fx_Reverb.damping(0.0);
	fx_Flange.begin(flangerDelayLine,
	    FLANGE_DELAY_LENGTH,
	    FLANGE_DELAY_LENGTH/4,
	    FLANGE_DELAY_LENGTH/4,
	    .5);
	
    fx_Filter.frequency(1100);
    fx_Filter.resonance(4);
    fx_Filter.octaveControl(0);

    fx_Chorus.begin(chorusDelayLine, CHORUS_DELAY_LENGTH, 2);

    fx_Delay.delay(0, 110);
    fx_Delay.delay(0, 220);
    fx_Delay.delay(0, 330);
    fx_Delay.delay(0, 440);

    sequencer.begin(120, 16);
    sequencer.setStepHandler(sequencer_stepHandler);
	AudioInterrupts();

  printWelcomeBanner();
}

void sequencer_stepHandler(int current, int previous)
{
    tft.fillRect(0,0, 320, 12, ILI9341_BLACK);
    tft.setCursor(0, 0);
    tft.print(current);
}

void loop()
{
	// mux_Main.reset();
    // mux_Main.setConnection(0, 7, true);
    // mux_Main.setConnection(7, 0, true);
    if(millis() == next)
    {
        next = millis() + 1000;
        updateStatusData();
    }

    sequencer.run();
}
