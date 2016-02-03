// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Paint;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct PaintDLRStyle;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Typeface;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public extern class Paint :7455
// {
::g::Android::java::lang::Object_type* Paint_typeof();
void Paint__ctor_6_fn(Paint* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Paint___Init2_fn();
void Paint__getTextBounds_fn(Paint* __this, ::g::Android::java::lang::String* arg0, int* arg1, int* arg2, ::g::Android::android::graphics::Rect* arg3);
void Paint__getTextBounds_IMPL_6975_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, uObject* arg5_);
void Paint__setAntiAlias_fn(Paint* __this, bool* arg0);
void Paint__setAntiAlias_IMPL_6898_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void Paint__setARGB_fn(Paint* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void Paint__setARGB_IMPL_6919_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void Paint__setColor_fn(Paint* __this, int* arg0);
void Paint__setColor_IMPL_6916_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void Paint__setStrokeWidth_fn(Paint* __this, float* arg0);
void Paint__setStrokeWidth_IMPL_6921_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void Paint__setStyle_fn(Paint* __this, ::g::Android::android::graphics::PaintDLRStyle* arg0);
void Paint__setStyle_IMPL_6914_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Paint__setTextSize_fn(Paint* __this, float* arg0);
void Paint__setTextSize_IMPL_6950_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void Paint__setTypeface_fn(Paint* __this, ::g::Android::android::graphics::Typeface* arg0, ::g::Android::android::graphics::Typeface** __retval);
void Paint__setTypeface_IMPL_6940_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct Paint : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getTextBounds_6975_ID_;
    static jmethodID& getTextBounds_6975_ID() { return getTextBounds_6975_ID_; }
    static jmethodID setAntiAlias_6898_ID_;
    static jmethodID& setAntiAlias_6898_ID() { return setAntiAlias_6898_ID_; }
    static jmethodID setARGB_6919_ID_;
    static jmethodID& setARGB_6919_ID() { return setARGB_6919_ID_; }
    static jmethodID setColor_6916_ID_;
    static jmethodID& setColor_6916_ID() { return setColor_6916_ID_; }
    static jmethodID setStrokeWidth_6921_ID_;
    static jmethodID& setStrokeWidth_6921_ID() { return setStrokeWidth_6921_ID_; }
    static jmethodID setStyle_6914_ID_;
    static jmethodID& setStyle_6914_ID() { return setStyle_6914_ID_; }
    static jmethodID setTextSize_6950_ID_;
    static jmethodID& setTextSize_6950_ID() { return setTextSize_6950_ID_; }
    static jmethodID setTypeface_6940_ID_;
    static jmethodID& setTypeface_6940_ID() { return setTypeface_6940_ID_; }

    void ctor_6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void getTextBounds(::g::Android::java::lang::String* arg0, int arg1, int arg2, ::g::Android::android::graphics::Rect* arg3);
    void setAntiAlias(bool arg0);
    void setARGB(int arg0, int arg1, int arg2, int arg3);
    void setColor(int arg0);
    void setStrokeWidth(float arg0);
    void setStyle(::g::Android::android::graphics::PaintDLRStyle* arg0);
    void setTextSize(float arg0);
    ::g::Android::android::graphics::Typeface* setTypeface(::g::Android::android::graphics::Typeface* arg0);
    static void _Init2();
    static void getTextBounds_IMPL_6975(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, uObject* arg5_);
    static void setAntiAlias_IMPL_6898(bool arg0_, jobject arg1_, bool arg2_);
    static void setARGB_IMPL_6919(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setColor_IMPL_6916(bool arg0_, jobject arg1_, int arg2_);
    static void setStrokeWidth_IMPL_6921(bool arg0_, jobject arg1_, float arg2_);
    static void setStyle_IMPL_6914(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setTextSize_IMPL_6950(bool arg0_, jobject arg1_, float arg2_);
    static uObject* setTypeface_IMPL_6940(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::graphics
