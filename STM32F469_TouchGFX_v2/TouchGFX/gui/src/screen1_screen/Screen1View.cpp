#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>

int changeBackground = 0;
unsigned int rpmTest = 999;
unsigned int pFuel = 99;

Screen1View::Screen1View() : tickCounter(0)
{

}

void Screen1View::setupScreen()
{
	//box1.setColor(touchgfx::Color::getColorFrom24BitRGB(152, 251, 152));
}

void Screen1View::tearDownScreen()
{

}

void Screen1View::setRpm(int newRpm)
{
    //Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", newRpm);
    //textArea1.invalidate();

	//textArea3.setVisible(false);
    //textArea3.invalidate();
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", rpmTest);
	textArea1.invalidate();
    Unicode::snprintf(textAreaFuelBuffer, TEXTAREAFUEL_SIZE, "%d", pFuel);
	textArea1.invalidate();
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
	/*
	if (changeBackground == 1) {
		//box1.setColor(touchgfx::Color::getColorFrom24BitRGB(152, 251, 152));
		//box1.invalidate();
		//Unicode::snprintf(textAreaGearBuffer, TEXTAREAGEAR_SIZE, "%d", rpmTest);
		//textAreaGear.invalidate();
		Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", rpmTest);
		textArea1.invalidate();
	}
	else if (changeBackground == 0) {
		//box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
		//box1.invalidate();
		//Unicode::snprintf(textAreaGearBuffer, TEXTAREAGEAR_SIZE, "%d", rpmTest);
		//textAreaGear.invalidate();
		Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", rpmTest);
		textArea1.invalidate();
	}
	*/
	//Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", rpmTest);
	//textArea1.invalidate();
}
