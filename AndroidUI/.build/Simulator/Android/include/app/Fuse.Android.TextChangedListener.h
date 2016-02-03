// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TEXT_CHANGED_LISTENER_H__
#define __APP_FUSE_ANDROID_TEXT_CHANGED_LISTENER_H__

#include <app/Android.android.text.TextWatcher.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct TextView; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct TextChangedListener;

extern jclass TextChangedListener___javaClass_2;

struct TextChangedListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::text::TextWatcher __interface_2;
};

TextChangedListener__uType* TextChangedListener__typeof();

void TextChangedListener___ObjInit_4(TextChangedListener* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler);
::uObject* TextChangedListener__AddHandler(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler);
void TextChangedListener__Android_android_text_TextWatcher_afterTextChanged(TextChangedListener* __this, ::uObject* arg0);
void TextChangedListener__Android_android_text_TextWatcher_beforeTextChanged(TextChangedListener* __this, ::uObject* cs, int start, int count, int after);
void TextChangedListener__Android_android_text_TextWatcher_onTextChanged(TextChangedListener* __this, ::uObject* cs, int start, int before, int arg3);
TextChangedListener* TextChangedListener__New_5(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler);
void TextChangedListener__Uno_IDisposable_Dispose_1(TextChangedListener* __this);

struct TextChangedListener : ::app::Android::java::lang::Object
{
    ::uStrong< ::uDelegate*> _handler;
    ::uStrong< ::app::Android::android::widget::TextView*> _textView;
    bool _isDisposed;

    void _ObjInit_4(::app::Android::android::widget::TextView* textView, ::uDelegate* handler) { TextChangedListener___ObjInit_4(this, textView, handler); }
};

}}}


#endif
