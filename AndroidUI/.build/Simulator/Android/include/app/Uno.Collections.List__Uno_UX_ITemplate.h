// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_ITemplate; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_ITemplate;

struct List__Uno_UX_ITemplate__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_ITemplate __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_UX_ITemplate __interface_2;
};

List__Uno_UX_ITemplate__uType* List__Uno_UX_ITemplate__typeof();

::uObject* List__Uno_UX_ITemplate__GetEnumerator_boxed(List__Uno_UX_ITemplate* __this);
void List__Uno_UX_ITemplate___ObjInit(List__Uno_UX_ITemplate* __this);
void List__Uno_UX_ITemplate___ObjInit_1(List__Uno_UX_ITemplate* __this, int capacity);
void List__Uno_UX_ITemplate__Add(List__Uno_UX_ITemplate* __this, ::uObject* item);
void List__Uno_UX_ITemplate__AddRange(List__Uno_UX_ITemplate* __this, ::uObject* items);
void List__Uno_UX_ITemplate__BoundsCheck(List__Uno_UX_ITemplate* __this, int index);
void List__Uno_UX_ITemplate__Clear(List__Uno_UX_ITemplate* __this);
bool List__Uno_UX_ITemplate__Contains(List__Uno_UX_ITemplate* __this, ::uObject* item);
void List__Uno_UX_ITemplate__EnsureCapacity(List__Uno_UX_ITemplate* __this);
int List__Uno_UX_ITemplate__get_Count(List__Uno_UX_ITemplate* __this);
::uObject* List__Uno_UX_ITemplate__get_Item(List__Uno_UX_ITemplate* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_UX_ITemplate List__Uno_UX_ITemplate__GetEnumerator(List__Uno_UX_ITemplate* __this);
int List__Uno_UX_ITemplate__IndexOf(List__Uno_UX_ITemplate* __this, ::uObject* item);
void List__Uno_UX_ITemplate__Insert(List__Uno_UX_ITemplate* __this, int index, ::uObject* item);
List__Uno_UX_ITemplate* List__Uno_UX_ITemplate__New_1(::uStatic* __this);
List__Uno_UX_ITemplate* List__Uno_UX_ITemplate__New_2(::uStatic* __this, int capacity);
bool List__Uno_UX_ITemplate__Remove(List__Uno_UX_ITemplate* __this, ::uObject* item);
void List__Uno_UX_ITemplate__RemoveAt(List__Uno_UX_ITemplate* __this, int index);
void List__Uno_UX_ITemplate__set_Item(List__Uno_UX_ITemplate* __this, int index, ::uObject* value);
void List__Uno_UX_ITemplate__Sort(List__Uno_UX_ITemplate* __this, ::uDelegate* comparer);
::uArray* List__Uno_UX_ITemplate__ToArray(List__Uno_UX_ITemplate* __this);

struct List__Uno_UX_ITemplate : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_UX_ITemplate__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_UX_ITemplate___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_UX_ITemplate___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Uno_UX_ITemplate__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_UX_ITemplate__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_UX_ITemplate__BoundsCheck(this, index); }
    void Clear() { List__Uno_UX_ITemplate__Clear(this); }
    bool Contains(::uObject* item) { return List__Uno_UX_ITemplate__Contains(this, item); }
    void EnsureCapacity() { List__Uno_UX_ITemplate__EnsureCapacity(this); }
    int Count() { return List__Uno_UX_ITemplate__get_Count(this); }
    ::uObject* Item(int index) { return List__Uno_UX_ITemplate__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_UX_ITemplate GetEnumerator();
    int IndexOf(::uObject* item) { return List__Uno_UX_ITemplate__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Uno_UX_ITemplate__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Uno_UX_ITemplate__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_UX_ITemplate__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Uno_UX_ITemplate__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_UX_ITemplate__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_UX_ITemplate__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_UX_ITemplate.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_UX_ITemplate List__Uno_UX_ITemplate::GetEnumerator() { return List__Uno_UX_ITemplate__GetEnumerator(this); }

}}}


#endif
