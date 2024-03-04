/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/welcomescreen_screen/WelcomeScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

WelcomeScreenViewBase::WelcomeScreenViewBase()
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_SPOTLIGHTS_ID));
    add(background);

    logo.setXY(107, 68);
    logo.setBitmap(touchgfx::Bitmap(BITMAP_LOGO150_ID));
    logo.setAlpha(0);
    add(logo);

    name.setPosition(227, 90, 180, 115);
    name.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    name.setLinespacing(0);
    name.setWideTextAction(WIDE_TEXT_WORDWRAP);
    name.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YBG8));
    name.setAlpha(0);
    add(name);
}

WelcomeScreenViewBase::~WelcomeScreenViewBase()
{

}

void WelcomeScreenViewBase::setupScreen()
{

}

void WelcomeScreenViewBase::goToMainScreen()
{
    //goToMainScreen
    //When goToMainScreen is called change screen to MainScreen
    //Go to MainScreen with screen transition towards East
    application().gotoMainScreenScreenSlideTransitionEast();
}
