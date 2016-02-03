// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_TRANSFORM_H__

#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Transform; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Transform;

struct List__Fuse_Transform__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Transform __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Transform __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Transform __interface_2;
};

List__Fuse_Transform__uType* List__Fuse_Transform__typeof();

::uObject* List__Fuse_Transform__GetEnumerator_boxed(List__Fuse_Transform* __this);
void List__Fuse_Transform___ObjInit(List__Fuse_Transform* __this);
void List__Fuse_Transform___ObjInit_1(List__Fuse_Transform* __this, int capacity);
void List__Fuse_Transform__Add(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void List__Fuse_Transform__AddRange(List__Fuse_Transform* __this, ::uObject* items);
void List__Fuse_Transform__BoundsCheck(List__Fuse_Transform* __this, int index);
void List__Fuse_Transform__Clear(List__Fuse_Transform* __this);
bool List__Fuse_Transform__Contains(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void List__Fuse_Transform__EnsureCapacity(List__Fuse_Transform* __this);
int List__Fuse_Transform__get_Count(List__Fuse_Transform* __this);
::app::Fuse::Transform* List__Fuse_Transform__get_Item(List__Fuse_Transform* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Transform List__Fuse_Transform__GetEnumerator(List__Fuse_Transform* __this);
int List__Fuse_Transform__IndexOf(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void List__Fuse_Transform__Insert(List__Fuse_Transform* __this, int index, ::app::Fuse::Transform* item);
List__Fuse_Transform* List__Fuse_Transform__New_1(::uStatic* __this);
List__Fuse_Transform* List__Fuse_Transform__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Transform__Remove(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void List__Fuse_Transform__RemoveAt(List__Fuse_Transform* __this, int index);
void List__Fuse_Transform__set_Item(List__Fuse_Transform* __this, int index, ::app::Fuse::Transform* value);
void List__Fuse_Transform__Sort(List__Fuse_Transform* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Transform__ToArray(List__Fuse_Transform* __this);

struct List__Fuse_Transform : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Transform__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Transform___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Transform___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Transform* item) { List__Fuse_Transform__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Transform__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Transform__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Transform__Clear(this); }
    bool Contains(::app::Fuse::Transform* item) { return List__Fuse_Transform__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Transform__EnsureCapacity(this); }
    int Count() { return List__Fuse_Transform__get_Count(this); }
    ::app::Fuse::Transform* Item(int index) { return List__Fuse_Transform__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Transform GetEnumerator();
    int IndexOf(::app::Fuse::Transform* item) { return List__Fuse_Transform__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Transform* item) { List__Fuse_Transform__Insert(this, index, item); }
    bool Remove(::app::Fuse::Transform* item) { return List__Fuse_Transform__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Transform__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Transform* value) { List__Fuse_Transform__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Transform__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Transform__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Transform.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Transform List__Fuse_Transform::GetEnumerator() { return List__Fuse_Transform__GetEnumerator(this); }

}}}


#endif
