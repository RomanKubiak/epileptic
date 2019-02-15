#ifndef utils_h_
#define utils_h_

#include <ILI9341_t3.h>
#define BUFFPIXEL 80
static uint8_t lastCpu, lastMem;

void printSystemLoad(ILI9341_t3 &g, int x, int y, const ILI9341_t3_font_t &f)
{
	uint8_t nowCpu, nowMem;
  	nowCpu = (uint8_t)AudioProcessorUsageMax();
  	nowMem = (uint8_t)AudioMemoryUsageMax();
  	if (nowCpu != lastCpu || nowMem != lastMem)
  	{
  		char buf[5];
  		sprintf(buf, "%02d/%01d", nowCpu, nowMem);
  		g.fillRect(x,y,320-x,240-y, ILI9341_BLACK);
  		g.setFont(f);
  		g.setCursor(x,y);
  		g.print(buf);
  		lastCpu = nowCpu;
  		lastMem = nowMem;
  	}
  	AudioProcessorUsageMaxReset();
}

#endif