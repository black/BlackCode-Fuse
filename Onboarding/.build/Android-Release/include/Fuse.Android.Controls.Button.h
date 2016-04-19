// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Controls.Button.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct Button;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Button;}}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class Button :39
// {
::g::Fuse::Android::Controls::Control_type* Button_typeof();
void Button__ctor_3_fn(Button* __this);
void Button__Attach_fn(Button* __this);
void Button__CreateInternal_fn(Button* __this, ::g::Android::android::view::View** __retval);
void Button__Detach_fn(Button* __this);
void Button__New1_fn(Button** __retval);
void Button__OnButtonPropertyChanged_fn(Button* t);
void Button__OnTextChanged_fn(Button* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void Button__SetText_fn(Button* __this, uString* value);
void Button__get_TextColor_fn(Button* __this, ::g::Uno::Float4* __retval);
void Button__set_TextColor_fn(Button* __this, ::g::Uno::Float4* value);

struct Button : ::g::Fuse::Android::Controls::Control
{
    uStrong< ::g::Android::android::widget::Button*> _buttonView;
    static uSStrong< ::g::Fuse::StyleProperty1*> TextColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextColorProperty() { return Button_typeof()->Init(), TextColorProperty_; }

    void ctor_3();
    void OnTextChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void SetText(uString* value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    static Button* New1();
    static void OnButtonPropertyChanged(Button* t);
};
// }

}}}} // ::g::Fuse::Android::Controls
