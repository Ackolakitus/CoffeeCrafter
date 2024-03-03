#ifndef PREPAIRINGPRESENTER_HPP
#define PREPAIRINGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PrepairingView;

class PrepairingPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PrepairingPresenter(PrepairingView& v);

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

    virtual ~PrepairingPresenter() {}

    void setIsCoffeeChosen(bool dali)
    {
        model->setIsCoffeeChosen(dali);
    }

    int16_t getSugarLevel()
    {
        return model->getSugarLevel();
    }

    int16_t getSelectedCoffee()
    {
        return model->getSelectedCoffee();
    }

    void sendCoffeeIndexTroughQueue()
    {
        model->sendCoffeeIndexTroughQueue();
    }

    int getCoffeeWater(int16_t index)
    {
        return model->getCoffeeWater(index);
    }

    int getCoffeeMilk(int16_t index)
    {
        return model->getCoffeeMilk(index);
    }

private:
    PrepairingPresenter();

    PrepairingView& view;
};

#endif // PREPAIRINGPRESENTER_HPP
