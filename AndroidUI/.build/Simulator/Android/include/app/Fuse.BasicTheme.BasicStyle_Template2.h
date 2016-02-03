// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE2_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE2_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Switch.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Animations_Change___float4_Value_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_Stroke_float_Width_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct Switch; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Template2;

struct BasicStyle_Template2__uType : ::app::Uno::UX::Template__Fuse_Controls_Switch__uType
{
};

BasicStyle_Template2__uType* BasicStyle_Template2__typeof();

void BasicStyle_Template2___ObjInit_1(BasicStyle_Template2* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
BasicStyle_Template2* BasicStyle_Template2__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle_Template2__OnApply(BasicStyle_Template2* __this, ::app::Fuse::Controls::Switch* self);

struct BasicStyle_Template2 : ::app::Uno::UX::Template__Fuse_Controls_Switch
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> _switchThumbColor_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property*> switchShadow_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> _switchStrokeColor_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_Stroke_float_Width_Property*> _switchThumbStroke_Width_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_Stroke_float_Width_Property*> _switchStroke_Width_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> temp_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property*> temp1_Value_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicStyle* parent) { BasicStyle_Template2___ObjInit_1(this, parent); }
};

}}}


#endif
