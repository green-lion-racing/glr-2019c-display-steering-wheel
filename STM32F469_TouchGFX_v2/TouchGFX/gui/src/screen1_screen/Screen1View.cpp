#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>

Screen1View::Screen1View() : tickCounter(0)
{

}

void Screen1View::setupScreen()
{

}

void Screen1View::tearDownScreen()
{

}

void Screen1View::setRpm(int newRpm)
{
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", newRpm);
    textArea1.invalidate();
    //textArea3.setVisible(false);
    //textArea3.invalidate();
}

void Screen1View::handleTickEvent()
{
	tickCounter++;
	box2.setColor(touchgfx::Color::getColorFrom24BitRGB(102, 191, 31));
	box2.invalidate();
	if (tickCounter > 60) {
		//box2.setPosition(173, 0, 158, 480);
		box2.setColor(touchgfx::Color::getColorFrom24BitRGB(254, 83, 19));
		box2.invalidate();
	}

	if (tickCounter > 120)
		tickCounter = 0;

}
