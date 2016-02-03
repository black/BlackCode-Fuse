// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_SERIALIZATION_H__
#define __APP_OUTRACKS_SIMULATOR_SERIALIZATION_H__

#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }

namespace app {
namespace Outracks {
namespace Simulator {

extern ::uStaticStrong< ::uDelegate*> Serialization__ReadString;

struct Serialization__uType : ::uClassType
{
};

Serialization__uType* Serialization__typeof();

::uString* Serialization___ReadString(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void Serialization___TypeInit(::uStatic* __this);

}}}


#endif
