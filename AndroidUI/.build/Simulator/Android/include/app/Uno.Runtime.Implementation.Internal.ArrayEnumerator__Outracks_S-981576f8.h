// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_981576F8_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_981576F8_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo;

struct ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__uType* ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof();

void ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Dispose(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this);
::app::Outracks::Simulator::Protocol::ExceptionInfo* ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__get_Current(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this);
bool ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__MoveNext(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this);
ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Reset(ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo* __this);

struct ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Dispose(this); }
    ::app::Outracks::Simulator::Protocol::ExceptionInfo* Current() { return ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__MoveNext(this); }
    void Reset() { ArrayEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__Reset(this); }
};

}}}}}


#endif
