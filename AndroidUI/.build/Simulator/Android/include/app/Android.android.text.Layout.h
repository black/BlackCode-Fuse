// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_LAYOUT_H__
#define __APP_ANDROID_ANDROID_TEXT_LAYOUT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextPaint; } } } }

namespace app {
namespace Android {
namespace android {
namespace text {

struct Layout;

extern jclass Layout___javaClass_2;
extern jmethodID Layout__getDesiredWidth_19893_ID;
extern jmethodID Layout__getHeight_19902_ID;
extern jmethodID Layout__getLineBounds_19907_ID;
extern jmethodID Layout__getLineLeft_19919_ID;
extern jmethodID Layout__getLineRight_19920_ID;
extern jmethodID Layout__getWidth_19899_ID;
extern jmethodID Layout__j_draw_19895_ID;

struct Layout__uType : ::app::Android::java::lang::Object__uType
{
};

Layout__uType* Layout__typeof();

void Layout___Init_2(::uStatic* __this);
void Layout___ObjInit_5(Layout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
float Layout__getDesiredWidth_1(::uStatic* __this, ::uObject* arg0, ::app::Android::android::text::TextPaint* arg1);
float Layout__getDesiredWidth_IMPL_19893(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_);
int Layout__getHeight(Layout* __this);
int Layout__getHeight_IMPL_19902(::uStatic* __this, bool arg0_, jobject arg1_);
int Layout__getLineBounds(Layout* __this, int arg0, ::app::Android::android::graphics::Rect* arg1);
int Layout__getLineBounds_IMPL_19907(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
float Layout__getLineLeft(Layout* __this, int arg0);
float Layout__getLineLeft_IMPL_19919(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
float Layout__getLineRight(Layout* __this, int arg0);
float Layout__getLineRight_IMPL_19920(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
int Layout__getWidth(Layout* __this);
int Layout__getWidth_IMPL_19899(::uStatic* __this, bool arg0_, jobject arg1_);
void Layout__j_draw(Layout* __this, ::app::Android::android::graphics::Canvas* arg0);
void Layout__j_draw_IMPL_19895(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Layout : ::app::Android::java::lang::Object
{
    void _ObjInit_5(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Layout___ObjInit_5(this, obj, utype, hasFallbackClass, resolveType); }
    int getHeight() { return Layout__getHeight(this); }
    int getLineBounds(int arg0, ::app::Android::android::graphics::Rect* arg1) { return Layout__getLineBounds(this, arg0, arg1); }
    float getLineLeft(int arg0) { return Layout__getLineLeft(this, arg0); }
    float getLineRight(int arg0) { return Layout__getLineRight(this, arg0); }
    int getWidth() { return Layout__getWidth(this); }
    void j_draw(::app::Android::android::graphics::Canvas* arg0) { Layout__j_draw(this, arg0); }
};

}}}}


#endif
