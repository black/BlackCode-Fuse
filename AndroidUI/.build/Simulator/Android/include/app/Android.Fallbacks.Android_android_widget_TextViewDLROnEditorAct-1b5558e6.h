// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WIDGET_TEXT_VIEW_D_L_R_ON_EDITOR_ACT_1B5558E6_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_WIDGET_TEXT_VIEW_D_L_R_ON_EDITOR_ACT_1B5558E6_H__

#include <app/Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct TextView; } } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_widget_TextViewDLROnEditorActionListener;

extern jmethodID Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID;

struct Android_android_widget_TextViewDLROnEditorActionListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::widget::TextViewDLROnEditorActionListener __interface_2;
};

Android_android_widget_TextViewDLROnEditorActionListener__uType* Android_android_widget_TextViewDLROnEditorActionListener__typeof();

bool Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction(Android_android_widget_TextViewDLROnEditorActionListener* __this, ::app::Android::android::widget::TextView* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2);
bool Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);

struct Android_android_widget_TextViewDLROnEditorActionListener : ::app::Android::java::lang::Object
{
    bool onEditorAction(::app::Android::android::widget::TextView* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2) { return Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction(this, arg0, arg1, arg2); }
};

}}}


#endif
