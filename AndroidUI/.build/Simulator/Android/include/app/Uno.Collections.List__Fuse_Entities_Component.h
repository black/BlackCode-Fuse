// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_COMPONENT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_COMPONENT_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Component.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Entities_Component; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Entities_Component;

struct List__Fuse_Entities_Component__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Entities_Component __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Entities_Component __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Entities_Component __interface_2;
};

List__Fuse_Entities_Component__uType* List__Fuse_Entities_Component__typeof();

::uObject* List__Fuse_Entities_Component__GetEnumerator_boxed(List__Fuse_Entities_Component* __this);
void List__Fuse_Entities_Component___ObjInit(List__Fuse_Entities_Component* __this);
void List__Fuse_Entities_Component___ObjInit_1(List__Fuse_Entities_Component* __this, int capacity);
void List__Fuse_Entities_Component__Add(List__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item);
void List__Fuse_Entities_Component__AddRange(List__Fuse_Entities_Component* __this, ::uObject* items);
void List__Fuse_Entities_Component__BoundsCheck(List__Fuse_Entities_Component* __this, int index);
void List__Fuse_Entities_Component__Clear(List__Fuse_Entities_Component* __this);
bool List__Fuse_Entities_Component__Contains(List__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item);
void List__Fuse_Entities_Component__EnsureCapacity(List__Fuse_Entities_Component* __this);
int List__Fuse_Entities_Component__get_Count(List__Fuse_Entities_Component* __this);
::app::Fuse::Entities::Component* List__Fuse_Entities_Component__get_Item(List__Fuse_Entities_Component* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Component List__Fuse_Entities_Component__GetEnumerator(List__Fuse_Entities_Component* __this);
int List__Fuse_Entities_Component__IndexOf(List__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item);
void List__Fuse_Entities_Component__Insert(List__Fuse_Entities_Component* __this, int index, ::app::Fuse::Entities::Component* item);
List__Fuse_Entities_Component* List__Fuse_Entities_Component__New_1(::uStatic* __this);
List__Fuse_Entities_Component* List__Fuse_Entities_Component__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Entities_Component__Remove(List__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item);
void List__Fuse_Entities_Component__RemoveAt(List__Fuse_Entities_Component* __this, int index);
void List__Fuse_Entities_Component__set_Item(List__Fuse_Entities_Component* __this, int index, ::app::Fuse::Entities::Component* value);
void List__Fuse_Entities_Component__Sort(List__Fuse_Entities_Component* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Entities_Component__ToArray(List__Fuse_Entities_Component* __this);

struct List__Fuse_Entities_Component : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Entities_Component__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Entities_Component___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Entities_Component___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Entities::Component* item) { List__Fuse_Entities_Component__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Entities_Component__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Entities_Component__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Entities_Component__Clear(this); }
    bool Contains(::app::Fuse::Entities::Component* item) { return List__Fuse_Entities_Component__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Entities_Component__EnsureCapacity(this); }
    int Count() { return List__Fuse_Entities_Component__get_Count(this); }
    ::app::Fuse::Entities::Component* Item(int index) { return List__Fuse_Entities_Component__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Component GetEnumerator();
    int IndexOf(::app::Fuse::Entities::Component* item) { return List__Fuse_Entities_Component__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Entities::Component* item) { List__Fuse_Entities_Component__Insert(this, index, item); }
    bool Remove(::app::Fuse::Entities::Component* item) { return List__Fuse_Entities_Component__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Entities_Component__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Entities::Component* value) { List__Fuse_Entities_Component__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Entities_Component__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Entities_Component__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Component.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Component List__Fuse_Entities_Component::GetEnumerator() { return List__Fuse_Entities_Component__GetEnumerator(this); }

}}}


#endif
