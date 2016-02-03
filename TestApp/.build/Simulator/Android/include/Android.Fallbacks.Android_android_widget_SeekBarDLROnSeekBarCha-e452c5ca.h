// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.SeekBarDLROnSeekBarChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct SeekBar;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_widget_SeekBarDLROnSeekBarChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_widget_SeekBarDLROnSeekBarChangeListener :24492
// {
struct Android_android_widget_SeekBarDLROnSeekBarChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener interface2;
};

Android_android_widget_SeekBarDLROnSeekBarChangeListener_type* Android_android_widget_SeekBarDLROnSeekBarChangeListener_typeof();
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_fn(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::g::Android::android::widget::SeekBar* arg0, int* arg1, bool* arg2);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* arg4_);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_fn(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::g::Android::android::widget::SeekBar* arg0);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_fn(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::g::Android::android::widget::SeekBar* arg0);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_widget_SeekBarDLROnSeekBarChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onProgressChanged_26181_ID_;
    static jmethodID& onProgressChanged_26181_ID() { return onProgressChanged_26181_ID_; }
    static jmethodID onStartTrackingTouch_26182_ID_;
    static jmethodID& onStartTrackingTouch_26182_ID() { return onStartTrackingTouch_26182_ID_; }
    static jmethodID onStopTrackingTouch_26183_ID_;
    static jmethodID& onStopTrackingTouch_26183_ID() { return onStopTrackingTouch_26183_ID_; }

    void onProgressChanged(::g::Android::android::widget::SeekBar* arg0, int arg1, bool arg2);
    void onStartTrackingTouch(::g::Android::android::widget::SeekBar* arg0);
    void onStopTrackingTouch(::g::Android::android::widget::SeekBar* arg0);
    static void onProgressChanged_IMPL_26181(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, bool arg4_);
    static void onStartTrackingTouch_IMPL_26182(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onStopTrackingTouch_IMPL_26183(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
