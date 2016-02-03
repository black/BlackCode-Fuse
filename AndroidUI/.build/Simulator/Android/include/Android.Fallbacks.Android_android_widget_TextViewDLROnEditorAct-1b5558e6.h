// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_widget_TextViewDLROnEditorActionListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_widget_TextViewDLROnEditorActionListener :24896
// {
struct Android_android_widget_TextViewDLROnEditorActionListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::widget::TextViewDLROnEditorActionListener interface2;
};

Android_android_widget_TextViewDLROnEditorActionListener_type* Android_android_widget_TextViewDLROnEditorActionListener_typeof();
void Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_fn(Android_android_widget_TextViewDLROnEditorActionListener* __this, ::g::Android::android::widget::TextView* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval);
void Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_, bool* __retval);

struct Android_android_widget_TextViewDLROnEditorActionListener : ::g::Android::java::lang::Object
{
    static jmethodID onEditorAction_26520_ID_;
    static jmethodID& onEditorAction_26520_ID() { return onEditorAction_26520_ID_; }

    bool onEditorAction(::g::Android::android::widget::TextView* arg0, int arg1, ::g::Android::android::view::KeyEvent* arg2);
    static bool onEditorAction_IMPL_26520(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
};
// }

}}} // ::g::Android::Fallbacks
