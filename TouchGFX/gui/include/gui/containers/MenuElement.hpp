#ifndef MENUELEMENT_HPP
#define MENUELEMENT_HPP

#include <gui_generated/containers/MenuElementBase.hpp>
#include <images/BitmapDatabase.hpp>

class MenuElement : public MenuElementBase
{
public:
    MenuElement();
    virtual ~MenuElement() {}

    virtual void initialize();

    void setNumber(int16_t number, bool available)
    {
        text.invalidate();
        icon.invalidate();
        switch (number)
        {
        case 0:
            icon.setBitmap(Bitmap(BITMAP_RISRETTO_ID));
            Unicode::snprintf(textBuffer, 25, "Risretto");
            break;
        case 1:
            icon.setBitmap(Bitmap(BITMAP_ESPRESSO_ID));
            Unicode::snprintf(textBuffer, 25, "Espresso");
            break;
        case 2:
            icon.setBitmap(Bitmap(BITMAP_LATTE_ID));
            Unicode::snprintf(textBuffer, 25, "Latte");
            break;
        case 3:
            icon.setBitmap(Bitmap(BITMAP_CAPPUCCINO_ID));
            Unicode::snprintf(textBuffer, 25, "Cappuccino");
            break;
        case 4:
            icon.setBitmap(Bitmap(BITMAP_AMERICANO_ID));
            Unicode::snprintf(textBuffer, 25, "Americano");
            break;
        case 5:
            icon.setBitmap(Bitmap(BITMAP_MOCHA_ID));
            Unicode::snprintf(textBuffer, 25, "Mocha");
           break;
        case 6:
            icon.setBitmap(Bitmap(BITMAP_LONGBLACK_ID));
            Unicode::snprintf(textBuffer, 25, "Long Black");
            break;
        case 7:
            icon.setBitmap(Bitmap(BITMAP_MACCHIATO_ID));
            Unicode::snprintf(textBuffer, 25, "Macchiato");
            break;
        case 8:
            icon.setBitmap(Bitmap(BITMAP_IRISHCOFFEE_ID));
            Unicode::snprintf(textBuffer, 25, "Irish Coffee");
            break;
        case 9:
            icon.setBitmap(Bitmap(BITMAP_BLACKCOFFEE_ID));
            Unicode::snprintf(textBuffer, 25, "Black Coffee");
            break;
        case 10:
            icon.setBitmap(Bitmap(BITMAP_TURKISH_ID));
            Unicode::snprintf(textBuffer, 25, "Turkish Coffee");
            break;
        case 11:
            icon.setBitmap(Bitmap(BITMAP_VIETNAMESE_ID));
            Unicode::snprintf(textBuffer, 25, "Vietnamese Coffee");
            break;
        }
	available ? (icon.setAlpha(255), x.setVisible(false)) 
: (icon.setAlpha(140), x.setVisible(true));

	x.invalidate();
        text.invalidate();
        icon.invalidate();
    }
protected:
};

#endif // MENUELEMENT_HPP
