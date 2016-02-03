// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_KEY_EVENT_H__
#define __APP_ANDROID_ANDROID_VIEW_KEY_EVENT_H__

#include <app/Android.android.os.Parcelable.h>
#include <app/Android.android.view.InputEvent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace os { struct Parcel; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct KeyEvent;

extern jclass KeyEvent___javaClass_3;
extern jmethodID KeyEvent__toString_22231_ID;
extern jmethodID KeyEvent__writeToParcel_22234_ID;

struct KeyEvent__uType : ::app::Android::android::view::InputEvent__uType
{
};

KeyEvent__uType* KeyEvent__typeof();

void KeyEvent___Init_3(::uStatic* __this);
::app::Android::java::lang::String* KeyEvent__toString(KeyEvent* __this);
::uObject* KeyEvent__toString_IMPL_22231(::uStatic* __this, bool arg0_, jobject arg1_);
void KeyEvent__writeToParcel(KeyEvent* __this, ::app::Android::android::os::Parcel* arg0, int arg1);
void KeyEvent__writeToParcel_IMPL_22234(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct KeyEvent : ::app::Android::android::view::InputEvent
{
};

}}}}


#endif
