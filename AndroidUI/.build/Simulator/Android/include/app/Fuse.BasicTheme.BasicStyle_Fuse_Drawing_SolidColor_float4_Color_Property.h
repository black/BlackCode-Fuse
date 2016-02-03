// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_DRAWING_SOLID_COLOR_FLOAT4_COLOR_PROPERTY_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_FUSE_DRAWING_SOLID_COLOR_FLOAT4_COLOR_PROPERTY_H__

#include <app/Uno.UX.Property__float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property;

struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType : ::app::Uno::UX::Property__float4__uType
{
};

BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType* BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__typeof();

void BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_1(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Fuse::Drawing::SolidColor* obj);
BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* obj);
::app::Uno::Float4 BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* __this);
void BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Uno::Float4 v, ::uObject* origin);

struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property : ::app::Uno::UX::Property__float4
{
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _obj;

    void _ObjInit_1(::app::Fuse::Drawing::SolidColor* obj) { BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_1(this, obj); }
};

}}}


#endif
