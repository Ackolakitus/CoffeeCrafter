#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View():imageClickedCallback(this, &Screen1View::imageClickHandler)
{
    tickCounter=0;
 }

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    background.setClickAction(imageClickedCallback);
    
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::scrollWheelUpdateItem(MenuElement &item, int16_t itemIndex)
{
    bool enabled = presenter->getIsCoffeeEnabled(itemIndex);
    item.setNumber(itemIndex, enabled);
    int index = scrollWheel.getSelectedItem();
    
    price.invalidate();
    type.invalidate();
    intensity.invalidate();
    roastlevel.invalidate();

    char* cType = presenter->getCoffeeType(index);
    int cPrice = presenter->getCoffeePrice(index);
    char* cRoastLevel = presenter->getCoffeeRoastLevel(index);
    int cIntensity = presenter->getCoffeeIntensity(index);

    Unicode::snprintf(priceBuffer, PRICE_SIZE, "%d", cPrice);
    price.invalidate();

    Unicode::strncpy(typeBuffer, cType, 8);
    type.resizeToCurrentText();
    type.invalidate();

    Unicode::snprintf(intensityBuffer, INTENSITY_SIZE, "%d", cIntensity);
    intensity.invalidate();

    Unicode::strncpy(roastlevelBuffer, cRoastLevel, 7);
    roastlevel.resizeToCurrentText();
    roastlevel.invalidate();
    
    presenter->setSelectedCoffee(index);
    tickCounter=0;
}

void Screen1View::makeTheCoffee()
{
    int index = scrollWheel.getSelectedItem();
    bool enabled = presenter->getIsCoffeeEnabled(index);
    if(enabled == true)
        goToPrepairingScreen();
    return;    
}

void Screen1View::imageClickHandler(const Image& i, const ClickEvent& evt)
{
    if (&i == &background)
    {
        tickCounter=0;
    }
}

void Screen1View::handleTickEvent()
{
    //60Hz=60ticks/s
    if (tickCounter == 900)
    {
	goToWelcomeScreen();
	tickCounter=0;
        return;
    }
    tickCounter++;
}