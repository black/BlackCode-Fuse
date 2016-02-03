// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.18.8\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Button.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Animations_Change_1_float4_Value_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Controls_Button_string_Text_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Controls_TextControl_string_Value_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Effects_DropShadow_float4_Color_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Elements_Element_float_Opacity_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template4;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template4 :531
// {
::g::Uno::UX::Template_type* BasicStyle__Template4_typeof();
void BasicStyle__Template4__ctor_1_fn(BasicStyle__Template4* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template4__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template4** __retval);
void BasicStyle__Template4__OnApply_fn(BasicStyle__Template4* __this, ::g::Fuse::Controls::Button* self);

struct BasicStyle__Template4 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property*> _buttonBackground_Color_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Elements_Element_float_Opacity_Property*> self_Opacity_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_Button_string_Text_Property*> self_Text_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_string_Value_Property*> temp_Value_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Effects_DropShadow_float4_Color_Property*> temp1_Color_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Animations_Change_1_float4_Value_Property*> temp2_Value_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Animations_Change_1_float4_Value_Property*> temp3_Value_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template4* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
