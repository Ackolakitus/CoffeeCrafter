#ifndef WELCOMESCREENVIEW_HPP
#define WELCOMESCREENVIEW_HPP

#include <gui_generated/welcomescreen_screen/WelcomeScreenViewBase.hpp>
#include <gui/welcomescreen_screen/WelcomeScreenPresenter.hpp>

class WelcomeScreenView : public WelcomeScreenViewBase
{
public:
    WelcomeScreenView();
    virtual ~WelcomeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void logoFadeAnimationEndedHandler(const touchgfx::FadeAnimator<Image>& comp);
    void imageClickHandler(const Image &i, const ClickEvent &e);
protected:

    Callback <WelcomeScreenView, const touchgfx::FadeAnimator<Image>&> logoFadeAnimationEndedCallback;
    Callback<WelcomeScreenView, const Image&, const ClickEvent&> imageClickedCallback;
};

#endif // WELCOMESCREENVIEW_HPP
