// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_GROUP_D_L_R_ON_HIERARCHY_C_CDF1F397_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_GROUP_D_L_R_ON_HIERARCHY_C_CDF1F397_H__

#include <app/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewGroupDLROnHierarchyChangeListener;

extern jmethodID Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_23350_ID;
extern jmethodID Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_23351_ID;

struct Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewGroupDLROnHierarchyChangeListener __interface_2;
};

Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType* Android_android_view_ViewGroupDLROnHierarchyChangeListener__typeof();

void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded(Android_android_view_ViewGroupDLROnHierarchyChangeListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_IMPL_23350(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved(Android_android_view_ViewGroupDLROnHierarchyChangeListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_IMPL_23351(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);

struct Android_android_view_ViewGroupDLROnHierarchyChangeListener : ::app::Android::java::lang::Object
{
    void onChildViewAdded(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded(this, arg0, arg1); }
    void onChildViewRemoved(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved(this, arg0, arg1); }
};

}}}


#endif
