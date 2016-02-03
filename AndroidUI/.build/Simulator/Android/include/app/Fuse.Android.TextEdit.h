// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TEXT_EDIT_H__
#define __APP_FUSE_ANDROID_TEXT_EDIT_H__

#include <app/Fuse.Android.TextViewBase__Fuse_Controls_TextInput.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace widget { struct TextView; } } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Android {

struct TextEdit;

struct TextEdit__uType : ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput__uType
{
    bool(*__fp_get_Plain)(TextEdit*);
};

TextEdit__uType* TextEdit__typeof();

void TextEdit___ObjInit_4(TextEdit* __this);
void TextEdit__Attach(TextEdit* __this);
::app::Android::android::widget::TextView* TextEdit__CreateTextView(TextEdit* __this);
bool TextEdit__get_Plain(TextEdit* __this);
bool TextEdit__get_ShowKeyboard(TextEdit* __this);
TextEdit* TextEdit__New_1(::uStatic* __this);
void TextEdit__OnTextChanged(TextEdit* __this, ::uObject* sender, ::uString* text);
void TextEdit__OnTextLayoutPropertyChanged(TextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextEdit__OnTextRenderPropertyChanged(TextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextEdit__SetCursorDrawableColor(TextEdit* __this, int color);

struct TextEdit : ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput
{
    ::uStrong< ::app::Android::android::widget::TextView*> _textView_1;
    int _prevLineCount;

    void _ObjInit_4() { TextEdit___ObjInit_4(this); }
    bool Plain() { return (((TextEdit__uType*)this->__obj_type)->__fp_get_Plain)(this); }
    void SetCursorDrawableColor(int color) { TextEdit__SetCursorDrawableColor(this, color); }
};

}}}


#endif
