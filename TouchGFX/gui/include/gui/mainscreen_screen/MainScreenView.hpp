#ifndef MAINSCREENVIEW_HPP
#define MAINSCREENVIEW_HPP

#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

class MainScreenView : public MainScreenViewBase
{
public:
    MainScreenView();
    virtual ~MainScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void scrollWheelUpdateItem(MenuElement& item, int16_t itemIndex);
    virtual void makeTheCoffee();

    virtual void handleTickEvent();

    void imageClickHandler(const Image &i, const ClickEvent &e);
protected:
    int16_t tickCounter;
    Callback<MainScreenView, const Image&, const ClickEvent&> imageClickedCallback;
};

#endif // MAINSCREENVIEW_HPP
