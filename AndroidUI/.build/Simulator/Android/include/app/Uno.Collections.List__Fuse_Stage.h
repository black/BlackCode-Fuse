// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_STAGE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_STAGE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Stage.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Stage; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Stage; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Stage;

struct List__Fuse_Stage__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Stage __interface_0;
};

List__Fuse_Stage__uType* List__Fuse_Stage__typeof();

::uObject* List__Fuse_Stage__GetEnumerator_boxed(List__Fuse_Stage* __this);
void List__Fuse_Stage___ObjInit(List__Fuse_Stage* __this);
void List__Fuse_Stage___ObjInit_1(List__Fuse_Stage* __this, int capacity);
void List__Fuse_Stage__Add(List__Fuse_Stage* __this, ::app::Fuse::Stage* item);
void List__Fuse_Stage__AddRange(List__Fuse_Stage* __this, ::uObject* items);
void List__Fuse_Stage__BoundsCheck(List__Fuse_Stage* __this, int index);
void List__Fuse_Stage__Clear(List__Fuse_Stage* __this);
bool List__Fuse_Stage__Contains(List__Fuse_Stage* __this, ::app::Fuse::Stage* item);
void List__Fuse_Stage__EnsureCapacity(List__Fuse_Stage* __this);
int List__Fuse_Stage__get_Count(List__Fuse_Stage* __this);
::app::Fuse::Stage* List__Fuse_Stage__get_Item(List__Fuse_Stage* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Stage List__Fuse_Stage__GetEnumerator(List__Fuse_Stage* __this);
int List__Fuse_Stage__IndexOf(List__Fuse_Stage* __this, ::app::Fuse::Stage* item);
void List__Fuse_Stage__Insert(List__Fuse_Stage* __this, int index, ::app::Fuse::Stage* item);
List__Fuse_Stage* List__Fuse_Stage__New_1(::uStatic* __this);
List__Fuse_Stage* List__Fuse_Stage__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Stage__Remove(List__Fuse_Stage* __this, ::app::Fuse::Stage* item);
void List__Fuse_Stage__RemoveAt(List__Fuse_Stage* __this, int index);
void List__Fuse_Stage__set_Item(List__Fuse_Stage* __this, int index, ::app::Fuse::Stage* value);
void List__Fuse_Stage__Sort(List__Fuse_Stage* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Stage__ToArray(List__Fuse_Stage* __this);

struct List__Fuse_Stage : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Stage__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Stage___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Stage___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Stage* item) { List__Fuse_Stage__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Stage__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Stage__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Stage__Clear(this); }
    bool Contains(::app::Fuse::Stage* item) { return List__Fuse_Stage__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Stage__EnsureCapacity(this); }
    int Count() { return List__Fuse_Stage__get_Count(this); }
    ::app::Fuse::Stage* Item(int index) { return List__Fuse_Stage__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Stage GetEnumerator();
    int IndexOf(::app::Fuse::Stage* item) { return List__Fuse_Stage__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Stage* item) { List__Fuse_Stage__Insert(this, index, item); }
    bool Remove(::app::Fuse::Stage* item) { return List__Fuse_Stage__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Stage__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Stage* value) { List__Fuse_Stage__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Stage__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Stage__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Stage.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Stage List__Fuse_Stage::GetEnumerator() { return List__Fuse_Stage__GetEnumerator(this); }

}}}


#endif
