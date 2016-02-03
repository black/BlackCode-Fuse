// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_widget_CompoundButtonDLROnCheckedChangeListener :23377
// {
struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener interface2;
};

Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type* Android_android_widget_CompoundButtonDLROnCheckedChangeListener_typeof();
void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_fn(Android_android_widget_CompoundButtonDLROnCheckedChangeListener* __this, ::g::Android::android::widget::CompoundButton* arg0, bool* arg1);
void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_);

struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onCheckedChanged_24924_ID_;
    static jmethodID& onCheckedChanged_24924_ID() { return onCheckedChanged_24924_ID_; }

    void onCheckedChanged(::g::Android::android::widget::CompoundButton* arg0, bool arg1);
    static void onCheckedChanged_IMPL_24924(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_);
};
// }

}}} // ::g::Android::Fallbacks
