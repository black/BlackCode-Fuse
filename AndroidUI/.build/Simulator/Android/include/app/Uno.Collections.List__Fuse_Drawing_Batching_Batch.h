// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BATCHING_BATCH_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BATCHING_BATCH_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Batching_Batch; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Batching_Batch;

struct List__Fuse_Drawing_Batching_Batch__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch __interface_0;
};

List__Fuse_Drawing_Batching_Batch__uType* List__Fuse_Drawing_Batching_Batch__typeof();

::uObject* List__Fuse_Drawing_Batching_Batch__GetEnumerator_boxed(List__Fuse_Drawing_Batching_Batch* __this);
void List__Fuse_Drawing_Batching_Batch___ObjInit(List__Fuse_Drawing_Batching_Batch* __this);
void List__Fuse_Drawing_Batching_Batch___ObjInit_1(List__Fuse_Drawing_Batching_Batch* __this, int capacity);
void List__Fuse_Drawing_Batching_Batch__Add(List__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item);
void List__Fuse_Drawing_Batching_Batch__AddRange(List__Fuse_Drawing_Batching_Batch* __this, ::uObject* items);
void List__Fuse_Drawing_Batching_Batch__BoundsCheck(List__Fuse_Drawing_Batching_Batch* __this, int index);
void List__Fuse_Drawing_Batching_Batch__Clear(List__Fuse_Drawing_Batching_Batch* __this);
bool List__Fuse_Drawing_Batching_Batch__Contains(List__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item);
void List__Fuse_Drawing_Batching_Batch__EnsureCapacity(List__Fuse_Drawing_Batching_Batch* __this);
int List__Fuse_Drawing_Batching_Batch__get_Count(List__Fuse_Drawing_Batching_Batch* __this);
::app::Fuse::Drawing::Batching::Batch* List__Fuse_Drawing_Batching_Batch__get_Item(List__Fuse_Drawing_Batching_Batch* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch List__Fuse_Drawing_Batching_Batch__GetEnumerator(List__Fuse_Drawing_Batching_Batch* __this);
int List__Fuse_Drawing_Batching_Batch__IndexOf(List__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item);
void List__Fuse_Drawing_Batching_Batch__Insert(List__Fuse_Drawing_Batching_Batch* __this, int index, ::app::Fuse::Drawing::Batching::Batch* item);
List__Fuse_Drawing_Batching_Batch* List__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this);
List__Fuse_Drawing_Batching_Batch* List__Fuse_Drawing_Batching_Batch__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Drawing_Batching_Batch__Remove(List__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item);
void List__Fuse_Drawing_Batching_Batch__RemoveAt(List__Fuse_Drawing_Batching_Batch* __this, int index);
void List__Fuse_Drawing_Batching_Batch__set_Item(List__Fuse_Drawing_Batching_Batch* __this, int index, ::app::Fuse::Drawing::Batching::Batch* value);
void List__Fuse_Drawing_Batching_Batch__Sort(List__Fuse_Drawing_Batching_Batch* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Drawing_Batching_Batch__ToArray(List__Fuse_Drawing_Batching_Batch* __this);

struct List__Fuse_Drawing_Batching_Batch : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Batching_Batch__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Drawing_Batching_Batch___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Drawing_Batching_Batch___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Drawing::Batching::Batch* item) { List__Fuse_Drawing_Batching_Batch__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Drawing_Batching_Batch__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Drawing_Batching_Batch__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Drawing_Batching_Batch__Clear(this); }
    bool Contains(::app::Fuse::Drawing::Batching::Batch* item) { return List__Fuse_Drawing_Batching_Batch__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Drawing_Batching_Batch__EnsureCapacity(this); }
    int Count() { return List__Fuse_Drawing_Batching_Batch__get_Count(this); }
    ::app::Fuse::Drawing::Batching::Batch* Item(int index) { return List__Fuse_Drawing_Batching_Batch__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch GetEnumerator();
    int IndexOf(::app::Fuse::Drawing::Batching::Batch* item) { return List__Fuse_Drawing_Batching_Batch__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Drawing::Batching::Batch* item) { List__Fuse_Drawing_Batching_Batch__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::Batching::Batch* item) { return List__Fuse_Drawing_Batching_Batch__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Drawing_Batching_Batch__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Drawing::Batching::Batch* value) { List__Fuse_Drawing_Batching_Batch__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Drawing_Batching_Batch__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Drawing_Batching_Batch__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Batching_Batch.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch List__Fuse_Drawing_Batching_Batch::GetEnumerator() { return List__Fuse_Drawing_Batching_Batch__GetEnumerator(this); }

}}}


#endif
