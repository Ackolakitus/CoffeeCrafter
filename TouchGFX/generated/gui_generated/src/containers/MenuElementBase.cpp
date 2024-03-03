/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/MenuElementBase.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

MenuElementBase::MenuElementBase()
{
    setWidth(180);
    setHeight(272);
    icon.setXY(0, 21);
    icon.setBitmap(touchgfx::Bitmap(BITMAP_RISRETTO_ID));
    add(icon);

    text.setPosition(0, 202, 180, 49);
    text.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    text.setLinespacing(0);
    text.setWideTextAction(WIDE_TEXT_WORDWRAP);
    Unicode::snprintf(textBuffer, TEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_A3VO).getText());
    text.setWildcard(textBuffer);
    text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IO92));
    add(text);

    x.setXY(146, 21);
    x.setBitmap(touchgfx::Bitmap(BITMAP_OUTPUT_ONLINEPNGTOOLS_ID));
    x.setAlpha(200);
    x.setVisible(false);
    add(x);
}

MenuElementBase::~MenuElementBase()
{

}

void MenuElementBase::initialize()
{

}
