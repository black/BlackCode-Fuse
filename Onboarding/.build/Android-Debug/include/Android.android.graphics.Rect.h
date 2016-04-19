// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Rect :10375
// {
::g::Android::java::lang::Object_type* Rect_typeof();
void Rect__ctor_4_fn(Rect* __this);
void Rect___Init2_fn();
void Rect__get_bottom_fn(Rect* __this, int* __retval);
void Rect__set_bottom_fn(Rect* __this, int* value);
void Rect__hashCode1_fn(Rect* __this, int* __retval);
void Rect__hashCode_IMPL_7163_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Rect__get_left_fn(Rect* __this, int* __retval);
void Rect__set_left_fn(Rect* __this, int* value);
void Rect__New5_fn(Rect** __retval);
void Rect__get_right_fn(Rect* __this, int* __retval);
void Rect__set_right_fn(Rect* __this, int* value);
void Rect__get_top_fn(Rect* __this, int* __retval);
void Rect__set_top_fn(Rect* __this, int* value);
void Rect__toString_fn(Rect* __this, ::g::Android::java::lang::String** __retval);
void Rect__toString_IMPL_7164_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Rect : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID bottom_7157_ID_;
    static jfieldID& bottom_7157_ID() { return bottom_7157_ID_; }
    static jmethodID hashCode_7163_ID_;
    static jmethodID& hashCode_7163_ID() { return hashCode_7163_ID_; }
    static jfieldID left_7154_ID_;
    static jfieldID& left_7154_ID() { return left_7154_ID_; }
    static jmethodID Rect_7159_ID_c_;
    static jmethodID& Rect_7159_ID_c() { return Rect_7159_ID_c_; }
    static jfieldID right_7156_ID_;
    static jfieldID& right_7156_ID() { return right_7156_ID_; }
    static jfieldID top_7155_ID_;
    static jfieldID& top_7155_ID() { return top_7155_ID_; }
    static jmethodID toString_7164_ID_;
    static jmethodID& toString_7164_ID() { return toString_7164_ID_; }

    void ctor_4();
    int bottom();
    void bottom(int value);
    int left();
    void left(int value);
    int right();
    void right(int value);
    int top();
    void top(int value);
    static void _Init2();
    static int hashCode_IMPL_7163(bool arg0_, jobject arg1_);
    static Rect* New5();
    static uObject* toString_IMPL_7164(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::graphics
