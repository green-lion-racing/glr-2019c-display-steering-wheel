#ifndef SCREEN1_VIEW_HPP
#define SCREEN1_VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    //virtual void rpmChanged();
    virtual void setRpm(int);
    virtual void handleTickEvent();
    void shiftLight(int);
    int tickCounter;

protected:
};
extern unsigned int rpmTest;
extern unsigned int gear;
extern unsigned int speed;
extern double pFuel;
extern double pOil;
extern int tOil;
extern int tWat;
extern bool clutchPressed;

#endif // SCREEN1_VIEW_HPP
