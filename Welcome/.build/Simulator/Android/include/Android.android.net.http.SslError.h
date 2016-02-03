// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\net\http\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace net{namespace http{struct SslError;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace net{
namespace http{

// public sealed extern class SslError :607
// {
::g::Android::java::lang::Object_type* SslError_typeof();
void SslError___Init2_fn();
void SslError__toString_fn(SslError* __this, ::g::Android::java::lang::String** __retval);
void SslError__toString_IMPL_10162_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct SslError : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_10162_ID_;
    static jmethodID& toString_10162_ID() { return toString_10162_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_10162(bool arg0_, jobject arg1_);
};
// }

}}}}} // ::g::Android::android::net::http
