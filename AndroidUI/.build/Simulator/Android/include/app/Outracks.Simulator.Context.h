// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONTEXT_H__
#define __APP_OUTRACKS_SIMULATOR_CONTEXT_H__

#include <Uno.h>
namespace app { namespace Fuse { struct App; } }
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Outracks {
namespace Simulator {

extern ::uStaticStrong< ::app::Fuse::App*> Context___App;
extern ::uStaticStrong< ::uString*> Context___Project;
extern ::uStaticStrong< ::uArray*> Context___ProxyEndpoints;
extern ::uStaticStrong< ::uObject*> Context___Reflection;

struct Context__uType : ::uClassType
{
};

Context__uType* Context__typeof();

::app::Fuse::App* Context__get_App(::uStatic* __this);
::uString* Context__get_Project(::uStatic* __this);
::uArray* Context__get_ProxyEndpoints(::uStatic* __this);
::uObject* Context__get_Reflection(::uStatic* __this);
void Context__Initialize(::uStatic* __this, ::app::Fuse::App* app, ::uArray* proxyEndpoints, ::uString* project);
void Context__set_App(::uStatic* __this, ::app::Fuse::App* value);
void Context__set_Project(::uStatic* __this, ::uString* value);
void Context__set_ProxyEndpoints(::uStatic* __this, ::uArray* value);
void Context__set_Reflection(::uStatic* __this, ::uObject* value);

}}}


#endif
