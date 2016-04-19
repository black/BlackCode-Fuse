// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Vibrator;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public abstract extern class Vibrator :1033
// {
struct Vibrator_type : ::g::Android::java::lang::Object_type
{
    void(*fp_vibrate1)(::g::Android::android::os::Vibrator*, int64_t*);
};

Vibrator_type* Vibrator_typeof();

struct Vibrator : ::g::Android::java::lang::Object
{
    void vibrate1(int64_t arg0) { (((Vibrator_type*)__type)->fp_vibrate1)(this, &arg0); }
};
// }

}}}} // ::g::Android::android::os
