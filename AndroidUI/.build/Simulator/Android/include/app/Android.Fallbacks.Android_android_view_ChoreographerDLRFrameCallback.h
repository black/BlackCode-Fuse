// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_CHOREOGRAPHER_D_L_R_FRAME_CALLBACK_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_CHOREOGRAPHER_D_L_R_FRAME_CALLBACK_H__

#include <app/Android.android.view.ChoreographerDLRFrameCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ChoreographerDLRFrameCallback;

extern jmethodID Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID;

struct Android_android_view_ChoreographerDLRFrameCallback__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ChoreographerDLRFrameCallback __interface_2;
};

Android_android_view_ChoreographerDLRFrameCallback__uType* Android_android_view_ChoreographerDLRFrameCallback__typeof();

void Android_android_view_ChoreographerDLRFrameCallback__doFrame(Android_android_view_ChoreographerDLRFrameCallback* __this, ::uLong arg0);
void Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_);

struct Android_android_view_ChoreographerDLRFrameCallback : ::app::Android::java::lang::Object
{
    void doFrame(::uLong arg0) { Android_android_view_ChoreographerDLRFrameCallback__doFrame(this, arg0); }
};

}}}


#endif
