// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\reflect\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.reflect.AccessibleObject.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{namespace reflect{struct Field;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{
namespace reflect{

// public sealed extern class Field :510
// {
::g::Android::java::lang::Object_type* Field_typeof();
void Field___Init3_fn();
void Field__equals1_fn(Field* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Field__equals_IMPL_30310_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Field__get_fn(Field* __this, ::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::Object** __retval);
void Field__get_IMPL_30311_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Field__getInt_fn(Field* __this, ::g::Android::java::lang::Object* arg0, int* __retval);
void Field__getInt_IMPL_30318_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void Field__hashCode1_fn(Field* __this, int* __retval);
void Field__hashCode_IMPL_30324_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Field__set_fn(Field* __this, ::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::Object* arg1);
void Field__set_IMPL_30325_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void Field__toString_fn(Field* __this, ::g::Android::java::lang::String** __retval);
void Field__toString_IMPL_30334_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Field : ::g::Android::java::lang::reflect::AccessibleObject
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID equals_30310_ID_;
    static jmethodID& equals_30310_ID() { return equals_30310_ID_; }
    static jmethodID get_30311_ID_;
    static jmethodID& get_30311_ID() { return get_30311_ID_; }
    static jmethodID getInt_30318_ID_;
    static jmethodID& getInt_30318_ID() { return getInt_30318_ID_; }
    static jmethodID hashCode_30324_ID_;
    static jmethodID& hashCode_30324_ID() { return hashCode_30324_ID_; }
    static jmethodID set_30325_ID_;
    static jmethodID& set_30325_ID() { return set_30325_ID_; }
    static jmethodID toString_30334_ID_;
    static jmethodID& toString_30334_ID() { return toString_30334_ID_; }

    ::g::Android::java::lang::Object* get(::g::Android::java::lang::Object* arg0);
    int getInt(::g::Android::java::lang::Object* arg0);
    void set(::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::Object* arg1);
    static void _Init3();
    static bool equals_IMPL_30310(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* get_IMPL_30311(bool arg0_, jobject arg1_, uObject* arg2_);
    static int getInt_IMPL_30318(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_30324(bool arg0_, jobject arg1_);
    static void set_IMPL_30325(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* toString_IMPL_30334(bool arg0_, jobject arg1_);
};
// }

}}}}} // ::g::Android::java::lang::reflect
