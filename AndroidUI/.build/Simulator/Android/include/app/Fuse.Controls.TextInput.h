// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_INPUT_H__
#define __APP_FUSE_CONTROLS_TEXT_INPUT_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextInput__bool; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextInput__float4; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Controls {

struct TextInput;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*> TextInput__CaretColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*> TextInput__InputHintProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsMultilineProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsPasswordProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsReadOnlyProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*> TextInput__SelectionColorProperty;

struct TextInput__uType : ::app::Fuse::Controls::TextControl__uType
{
};

TextInput__uType* TextInput__typeof();

void TextInput___ObjInit_5(TextInput* __this);
void TextInput___TypeInit_5(::uStatic* __this);
::app::Uno::Float4 TextInput__get_CaretColor(TextInput* __this);
int TextInput__get_InputHint(TextInput* __this);
bool TextInput__get_IsMultiline(TextInput* __this);
bool TextInput__get_IsPassword(TextInput* __this);
bool TextInput__get_IsReadOnly(TextInput* __this);
::uString* TextInput__get_RenderValue(TextInput* __this);
::app::Uno::Float4 TextInput__get_SelectionColor(TextInput* __this);
TextInput* TextInput__New_2(::uStatic* __this);
void TextInput__set_CaretColor(TextInput* __this, ::app::Uno::Float4 value);
void TextInput__set_InputHint(TextInput* __this, int value);
void TextInput__set_IsMultiline(TextInput* __this, bool value);
void TextInput__set_IsPassword(TextInput* __this, bool value);
void TextInput__set_IsReadOnly(TextInput* __this, bool value);
void TextInput__set_SelectionColor(TextInput* __this, ::app::Uno::Float4 value);

struct TextInput : ::app::Fuse::Controls::TextControl
{
    void _ObjInit_5() { TextInput___ObjInit_5(this); }
    ::app::Uno::Float4 CaretColor();
    int InputHint() { return TextInput__get_InputHint(this); }
    bool IsMultiline() { return TextInput__get_IsMultiline(this); }
    bool IsPassword() { return TextInput__get_IsPassword(this); }
    bool IsReadOnly() { return TextInput__get_IsReadOnly(this); }
    ::app::Uno::Float4 SelectionColor();
    void CaretColor(::app::Uno::Float4 value);
    void InputHint(int value) { TextInput__set_InputHint(this, value); }
    void IsMultiline(bool value) { TextInput__set_IsMultiline(this, value); }
    void IsPassword(bool value) { TextInput__set_IsPassword(this, value); }
    void IsReadOnly(bool value) { TextInput__set_IsReadOnly(this, value); }
    void SelectionColor(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float4 TextInput::CaretColor() { return TextInput__get_CaretColor(this); }
inline ::app::Uno::Float4 TextInput::SelectionColor() { return TextInput__get_SelectionColor(this); }
inline void TextInput::CaretColor(::app::Uno::Float4 value) { TextInput__set_CaretColor(this, value); }
inline void TextInput::SelectionColor(::app::Uno::Float4 value) { TextInput__set_SelectionColor(this, value); }

}}}


#endif
