// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WIDGET_SEEK_BAR_D_L_R_ON_SEEK_BAR_CHA_E452C5CA_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WIDGET_SEEK_BAR_D_L_R_ON_SEEK_BAR_CHA_E452C5CA_H__

#include <app/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct SeekBar; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_widget_SeekBarDLROnSeekBarChangeListener;

extern jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID;
extern jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID;
extern jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID;

struct Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener __interface_2;
};

Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType* Android_android_widget_SeekBarDLROnSeekBarChangeListener__typeof();

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0, int arg1, bool arg2);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, bool arg4_);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0);
void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Android_android_widget_SeekBarDLROnSeekBarChangeListener : ::app::Android::java::lang::Object
{
    void onProgressChanged(::app::Android::android::widget::SeekBar* arg0, int arg1, bool arg2) { Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged(this, arg0, arg1, arg2); }
    void onStartTrackingTouch(::app::Android::android::widget::SeekBar* arg0) { Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch(this, arg0); }
    void onStopTrackingTouch(::app::Android::android::widget::SeekBar* arg0) { Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch(this, arg0); }
};

}}}


#endif
