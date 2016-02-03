// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_D_L_R_ON_CHE_91091C48_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_D_L_R_ON_CHE_91091C48_H__

#include <app/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener;

extern jmethodID Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID;

struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::widget::CompoundButtonDLROnCheckedChangeListener __interface_2;
};

Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType* Android_android_widget_CompoundButtonDLROnCheckedChangeListener__typeof();

void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged(Android_android_widget_CompoundButtonDLROnCheckedChangeListener* __this, ::app::Android::android::widget::CompoundButton* arg0, bool arg1);
void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_);

struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener : ::app::Android::java::lang::Object
{
    void onCheckedChanged(::app::Android::android::widget::CompoundButton* arg0, bool arg1) { Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged(this, arg0, arg1); }
};

}}}


#endif
