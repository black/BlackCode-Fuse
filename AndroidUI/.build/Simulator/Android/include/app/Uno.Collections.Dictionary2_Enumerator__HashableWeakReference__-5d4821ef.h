// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__HASHABLE_WEAK_REFERENCE___5D4821EF_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__HASHABLE_WEAK_REFERENCE___5D4821EF_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Hasha-f4e3b97a.h>
#include <app/Uno.Collections.KeyValuePair__HashableWeakReference__Outracks_S-355124a0.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName;

struct Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_HashableWeakReference_Outracks_Simulator_Bytecode_TypeName_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof();

void Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* source);
void Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Dispose(Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Uno::Collections::KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Current(Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
bool Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__MoveNext(Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* source);
void Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);

struct Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName
{
    ::uStrong< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*> _source;
    ::app::Uno::Collections::KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* source) { Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName Current() { return Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__MoveNext(this); }
};

}}}


#endif
