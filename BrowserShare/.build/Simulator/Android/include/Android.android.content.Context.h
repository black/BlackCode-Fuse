// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Resources;}}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public abstract extern class Context :11
// {
struct Context_type : ::g::Android::java::lang::Object_type
{
    void(*fp_getResources)(::g::Android::android::content::Context*, ::g::Android::android::content::res::Resources**);
    void(*fp_getSystemService)(::g::Android::android::content::Context*, ::g::Android::java::lang::String*, ::g::Android::java::lang::Object**);
};

Context_type* Context_typeof();
void Context__ctor_5_fn(Context* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Context___Init2_fn();
void Context__get_AUDIO_SERVICE_fn(::g::Android::java::lang::String** __retval);
void Context__get_INPUT_METHOD_SERVICE_fn(::g::Android::java::lang::String** __retval);
void Context__get_LOCATION_SERVICE_fn(::g::Android::java::lang::String** __retval);
void Context__get_VIBRATOR_SERVICE_fn(::g::Android::java::lang::String** __retval);

struct Context : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID AUDIO_SERVICE_4140_ID_;
    static jfieldID& AUDIO_SERVICE_4140_ID() { return AUDIO_SERVICE_4140_ID_; }
    static jfieldID INPUT_METHOD_SERVICE_4144_ID_;
    static jfieldID& INPUT_METHOD_SERVICE_4144_ID() { return INPUT_METHOD_SERVICE_4144_ID_; }
    static jfieldID LOCATION_SERVICE_4130_ID_;
    static jfieldID& LOCATION_SERVICE_4130_ID() { return LOCATION_SERVICE_4130_ID_; }
    static jfieldID VIBRATOR_SERVICE_4135_ID_;
    static jfieldID& VIBRATOR_SERVICE_4135_ID() { return VIBRATOR_SERVICE_4135_ID_; }

    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::content::res::Resources* getResources() { ::g::Android::android::content::res::Resources* __retval; return (((Context_type*)__type)->fp_getResources)(this, &__retval), __retval; }
    ::g::Android::java::lang::Object* getSystemService(::g::Android::java::lang::String* arg0) { ::g::Android::java::lang::Object* __retval; return (((Context_type*)__type)->fp_getSystemService)(this, arg0, &__retval), __retval; }
    static void _Init2();
    static ::g::Android::java::lang::String* AUDIO_SERVICE();
    static ::g::Android::java::lang::String* INPUT_METHOD_SERVICE();
    static ::g::Android::java::lang::String* LOCATION_SERVICE();
    static ::g::Android::java::lang::String* VIBRATOR_SERVICE();
};
// }

}}}} // ::g::Android::android::content
