// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct ComponentName;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public sealed extern class ComponentName :10538
// {
::g::Android::java::lang::Object_type* ComponentName_typeof();
void ComponentName___Init2_fn();
void ComponentName__hashCode1_fn(ComponentName* __this, int* __retval);
void ComponentName__hashCode_IMPL_3882_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ComponentName__toString_fn(ComponentName* __this, ::g::Android::java::lang::String** __retval);
void ComponentName__toString_IMPL_3880_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct ComponentName : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID hashCode_3882_ID_;
    static jmethodID& hashCode_3882_ID() { return hashCode_3882_ID_; }
    static jmethodID toString_3880_ID_;
    static jmethodID& toString_3880_ID() { return toString_3880_ID_; }

    static void _Init2();
    static int hashCode_IMPL_3882(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3880(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::content
