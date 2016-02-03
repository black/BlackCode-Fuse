// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__UNO_TYPE__OBJECT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Uno_Type__object;

struct Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_KeyCollection_Enumerator__Uno_Type__object__uType* Dictionary2_KeyCollection_Enumerator__Uno_Type__object__typeof();

void Dictionary2_KeyCollection_Enumerator__Uno_Type__object___ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source);
void Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Dispose(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this);
bool Dictionary2_KeyCollection_Enumerator__Uno_Type__object__MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this);
Dictionary2_KeyCollection_Enumerator__Uno_Type__object Dictionary2_KeyCollection_Enumerator__Uno_Type__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source);
void Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_Type__object* __this);

struct Dictionary2_KeyCollection_Enumerator__Uno_Type__object
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> _source;
    ::uStrong< ::uType*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Type__object* source) { Dictionary2_KeyCollection_Enumerator__Uno_Type__object___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Uno_Type__object__Dispose(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Uno_Type__object__MoveNext(this); }
};

}}}


#endif
