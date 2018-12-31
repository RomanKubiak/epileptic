#ifndef utils_h_
#define utils_h_

extern ILI9341_t3 tft;
static void updateStatusData()
{
  tft.setFont(Arial_8);
  tft.setCursor(240,220);
  tft.fillRect(240, 220, 80, 20, ILI9341_BLACK);
  tft.print(AudioProcessorUsageMax());
  tft.print("/");
  tft.print(AudioMemoryUsageMax());
  AudioProcessorUsageMaxReset();
}

static void printWelcomeBanner()
{
  tft.setFont(Arial_32);
  tft.setCursor(100,32);
  tft.print("epileptic");
}
#endif
