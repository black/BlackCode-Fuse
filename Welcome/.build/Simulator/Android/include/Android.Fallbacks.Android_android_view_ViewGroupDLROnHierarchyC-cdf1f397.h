// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroupDLROnHierarchyChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewGroupDLROnHierarchyChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewGroupDLROnHierarchyChangeListener :20385
// {
struct Android_android_view_ViewGroupDLROnHierarchyChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewGroupDLROnHierarchyChangeListener interface2;
};

Android_android_view_ViewGroupDLROnHierarchyChangeListener_type* Android_android_view_ViewGroupDLROnHierarchyChangeListener_typeof();
void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_fn(Android_android_view_ViewGroupDLROnHierarchyChangeListener* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_IMPL_23350_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_fn(Android_android_view_ViewGroupDLROnHierarchyChangeListener* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_IMPL_23351_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);

struct Android_android_view_ViewGroupDLROnHierarchyChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onChildViewAdded_23350_ID_;
    static jmethodID& onChildViewAdded_23350_ID() { return onChildViewAdded_23350_ID_; }
    static jmethodID onChildViewRemoved_23351_ID_;
    static jmethodID& onChildViewRemoved_23351_ID() { return onChildViewRemoved_23351_ID_; }

    void onChildViewAdded(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
    void onChildViewRemoved(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
    static void onChildViewAdded_IMPL_23350(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onChildViewRemoved_IMPL_23351(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks
