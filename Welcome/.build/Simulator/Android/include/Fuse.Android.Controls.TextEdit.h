// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.TextViewBase-1.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct EditorActionArgs;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextEdit;}}}}
namespace g{namespace Fuse{namespace Android{struct TextControlLayout;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public extern class TextEdit :1598
// {
struct TextEdit_type : ::g::Fuse::Android::Controls::TextViewBase_type
{
    void(*fp_get_Plain)(::g::Fuse::Android::Controls::TextEdit*, bool*);
};

TextEdit_type* TextEdit_typeof();
void TextEdit__ctor_4_fn(TextEdit* __this);
void TextEdit__Attach_fn(TextEdit* __this);
void TextEdit__CreateTextView_fn(TextEdit* __this, ::g::Android::android::widget::TextView** __retval);
void TextEdit__Detach_fn(TextEdit* __this);
void TextEdit__GetMarginSize_fn(TextEdit* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void TextEdit__New1_fn(TextEdit** __retval);
void TextEdit__OnEditorAction_fn(TextEdit* __this, uObject* sender, ::g::Fuse::Android::Controls::EditorActionArgs* args, bool* __retval);
void TextEdit__OnTextLayoutPropertyChanged_fn(TextEdit* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextEdit__OnTextRenderPropertyChanged_fn(TextEdit* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextEdit__get_Plain_fn(TextEdit* __this, bool* __retval);
void TextEdit__get_ReturnKeyType_fn(TextEdit* __this, int* __retval);
void TextEdit__SetCursorDrawableColor_fn(TextEdit* __this, int* color);
void TextEdit__get_ShowKeyboard_fn(TextEdit* __this, bool* __retval);

struct TextEdit : ::g::Fuse::Android::Controls::TextViewBase
{
    uStrong<uObject*> _editorActionEvent;
    uStrong< ::g::Fuse::Android::TextControlLayout*> _textLayout;
    uStrong< ::g::Android::android::widget::TextView*> _textView1;

    void ctor_4();
    bool OnEditorAction(uObject* sender, ::g::Fuse::Android::Controls::EditorActionArgs* args);
    bool Plain() { bool __retval; return (((TextEdit_type*)__type)->fp_get_Plain)(this, &__retval), __retval; }
    int ReturnKeyType();
    void SetCursorDrawableColor(int color);
    static TextEdit* New1();
    static bool Plain(TextEdit* __this) { bool __retval; return TextEdit__get_Plain_fn(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Android::Controls
