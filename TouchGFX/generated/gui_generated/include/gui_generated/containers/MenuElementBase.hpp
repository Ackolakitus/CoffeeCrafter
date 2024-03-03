/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MENUELEMENTBASE_HPP
#define MENUELEMENTBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class MenuElementBase : public touchgfx::Container
{
public:
    MenuElementBase();
    virtual ~MenuElementBase();
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image icon;
    touchgfx::TextAreaWithOneWildcard text;
    touchgfx::Image x;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXT_SIZE = 25;
    touchgfx::Unicode::UnicodeChar textBuffer[TEXT_SIZE];

private:

};

#endif // MENUELEMENTBASE_HPP
