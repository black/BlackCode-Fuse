// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__OUTRACKS_SIMULATOR_BYTE_87907749_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__OUTRACKS_SIMULATOR_BYTE_87907749_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Outra-98dfff41.h>
#include <app/Uno.Collections.KeyValuePair__Outracks_Simulator_Bytecode_TypeN-4e1d4b4a.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type;

struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_TypeName_Uno_Type_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof();

void Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source);
void Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Dispose(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Current(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
bool Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__MoveNext(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source);
void Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);

struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*> _source;
    ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source) { Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type Current() { return Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type__MoveNext(this); }
};

}}}


#endif
