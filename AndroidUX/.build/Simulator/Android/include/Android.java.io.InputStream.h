// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace io{struct InputStream;}}}}

namespace g{
namespace Android{
namespace java{
namespace io{

// public abstract extern class InputStream :530
// {
::g::Android::java::lang::Object_type* InputStream_typeof();
void InputStream___Init2_fn();
void InputStream__close_fn(InputStream* __this);
void InputStream__close_IMPL_29700_fn(bool* arg0_, jobject* arg1_);

struct InputStream : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID close_29700_ID_;
    static jmethodID& close_29700_ID() { return close_29700_ID_; }

    void close();
    static void _Init2();
    static void close_IMPL_29700(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::io
