// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_APPLICATION_H__
#define __APP_OUTRACKS_SIMULATOR_APPLICATION_H__

#include <app/Fuse.App.h>
#include <Uno.h>
namespace app { namespace Fuse { struct UnhandledExceptionArgs; } }
namespace app { namespace Outracks { namespace Simulator { struct State; } } }
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Application;

struct Application__uType : ::app::Fuse::App__uType
{
};

Application__uType* Application__typeof();

void Application___ObjInit_3(Application* __this, ::uArray* proxyEndpoints, ::uString* project);
::uObject* Application__get_Reflection(Application* __this);
Application* Application__New_1(::uStatic* __this, ::uArray* proxyEndpoints, ::uString* project);
void Application__OnUnhandledException_1(Application* __this, ::uObject* sender, ::app::Fuse::UnhandledExceptionArgs* args);
void Application__OnUpdate(Application* __this);
void Application__set_Reflection(Application* __this, ::uObject* value);
void Application__SetState(Application* __this, ::app::Outracks::Simulator::State* nextState);

struct Application : ::app::Fuse::App
{
    ::uStrong< ::app::Outracks::Simulator::State*> _state;

    void _ObjInit_3(::uArray* proxyEndpoints, ::uString* project) { Application___ObjInit_3(this, proxyEndpoints, project); }
    ::uObject* Reflection() { return Application__get_Reflection(this); }
    void OnUnhandledException_1(::uObject* sender, ::app::Fuse::UnhandledExceptionArgs* args) { Application__OnUnhandledException_1(this, sender, args); }
    void Reflection(::uObject* value) { Application__set_Reflection(this, value); }
    void SetState(::app::Outracks::Simulator::State* nextState) { Application__SetState(this, nextState); }
};

}}}


#endif
