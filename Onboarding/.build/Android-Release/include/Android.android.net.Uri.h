// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\net\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace net{struct Uri;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace net{

// public abstract extern class Uri :11
// {
::g::Android::java::lang::Object_type* Uri_typeof();
void Uri___Init2_fn();
void Uri__hashCode1_fn(Uri* __this, int* __retval);
void Uri__hashCode_IMPL_10992_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Uri__parse_fn(::g::Android::java::lang::String* arg0, Uri** __retval);
void Uri__parse_IMPL_10996_fn(uObject* arg0_, uObject** __retval);

struct Uri : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID hashCode_10992_ID_;
    static jmethodID& hashCode_10992_ID() { return hashCode_10992_ID_; }
    static jmethodID parse_10996_ID_;
    static jmethodID& parse_10996_ID() { return parse_10996_ID_; }

    static void _Init2();
    static int hashCode_IMPL_10992(bool arg0_, jobject arg1_);
    static Uri* parse(::g::Android::java::lang::String* arg0);
    static uObject* parse_IMPL_10996(uObject* arg0_);
};
// }

}}}} // ::g::Android::android::net
