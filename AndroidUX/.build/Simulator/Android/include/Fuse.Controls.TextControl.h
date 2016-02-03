// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class TextControl :3863
// {
struct TextControl_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Triggers::IValue interface8;
    void(*fp_OnValueChanged)(::g::Fuse::Controls::TextControl*, uString*, uObject*);
    void(*fp_get_RenderColor)(::g::Fuse::Controls::TextControl*, ::g::Uno::Float4*);
    void(*fp_get_RenderValue)(::g::Fuse::Controls::TextControl*, uString**);
};

TextControl_type* TextControl_typeof();
void TextControl__ctor_4_fn(TextControl* __this);
void TextControl__get_Font_fn(TextControl* __this, ::g::Fuse::Font** __retval);
void TextControl__set_Font_fn(TextControl* __this, ::g::Fuse::Font* value);
void TextControl__get_FontSize_fn(TextControl* __this, float* __retval);
void TextControl__set_FontSize_fn(TextControl* __this, float* value);
void TextControl__GetValue_fn(TextControl* t, uString** __retval);
void TextControl__get_LineSpacing_fn(TextControl* __this, float* __retval);
void TextControl__set_LineSpacing_fn(TextControl* __this, float* value);
void TextControl__OnTextLayoutPropertyChanged_fn(TextControl* __this);
void TextControl__OnTextLayoutPropertyChanged1_fn(TextControl* t);
void TextControl__OnTextRenderPropertyChanged_fn(TextControl* __this);
void TextControl__OnTextRenderPropertyChanged1_fn(TextControl* t);
void TextControl__OnValueChanged_fn(TextControl* __this, uString* newString, uObject* origin);
void TextControl__get_RenderColor_fn(TextControl* __this, ::g::Uno::Float4* __retval);
void TextControl__get_RenderValue_fn(TextControl* __this, uString** __retval);
void TextControl__SetValue_fn(TextControl* t, uString* value);
void TextControl__SetValue1_fn(TextControl* __this, uString* value, uObject* origin);
void TextControl__get_TextAlignment_fn(TextControl* __this, int* __retval);
void TextControl__set_TextAlignment_fn(TextControl* __this, int* value);
void TextControl__get_TextColor_fn(TextControl* __this, ::g::Uno::Float4* __retval);
void TextControl__set_TextColor_fn(TextControl* __this, ::g::Uno::Float4* value);
void TextControl__add_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__remove_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__add_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__remove_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__get_TextWrapping_fn(TextControl* __this, int* __retval);
void TextControl__set_TextWrapping_fn(TextControl* __this, int* value);
void TextControl__get_Value_fn(TextControl* __this, uString** __retval);
void TextControl__set_Value_fn(TextControl* __this, uString* value);
void TextControl__add_ValueChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__remove_ValueChanged_fn(TextControl* __this, uDelegate* value);

struct TextControl : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _value;
    static uSStrong< ::g::Fuse::StyleProperty1*> FontProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FontProperty() { return TextControl_typeof()->Init(), FontProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> FontSizeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FontSizeProperty() { return TextControl_typeof()->Init(), FontSizeProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> LineSpacingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& LineSpacingProperty() { return TextControl_typeof()->Init(), LineSpacingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TextAlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextAlignmentProperty() { return TextControl_typeof()->Init(), TextAlignmentProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TextColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextColorProperty() { return TextControl_typeof()->Init(), TextColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TextWrappingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextWrappingProperty() { return TextControl_typeof()->Init(), TextWrappingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ValueProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ValueProperty() { return TextControl_typeof()->Init(), ValueProperty_; }
    uStrong<uDelegate*> TextLayoutPropertyChanged1;
    uStrong<uDelegate*> TextRenderPropertyChanged1;
    uStrong<uDelegate*> ValueChanged1;

    void ctor_4();
    ::g::Fuse::Font* Font();
    void Font(::g::Fuse::Font* value);
    float FontSize();
    void FontSize(float value);
    float LineSpacing();
    void LineSpacing(float value);
    void OnTextLayoutPropertyChanged();
    void OnTextRenderPropertyChanged();
    void OnValueChanged(uString* newString, uObject* origin) { (((TextControl_type*)__type)->fp_OnValueChanged)(this, newString, origin); }
    ::g::Uno::Float4 RenderColor();
    uString* RenderValue() { uString* __retval; return (((TextControl_type*)__type)->fp_get_RenderValue)(this, &__retval), __retval; }
    void SetValue1(uString* value, uObject* origin);
    int TextAlignment();
    void TextAlignment(int value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    void add_TextLayoutPropertyChanged(uDelegate* value);
    void remove_TextLayoutPropertyChanged(uDelegate* value);
    void add_TextRenderPropertyChanged(uDelegate* value);
    void remove_TextRenderPropertyChanged(uDelegate* value);
    int TextWrapping();
    void TextWrapping(int value);
    uString* Value();
    void Value(uString* value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static uString* GetValue(TextControl* t);
    static void OnTextLayoutPropertyChanged1(TextControl* t);
    static void OnTextRenderPropertyChanged1(TextControl* t);
    static void OnValueChanged(TextControl* __this, uString* newString, uObject* origin) { TextControl__OnValueChanged_fn(__this, newString, origin); }
    static void SetValue(TextControl* t, uString* value);
    static ::g::Uno::Float4 RenderColor(TextControl* __this);
    static uString* RenderValue(TextControl* __this) { uString* __retval; return TextControl__get_RenderValue_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Controls

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::Float4 TextControl::RenderColor() { ::g::Uno::Float4 __retval; return (((TextControl_type*)__type)->fp_get_RenderColor)(this, &__retval), __retval; }
inline ::g::Uno::Float4 TextControl::RenderColor(TextControl* __this) { ::g::Uno::Float4 __retval; return TextControl__get_RenderColor_fn(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
