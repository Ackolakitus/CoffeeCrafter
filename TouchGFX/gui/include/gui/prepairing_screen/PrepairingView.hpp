#ifndef PREPAIRINGVIEW_HPP
#define PREPAIRINGVIEW_HPP

#include <gui_generated/prepairing_screen/PrepairingViewBase.hpp>
#include <gui/prepairing_screen/PrepairingPresenter.hpp>

class PrepairingView : public PrepairingViewBase
{
public:
    PrepairingView();
    virtual ~PrepairingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    int16_t tickCounter;
    int progressMin;
    int progressMax;
};

#endif // PREPAIRINGVIEW_HPP
