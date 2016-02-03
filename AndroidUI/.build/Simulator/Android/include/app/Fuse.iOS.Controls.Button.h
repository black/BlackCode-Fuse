// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_BUTTON_H__
#define __APP_FUSE_I_O_S_CONTROLS_BUTTON_H__

#include <app/Fuse.iOS.Controls.Control__Fuse_Controls_Button.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_iOS_Controls_Button__float4; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

struct Button;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__DisabledColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__HighlightedColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__NormalColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__SelectedColorProperty;

struct Button__uType : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button__uType
{
};

Button__uType* Button__typeof();

void Button___ObjInit_3(Button* __this);
void Button___TypeInit_1(::uStatic* __this);
::app::Uno::Float4 Button__get_DisabledColor(Button* __this);
::app::Uno::Float4 Button__get_HighlightedColor(Button* __this);
::app::Uno::Float4 Button__get_NormalColor(Button* __this);
::app::Uno::Float4 Button__get_SelectedColor(Button* __this);
Button* Button__New_1(::uStatic* __this);
void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t);
void Button__set_DisabledColor(Button* __this, ::app::Uno::Float4 value);
void Button__set_HighlightedColor(Button* __this, ::app::Uno::Float4 value);
void Button__set_NormalColor(Button* __this, ::app::Uno::Float4 value);
void Button__set_SelectedColor(Button* __this, ::app::Uno::Float4 value);

struct Button : ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button
{
    void _ObjInit_3() { Button___ObjInit_3(this); }
    ::app::Uno::Float4 DisabledColor();
    ::app::Uno::Float4 HighlightedColor();
    ::app::Uno::Float4 NormalColor();
    ::app::Uno::Float4 SelectedColor();
    void DisabledColor(::app::Uno::Float4 value);
    void HighlightedColor(::app::Uno::Float4 value);
    void NormalColor(::app::Uno::Float4 value);
    void SelectedColor(::app::Uno::Float4 value);
};

}}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

inline ::app::Uno::Float4 Button::DisabledColor() { return Button__get_DisabledColor(this); }
inline ::app::Uno::Float4 Button::HighlightedColor() { return Button__get_HighlightedColor(this); }
inline ::app::Uno::Float4 Button::NormalColor() { return Button__get_NormalColor(this); }
inline ::app::Uno::Float4 Button::SelectedColor() { return Button__get_SelectedColor(this); }
inline void Button::DisabledColor(::app::Uno::Float4 value) { Button__set_DisabledColor(this, value); }
inline void Button::HighlightedColor(::app::Uno::Float4 value) { Button__set_HighlightedColor(this, value); }
inline void Button::NormalColor(::app::Uno::Float4 value) { Button__set_NormalColor(this, value); }
inline void Button::SelectedColor(::app::Uno::Float4 value) { Button__set_SelectedColor(this, value); }

}}}}


#endif
