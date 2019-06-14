#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>

unsigned int rpmTest = 12500;
unsigned int pFuel = 99;
//unsigned int pOil = 99;	//double waere hier besser
double pOil = 99.9;
int tOil = 99;
int tWat = 99;

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
	shiftLight(rpmTest);
	Unicode::snprintfFloat(textAreaPOilBuffer, TEXTAREAPOIL_SIZE, "%.1f", pOil);
	textAreaPOil.invalidate();
	Unicode::snprintf(textAreaTOilBuffer, TEXTAREATOIL_SIZE, "%d", tOil);
	textAreaTOil.invalidate();
	Unicode::snprintf(textAreaTWatBuffer, TEXTAREATWAT_SIZE, "%d", tWat);
	textAreaTWat.invalidate();
}

void Screen1View::handleTickEvent()
{
	tickCounter++;
	/*
	box2.setColor(touchgfx::Color::getColorFrom24BitRGB(102, 191, 31));
	box2.invalidate();
	if (tickCounter > 60) {
		//box2.setPosition(173, 0, 158, 480);
		box2.setColor(touchgfx::Color::getColorFrom24BitRGB(254, 83, 19));
		box2.invalidate();
	}
	*/
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

void Screen1View::shiftLight(int rpm) {
	if (rpmTest > 11250) {
		rpm0.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		rpm0.invalidate();
		if (rpmTest > 11500) {
			rpm1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			rpm1.invalidate();
			if (rpmTest > 11750) {
				rpm2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
				rpm2.invalidate();
				if (rpmTest > 12000) {
					rpm3.setColor(touchgfx::Color::getColorFrom24BitRGB(071, 60, 139));
					rpm3.invalidate();
					if (rpmTest > 12250){
						rpm4.setColor(touchgfx::Color::getColorFrom24BitRGB(071, 60, 139));
						rpm4.invalidate();
						if (rpmTest > 12500){
							rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(071, 60, 139));
							rpm5.invalidate();
						}
						else {
							rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
							rpm5.invalidate();
						}
					}
					else {
						rpm4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
						rpm4.invalidate();
						rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
						rpm5.invalidate();
					}
				}
				else {
					rpm3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
					rpm3.invalidate();
					rpm4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
					rpm4.invalidate();
					rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
					rpm5.invalidate();
				}
			}else {
				rpm2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
				rpm2.invalidate();
				rpm3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
				rpm3.invalidate();
				rpm4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
				rpm4.invalidate();
				rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
				rpm5.invalidate();
			}
		}else {
			rpm1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
			rpm1.invalidate();
			rpm2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
			rpm2.invalidate();
			rpm3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
			rpm3.invalidate();
			rpm4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
			rpm4.invalidate();
			rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
			rpm5.invalidate();
		}
	}
	else {
		rpm0.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
		rpm0.invalidate();
		rpm1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
		rpm1.invalidate();
		rpm2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
		rpm2.invalidate();
		rpm3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
		rpm3.invalidate();
		rpm4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
		rpm4.invalidate();
		rpm5.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
		rpm5.invalidate();
	}
}
