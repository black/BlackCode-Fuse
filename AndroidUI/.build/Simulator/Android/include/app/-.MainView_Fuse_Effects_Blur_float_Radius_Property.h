// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FUSE_EFFECTS_BLUR_FLOAT_RADIUS_PROPERTY_H__
#define __APP___MAIN_VIEW_FUSE_EFFECTS_BLUR_FLOAT_RADIUS_PROPERTY_H__

#include <app/Uno.UX.Property__float.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Blur; } } }

namespace app {

struct MainView_Fuse_Effects_Blur_float_Radius_Property;

struct MainView_Fuse_Effects_Blur_float_Radius_Property__uType : ::app::Uno::UX::Property__float__uType
{
};

MainView_Fuse_Effects_Blur_float_Radius_Property__uType* MainView_Fuse_Effects_Blur_float_Radius_Property__typeof();

void MainView_Fuse_Effects_Blur_float_Radius_Property___ObjInit_1(MainView_Fuse_Effects_Blur_float_Radius_Property* __this, ::app::Fuse::Effects::Blur* obj);
MainView_Fuse_Effects_Blur_float_Radius_Property* MainView_Fuse_Effects_Blur_float_Radius_Property__New_1(::uStatic* __this, ::app::Fuse::Effects::Blur* obj);
float MainView_Fuse_Effects_Blur_float_Radius_Property__OnGet(MainView_Fuse_Effects_Blur_float_Radius_Property* __this);
void MainView_Fuse_Effects_Blur_float_Radius_Property__OnSet(MainView_Fuse_Effects_Blur_float_Radius_Property* __this, float v, ::uObject* origin);

struct MainView_Fuse_Effects_Blur_float_Radius_Property : ::app::Uno::UX::Property__float
{
    ::uStrong< ::app::Fuse::Effects::Blur*> _obj;

    void _ObjInit_1(::app::Fuse::Effects::Blur* obj) { MainView_Fuse_Effects_Blur_float_Radius_Property___ObjInit_1(this, obj); }
};

}


#endif
