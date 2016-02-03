// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Resources;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class Resources :2825
// {
::g::Android::java::lang::Object_type* Resources_typeof();
void Resources___Init2_fn();
void Resources__getDrawable_fn(Resources* __this, int* arg0, ::g::Android::android::graphics::drawable::Drawable** __retval);
void Resources__getDrawable_IMPL_3664_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);

struct Resources : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getDrawable_3664_ID_;
    static jmethodID& getDrawable_3664_ID() { return getDrawable_3664_ID_; }

    ::g::Android::android::graphics::drawable::Drawable* getDrawable(int arg0);
    static void _Init2();
    static uObject* getDrawable_IMPL_3664(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}}}} // ::g::Android::android::content::res
