// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTITY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTITY_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Entities_Entity; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Entities_Entity;

struct List__Fuse_Entities_Entity__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Entities_Entity __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Entities_Entity __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Entities_Entity __interface_2;
};

List__Fuse_Entities_Entity__uType* List__Fuse_Entities_Entity__typeof();

::uObject* List__Fuse_Entities_Entity__GetEnumerator_boxed(List__Fuse_Entities_Entity* __this);
void List__Fuse_Entities_Entity___ObjInit(List__Fuse_Entities_Entity* __this);
void List__Fuse_Entities_Entity___ObjInit_1(List__Fuse_Entities_Entity* __this, int capacity);
void List__Fuse_Entities_Entity__Add(List__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item);
void List__Fuse_Entities_Entity__AddRange(List__Fuse_Entities_Entity* __this, ::uObject* items);
void List__Fuse_Entities_Entity__BoundsCheck(List__Fuse_Entities_Entity* __this, int index);
void List__Fuse_Entities_Entity__Clear(List__Fuse_Entities_Entity* __this);
bool List__Fuse_Entities_Entity__Contains(List__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item);
void List__Fuse_Entities_Entity__EnsureCapacity(List__Fuse_Entities_Entity* __this);
int List__Fuse_Entities_Entity__get_Count(List__Fuse_Entities_Entity* __this);
::app::Fuse::Entities::Entity* List__Fuse_Entities_Entity__get_Item(List__Fuse_Entities_Entity* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entity List__Fuse_Entities_Entity__GetEnumerator(List__Fuse_Entities_Entity* __this);
int List__Fuse_Entities_Entity__IndexOf(List__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item);
void List__Fuse_Entities_Entity__Insert(List__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* item);
List__Fuse_Entities_Entity* List__Fuse_Entities_Entity__New_1(::uStatic* __this);
List__Fuse_Entities_Entity* List__Fuse_Entities_Entity__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Entities_Entity__Remove(List__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item);
void List__Fuse_Entities_Entity__RemoveAt(List__Fuse_Entities_Entity* __this, int index);
void List__Fuse_Entities_Entity__set_Item(List__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* value);
void List__Fuse_Entities_Entity__Sort(List__Fuse_Entities_Entity* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Entities_Entity__ToArray(List__Fuse_Entities_Entity* __this);

struct List__Fuse_Entities_Entity : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Entities_Entity__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Entities_Entity___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Entities_Entity___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Entities::Entity* item) { List__Fuse_Entities_Entity__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Entities_Entity__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Entities_Entity__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Entities_Entity__Clear(this); }
    bool Contains(::app::Fuse::Entities::Entity* item) { return List__Fuse_Entities_Entity__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Entities_Entity__EnsureCapacity(this); }
    int Count() { return List__Fuse_Entities_Entity__get_Count(this); }
    ::app::Fuse::Entities::Entity* Item(int index) { return List__Fuse_Entities_Entity__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entity GetEnumerator();
    int IndexOf(::app::Fuse::Entities::Entity* item) { return List__Fuse_Entities_Entity__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Entities::Entity* item) { List__Fuse_Entities_Entity__Insert(this, index, item); }
    bool Remove(::app::Fuse::Entities::Entity* item) { return List__Fuse_Entities_Entity__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Entities_Entity__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Entities::Entity* value) { List__Fuse_Entities_Entity__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Entities_Entity__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Entities_Entity__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entity.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entity List__Fuse_Entities_Entity::GetEnumerator() { return List__Fuse_Entities_Entity__GetEnumerator(this); }

}}}


#endif
