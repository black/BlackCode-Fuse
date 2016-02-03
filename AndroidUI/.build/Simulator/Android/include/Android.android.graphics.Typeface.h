// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct AssetManager;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Typeface;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Typeface :12094
// {
::g::Android::java::lang::Object_type* Typeface_typeof();
void Typeface___Init2_fn();
void Typeface__createFromAsset_fn(::g::Android::android::content::res::AssetManager* arg0, ::g::Android::java::lang::String* arg1, Typeface** __retval);
void Typeface__createFromAsset_IMPL_7328_fn(uObject* arg0_, uObject* arg1_, uObject** __retval);
void Typeface__createFromFile1_fn(::g::Android::java::lang::String* arg0, Typeface** __retval);
void Typeface__createFromFile_IMPL_7330_fn(uObject* arg0_, uObject** __retval);
void Typeface__get_DEFAULT_fn(Typeface** __retval);
void Typeface__equals1_fn(Typeface* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Typeface__equals_IMPL_7332_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Typeface__hashCode1_fn(Typeface* __this, int* __retval);
void Typeface__hashCode_IMPL_7333_fn(bool* arg0_, jobject* arg1_, int* __retval);

struct Typeface : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID createFromAsset_7328_ID_;
    static jmethodID& createFromAsset_7328_ID() { return createFromAsset_7328_ID_; }
    static jmethodID createFromFile_7330_ID_;
    static jmethodID& createFromFile_7330_ID() { return createFromFile_7330_ID_; }
    static jfieldID DEFAULT_7312_ID_;
    static jfieldID& DEFAULT_7312_ID() { return DEFAULT_7312_ID_; }
    static jmethodID equals_7332_ID_;
    static jmethodID& equals_7332_ID() { return equals_7332_ID_; }
    static jmethodID hashCode_7333_ID_;
    static jmethodID& hashCode_7333_ID() { return hashCode_7333_ID_; }

    static void _Init2();
    static Typeface* createFromAsset(::g::Android::android::content::res::AssetManager* arg0, ::g::Android::java::lang::String* arg1);
    static uObject* createFromAsset_IMPL_7328(uObject* arg0_, uObject* arg1_);
    static Typeface* createFromFile1(::g::Android::java::lang::String* arg0);
    static uObject* createFromFile_IMPL_7330(uObject* arg0_);
    static bool equals_IMPL_7332(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_7333(bool arg0_, jobject arg1_);
    static Typeface* DEFAULT();
};
// }

}}}} // ::g::Android::android::graphics
