// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.os.Parcelable.h>
#include <Android.android.view.InputEvent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Parcel;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class MotionEvent :18451
// {
::g::Android::android::view::InputEvent_type* MotionEvent_typeof();
void MotionEvent___Init3_fn();
void MotionEvent__get_ACTION_POINTER_INDEX_MASK_fn(int* __retval);
void MotionEvent__get_ACTION_POINTER_INDEX_SHIFT_fn(int* __retval);
void MotionEvent__getAction_fn(MotionEvent* __this, int* __retval);
void MotionEvent__getAction_IMPL_22457_fn(bool* arg0_, jobject* arg1_, int* __retval);
void MotionEvent__getActionMasked_fn(MotionEvent* __this, int* __retval);
void MotionEvent__getActionMasked_IMPL_22458_fn(bool* arg0_, jobject* arg1_, int* __retval);
void MotionEvent__getEventTime_fn(MotionEvent* __this, int64_t* __retval);
void MotionEvent__getEventTime_IMPL_22462_fn(bool* arg0_, jobject* arg1_, int64_t* __retval);
void MotionEvent__getPointerCount_fn(MotionEvent* __this, int* __retval);
void MotionEvent__getPointerCount_IMPL_22473_fn(bool* arg0_, jobject* arg1_, int* __retval);
void MotionEvent__getPointerId_fn(MotionEvent* __this, int* arg0, int* __retval);
void MotionEvent__getPointerId_IMPL_22474_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval);
void MotionEvent__getX1_fn(MotionEvent* __this, int* arg0, float* __retval);
void MotionEvent__getX_IMPL_22477_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* __retval);
void MotionEvent__getY1_fn(MotionEvent* __this, int* arg0, float* __retval);
void MotionEvent__getY_IMPL_22478_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* __retval);
void MotionEvent__toString_fn(MotionEvent* __this, ::g::Android::java::lang::String** __retval);
void MotionEvent__toString_IMPL_22526_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void MotionEvent__writeToParcel_fn(MotionEvent* __this, ::g::Android::android::os::Parcel* arg0, int* arg1);
void MotionEvent__writeToParcel_IMPL_22530_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct MotionEvent : ::g::Android::android::view::InputEvent
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jfieldID ACTION_POINTER_INDEX_MASK_22376_ID_;
    static jfieldID& ACTION_POINTER_INDEX_MASK_22376_ID() { return ACTION_POINTER_INDEX_MASK_22376_ID_; }
    static jfieldID ACTION_POINTER_INDEX_SHIFT_22377_ID_;
    static jfieldID& ACTION_POINTER_INDEX_SHIFT_22377_ID() { return ACTION_POINTER_INDEX_SHIFT_22377_ID_; }
    static jmethodID getAction_22457_ID_;
    static jmethodID& getAction_22457_ID() { return getAction_22457_ID_; }
    static jmethodID getActionMasked_22458_ID_;
    static jmethodID& getActionMasked_22458_ID() { return getActionMasked_22458_ID_; }
    static jmethodID getEventTime_22462_ID_;
    static jmethodID& getEventTime_22462_ID() { return getEventTime_22462_ID_; }
    static jmethodID getPointerCount_22473_ID_;
    static jmethodID& getPointerCount_22473_ID() { return getPointerCount_22473_ID_; }
    static jmethodID getPointerId_22474_ID_;
    static jmethodID& getPointerId_22474_ID() { return getPointerId_22474_ID_; }
    static jmethodID getX_22477_ID_;
    static jmethodID& getX_22477_ID() { return getX_22477_ID_; }
    static jmethodID getY_22478_ID_;
    static jmethodID& getY_22478_ID() { return getY_22478_ID_; }
    static jmethodID toString_22526_ID_;
    static jmethodID& toString_22526_ID() { return toString_22526_ID_; }
    static jmethodID writeToParcel_22530_ID_;
    static jmethodID& writeToParcel_22530_ID() { return writeToParcel_22530_ID_; }

    int getAction();
    int getActionMasked();
    int64_t getEventTime();
    int getPointerCount();
    int getPointerId(int arg0);
    float getX1(int arg0);
    float getY1(int arg0);
    static void _Init3();
    static int getAction_IMPL_22457(bool arg0_, jobject arg1_);
    static int getActionMasked_IMPL_22458(bool arg0_, jobject arg1_);
    static int64_t getEventTime_IMPL_22462(bool arg0_, jobject arg1_);
    static int getPointerCount_IMPL_22473(bool arg0_, jobject arg1_);
    static int getPointerId_IMPL_22474(bool arg0_, jobject arg1_, int arg2_);
    static float getX_IMPL_22477(bool arg0_, jobject arg1_, int arg2_);
    static float getY_IMPL_22478(bool arg0_, jobject arg1_, int arg2_);
    static uObject* toString_IMPL_22526(bool arg0_, jobject arg1_);
    static void writeToParcel_IMPL_22530(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static int ACTION_POINTER_INDEX_MASK();
    static int ACTION_POINTER_INDEX_SHIFT();
};
// }

}}}} // ::g::Android::android::view
