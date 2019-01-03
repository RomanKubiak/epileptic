#include "BBTrack.h"

BBTrack::BBTrack(uint8_t _btn, uint8_t _left, uint8_t _right, uint8_t _up, uint8_t _down, uint8_t _wht, uint8_t _grn, uint8_t _red, uint8_t _blu)
	: btn(_btn), left(_left), right(_right), up(_up), down(_down), wht(_wht), grn(_grn), red(_red), blu(_blu)
{
	pinMode(wht, OUTPUT);
	pinMode(grn, OUTPUT);
	pinMode(red, OUTPUT);
	pinMode(blu, OUTPUT);
	pinMode(btn,  INPUT);
	pinMode(left, INPUT);
	pinMode(right,INPUT);

	analogWrite(grn, 32);
	analogWrite(wht, 255);
	analogWrite(red, 64);
	analogWrite(blu, 1);
}
void BBTrack::service()
{

}