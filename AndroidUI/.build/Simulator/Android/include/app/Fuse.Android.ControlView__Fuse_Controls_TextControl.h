// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_TEXT_CONTROL_H__
#define __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_TEXT_CONTROL_H__

#include <app/Fuse.Android.View.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }

namespace app {
namespace Fuse {
namespace Android {

struct ControlView__Fuse_Controls_TextControl;

struct ControlView__Fuse_Controls_TextControl__uType : ::app::Fuse::Android::View__uType
{
    void(*__fp_Attach)(ControlView__Fuse_Controls_TextControl*);
    void(*__fp_Detach)(ControlView__Fuse_Controls_TextControl*);
};

ControlView__Fuse_Controls_TextControl__uType* ControlView__Fuse_Controls_TextControl__typeof();

void ControlView__Fuse_Controls_TextControl___ObjInit_2(ControlView__Fuse_Controls_TextControl* __this);
::app::Android::android::view::View* ControlView__Fuse_Controls_TextControl__Create(ControlView__Fuse_Controls_TextControl* __this);
::app::Fuse::Controls::TextControl* ControlView__Fuse_Controls_TextControl__FindControl(ControlView__Fuse_Controls_TextControl* __this);
::app::Fuse::Controls::TextControl* ControlView__Fuse_Controls_TextControl__get_Control(ControlView__Fuse_Controls_TextControl* __this);
bool ControlView__Fuse_Controls_TextControl__get_ShowKeyboard(ControlView__Fuse_Controls_TextControl* __this);
void ControlView__Fuse_Controls_TextControl__OnGotFocus(ControlView__Fuse_Controls_TextControl* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_TextControl__OnLostFocus(ControlView__Fuse_Controls_TextControl* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_TextControl__OnNativeFocusChanged(ControlView__Fuse_Controls_TextControl* __this, ::uObject* s, bool hasFocus);
void ControlView__Fuse_Controls_TextControl__OnRooted(ControlView__Fuse_Controls_TextControl* __this);
void ControlView__Fuse_Controls_TextControl__OnUnrooted(ControlView__Fuse_Controls_TextControl* __this);
void ControlView__Fuse_Controls_TextControl__ScheduleFocusLoss(ControlView__Fuse_Controls_TextControl* __this);

struct ControlView__Fuse_Controls_TextControl : ::app::Fuse::Android::View
{
    ::uStrong< ::app::Fuse::Controls::TextControl*> _control;
    ::uStrong< ::app::Android::android::view::View*> _view;

    void _ObjInit_2() { ControlView__Fuse_Controls_TextControl___ObjInit_2(this); }
    void Attach() { (((ControlView__Fuse_Controls_TextControl__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlView__Fuse_Controls_TextControl__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::TextControl* FindControl() { return ControlView__Fuse_Controls_TextControl__FindControl(this); }
    ::app::Fuse::Controls::TextControl* Control() { return ControlView__Fuse_Controls_TextControl__get_Control(this); }
    bool ShowKeyboard() { return ControlView__Fuse_Controls_TextControl__get_ShowKeyboard(this); }
    void OnGotFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_TextControl__OnGotFocus(this, s, a); }
    void OnLostFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_TextControl__OnLostFocus(this, s, a); }
    void OnNativeFocusChanged(::uObject* s, bool hasFocus) { ControlView__Fuse_Controls_TextControl__OnNativeFocusChanged(this, s, hasFocus); }
    void ScheduleFocusLoss() { ControlView__Fuse_Controls_TextControl__ScheduleFocusLoss(this); }
};

}}}


#endif
