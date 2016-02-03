// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_VIBRATOR_H__
#define __APP_ANDROID_ANDROID_OS_VIBRATOR_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace os {

struct Vibrator;

struct Vibrator__uType : ::app::Android::java::lang::Object__uType
{
    void(*__fp_vibrate)(Vibrator*, ::uLong);
};

Vibrator__uType* Vibrator__typeof();

struct Vibrator : ::app::Android::java::lang::Object
{
    void vibrate(::uLong arg0) { (((Vibrator__uType*)this->__obj_type)->__fp_vibrate)(this, arg0); }
};

}}}}


#endif
