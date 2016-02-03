// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__OUTRACKS__5F61F1AB_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__OUTRACKS__5F61F1AB_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_Variable__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object;

struct Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__uType* Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__typeof();

void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object___ObjInit(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source);
void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
bool Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);
Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source);
void Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object* __this);

struct Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*> _source;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Variable*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object* source) { Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__Dispose(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_Variable__object__MoveNext(this); }
};

}}}


#endif
