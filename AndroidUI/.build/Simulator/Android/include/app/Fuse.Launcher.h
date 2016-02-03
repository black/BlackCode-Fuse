// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAUNCHER_H__
#define __APP_FUSE_LAUNCHER_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct Uri; } } } }

namespace app {
namespace Fuse {

struct Launcher__uType : ::uClassType
{
};

Launcher__uType* Launcher__typeof();

void Launcher___launchMaps(::uStatic* __this, ::uString* uri);
void Launcher__LaunchCall(::uStatic* __this, ::uString* callString);
void Launcher__LaunchEmail(::uStatic* __this, ::uString* to, ::uString* carbonCopy, ::uString* blindCarbonCopy, ::uString* subject, ::uString* message);
void Launcher__LaunchMaps(::uStatic* __this, double latitude, double longitude);
void Launcher__LaunchMaps_1(::uStatic* __this, double latitude, double longitude, ::uString* query);
void Launcher__LaunchMaps_2(::uStatic* __this, ::uString* query);
void Launcher__LaunchUri(::uStatic* __this, ::app::Uno::Net::Http::Uri* uri);

}}


#endif
