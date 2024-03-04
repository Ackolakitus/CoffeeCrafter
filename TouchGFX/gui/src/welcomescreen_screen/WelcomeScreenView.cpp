#include <gui/welcomescreen_screen/WelcomeScreenView.hpp>

WelcomeScreenView::WelcomeScreenView():logoFadeAnimationEndedCallback(this, &WelcomeScreenView::logoFadeAnimationEndedHandler), 
imageClickedCallback(this, &WelcomeScreenView::imageClickHandler)
{ }

void WelcomeScreenView::setupScreen()
{
    
    WelcomeScreenViewBase::setupScreen();
    logo.startFadeAnimation(255, 120, EasingEquations::linearEaseNone);

    logo.setFadeAnimationEndedAction(logoFadeAnimationEndedCallback);

    background.setClickAction(imageClickedCallback);
}

void WelcomeScreenView::tearDownScreen()
{
    WelcomeScreenViewBase::tearDownScreen();
}

void WelcomeScreenView::logoFadeAnimationEndedHandler(const touchgfx::FadeAnimator<touchgfx::Image>& l)
{
    if (&l == &logo)
    {
        name.startFadeAnimation(255, 120, EasingEquations::linearEaseNone);
    }
}

void WelcomeScreenView::imageClickHandler(const Image& i, const ClickEvent& evt)
{
    if (&i == &background)
    {
        goToMainScreen();
    }
}