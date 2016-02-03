// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__OUTRACK_5D86B9E4_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__OUTRACK_5D86B9E4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type;

struct Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof();

void Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source);
void Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Dispose(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
bool Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__MoveNext(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source);
void Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);

struct Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*> _source;
    ::uStrong< ::uType*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source) { Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__MoveNext(this); }
};

}}}


#endif
