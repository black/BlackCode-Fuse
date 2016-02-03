// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__OUTRACKS__91634632_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__OUTRACKS__91634632_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName;

struct Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof();

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName___ObjInit(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* source);
void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Dispose(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Current(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this);
bool Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__MoveNext(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this);
Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* source);
void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this);

struct Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName*> _source;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* source) { Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__Dispose(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Current() { return Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__MoveNext(this); }
};

}}}


#endif
