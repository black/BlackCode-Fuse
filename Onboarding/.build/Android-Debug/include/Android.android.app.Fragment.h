// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace app{struct Fragment;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace app{

// public sealed extern class Fragment :3501
// {
::g::Android::java::lang::Object_type* Fragment_typeof();
void Fragment___Init2_fn();
void Fragment__hashCode1_fn(Fragment* __this, int* __retval);
void Fragment__hashCode_IMPL_1416_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Fragment__toString_fn(Fragment* __this, ::g::Android::java::lang::String** __retval);
void Fragment__toString_IMPL_1417_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Fragment : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID hashCode_1416_ID_;
    static jmethodID& hashCode_1416_ID() { return hashCode_1416_ID_; }
    static jmethodID toString_1417_ID_;
    static jmethodID& toString_1417_ID() { return toString_1417_ID_; }

    static void _Init2();
    static int hashCode_IMPL_1416(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_1417(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::app
