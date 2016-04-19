// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct RectF;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class RectF :10868
// {
::g::Android::java::lang::Object_type* RectF_typeof();
void RectF___Init2_fn();
void RectF__hashCode1_fn(RectF* __this, int* __retval);
void RectF__hashCode_IMPL_7206_fn(bool* arg0_, jobject* arg1_, int* __retval);
void RectF__toString_fn(RectF* __this, ::g::Android::java::lang::String** __retval);
void RectF__toString_IMPL_7207_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct RectF : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID hashCode_7206_ID_;
    static jmethodID& hashCode_7206_ID() { return hashCode_7206_ID_; }
    static jmethodID toString_7207_ID_;
    static jmethodID& toString_7207_ID() { return toString_7207_ID_; }

    static void _Init2();
    static int hashCode_IMPL_7206(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_7207(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::graphics
