// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__OBJECT__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__OBJECT__STRING_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__object.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__object__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__object__string;

struct Dictionary2_KeyCollection_Enumerator__object__string__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__object __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__object__string__uType* Dictionary2_KeyCollection_Enumerator__object__string__typeof();

void Dictionary2_KeyCollection_Enumerator__object__string___ObjInit(Dictionary2_KeyCollection_Enumerator__object__string* __this, ::app::Uno::Collections::Dictionary__object__string* source);
void Dictionary2_KeyCollection_Enumerator__object__string__Dispose(Dictionary2_KeyCollection_Enumerator__object__string* __this);
::uObject* Dictionary2_KeyCollection_Enumerator__object__string__get_Current(Dictionary2_KeyCollection_Enumerator__object__string* __this);
bool Dictionary2_KeyCollection_Enumerator__object__string__MoveNext(Dictionary2_KeyCollection_Enumerator__object__string* __this);
Dictionary2_KeyCollection_Enumerator__object__string Dictionary2_KeyCollection_Enumerator__object__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__object__string* source);
void Dictionary2_KeyCollection_Enumerator__object__string__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__object__string* __this);

struct Dictionary2_KeyCollection_Enumerator__object__string
{
    ::uStrong< ::app::Uno::Collections::Dictionary__object__string*> _source;
    ::uStrong< ::uObject*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__object__string* source) { Dictionary2_KeyCollection_Enumerator__object__string___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__object__string__Dispose(this); }
    ::uObject* Current() { return Dictionary2_KeyCollection_Enumerator__object__string__get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__object__string__MoveNext(this); }
};

}}}


#endif
