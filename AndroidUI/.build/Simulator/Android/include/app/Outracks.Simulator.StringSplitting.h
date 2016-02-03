// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_STRING_SPLITTING_H__
#define __APP_OUTRACKS_SIMULATOR_STRING_SPLITTING_H__

#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {

struct StringSplitting__uType : ::uClassType
{
};

StringSplitting__uType* StringSplitting__typeof();

::uString* StringSplitting__AfterFirst(::uStatic* __this, ::uString* s, ::uString* seperator);
::uString* StringSplitting__AfterLast(::uStatic* __this, ::uString* s, ::uString* seperator);
::uString* StringSplitting__BeforeFirst(::uStatic* __this, ::uString* s, ::uString* seperator);
::uString* StringSplitting__BeforeLast(::uStatic* __this, ::uString* s, ::uString* seperator);
::uString* StringSplitting__Join(::uStatic* __this, ::uObject* si, ::uString* separator);
::uString* StringSplitting__JoinToString__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uObject* objects, ::uString* separator);
::uString* StringSplitting__JoinToString__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uObject* objects, ::uString* separator);
int StringSplitting__OrdinalIndexOf(::uStatic* __this, ::uString* str, ::uString* seperator);
int StringSplitting__OrdinalLastIndexOf(::uStatic* __this, ::uString* str, ::uString* seperator);

}}}


#endif
