#ifndef MAINSCREENPRESENTER_HPP
#define MAINSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MainScreenView;

class MainScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MainScreenPresenter(MainScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~MainScreenPresenter() {}

    char* getCoffeeType(int16_t index)
    {
        return model->getCoffeeType(index);
    }

    int getCoffeePrice(int16_t index)
    {
        return model->getCoffeePrice(index);
    }

    char* getCoffeeRoastLevel(int16_t index)
    {
        return model->getCoffeeRoastLevel(index);
    }

    int getCoffeeIntensity(int16_t index)
    {
        return model->getCoffeeIntensity(index);
    }
    
    void setSelectedCoffee(int16_t index)
    {
        model->setSelectedCoffee(index);
    }

    int16_t getSelectedCoffee()
    {
        return model->getSelectedCoffee();
    }

    void setSugarLevel(int16_t level)
    {
        model->setSugarLevel(level);
    }

    bool getIsCoffeeChosen()
    {
        return model->getIsCoffeeChosen();
    }

    bool getIsCoffeeEnabled(int16_t index)
    {
        return model->getIsCoffeeEnabled(index);
    }

private:
    MainScreenPresenter();

    MainScreenView& view;
};

#endif // MAINSCREENPRESENTER_HPP
