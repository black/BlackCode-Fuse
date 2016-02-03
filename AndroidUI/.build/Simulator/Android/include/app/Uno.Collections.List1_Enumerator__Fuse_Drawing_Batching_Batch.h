// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BATCHING_BATCH_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BATCHING_BATCH_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Batching_Batch; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Batching_Batch;

struct List1_Enumerator__Fuse_Drawing_Batching_Batch__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Batching_Batch__uType* List1_Enumerator__Fuse_Drawing_Batching_Batch__typeof();

void List1_Enumerator__Fuse_Drawing_Batching_Batch___ObjInit(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source);
void List1_Enumerator__Fuse_Drawing_Batching_Batch__Dispose(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this);
::app::Fuse::Drawing::Batching::Batch* List1_Enumerator__Fuse_Drawing_Batching_Batch__get_Current(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this);
bool List1_Enumerator__Fuse_Drawing_Batching_Batch__MoveNext(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this);
List1_Enumerator__Fuse_Drawing_Batching_Batch List1_Enumerator__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source);
void List1_Enumerator__Fuse_Drawing_Batching_Batch__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Batching_Batch* __this);

struct List1_Enumerator__Fuse_Drawing_Batching_Batch
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Batching::Batch*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* source) { List1_Enumerator__Fuse_Drawing_Batching_Batch___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Drawing_Batching_Batch__Dispose(this); }
    ::app::Fuse::Drawing::Batching::Batch* Current() { return List1_Enumerator__Fuse_Drawing_Batching_Batch__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Batching_Batch__MoveNext(this); }
};

}}}


#endif
