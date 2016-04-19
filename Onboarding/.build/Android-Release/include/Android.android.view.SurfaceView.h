// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{struct SurfaceView;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class SurfaceView :21311
// {
::g::Android::android::view::View_type* SurfaceView_typeof();
void SurfaceView__ctor_8_fn(SurfaceView* __this, ::g::Android::android::content::Context* arg0);
void SurfaceView___Init3_fn();
void SurfaceView__getHolder_fn(SurfaceView* __this, uObject** __retval);
void SurfaceView__getHolder_IMPL_22630_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void SurfaceView__New9_fn(::g::Android::android::content::Context* arg0, SurfaceView** __retval);
void SurfaceView__setVisibility_fn(SurfaceView* __this, int* arg0);
void SurfaceView__setVisibility_IMPL_22633_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct SurfaceView : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID getHolder_22630_ID_;
    static jmethodID& getHolder_22630_ID() { return getHolder_22630_ID_; }
    static jmethodID setVisibility_22633_ID_;
    static jmethodID& setVisibility_22633_ID() { return setVisibility_22633_ID_; }
    static jmethodID SurfaceView_22627_ID_c_;
    static jmethodID& SurfaceView_22627_ID_c() { return SurfaceView_22627_ID_c_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    uObject* getHolder();
    static void _Init3();
    static uObject* getHolder_IMPL_22630(bool arg0_, jobject arg1_);
    static SurfaceView* New9(::g::Android::android::content::Context* arg0);
    static void setVisibility_IMPL_22633(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}}} // ::g::Android::android::view
