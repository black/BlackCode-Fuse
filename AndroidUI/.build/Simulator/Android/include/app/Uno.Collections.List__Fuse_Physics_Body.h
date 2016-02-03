// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_BODY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_BODY_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Physics_Body.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Physics_Body; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Physics_Body;

struct List__Fuse_Physics_Body__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Physics_Body __interface_0;
};

List__Fuse_Physics_Body__uType* List__Fuse_Physics_Body__typeof();

::uObject* List__Fuse_Physics_Body__GetEnumerator_boxed(List__Fuse_Physics_Body* __this);
void List__Fuse_Physics_Body___ObjInit(List__Fuse_Physics_Body* __this);
void List__Fuse_Physics_Body___ObjInit_1(List__Fuse_Physics_Body* __this, int capacity);
void List__Fuse_Physics_Body__Add(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item);
void List__Fuse_Physics_Body__AddRange(List__Fuse_Physics_Body* __this, ::uObject* items);
void List__Fuse_Physics_Body__BoundsCheck(List__Fuse_Physics_Body* __this, int index);
void List__Fuse_Physics_Body__Clear(List__Fuse_Physics_Body* __this);
bool List__Fuse_Physics_Body__Contains(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item);
void List__Fuse_Physics_Body__EnsureCapacity(List__Fuse_Physics_Body* __this);
int List__Fuse_Physics_Body__get_Count(List__Fuse_Physics_Body* __this);
::app::Fuse::Physics::Body* List__Fuse_Physics_Body__get_Item(List__Fuse_Physics_Body* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body List__Fuse_Physics_Body__GetEnumerator(List__Fuse_Physics_Body* __this);
int List__Fuse_Physics_Body__IndexOf(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item);
void List__Fuse_Physics_Body__Insert(List__Fuse_Physics_Body* __this, int index, ::app::Fuse::Physics::Body* item);
List__Fuse_Physics_Body* List__Fuse_Physics_Body__New_1(::uStatic* __this);
List__Fuse_Physics_Body* List__Fuse_Physics_Body__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Physics_Body__Remove(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item);
void List__Fuse_Physics_Body__RemoveAt(List__Fuse_Physics_Body* __this, int index);
void List__Fuse_Physics_Body__set_Item(List__Fuse_Physics_Body* __this, int index, ::app::Fuse::Physics::Body* value);
void List__Fuse_Physics_Body__Sort(List__Fuse_Physics_Body* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Physics_Body__ToArray(List__Fuse_Physics_Body* __this);

struct List__Fuse_Physics_Body : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Physics_Body__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Physics_Body___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Physics_Body___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Physics::Body* item) { List__Fuse_Physics_Body__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Physics_Body__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Physics_Body__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Physics_Body__Clear(this); }
    bool Contains(::app::Fuse::Physics::Body* item) { return List__Fuse_Physics_Body__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Physics_Body__EnsureCapacity(this); }
    int Count() { return List__Fuse_Physics_Body__get_Count(this); }
    ::app::Fuse::Physics::Body* Item(int index) { return List__Fuse_Physics_Body__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body GetEnumerator();
    int IndexOf(::app::Fuse::Physics::Body* item) { return List__Fuse_Physics_Body__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Physics::Body* item) { List__Fuse_Physics_Body__Insert(this, index, item); }
    bool Remove(::app::Fuse::Physics::Body* item) { return List__Fuse_Physics_Body__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Physics_Body__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Physics::Body* value) { List__Fuse_Physics_Body__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Physics_Body__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Physics_Body__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_Body.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body List__Fuse_Physics_Body::GetEnumerator() { return List__Fuse_Physics_Body__GetEnumerator(this); }

}}}


#endif
