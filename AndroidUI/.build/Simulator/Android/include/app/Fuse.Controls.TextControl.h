// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_CONTROL_H__
#define __APP_FUSE_CONTROLS_TEXT_CONTROL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__float; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__float4; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__Fuse_Font; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__string; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Controls {

struct TextControl;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*> TextControl__FontProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*> TextControl__FontSizeProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*> TextControl__LineSpacingProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*> TextControl__TextAlignmentProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*> TextControl__TextColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*> TextControl__TextWrappingProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string*> TextControl__ValueProperty;

struct TextControl__uType : ::app::Fuse::Controls::Panel__uType
{
    ::uString*(*__fp_get_RenderValue)(TextControl*);
};

TextControl__uType* TextControl__typeof();

void TextControl___ObjInit_4(TextControl* __this);
void TextControl___TypeInit_4(::uStatic* __this);
void TextControl__add_TextLayoutPropertyChanged(TextControl* __this, ::uDelegate* value);
void TextControl__add_TextRenderPropertyChanged(TextControl* __this, ::uDelegate* value);
void TextControl__add_ValueChanged(TextControl* __this, ::uDelegate* value);
::app::Fuse::Font* TextControl__get_Font(TextControl* __this);
float TextControl__get_FontSize(TextControl* __this);
float TextControl__get_LineSpacing(TextControl* __this);
::uString* TextControl__get_RenderValue(TextControl* __this);
int TextControl__get_TextAlignment(TextControl* __this);
::app::Uno::Float4 TextControl__get_TextColor(TextControl* __this);
int TextControl__get_TextWrapping(TextControl* __this);
::uString* TextControl__get_Value(TextControl* __this);
::uString* TextControl__GetValue(::uStatic* __this, TextControl* t);
void TextControl__OnTextLayoutPropertyChanged(TextControl* __this);
void TextControl__OnTextLayoutPropertyChanged_1(::uStatic* __this, TextControl* t);
void TextControl__OnTextRenderPropertyChanged(TextControl* __this);
void TextControl__OnTextRenderPropertyChanged_1(::uStatic* __this, TextControl* t);
void TextControl__OnValueChanged(TextControl* __this, ::uString* newString, ::uObject* origin);
void TextControl__remove_TextLayoutPropertyChanged(TextControl* __this, ::uDelegate* value);
void TextControl__remove_TextRenderPropertyChanged(TextControl* __this, ::uDelegate* value);
void TextControl__remove_ValueChanged(TextControl* __this, ::uDelegate* value);
void TextControl__set_Font(TextControl* __this, ::app::Fuse::Font* value);
void TextControl__set_FontSize(TextControl* __this, float value);
void TextControl__set_LineSpacing(TextControl* __this, float value);
void TextControl__set_TextAlignment(TextControl* __this, int value);
void TextControl__set_TextColor(TextControl* __this, ::app::Uno::Float4 value);
void TextControl__set_TextWrapping(TextControl* __this, int value);
void TextControl__set_Value(TextControl* __this, ::uString* value);
void TextControl__SetValue(TextControl* __this, ::uString* value, ::uObject* origin);
void TextControl__SetValue_1(::uStatic* __this, TextControl* t, ::uString* value);

struct TextControl : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::uString*> _value;
    ::uStrong< ::uDelegate*> ValueChanged;
    ::uStrong< ::uDelegate*> TextLayoutPropertyChanged;
    ::uStrong< ::uDelegate*> TextRenderPropertyChanged;

    void _ObjInit_4() { TextControl___ObjInit_4(this); }
    void add_TextLayoutPropertyChanged(::uDelegate* value) { TextControl__add_TextLayoutPropertyChanged(this, value); }
    void add_TextRenderPropertyChanged(::uDelegate* value) { TextControl__add_TextRenderPropertyChanged(this, value); }
    void add_ValueChanged(::uDelegate* value) { TextControl__add_ValueChanged(this, value); }
    ::app::Fuse::Font* Font() { return TextControl__get_Font(this); }
    float FontSize() { return TextControl__get_FontSize(this); }
    float LineSpacing() { return TextControl__get_LineSpacing(this); }
    ::uString* RenderValue() { return (((TextControl__uType*)this->__obj_type)->__fp_get_RenderValue)(this); }
    int TextAlignment() { return TextControl__get_TextAlignment(this); }
    ::app::Uno::Float4 TextColor();
    int TextWrapping() { return TextControl__get_TextWrapping(this); }
    ::uString* Value() { return TextControl__get_Value(this); }
    void OnTextLayoutPropertyChanged() { TextControl__OnTextLayoutPropertyChanged(this); }
    void OnTextRenderPropertyChanged() { TextControl__OnTextRenderPropertyChanged(this); }
    void OnValueChanged(::uString* newString, ::uObject* origin) { TextControl__OnValueChanged(this, newString, origin); }
    void remove_TextLayoutPropertyChanged(::uDelegate* value) { TextControl__remove_TextLayoutPropertyChanged(this, value); }
    void remove_TextRenderPropertyChanged(::uDelegate* value) { TextControl__remove_TextRenderPropertyChanged(this, value); }
    void remove_ValueChanged(::uDelegate* value) { TextControl__remove_ValueChanged(this, value); }
    void Font(::app::Fuse::Font* value) { TextControl__set_Font(this, value); }
    void FontSize(float value) { TextControl__set_FontSize(this, value); }
    void LineSpacing(float value) { TextControl__set_LineSpacing(this, value); }
    void TextAlignment(int value) { TextControl__set_TextAlignment(this, value); }
    void TextColor(::app::Uno::Float4 value);
    void TextWrapping(int value) { TextControl__set_TextWrapping(this, value); }
    void Value(::uString* value) { TextControl__set_Value(this, value); }
    void SetValue(::uString* value, ::uObject* origin) { TextControl__SetValue(this, value, origin); }
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float4 TextControl::TextColor() { return TextControl__get_TextColor(this); }
inline void TextControl::TextColor(::app::Uno::Float4 value) { TextControl__set_TextColor(this, value); }

}}}


#endif
