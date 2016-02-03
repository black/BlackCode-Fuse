// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE5_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE5_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextInput.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Animations_Change___float4_Value_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Elements_Element_float_Height_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Template5;

struct BasicStyle_Template5__uType : ::app::Uno::UX::Template__Fuse_Controls_TextInput__uType
{
};

BasicStyle_Template5__uType* BasicStyle_Template5__typeof();

void BasicStyle_Template5___ObjInit_1(BasicStyle_Template5* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
BasicStyle_Template5* BasicStyle_Template5__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle_Template5__OnApply(BasicStyle_Template5* __this, ::app::Fuse::Controls::TextInput* self);

struct BasicStyle_Template5 : ::app::Uno::UX::Template__Fuse_Controls_TextInput
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> _textInputDivider_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> _changeTextInputDividerFill1_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> _changeTextInputDividerFill2_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property*> self_TextColor_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Height_Property*> _dividerRect_Height_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> temp_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> temp1_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property*> temp2_IsActive_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property*> self_Focus_IsFocusable_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicStyle* parent) { BasicStyle_Template5___ObjInit_1(this, parent); }
};

}}}


#endif
