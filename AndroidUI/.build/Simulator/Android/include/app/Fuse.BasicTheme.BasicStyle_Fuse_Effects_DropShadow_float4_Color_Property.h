// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_EFFECTS_DROP_SHADOW_FLOAT4_COLOR_PROPERTY_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_EFFECTS_DROP_SHADOW_FLOAT4_COLOR_PROPERTY_H__

#include <app/Uno.UX.Property__float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Effects { struct DropShadow; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property;

struct BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType : ::app::Uno::UX::Property__float4__uType
{
};

BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType* BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__typeof();

void BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property___ObjInit_1(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* __this, ::app::Fuse::Effects::DropShadow* obj);
BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Effects::DropShadow* obj);
::app::Uno::Float4 BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__OnGet(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* __this);
void BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__OnSet(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* __this, ::app::Uno::Float4 v, ::uObject* origin);

struct BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property : ::app::Uno::UX::Property__float4
{
    ::uStrong< ::app::Fuse::Effects::DropShadow*> _obj;

    void _ObjInit_1(::app::Fuse::Effects::DropShadow* obj) { BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property___ObjInit_1(this, obj); }
};

}}}


#endif
