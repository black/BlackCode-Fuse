// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_TOGGLE_CONTROL_H__
#define __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_TOGGLE_CONTROL_H__

#include <app/Fuse.Android.View.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Controls { struct ToggleControl; } } }

namespace app {
namespace Fuse {
namespace Android {

struct ControlView__Fuse_Controls_ToggleControl;

struct ControlView__Fuse_Controls_ToggleControl__uType : ::app::Fuse::Android::View__uType
{
    void(*__fp_Attach)(ControlView__Fuse_Controls_ToggleControl*);
    void(*__fp_Detach)(ControlView__Fuse_Controls_ToggleControl*);
};

ControlView__Fuse_Controls_ToggleControl__uType* ControlView__Fuse_Controls_ToggleControl__typeof();

void ControlView__Fuse_Controls_ToggleControl___ObjInit_2(ControlView__Fuse_Controls_ToggleControl* __this);
::app::Android::android::view::View* ControlView__Fuse_Controls_ToggleControl__Create(ControlView__Fuse_Controls_ToggleControl* __this);
::app::Fuse::Controls::ToggleControl* ControlView__Fuse_Controls_ToggleControl__FindControl(ControlView__Fuse_Controls_ToggleControl* __this);
::app::Fuse::Controls::ToggleControl* ControlView__Fuse_Controls_ToggleControl__get_Control(ControlView__Fuse_Controls_ToggleControl* __this);
bool ControlView__Fuse_Controls_ToggleControl__get_ShowKeyboard(ControlView__Fuse_Controls_ToggleControl* __this);
void ControlView__Fuse_Controls_ToggleControl__OnGotFocus(ControlView__Fuse_Controls_ToggleControl* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_ToggleControl__OnLostFocus(ControlView__Fuse_Controls_ToggleControl* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_ToggleControl__OnNativeFocusChanged(ControlView__Fuse_Controls_ToggleControl* __this, ::uObject* s, bool hasFocus);
void ControlView__Fuse_Controls_ToggleControl__OnRooted(ControlView__Fuse_Controls_ToggleControl* __this);
void ControlView__Fuse_Controls_ToggleControl__OnUnrooted(ControlView__Fuse_Controls_ToggleControl* __this);
void ControlView__Fuse_Controls_ToggleControl__ScheduleFocusLoss(ControlView__Fuse_Controls_ToggleControl* __this);

struct ControlView__Fuse_Controls_ToggleControl : ::app::Fuse::Android::View
{
    ::uStrong< ::app::Fuse::Controls::ToggleControl*> _control;
    ::uStrong< ::app::Android::android::view::View*> _view;

    void _ObjInit_2() { ControlView__Fuse_Controls_ToggleControl___ObjInit_2(this); }
    void Attach() { (((ControlView__Fuse_Controls_ToggleControl__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlView__Fuse_Controls_ToggleControl__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::ToggleControl* FindControl() { return ControlView__Fuse_Controls_ToggleControl__FindControl(this); }
    ::app::Fuse::Controls::ToggleControl* Control() { return ControlView__Fuse_Controls_ToggleControl__get_Control(this); }
    bool ShowKeyboard() { return ControlView__Fuse_Controls_ToggleControl__get_ShowKeyboard(this); }
    void OnGotFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_ToggleControl__OnGotFocus(this, s, a); }
    void OnLostFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_ToggleControl__OnLostFocus(this, s, a); }
    void OnNativeFocusChanged(::uObject* s, bool hasFocus) { ControlView__Fuse_Controls_ToggleControl__OnNativeFocusChanged(this, s, hasFocus); }
    void ScheduleFocusLoss() { ControlView__Fuse_Controls_ToggleControl__ScheduleFocusLoss(this); }
};

}}}


#endif
