// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BATCHING_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BATCHING_ENTRY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Entry; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Batching_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Batching_Entry;

struct List1_Enumerator__Fuse_Drawing_Batching_Entry__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Entry __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Batching_Entry__uType* List1_Enumerator__Fuse_Drawing_Batching_Entry__typeof();

void List1_Enumerator__Fuse_Drawing_Batching_Entry___ObjInit(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry* source);
void List1_Enumerator__Fuse_Drawing_Batching_Entry__Dispose(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this);
::app::Fuse::Drawing::Batching::Entry* List1_Enumerator__Fuse_Drawing_Batching_Entry__get_Current(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this);
bool List1_Enumerator__Fuse_Drawing_Batching_Entry__MoveNext(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this);
List1_Enumerator__Fuse_Drawing_Batching_Entry List1_Enumerator__Fuse_Drawing_Batching_Entry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry* source);
void List1_Enumerator__Fuse_Drawing_Batching_Entry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Batching_Entry* __this);

struct List1_Enumerator__Fuse_Drawing_Batching_Entry
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Batching::Entry*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry* source) { List1_Enumerator__Fuse_Drawing_Batching_Entry___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Drawing_Batching_Entry__Dispose(this); }
    ::app::Fuse::Drawing::Batching::Entry* Current() { return List1_Enumerator__Fuse_Drawing_Batching_Entry__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Batching_Entry__MoveNext(this); }
};

}}}


#endif
