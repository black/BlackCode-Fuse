// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__OUTRACKS_SIMULATOR_BYTE_BC968003_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__OUTRACKS_SIMULATOR_BYTE_BC968003_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Outra-bb82fad0.h>
#include <app/Uno.Collections.KeyValuePair__Outracks_Simulator_Bytecode_Varia-7ba73cc1.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_Variable__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object;

struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_Variable_object_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType* Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__typeof();

void Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object___ObjInit(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source);
void Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_Variable__object Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__get_Current(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
bool Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source);
void Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);

struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*> _source;
    ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_Variable__object _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source) { Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_Variable__object Current() { return Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext(this); }
};

}}}


#endif
