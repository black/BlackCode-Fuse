// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__STRING__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__STRING__BOOL_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__string__bool;

struct Dictionary2_KeyCollection_Enumerator__string__bool__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__string__bool__uType* Dictionary2_KeyCollection_Enumerator__string__bool__typeof();

void Dictionary2_KeyCollection_Enumerator__string__bool___ObjInit(Dictionary2_KeyCollection_Enumerator__string__bool* __this, ::app::Uno::Collections::Dictionary__string__bool* source);
void Dictionary2_KeyCollection_Enumerator__string__bool__Dispose(Dictionary2_KeyCollection_Enumerator__string__bool* __this);
::uString* Dictionary2_KeyCollection_Enumerator__string__bool__get_Current(Dictionary2_KeyCollection_Enumerator__string__bool* __this);
bool Dictionary2_KeyCollection_Enumerator__string__bool__MoveNext(Dictionary2_KeyCollection_Enumerator__string__bool* __this);
Dictionary2_KeyCollection_Enumerator__string__bool Dictionary2_KeyCollection_Enumerator__string__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__bool* source);
void Dictionary2_KeyCollection_Enumerator__string__bool__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__bool* __this);

struct Dictionary2_KeyCollection_Enumerator__string__bool
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__bool*> _source;
    ::uStrong< ::uString*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__bool* source) { Dictionary2_KeyCollection_Enumerator__string__bool___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__string__bool__Dispose(this); }
    ::uString* Current() { return Dictionary2_KeyCollection_Enumerator__string__bool__get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__string__bool__MoveNext(this); }
};

}}}


#endif
