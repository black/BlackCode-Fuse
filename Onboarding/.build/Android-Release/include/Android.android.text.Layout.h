// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace text{struct Layout;}}}}
namespace g{namespace Android{namespace android{namespace text{struct TextPaint;}}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public abstract extern class Layout :56
// {
::g::Android::java::lang::Object_type* Layout_typeof();
void Layout__ctor_4_fn(Layout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Layout___Init2_fn();
void Layout__getDesiredWidth_fn(uObject* arg0, ::g::Android::android::text::TextPaint* arg1, float* __retval);
void Layout__getDesiredWidth_IMPL_19893_fn(uObject* arg0_, uObject* arg1_, float* __retval);
void Layout__getHeight_fn(Layout* __this, int* __retval);
void Layout__getHeight_IMPL_19902_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Layout__getLineBaseline_fn(Layout* __this, int* arg0, int* __retval);
void Layout__getLineBaseline_IMPL_19929_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval);
void Layout__getLineEnd_fn(Layout* __this, int* arg0, int* __retval);
void Layout__getLineEnd_IMPL_19926_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* __retval);
void Layout__getLineLeft_fn(Layout* __this, int* arg0, float* __retval);
void Layout__getLineLeft_IMPL_19919_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* __retval);
void Layout__getPaint_fn(Layout* __this, ::g::Android::android::text::TextPaint** __retval);
void Layout__getPaint_IMPL_19898_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Layout__getWidth_fn(Layout* __this, int* __retval);
void Layout__getWidth_IMPL_19899_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Layout__j_draw_fn(Layout* __this, ::g::Android::android::graphics::Canvas* arg0);
void Layout__j_draw_IMPL_19895_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Layout : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getDesiredWidth_19893_ID_;
    static jmethodID& getDesiredWidth_19893_ID() { return getDesiredWidth_19893_ID_; }
    static jmethodID getHeight_19902_ID_;
    static jmethodID& getHeight_19902_ID() { return getHeight_19902_ID_; }
    static jmethodID getLineBaseline_19929_ID_;
    static jmethodID& getLineBaseline_19929_ID() { return getLineBaseline_19929_ID_; }
    static jmethodID getLineEnd_19926_ID_;
    static jmethodID& getLineEnd_19926_ID() { return getLineEnd_19926_ID_; }
    static jmethodID getLineLeft_19919_ID_;
    static jmethodID& getLineLeft_19919_ID() { return getLineLeft_19919_ID_; }
    static jmethodID getPaint_19898_ID_;
    static jmethodID& getPaint_19898_ID() { return getPaint_19898_ID_; }
    static jmethodID getWidth_19899_ID_;
    static jmethodID& getWidth_19899_ID() { return getWidth_19899_ID_; }
    static jmethodID j_draw_19895_ID_;
    static jmethodID& j_draw_19895_ID() { return j_draw_19895_ID_; }

    void ctor_4(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    int getHeight();
    int getLineBaseline(int arg0);
    int getLineEnd(int arg0);
    float getLineLeft(int arg0);
    ::g::Android::android::text::TextPaint* getPaint();
    int getWidth();
    void j_draw(::g::Android::android::graphics::Canvas* arg0);
    static void _Init2();
    static float getDesiredWidth(uObject* arg0, ::g::Android::android::text::TextPaint* arg1);
    static float getDesiredWidth_IMPL_19893(uObject* arg0_, uObject* arg1_);
    static int getHeight_IMPL_19902(bool arg0_, jobject arg1_);
    static int getLineBaseline_IMPL_19929(bool arg0_, jobject arg1_, int arg2_);
    static int getLineEnd_IMPL_19926(bool arg0_, jobject arg1_, int arg2_);
    static float getLineLeft_IMPL_19919(bool arg0_, jobject arg1_, int arg2_);
    static uObject* getPaint_IMPL_19898(bool arg0_, jobject arg1_);
    static int getWidth_IMPL_19899(bool arg0_, jobject arg1_);
    static void j_draw_IMPL_19895(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::text
