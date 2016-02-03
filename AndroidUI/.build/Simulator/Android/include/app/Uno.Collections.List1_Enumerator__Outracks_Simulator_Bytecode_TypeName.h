// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Outracks_Simulator_Bytecode_TypeName; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Outracks_Simulator_Bytecode_TypeName;

struct List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__uType* List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__typeof();

void List1_Enumerator__Outracks_Simulator_Bytecode_TypeName___ObjInit(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName* source);
void List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Dispose(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__get_Current(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this);
bool List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this);
List1_Enumerator__Outracks_Simulator_Bytecode_TypeName List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName* source);
void List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Outracks_Simulator_Bytecode_TypeName* __this);

struct List1_Enumerator__Outracks_Simulator_Bytecode_TypeName
{
    ::uStrong< ::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _current;

    void _ObjInit(::app::Uno::Collections::List__Outracks_Simulator_Bytecode_TypeName* source) { List1_Enumerator__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__Dispose(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Current() { return List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Outracks_Simulator_Bytecode_TypeName__MoveNext(this); }
};

}}}


#endif
