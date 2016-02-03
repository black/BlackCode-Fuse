// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_CACHE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_CACHE_H__

#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional__Outracks_Simulator_Protocol_Reify; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct BytecodeCache__uType : ::uClassType
{
};

BytecodeCache__uType* BytecodeCache__typeof();

::uString* BytecodeCache__get_CacheFileName(::uStatic* __this);
::uString* BytecodeCache__get_CachePath(::uStatic* __this);
::uString* BytecodeCache__get_FuseDataDirectory(::uStatic* __this);
::uUInt BytecodeCache__get_ProjectHash(::uStatic* __this);
::app::Outracks::Simulator::Protocol::Reify* BytecodeCache__Load(::uStatic* __this);
void BytecodeCache__Save(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* reify);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify BytecodeCache__TryLoad(::uStatic* __this);
void BytecodeCache__TrySave(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* reify);

}}}


#endif
