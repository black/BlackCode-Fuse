// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_CIRCLE_H__
#define __APP_FUSE_ANDROID_CONTROL_VIEW__FUSE_CONTROLS_CIRCLE_H__

#include <app/Fuse.Android.View.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Controls { struct Circle; } } }

namespace app {
namespace Fuse {
namespace Android {

struct ControlView__Fuse_Controls_Circle;

struct ControlView__Fuse_Controls_Circle__uType : ::app::Fuse::Android::View__uType
{
    void(*__fp_Attach)(ControlView__Fuse_Controls_Circle*);
    void(*__fp_Detach)(ControlView__Fuse_Controls_Circle*);
};

ControlView__Fuse_Controls_Circle__uType* ControlView__Fuse_Controls_Circle__typeof();

void ControlView__Fuse_Controls_Circle___ObjInit_2(ControlView__Fuse_Controls_Circle* __this);
::app::Android::android::view::View* ControlView__Fuse_Controls_Circle__Create(ControlView__Fuse_Controls_Circle* __this);
::app::Fuse::Controls::Circle* ControlView__Fuse_Controls_Circle__FindControl(ControlView__Fuse_Controls_Circle* __this);
::app::Fuse::Controls::Circle* ControlView__Fuse_Controls_Circle__get_Control(ControlView__Fuse_Controls_Circle* __this);
bool ControlView__Fuse_Controls_Circle__get_ShowKeyboard(ControlView__Fuse_Controls_Circle* __this);
void ControlView__Fuse_Controls_Circle__OnGotFocus(ControlView__Fuse_Controls_Circle* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_Circle__OnLostFocus(ControlView__Fuse_Controls_Circle* __this, ::uObject* s, ::uObject* a);
void ControlView__Fuse_Controls_Circle__OnNativeFocusChanged(ControlView__Fuse_Controls_Circle* __this, ::uObject* s, bool hasFocus);
void ControlView__Fuse_Controls_Circle__OnRooted(ControlView__Fuse_Controls_Circle* __this);
void ControlView__Fuse_Controls_Circle__OnUnrooted(ControlView__Fuse_Controls_Circle* __this);
void ControlView__Fuse_Controls_Circle__ScheduleFocusLoss(ControlView__Fuse_Controls_Circle* __this);

struct ControlView__Fuse_Controls_Circle : ::app::Fuse::Android::View
{
    ::uStrong< ::app::Fuse::Controls::Circle*> _control;
    ::uStrong< ::app::Android::android::view::View*> _view;

    void _ObjInit_2() { ControlView__Fuse_Controls_Circle___ObjInit_2(this); }
    void Attach() { (((ControlView__Fuse_Controls_Circle__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlView__Fuse_Controls_Circle__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Circle* FindControl() { return ControlView__Fuse_Controls_Circle__FindControl(this); }
    ::app::Fuse::Controls::Circle* Control() { return ControlView__Fuse_Controls_Circle__get_Control(this); }
    bool ShowKeyboard() { return ControlView__Fuse_Controls_Circle__get_ShowKeyboard(this); }
    void OnGotFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_Circle__OnGotFocus(this, s, a); }
    void OnLostFocus(::uObject* s, ::uObject* a) { ControlView__Fuse_Controls_Circle__OnLostFocus(this, s, a); }
    void OnNativeFocusChanged(::uObject* s, bool hasFocus) { ControlView__Fuse_Controls_Circle__OnNativeFocusChanged(this, s, hasFocus); }
    void ScheduleFocusLoss() { ControlView__Fuse_Controls_Circle__ScheduleFocusLoss(this); }
};

}}}


#endif
