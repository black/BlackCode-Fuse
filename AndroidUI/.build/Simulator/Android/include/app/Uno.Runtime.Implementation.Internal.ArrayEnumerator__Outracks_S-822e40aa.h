// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_822E40AA_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_822E40AA_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Uno_Net_IP-51d80b77.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___;

struct ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof();

void ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
bool ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Reset(ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);

struct ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose(this); }
    ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* Current() { return ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext(this); }
    void Reset() { ArrayEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Reset(this); }
};

}}}}}


#endif
