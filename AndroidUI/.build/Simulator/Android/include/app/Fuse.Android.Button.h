// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_BUTTON_H__
#define __APP_FUSE_ANDROID_BUTTON_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_Button.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct Button; } } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Android_Button__float4; } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Android {

struct Button;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Android_Button__float4*> Button__TextColorProperty;

struct Button__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_Button__uType
{
};

Button__uType* Button__typeof();

void Button___ObjInit_3(Button* __this);
void Button___TypeInit_1(::uStatic* __this);
void Button__Attach(Button* __this);
::app::Android::android::view::View* Button__CreateInternal(Button* __this);
void Button__Detach(Button* __this);
::app::Uno::Float4 Button__get_TextColor(Button* __this);
Button* Button__New_1(::uStatic* __this);
void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t);
void Button__OnTextChanged(Button* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void Button__set_TextColor(Button* __this, ::app::Uno::Float4 value);
void Button__SetText(Button* __this, ::uString* value);

struct Button : ::app::Fuse::Android::ControlView__Fuse_Controls_Button
{
    ::uStrong< ::app::Android::android::widget::Button*> _buttonView;

    void _ObjInit_3() { Button___ObjInit_3(this); }
    ::app::Uno::Float4 TextColor();
    void OnTextChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { Button__OnTextChanged(this, sender, args); }
    void TextColor(::app::Uno::Float4 value);
    void SetText(::uString* value) { Button__SetText(this, value); }
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Android {

inline ::app::Uno::Float4 Button::TextColor() { return Button__get_TextColor(this); }
inline void Button::TextColor(::app::Uno::Float4 value) { Button__set_TextColor(this, value); }

}}}


#endif
