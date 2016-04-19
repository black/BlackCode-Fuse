// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct ProgressBar;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class ProgressBar :1868
// {
::g::Android::android::view::View_type* ProgressBar_typeof();
void ProgressBar__ctor_11_fn(ProgressBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ProgressBar___Init3_fn();
void ProgressBar__setProgress_fn(ProgressBar* __this, int* arg0);
void ProgressBar__setProgress_IMPL_25844_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ProgressBar__setVisibility_fn(ProgressBar* __this, int* arg0);
void ProgressBar__setVisibility_IMPL_25855_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct ProgressBar : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID setProgress_25844_ID_;
    static jmethodID& setProgress_25844_ID() { return setProgress_25844_ID_; }
    static jmethodID setVisibility_25855_ID_;
    static jmethodID& setVisibility_25855_ID() { return setVisibility_25855_ID_; }

    void ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void setProgress(int arg0);
    static void _Init3();
    static void setProgress_IMPL_25844(bool arg0_, jobject arg1_, int arg2_);
    static void setVisibility_IMPL_25855(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}}} // ::g::Android::android::widget
