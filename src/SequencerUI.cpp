#include "SequencerUI.h"

void stepHandler(int now, int prev, void *user)
{
	SequencerUI *ui = (SequencerUI *)(user);
	ui->handleStepEvent(now, prev);
}

void midiHandler(byte channel, byte command, byte arg1, byte arg2, void *user)
{
	SequencerUI *ui = (SequencerUI *)(user);
	ui->handleMidiEvent(channel, command, arg1, arg2);
}

SequencerUI::SequencerUI(
			ILI9341_t3 &_g,
			uint16_t _x,
			uint16_t _y,
			uint16_t _width,
			uint16_t _height,
			uint8_t _steps,
			uint16_t _stepBaseColor) 
		: g(_g), x(_x), y(_y), width(_width), height(_height), steps(_steps),
			stepBaseColor(_stepBaseColor),
			currentStep(0), previousStep(0), invalid(false)
		{
			stepWidth = width / steps;
			dead = false;
		}

void SequencerUI::repaint()
{
	for (int step=0; step<steps; step++)
	{
		g.fillRect(((step * stepWidth) + x) + 1, y, stepWidth-2, height - 2, stepBaseColor);

		if (step == currentStep)
		{
			g.fillRect(((step * stepWidth) + x), y + (height-2), stepWidth, 2, ILI9341_WHITE);
		}
		else
		{
			g.fillRect(((step * stepWidth) + x), y + (height-2), stepWidth, 2, ILI9341_BLACK);
		}
	}
}

void SequencerUI::update()
{
	core.run();
}

void SequencerUI::handleStepEvent(int _currentStep, int _previousStep)
{
	currentStep = _currentStep;
	previousStep = _previousStep;
	repaint();
}

void SequencerUI::handleMidiEvent(byte channel, byte command, byte arg1, byte arg2)
{
	repaint();
}