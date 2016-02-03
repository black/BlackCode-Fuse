// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_MOTION_EVENT_H__
#define __APP_ANDROID_ANDROID_VIEW_MOTION_EVENT_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.android.view.InputEvent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct MotionEvent;

extern jclass MotionEvent___javaClass_3;
extern jfieldID MotionEvent__ACTION_POINTER_INDEX_MASK_22376_ID;
extern jfieldID MotionEvent__ACTION_POINTER_INDEX_SHIFT_22377_ID;
extern jmethodID MotionEvent__finalize_22445_ID;
extern jmethodID MotionEvent__getAction_22457_ID;
extern jmethodID MotionEvent__getActionMasked_22458_ID;
extern jmethodID MotionEvent__getEventTime_22462_ID;
extern jmethodID MotionEvent__getPointerCount_22473_ID;
extern jmethodID MotionEvent__getPointerId_22474_ID;
extern jmethodID MotionEvent__getX_22477_ID;
extern jmethodID MotionEvent__getY_22478_ID;
extern jmethodID MotionEvent__toString_22526_ID;
extern jmethodID MotionEvent__writeToParcel_22530_ID;

struct MotionEvent__uType : ::app::Android::android::view::InputEvent__uType
{
};

MotionEvent__uType* MotionEvent__typeof();

void MotionEvent___Init_3(::uStatic* __this);
void MotionEvent__finalize(MotionEvent* __this);
void MotionEvent__finalize_IMPL_22445(::uStatic* __this, bool arg0_, jobject arg1_);
int MotionEvent__get_ACTION_POINTER_INDEX_MASK(::uStatic* __this);
int MotionEvent__get_ACTION_POINTER_INDEX_SHIFT(::uStatic* __this);
int MotionEvent__getAction(MotionEvent* __this);
int MotionEvent__getAction_IMPL_22457(::uStatic* __this, bool arg0_, jobject arg1_);
int MotionEvent__getActionMasked(MotionEvent* __this);
int MotionEvent__getActionMasked_IMPL_22458(::uStatic* __this, bool arg0_, jobject arg1_);
::uLong MotionEvent__getEventTime(MotionEvent* __this);
::uLong MotionEvent__getEventTime_IMPL_22462(::uStatic* __this, bool arg0_, jobject arg1_);
int MotionEvent__getPointerCount(MotionEvent* __this);
int MotionEvent__getPointerCount_IMPL_22473(::uStatic* __this, bool arg0_, jobject arg1_);
int MotionEvent__getPointerId(MotionEvent* __this, int arg0);
int MotionEvent__getPointerId_IMPL_22474(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
float MotionEvent__getX_1(MotionEvent* __this, int arg0);
float MotionEvent__getX_IMPL_22477(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
float MotionEvent__getY_1(MotionEvent* __this, int arg0);
float MotionEvent__getY_IMPL_22478(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::app::Android::java::lang::String* MotionEvent__toString(MotionEvent* __this);
::uObject* MotionEvent__toString_IMPL_22526(::uStatic* __this, bool arg0_, jobject arg1_);
void MotionEvent__writeToParcel(MotionEvent* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void MotionEvent__writeToParcel_IMPL_22530(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct MotionEvent : ::app::Android::android::view::InputEvent
{
    int getAction() { return MotionEvent__getAction(this); }
    int getActionMasked() { return MotionEvent__getActionMasked(this); }
    ::uLong getEventTime() { return MotionEvent__getEventTime(this); }
    int getPointerCount() { return MotionEvent__getPointerCount(this); }
    int getPointerId(int arg0) { return MotionEvent__getPointerId(this, arg0); }
    float getX_1(int arg0) { return MotionEvent__getX_1(this, arg0); }
    float getY_1(int arg0) { return MotionEvent__getY_1(this, arg0); }
};

}}}}


#endif
