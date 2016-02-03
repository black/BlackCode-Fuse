// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_7638E4A9_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_7638E4A9_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Uno_Net_IP-6362cf5f.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___;

struct ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ __interface_0;
};

ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof();

void ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::uArray* source);
::uObject* ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator(ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator(this); }
};

}}}}}


#endif
