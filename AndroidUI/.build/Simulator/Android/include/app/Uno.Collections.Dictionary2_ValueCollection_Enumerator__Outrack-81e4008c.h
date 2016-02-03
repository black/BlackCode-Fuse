// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__OUTRACK_81E4008C_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__OUTRACK_81E4008C_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__object.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_Variable__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object;

struct Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__object __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType* Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__typeof();

void Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object___ObjInit(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source);
void Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
::uObject* Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__get_Current(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
bool Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source);
void Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);

struct Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*> _source;
    ::uStrong< ::uObject*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source) { Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose(this); }
    ::uObject* Current() { return Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__get_Current(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext(this); }
};

}}}


#endif
