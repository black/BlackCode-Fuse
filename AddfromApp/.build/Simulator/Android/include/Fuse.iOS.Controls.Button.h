// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Button.h>
#include <Fuse.iOS.Controls.Control-1.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Button;}}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class Button :18
// {
::g::Fuse::Node_type* Button_typeof();
void Button__ctor_3_fn(Button* __this);
void Button__get_DisabledColor_fn(Button* __this, ::g::Uno::Float4* __retval);
void Button__set_DisabledColor_fn(Button* __this, ::g::Uno::Float4* value);
void Button__get_HighlightedColor_fn(Button* __this, ::g::Uno::Float4* __retval);
void Button__set_HighlightedColor_fn(Button* __this, ::g::Uno::Float4* value);
void Button__New1_fn(Button** __retval);
void Button__get_NormalColor_fn(Button* __this, ::g::Uno::Float4* __retval);
void Button__set_NormalColor_fn(Button* __this, ::g::Uno::Float4* value);
void Button__OnButtonPropertyChanged_fn(Button* t);
void Button__get_SelectedColor_fn(Button* __this, ::g::Uno::Float4* __retval);
void Button__set_SelectedColor_fn(Button* __this, ::g::Uno::Float4* value);

struct Button : ::g::Fuse::iOS::Controls::Control
{
    static uSStrong< ::g::Fuse::StyleProperty1*> DisabledColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& DisabledColorProperty() { return Button_typeof()->Init(), DisabledColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> HighlightedColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& HighlightedColorProperty() { return Button_typeof()->Init(), HighlightedColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> NormalColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& NormalColorProperty() { return Button_typeof()->Init(), NormalColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> SelectedColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& SelectedColorProperty() { return Button_typeof()->Init(), SelectedColorProperty_; }

    void ctor_3();
    ::g::Uno::Float4 DisabledColor();
    void DisabledColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 HighlightedColor();
    void HighlightedColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 NormalColor();
    void NormalColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 SelectedColor();
    void SelectedColor(::g::Uno::Float4 value);
    static Button* New1();
    static void OnButtonPropertyChanged(Button* t);
};
// }

}}}} // ::g::Fuse::iOS::Controls
