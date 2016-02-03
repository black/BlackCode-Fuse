// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Build;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public sealed extern class Build :2651
// {
::g::Android::java::lang::Object_type* Build_typeof();
void Build___Init2_fn();
void Build__get_MODEL_fn(::g::Android::java::lang::String** __retval);
void Build__get_SERIAL_fn(::g::Android::java::lang::String** __retval);

struct Build : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID MODEL_13483_ID_;
    static jfieldID& MODEL_13483_ID() { return MODEL_13483_ID_; }
    static jfieldID SERIAL_13487_ID_;
    static jfieldID& SERIAL_13487_ID() { return SERIAL_13487_ID_; }

    static void _Init2();
    static ::g::Android::java::lang::String* MODEL();
    static ::g::Android::java::lang::String* SERIAL();
};
// }

}}}} // ::g::Android::android::os
