// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnTouchListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{struct InputDispatch__TouchListener;}}}

namespace g{
namespace Fuse{
namespace Android{

// private sealed class InputDispatch.TouchListener :286
// {
struct InputDispatch__TouchListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnTouchListener interface2;
};

InputDispatch__TouchListener_type* InputDispatch__TouchListener_typeof();
void InputDispatch__TouchListener__ctor_4_fn(InputDispatch__TouchListener* __this);
void InputDispatch__TouchListener__New5_fn(InputDispatch__TouchListener** __retval);
void InputDispatch__TouchListener__onTouch_fn(InputDispatch__TouchListener* __this, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval);

struct InputDispatch__TouchListener : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }

    void ctor_4();
    bool onTouch(::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent);
    static InputDispatch__TouchListener* New5();
};
// }

}}} // ::g::Fuse::Android
