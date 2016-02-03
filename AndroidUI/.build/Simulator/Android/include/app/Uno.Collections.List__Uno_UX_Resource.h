// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_RESOURCE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_Resource; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_Resource;

struct List__Uno_UX_Resource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_Resource __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_Resource __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_UX_Resource __interface_2;
};

List__Uno_UX_Resource__uType* List__Uno_UX_Resource__typeof();

::uObject* List__Uno_UX_Resource__GetEnumerator_boxed(List__Uno_UX_Resource* __this);
void List__Uno_UX_Resource___ObjInit(List__Uno_UX_Resource* __this);
void List__Uno_UX_Resource___ObjInit_1(List__Uno_UX_Resource* __this, int capacity);
void List__Uno_UX_Resource__Add(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void List__Uno_UX_Resource__AddRange(List__Uno_UX_Resource* __this, ::uObject* items);
void List__Uno_UX_Resource__BoundsCheck(List__Uno_UX_Resource* __this, int index);
void List__Uno_UX_Resource__Clear(List__Uno_UX_Resource* __this);
bool List__Uno_UX_Resource__Contains(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void List__Uno_UX_Resource__EnsureCapacity(List__Uno_UX_Resource* __this);
int List__Uno_UX_Resource__get_Count(List__Uno_UX_Resource* __this);
::app::Uno::UX::Resource* List__Uno_UX_Resource__get_Item(List__Uno_UX_Resource* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_UX_Resource List__Uno_UX_Resource__GetEnumerator(List__Uno_UX_Resource* __this);
int List__Uno_UX_Resource__IndexOf(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void List__Uno_UX_Resource__Insert(List__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* item);
List__Uno_UX_Resource* List__Uno_UX_Resource__New_1(::uStatic* __this);
List__Uno_UX_Resource* List__Uno_UX_Resource__New_2(::uStatic* __this, int capacity);
bool List__Uno_UX_Resource__Remove(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void List__Uno_UX_Resource__RemoveAt(List__Uno_UX_Resource* __this, int index);
void List__Uno_UX_Resource__set_Item(List__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* value);
void List__Uno_UX_Resource__Sort(List__Uno_UX_Resource* __this, ::uDelegate* comparer);
::uArray* List__Uno_UX_Resource__ToArray(List__Uno_UX_Resource* __this);

struct List__Uno_UX_Resource : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_UX_Resource__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_UX_Resource___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_UX_Resource___ObjInit_1(this, capacity); }
    void Add(::app::Uno::UX::Resource* item) { List__Uno_UX_Resource__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_UX_Resource__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_UX_Resource__BoundsCheck(this, index); }
    void Clear() { List__Uno_UX_Resource__Clear(this); }
    bool Contains(::app::Uno::UX::Resource* item) { return List__Uno_UX_Resource__Contains(this, item); }
    void EnsureCapacity() { List__Uno_UX_Resource__EnsureCapacity(this); }
    int Count() { return List__Uno_UX_Resource__get_Count(this); }
    ::app::Uno::UX::Resource* Item(int index) { return List__Uno_UX_Resource__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_UX_Resource GetEnumerator();
    int IndexOf(::app::Uno::UX::Resource* item) { return List__Uno_UX_Resource__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::UX::Resource* item) { List__Uno_UX_Resource__Insert(this, index, item); }
    bool Remove(::app::Uno::UX::Resource* item) { return List__Uno_UX_Resource__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_UX_Resource__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::UX::Resource* value) { List__Uno_UX_Resource__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_UX_Resource__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_UX_Resource__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_UX_Resource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_UX_Resource List__Uno_UX_Resource::GetEnumerator() { return List__Uno_UX_Resource__GetEnumerator(this); }

}}}


#endif
