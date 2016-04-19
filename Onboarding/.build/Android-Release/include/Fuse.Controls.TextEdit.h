// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class TextEdit :4042
// {
::g::Fuse::Controls::TextControl_type* TextEdit_typeof();
void TextEdit__get_ActionStyle_fn(TextEdit* __this, int* __retval);
void TextEdit__set_ActionStyle_fn(TextEdit* __this, int* value);
void TextEdit__add_ActionTriggered_fn(TextEdit* __this, uDelegate* value);
void TextEdit__remove_ActionTriggered_fn(TextEdit* __this, uDelegate* value);
void TextEdit__get_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval);
void TextEdit__set_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* value);
void TextEdit__get_InputHint_fn(TextEdit* __this, int* __retval);
void TextEdit__set_InputHint_fn(TextEdit* __this, int* value);
void TextEdit__get_IsMultiline_fn(TextEdit* __this, bool* __retval);
void TextEdit__set_IsMultiline_fn(TextEdit* __this, bool* value);
void TextEdit__get_IsPassword_fn(TextEdit* __this, bool* __retval);
void TextEdit__set_IsPassword_fn(TextEdit* __this, bool* value);
void TextEdit__get_IsReadOnly_fn(TextEdit* __this, bool* __retval);
void TextEdit__set_IsReadOnly_fn(TextEdit* __this, bool* value);
void TextEdit__OnAction_fn(TextEdit* __this, bool* __retval);
void TextEdit__OnTextInputActionStyleChanged_fn(TextEdit* input);
void TextEdit__OnValueChanged_fn(TextEdit* __this, uString* newString, uObject* origin);
void TextEdit__get_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval);
void TextEdit__set_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* value);
void TextEdit__get_PlaceholderText_fn(TextEdit* __this, uString** __retval);
void TextEdit__set_PlaceholderText_fn(TextEdit* __this, uString* value);
void TextEdit__get_RenderColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval);
void TextEdit__get_RenderValue_fn(TextEdit* __this, uString** __retval);
void TextEdit__get_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval);
void TextEdit__set_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* value);
void TextEdit__get_UsePlaceholder_fn(TextEdit* __this, bool* __retval);

struct TextEdit : ::g::Fuse::Controls::TextControl
{
    uStrong<uString*> _renderValue;
    static uSStrong< ::g::Fuse::StyleProperty1*> ActionStyleProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ActionStyleProperty() { return TextEdit_typeof()->Init(), ActionStyleProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> CaretColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& CaretColorProperty() { return TextEdit_typeof()->Init(), CaretColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> InputHintProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& InputHintProperty() { return TextEdit_typeof()->Init(), InputHintProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> IsMultilineProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& IsMultilineProperty() { return TextEdit_typeof()->Init(), IsMultilineProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> IsPasswordProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& IsPasswordProperty() { return TextEdit_typeof()->Init(), IsPasswordProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> IsReadOnlyProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& IsReadOnlyProperty() { return TextEdit_typeof()->Init(), IsReadOnlyProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> PlaceholderColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& PlaceholderColorProperty() { return TextEdit_typeof()->Init(), PlaceholderColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> PlaceholderTextProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& PlaceholderTextProperty() { return TextEdit_typeof()->Init(), PlaceholderTextProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> SelectionColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& SelectionColorProperty() { return TextEdit_typeof()->Init(), SelectionColorProperty_; }
    uStrong<uDelegate*> ActionTriggered1;

    int ActionStyle();
    void ActionStyle(int value);
    void add_ActionTriggered(uDelegate* value);
    void remove_ActionTriggered(uDelegate* value);
    ::g::Uno::Float4 CaretColor();
    void CaretColor(::g::Uno::Float4 value);
    int InputHint();
    void InputHint(int value);
    bool IsMultiline();
    void IsMultiline(bool value);
    bool IsPassword();
    void IsPassword(bool value);
    bool IsReadOnly();
    void IsReadOnly(bool value);
    bool OnAction();
    ::g::Uno::Float4 PlaceholderColor();
    void PlaceholderColor(::g::Uno::Float4 value);
    uString* PlaceholderText();
    void PlaceholderText(uString* value);
    ::g::Uno::Float4 SelectionColor();
    void SelectionColor(::g::Uno::Float4 value);
    bool UsePlaceholder();
    static void OnTextInputActionStyleChanged(TextEdit* input);
};
// }

}}} // ::g::Fuse::Controls
