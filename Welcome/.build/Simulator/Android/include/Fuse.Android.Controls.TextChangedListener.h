// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.TextWatcher.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextChangedListener;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class TextChangedListener :1535
// {
struct TextChangedListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::text::TextWatcher interface2;
};

TextChangedListener_type* TextChangedListener_typeof();
void TextChangedListener__ctor_4_fn(TextChangedListener* __this, ::g::Android::android::widget::TextView* textView, uDelegate* handler);
void TextChangedListener__AddHandler_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, uObject** __retval);
void TextChangedListener__Android_android_text_TextWatcher_afterTextChanged_fn(TextChangedListener* __this, uObject* arg0);
void TextChangedListener__Android_android_text_TextWatcher_beforeTextChanged_fn(TextChangedListener* __this, uObject* cs, int* start, int* count, int* after);
void TextChangedListener__Android_android_text_TextWatcher_onTextChanged_fn(TextChangedListener* __this, uObject* cs, int* start, int* before, int* arg3);
void TextChangedListener__New5_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, TextChangedListener** __retval);
void TextChangedListener__Uno_IDisposable_Dispose1_fn(TextChangedListener* __this);

struct TextChangedListener : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    bool _isDisposed;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::widget::TextView*> _textView;

    void ctor_4(::g::Android::android::widget::TextView* textView, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::widget::TextView* textView, uDelegate* handler);
    static TextChangedListener* New5(::g::Android::android::widget::TextView* textView, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Android::Controls
