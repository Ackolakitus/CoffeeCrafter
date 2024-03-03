#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void scrollWheelUpdateItem(MenuElement& item, int16_t itemIndex);
    virtual void makeTheCoffee();

    virtual void handleTickEvent();

    void imageClickHandler(const Image &i, const ClickEvent &e);
protected:
    int16_t tickCounter;
    Callback<Screen1View, const Image&, const ClickEvent&> imageClickedCallback;
};

#endif // SCREEN1VIEW_HPP
