// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.graphics.Paint.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace text{struct TextPaint;}}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public sealed extern class TextPaint :3592
// {
::g::Android::java::lang::Object_type* TextPaint_typeof();
void TextPaint__ctor_8_fn(TextPaint* __this);
void TextPaint___Init3_fn();
void TextPaint__New9_fn(TextPaint** __retval);

struct TextPaint : ::g::Android::android::graphics::Paint
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID TextPaint_20090_ID_c_;
    static jmethodID& TextPaint_20090_ID_c() { return TextPaint_20090_ID_c_; }

    void ctor_8();
    static void _Init3();
    static TextPaint* New9();
};
// }

}}}} // ::g::Android::android::text
