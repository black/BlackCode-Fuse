// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FUSE_DRAWING_SOLID_COLOR_FLOAT4_COLOR_PROPERTY_H__
#define __APP___MAIN_VIEW_FUSE_DRAWING_SOLID_COLOR_FLOAT4_COLOR_PROPERTY_H__

#include <app/Uno.UX.Property__float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {

struct MainView_Fuse_Drawing_SolidColor_float4_Color_Property;

struct MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType : ::app::Uno::UX::Property__float4__uType
{
};

MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType* MainView_Fuse_Drawing_SolidColor_float4_Color_Property__typeof();

void MainView_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_1(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Fuse::Drawing::SolidColor* obj);
MainView_Fuse_Drawing_SolidColor_float4_Color_Property* MainView_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* obj);
::app::Uno::Float4 MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this);
void MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Uno::Float4 v, ::uObject* origin);

struct MainView_Fuse_Drawing_SolidColor_float4_Color_Property : ::app::Uno::UX::Property__float4
{
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _obj;

    void _ObjInit_1(::app::Fuse::Drawing::SolidColor* obj) { MainView_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_1(this, obj); }
};

}


#endif
