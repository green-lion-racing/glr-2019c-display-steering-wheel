#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>

unsigned int rpmTest = 12500;
double pFuel = 99.9;
double pOil = 99.9;
int tOil = 99;
int tWat = 99;
unsigned int gear = 9;
unsigned int speed = 999;
bool clutchPressed = 0;

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
    Unicode::snprintfFloat(textAreaPFuelBuffer, TEXTAREAPFUEL_SIZE, "%.1f", pFuel);
	textAreaPFuel.invalidate();
	shiftLight(rpmTest);
	Unicode::snprintfFloat(textAreaPOilBuffer, TEXTAREAPOIL_SIZE, "%.1f", pOil);
	textAreaPOil.invalidate();
	Unicode::snprintf(textAreaTOilBuffer, TEXTAREATOIL_SIZE, "%d", tOil);
	textAreaTOil.invalidate();
	Unicode::snprintf(textAreaTWatBuffer, TEXTAREATWAT_SIZE, "%d", tWat);
	textAreaTWat.invalidate();
	if (!clutchPressed) {
		Unicode::snprintf(textAreaGearBuffer, TEXTAREAGEAR_SIZE, "%d", gear);
		textAreaGear.invalidate();
		bg_gear.setVisible(0);
		bg_gear.invalidate();
	}
	else {
		Unicode::snprintf(textAreaGearBuffer, TEXTAREAGEAR_SIZE, "%s", "C");
		textAreaGear.invalidate();
		bg_gear.setVisible(1);
		bg_gear.invalidate();
	}

	Unicode::snprintf(textAreaSpeedBuffer, TEXTAREASPEED_SIZE, "%d", speed);
	textAreaSpeed.invalidate();
	if (tWat > 95) {
		bg_tWat.setVisible(1);
		bg_tWat.invalidate();
	}
	else {
		bg_tWat.setVisible(0);
		bg_tWat.invalidate();
	}
	if (tOil > 120){
		bg_tOil.setVisible(1);
		bg_tOil.invalidate();
	}
	else {
		bg_tOil.setVisible(0);
		bg_tOil.invalidate();
	}
	if (pOil < 0.5) {
		bg_pOil.setVisible(1);
		bg_pOil.invalidate();
	}
	else {
		bg_pOil.setVisible(0);
		bg_pOil.invalidate();
	}
	if (pFuel < 2.0) {
		bg_pFuel.setVisible(1);
		bg_pFuel.invalidate();
	}
	else {
		bg_pFuel.setVisible(0);
		bg_pFuel.invalidate();
	}

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
