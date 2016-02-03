// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_PAINT_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_PAINT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct PaintDLRStyle; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Paint;

extern jclass Paint___javaClass_2;
extern jmethodID Paint__finalize_6977_ID;
extern jmethodID Paint__setAntiAlias_6898_ID;
extern jmethodID Paint__setARGB_6919_ID;
extern jmethodID Paint__setColor_6916_ID;
extern jmethodID Paint__setStrokeWidth_6921_ID;
extern jmethodID Paint__setStyle_6914_ID;
extern jmethodID Paint__setTextSize_6950_ID;
extern jmethodID Paint__setTypeface_6940_ID;

struct Paint__uType : ::app::Android::java::lang::Object__uType
{
};

Paint__uType* Paint__typeof();

void Paint___Init_2(::uStatic* __this);
void Paint___ObjInit_7(Paint* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void Paint__finalize(Paint* __this);
void Paint__finalize_IMPL_6977(::uStatic* __this, bool arg0_, jobject arg1_);
void Paint__setAntiAlias(Paint* __this, bool arg0);
void Paint__setAntiAlias_IMPL_6898(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void Paint__setARGB(Paint* __this, int arg0, int arg1, int arg2, int arg3);
void Paint__setARGB_IMPL_6919(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void Paint__setColor(Paint* __this, int arg0);
void Paint__setColor_IMPL_6916(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Paint__setStrokeWidth(Paint* __this, float arg0);
void Paint__setStrokeWidth_IMPL_6921(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void Paint__setStyle(Paint* __this, ::app::Android::android::graphics::PaintDLRStyle* arg0);
void Paint__setStyle_IMPL_6914(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Paint__setTextSize(Paint* __this, float arg0);
void Paint__setTextSize_IMPL_6950(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
::app::Android::android::graphics::Typeface* Paint__setTypeface(Paint* __this, ::app::Android::android::graphics::Typeface* arg0);
::uObject* Paint__setTypeface_IMPL_6940(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Paint : ::app::Android::java::lang::Object
{
    void _ObjInit_7(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Paint___ObjInit_7(this, obj, utype, hasFallbackClass, resolveType); }
    void setAntiAlias(bool arg0) { Paint__setAntiAlias(this, arg0); }
    void setARGB(int arg0, int arg1, int arg2, int arg3) { Paint__setARGB(this, arg0, arg1, arg2, arg3); }
    void setColor(int arg0) { Paint__setColor(this, arg0); }
    void setStrokeWidth(float arg0) { Paint__setStrokeWidth(this, arg0); }
    void setStyle(::app::Android::android::graphics::PaintDLRStyle* arg0) { Paint__setStyle(this, arg0); }
    void setTextSize(float arg0) { Paint__setTextSize(this, arg0); }
    ::app::Android::android::graphics::Typeface* setTypeface(::app::Android::android::graphics::Typeface* arg0) { return Paint__setTypeface(this, arg0); }
};

}}}}


#endif
