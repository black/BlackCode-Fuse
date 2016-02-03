// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEXT_TEXT_PAINT_H__
#define __APP_ANDROID_ANDROID_TEXT_TEXT_PAINT_H__

#include <app/Android.android.graphics.Paint.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace text {

struct TextPaint;

extern jclass TextPaint___javaClass_3;
extern jmethodID TextPaint__TextPaint_20090_ID_c;

struct TextPaint__uType : ::app::Android::android::graphics::Paint__uType
{
};

TextPaint__uType* TextPaint__typeof();

void TextPaint___Init_3(::uStatic* __this);
void TextPaint___ObjInit_8(TextPaint* __this);
TextPaint* TextPaint__New_9(::uStatic* __this);

struct TextPaint : ::app::Android::android::graphics::Paint
{
    void _ObjInit_8() { TextPaint___ObjInit_8(this); }
};

}}}}


#endif
