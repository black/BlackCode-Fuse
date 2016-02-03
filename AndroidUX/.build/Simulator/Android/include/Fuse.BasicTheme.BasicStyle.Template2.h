// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.18.8\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Switch.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Animations_Change_1_float4_Value_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Drawing_Stroke_float_Width_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Effects_DropShadow_float4_Color_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template2;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template2 :275
// {
::g::Uno::UX::Template_type* BasicStyle__Template2_typeof();
void BasicStyle__Template2__ctor_1_fn(BasicStyle__Template2* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template2__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template2** __retval);
void BasicStyle__Template2__OnApply_fn(BasicStyle__Template2* __this, ::g::Fuse::Controls::Switch* self);

struct BasicStyle__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_Stroke_float_Width_Property*> _switchStroke_Width_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property*> _switchStrokeColor_Color_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property*> _switchThumbColor_Color_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_Stroke_float_Width_Property*> _switchThumbStroke_Width_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Effects_DropShadow_float4_Color_Property*> switchShadow_Color_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Animations_Change_1_float4_Value_Property*> temp_Value_inst;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Animations_Change_1_float4_Value_Property*> temp1_Value_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template2* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
