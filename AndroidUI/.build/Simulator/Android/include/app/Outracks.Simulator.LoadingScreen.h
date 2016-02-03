// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_LOADING_SCREEN_H__
#define __APP_OUTRACKS_SIMULATOR_LOADING_SCREEN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct App; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct LoadingScreen;

struct LoadingScreen__uType : ::uClassType
{
};

LoadingScreen__uType* LoadingScreen__typeof();

void LoadingScreen___ObjInit(LoadingScreen* __this);
LoadingScreen* LoadingScreen__New_1(::uStatic* __this);
void LoadingScreen__Show(::uStatic* __this, ::app::Fuse::App* app, ::uString* header, ::uString* message);

struct LoadingScreen : ::uObject
{
    void _ObjInit() { LoadingScreen___ObjInit(this); }
};

}}}


#endif
