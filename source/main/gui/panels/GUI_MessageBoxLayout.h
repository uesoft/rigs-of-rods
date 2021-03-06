#pragma once

// ----------------------------------------------------------------------------
// Generated by MyGUI's LayoutEditor using RoR's code templates.
// Find the templates at [repository]/tools/MyGUI_LayoutEditor/
//
// IMPORTANT:
// Do not modify this code directly. Create a derived class instead.
// ----------------------------------------------------------------------------

#include "ForwardDeclarations.h"
#include "BaseLayout.h"

namespace RoR {
namespace GUI {

ATTRIBUTE_CLASS_LAYOUT(MessageBoxLayout, "MessageBox.layout");
class MessageBoxLayout : public wraps::BaseLayout
{

public:

    MessageBoxLayout(MyGUI::Widget* _parent = nullptr);
    virtual ~MessageBoxLayout();

protected:

    //%LE Widget_Declaration list start
    ATTRIBUTE_FIELD_WIDGET_NAME(MessageBoxLayout, m_text, "text");
    MyGUI::EditBox* m_text;

    ATTRIBUTE_FIELD_WIDGET_NAME(MessageBoxLayout, m_button1, "button1");
    MyGUI::Button* m_button1;

    ATTRIBUTE_FIELD_WIDGET_NAME(MessageBoxLayout, m_button2, "button2");
    MyGUI::Button* m_button2;

    //%LE Widget_Declaration list end
};

} // namespace GUI
} // namespace RoR

