// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_BUTTON_H__
#define __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_BUTTON_H__

#include <app/Fuse.Android.View.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Controls { struct Button; } } }

namespace app {
namespace Fuse {
namespace Android {

struct ControlView__Fuse_Controls_Button;

struct ControlView__Fuse_Controls_Button__uType : ::app::Fuse::Android::View__uType
{
    void(*__fp_Attach)(ControlView__Fuse_Controls_Button*);
    void(*__fp_Detach)(ControlView__Fuse_Controls_Button*);
};

ControlView__Fuse_Controls_Button__uType* ControlView__Fuse_Controls_Button__typeof();

void ControlView__Fuse_Controls_Button___ObjInit_2(ControlView__Fuse_Controls_Button* __this);
::app::Android::android::view::View* ControlView__Fuse_Controls_Button__Create(ControlView__Fuse_Controls_Button* __this);
::app::Fuse::Controls::Button* ControlView__Fuse_Controls_Button__FindControl(ControlView__Fuse_Controls_Button* __this);
::app::Fuse::Controls::Button* ControlView__Fuse_Controls_Button__get_Control(ControlView__Fuse_Controls_Button* __this);
bool ControlView__Fuse_Controls_Button__get_ShowKeyboard(ControlView__Fuse_Controls_Button* __this);
void ControlView__Fuse_Controls_Button__OnGotFocus(ControlView__Fuse_Controls_Button* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_Button__OnLostFocus(ControlView__Fuse_Controls_Button* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_Button__OnNativeFocusChanged(ControlView__Fuse_Controls_Button* __this, ::uObject* s, bool hasFocus);
void ControlView__Fuse_Controls_Button__OnRooted(ControlView__Fuse_Controls_Button* __this);
void ControlView__Fuse_Controls_Button__OnUnrooted(ControlView__Fuse_Controls_Button* __this);
void ControlView__Fuse_Controls_Button__ScheduleFocusLoss(ControlView__Fuse_Controls_Button* __this);

struct ControlView__Fuse_Controls_Button : ::app::Fuse::Android::View
{
    ::uStrong< ::app::Fuse::Controls::Button*> _control;
    ::uStrong< ::app::Android::android::view::View*> _view;

    void _ObjInit_2() { ControlView__Fuse_Controls_Button___ObjInit_2(this); }
    void Attach() { (((ControlView__Fuse_Controls_Button__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlView__Fuse_Controls_Button__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Button* FindControl() { return ControlView__Fuse_Controls_Button__FindControl(this); }
    ::app::Fuse::Controls::Button* Control() { return ControlView__Fuse_Controls_Button__get_Control(this); }
    bool ShowKeyboard() { return ControlView__Fuse_Controls_Button__get_ShowKeyboard(this); }
    void OnGotFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_Button__OnGotFocus(this, s, a); }
    void OnLostFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_Button__OnLostFocus(this, s, a); }
    void OnNativeFocusChanged(::uObject* s, bool hasFocus) { ControlView__Fuse_Controls_Button__OnNativeFocusChanged(this, s, hasFocus); }
    void ScheduleFocusLoss() { ControlView__Fuse_Controls_Button__ScheduleFocusLoss(this); }
};

}}}


#endif
