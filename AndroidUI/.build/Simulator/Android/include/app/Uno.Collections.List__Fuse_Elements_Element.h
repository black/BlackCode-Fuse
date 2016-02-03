// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Elements_Element.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_Element; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_Element;

struct List__Fuse_Elements_Element__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Elements_Element __interface_0;
};

List__Fuse_Elements_Element__uType* List__Fuse_Elements_Element__typeof();

::uObject* List__Fuse_Elements_Element__GetEnumerator_boxed(List__Fuse_Elements_Element* __this);
void List__Fuse_Elements_Element___ObjInit(List__Fuse_Elements_Element* __this);
void List__Fuse_Elements_Element___ObjInit_1(List__Fuse_Elements_Element* __this, int capacity);
void List__Fuse_Elements_Element__Add(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item);
void List__Fuse_Elements_Element__AddRange(List__Fuse_Elements_Element* __this, ::uObject* items);
void List__Fuse_Elements_Element__BoundsCheck(List__Fuse_Elements_Element* __this, int index);
void List__Fuse_Elements_Element__Clear(List__Fuse_Elements_Element* __this);
bool List__Fuse_Elements_Element__Contains(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item);
void List__Fuse_Elements_Element__EnsureCapacity(List__Fuse_Elements_Element* __this);
int List__Fuse_Elements_Element__get_Count(List__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* List__Fuse_Elements_Element__get_Item(List__Fuse_Elements_Element* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element List__Fuse_Elements_Element__GetEnumerator(List__Fuse_Elements_Element* __this);
int List__Fuse_Elements_Element__IndexOf(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item);
void List__Fuse_Elements_Element__Insert(List__Fuse_Elements_Element* __this, int index, ::app::Fuse::Elements::Element* item);
List__Fuse_Elements_Element* List__Fuse_Elements_Element__New_1(::uStatic* __this);
List__Fuse_Elements_Element* List__Fuse_Elements_Element__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Elements_Element__Remove(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item);
void List__Fuse_Elements_Element__RemoveAt(List__Fuse_Elements_Element* __this, int index);
void List__Fuse_Elements_Element__set_Item(List__Fuse_Elements_Element* __this, int index, ::app::Fuse::Elements::Element* value);
void List__Fuse_Elements_Element__Sort(List__Fuse_Elements_Element* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Elements_Element__ToArray(List__Fuse_Elements_Element* __this);

struct List__Fuse_Elements_Element : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Elements_Element__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Elements_Element___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Elements_Element___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Elements::Element* item) { List__Fuse_Elements_Element__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Elements_Element__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Elements_Element__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Elements_Element__Clear(this); }
    bool Contains(::app::Fuse::Elements::Element* item) { return List__Fuse_Elements_Element__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Elements_Element__EnsureCapacity(this); }
    int Count() { return List__Fuse_Elements_Element__get_Count(this); }
    ::app::Fuse::Elements::Element* Item(int index) { return List__Fuse_Elements_Element__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element GetEnumerator();
    int IndexOf(::app::Fuse::Elements::Element* item) { return List__Fuse_Elements_Element__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Elements::Element* item) { List__Fuse_Elements_Element__Insert(this, index, item); }
    bool Remove(::app::Fuse::Elements::Element* item) { return List__Fuse_Elements_Element__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Elements_Element__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Elements::Element* value) { List__Fuse_Elements_Element__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Elements_Element__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Elements_Element__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_Element.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element List__Fuse_Elements_Element::GetEnumerator() { return List__Fuse_Elements_Element__GetEnumerator(this); }

}}}


#endif
