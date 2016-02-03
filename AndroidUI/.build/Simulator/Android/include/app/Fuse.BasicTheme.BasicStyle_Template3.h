// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE3_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE3_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Slider.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Elements_Element_float_Opacity_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Elements_Element_float_Width_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Translation_float_X_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct Slider; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Template3;

struct BasicStyle_Template3__uType : ::app::Uno::UX::Template__Fuse_Controls_Slider__uType
{
};

BasicStyle_Template3__uType* BasicStyle_Template3__typeof();

void BasicStyle_Template3___ObjInit_1(BasicStyle_Template3* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
BasicStyle_Template3* BasicStyle_Template3__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle_Template3__OnApply(BasicStyle_Template3* __this, ::app::Fuse::Controls::Slider* self);

struct BasicStyle_Template3 : ::app::Uno::UX::Template__Fuse_Controls_Slider
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> temp_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> temp1_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> temp2_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> temp3_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> temp4_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Width_Property*> _progressTrack_Width_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Translation_float_X_Property*> _sliderPos_X_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Opacity_Property*> _focusedThumbDot_Opacity_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Opacity_Property*> _focusedThumbRing_Opacity_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicStyle* parent) { BasicStyle_Template3___ObjInit_1(this, parent); }
};

}}}


#endif
