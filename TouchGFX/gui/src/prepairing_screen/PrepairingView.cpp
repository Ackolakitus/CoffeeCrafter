#include <gui/prepairing_screen/PrepairingView.hpp>

PrepairingView::PrepairingView()
{

}

void PrepairingView::setupScreen()
{
    PrepairingViewBase::setupScreen();
/*
    int index = presenter->getSelectedCoffee();
    int water = presenter->getCoffeeWater(index);
    int sugarLevel = presenter->getSugarLevel();
    int milk = presenter->getCoffeeMilk(index);
    progressMin = 0;
    progressMax = 30+(sugarLevel*10)+(water+milk)*15+30;
    presenter->getCoffeeWater(index);
    progressBar.setRange(progressMin, progressMax);
*/  
    progressBar.getRange(progressMin, progressMax);
    tickCounter=0;
}

void PrepairingView::tearDownScreen()
{
    PrepairingViewBase::tearDownScreen();
}

void PrepairingView::handleTickEvent()
{
    if (tickCounter == progressMin)
    {
        Unicode::snprintf(process2Buffer, 40, "Sugar");
        process2.invalidate();
    }
    if (tickCounter == progressMax/3)
    {
        Unicode::snprintf(process2Buffer, 40, "Spice");
        process2.invalidate();
    }
    if (tickCounter == (progressMax*2)/3)
    {
        Unicode::snprintf(process2Buffer, 40, "And everything nice");
        process2.invalidate();
    }
    if (tickCounter == progressMax)
    {
        presenter->setIsCoffeeChosen(true);      
    }
    if (tickCounter == progressMax+1)
    {
	    presenter->sendCoffeeIndexTroughQueue();
        presenter->setIsCoffeeChosen(false);

        Unicode::snprintf(process1Buffer, 30, "Enjoy your coffee.");
        process1.invalidate();

        Unicode::snprintf(process2Buffer, 40, "Have a nice day!");
        process2.invalidate();
    }
    if (tickCounter > progressMax+120)
    {
        goToMainScreen();
        return;
    }
    tickCounter++;
    progressBar.setValue(tickCounter);
}
