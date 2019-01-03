#ifndef bb_rtackball_h_
#define bb_trackball_h_
#include <Arduino.h>
class BBTrack
{
	public:
		BBTrack(uint8_t _btn,
			uint8_t _left,
			uint8_t _right,
			uint8_t _up,
			uint8_t _down,
			uint8_t _wht,
			uint8_t _grn,
			uint8_t _red,
			uint8_t _blu);

	void service();
	private:
		uint8_t btn;
		uint8_t left;
		uint8_t right;
		uint8_t up;
		uint8_t down;
		uint8_t wht;
		uint8_t grn;
		uint8_t red;
		uint8_t blu;

};
#endif