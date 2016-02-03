// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_B_2F12B8B8_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_B_2F12B8B8_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch;

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__typeof();

void EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* next);
EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this, ::app::Fuse::Drawing::Batching::Batch* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* next);

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Batching::Batch*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch*> Next;

    void _ObjInit(::app::Fuse::Drawing::Batching::Batch* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* next) { EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch___ObjInit(this, item, next); }
};

}}}


#endif
