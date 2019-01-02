#ifndef utils_h_
#define utils_h_

extern ILI9341_t3 tft;
static uint8_t _cpu_last, _mem_last;
static void updateStatusData()
{
   uint8_t _cpu_now, _mem_now;
  _cpu_now = (uint8_t)AudioProcessorUsageMax();
  _mem_now = (uint8_t)AudioMemoryUsageMax();
  if (_cpu_now != _cpu_last || _mem_now != _mem_last)
  {
    tft.setCursor(260, 220);
    tft.fillRect(260, 220, 60, 20, ILI9341_BLACK);
    char buf[5];
    sprintf(buf, "%02d/%d", _cpu_now, _mem_now);
    tft.print(buf);
  }
  _cpu_last = _cpu_now;
  _mem_last = _mem_now;
  AudioProcessorUsageMaxReset();
}

static void printWelcomeBanner()
{
    for (int x=0; x<16; x++)
    {
        tft.fillRect(x*20, 23, 20, 20, ILI9341_RED);
        tft.fillRect(x*20, 45, 20, 20, ILI9341_BLUE);
        tft.fillRect(x*20, 67, 20, 20, ILI9341_GREEN);
        tft.fillRect(x*20, 89, 20, 20, ILI9341_YELLOW);
        tft.fillRect(x*20, 111, 20, 20, ILI9341_CYAN);
        tft.fillRect(x*20, 135, 20, 20, ILI9341_MAROON);
        tft.fillRect(x*20, 157, 20, 20, ILI9341_PINK);
        tft.fillRect(x*20, 179, 20, 20, ILI9341_ORANGE);
        /*tft.fillRect(x*20, y, 20, 8, ILI9341_RED);
        tft.fillRect(x*20, y, 20, 8, ILI9341_RED);
        tft.fillRect(x*20, y, 20, 8, ILI9341_RED);
        tft.fillRect(x*20, y, 20, 8, ILI9341_RED);
        tft.fillRect(x*20, y, 20, 8, ILI9341_RED);
        tft.fillRect(x*20, y, 20, 8, ILI9341_RED);*/
    }
}
#endif
