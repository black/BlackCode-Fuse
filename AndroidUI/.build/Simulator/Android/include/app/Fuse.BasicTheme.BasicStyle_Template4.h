// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE4_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE4_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Button.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Animations_Change___float4_Value_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Controls_Button_string_Text_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Controls_TextControl_string_Value_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Elements_Element_float_Opacity_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct Button; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Template4;

struct BasicStyle_Template4__uType : ::app::Uno::UX::Template__Fuse_Controls_Button__uType
{
};

BasicStyle_Template4__uType* BasicStyle_Template4__typeof();

void BasicStyle_Template4___ObjInit_1(BasicStyle_Template4* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
BasicStyle_Template4* BasicStyle_Template4__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle_Template4__OnApply(BasicStyle_Template4* __this, ::app::Fuse::Controls::Button* self);

struct BasicStyle_Template4 : ::app::Uno::UX::Template__Fuse_Controls_Button
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_TextControl_string_Value_Property*> temp_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_Button_string_Text_Property*> self_Text_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> _buttonBackground_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Opacity_Property*> self_Opacity_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property*> temp1_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> temp2_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> temp3_Value_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicStyle* parent) { BasicStyle_Template4___ObjInit_1(this, parent); }
};

}}}


#endif
