// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_INPUT_DISPATCH_TOUCH_LISTENER_H__
#define __APP_FUSE_ANDROID_INPUT_DISPATCH_TOUCH_LISTENER_H__

#include <app/Android.android.view.ViewDLROnTouchListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct InputDispatch_TouchListener;

extern jclass InputDispatch_TouchListener___javaClass_2;

struct InputDispatch_TouchListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnTouchListener __interface_2;
};

InputDispatch_TouchListener__uType* InputDispatch_TouchListener__typeof();

void InputDispatch_TouchListener___ObjInit_4(InputDispatch_TouchListener* __this);
InputDispatch_TouchListener* InputDispatch_TouchListener__New_5(::uStatic* __this);
bool InputDispatch_TouchListener__onTouch(InputDispatch_TouchListener* __this, ::app::Android::android::view::View* view, ::app::Android::android::view::MotionEvent* motionEvent);

struct InputDispatch_TouchListener : ::app::Android::java::lang::Object
{
    void _ObjInit_4() { InputDispatch_TouchListener___ObjInit_4(this); }
    bool onTouch(::app::Android::android::view::View* view, ::app::Android::android::view::MotionEvent* motionEvent) { return InputDispatch_TouchListener__onTouch(this, view, motionEvent); }
};

}}}


#endif
