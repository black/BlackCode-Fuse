// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\drawable\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct PorterDuffDLRMode;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{
namespace drawable{

// public abstract extern class Drawable :62
// {
::g::Android::java::lang::Object_type* Drawable_typeof();
void Drawable__ctor_5_fn(Drawable* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Drawable___Init2_fn();
void Drawable__setColorFilter1_fn(Drawable* __this, int* arg0, ::g::Android::android::graphics::PorterDuffDLRMode* arg1);
void Drawable__setColorFilter_IMPL_6079_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);

struct Drawable : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID setColorFilter_6079_ID_;
    static jmethodID& setColorFilter_6079_ID() { return setColorFilter_6079_ID_; }

    void ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void setColorFilter1(int arg0, ::g::Android::android::graphics::PorterDuffDLRMode* arg1);
    static void _Init2();
    static void setColorFilter_IMPL_6079(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
};
// }

}}}}} // ::g::Android::android::graphics::drawable
