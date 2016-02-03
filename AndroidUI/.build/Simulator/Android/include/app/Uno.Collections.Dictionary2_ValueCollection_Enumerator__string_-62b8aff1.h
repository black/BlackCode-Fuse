// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__62B8AFF1_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__62B8AFF1_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Uno_Action_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_;

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___typeof();

void Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action____ObjInit(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Dispose(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___MoveNext(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this);
Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_ Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*> _source;
    ::uStrong< ::app::Uno::Collections::List__Uno_Action*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_* source) { Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action____ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Uno_Action___MoveNext(this); }
};

}}}


#endif
