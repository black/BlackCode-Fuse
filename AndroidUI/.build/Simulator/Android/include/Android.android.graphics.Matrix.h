// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Matrix;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct FloatArray;}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Matrix :6175
// {
::g::Android::java::lang::Object_type* Matrix_typeof();
void Matrix__ctor_4_fn(Matrix* __this);
void Matrix___Init2_fn();
void Matrix__equals1_fn(Matrix* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Matrix__equals_IMPL_6769_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Matrix__hashCode1_fn(Matrix* __this, int* __retval);
void Matrix__hashCode_IMPL_6770_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Matrix__New5_fn(Matrix** __retval);
void Matrix__setValues_fn(Matrix* __this, ::g::Android::Runtime::FloatArray* arg0);
void Matrix__setValues_IMPL_6811_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Matrix__toString_fn(Matrix* __this, ::g::Android::java::lang::String** __retval);
void Matrix__toString_IMPL_6812_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Matrix : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID equals_6769_ID_;
    static jmethodID& equals_6769_ID() { return equals_6769_ID_; }
    static jmethodID hashCode_6770_ID_;
    static jmethodID& hashCode_6770_ID() { return hashCode_6770_ID_; }
    static jmethodID Matrix_6764_ID_c_;
    static jmethodID& Matrix_6764_ID_c() { return Matrix_6764_ID_c_; }
    static jmethodID setValues_6811_ID_;
    static jmethodID& setValues_6811_ID() { return setValues_6811_ID_; }
    static jmethodID toString_6812_ID_;
    static jmethodID& toString_6812_ID() { return toString_6812_ID_; }

    void ctor_4();
    void setValues(::g::Android::Runtime::FloatArray* arg0);
    static void _Init2();
    static bool equals_IMPL_6769(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_6770(bool arg0_, jobject arg1_);
    static Matrix* New5();
    static void setValues_IMPL_6811(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* toString_IMPL_6812(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::graphics
