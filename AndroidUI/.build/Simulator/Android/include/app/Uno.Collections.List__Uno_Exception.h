// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_EXCEPTION_H__

#include <app/Uno.Collections.ICollection__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Collections.IList__Uno_Exception.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Exception; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Exception;

struct List__Uno_Exception__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Exception __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Exception __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_Exception __interface_2;
};

List__Uno_Exception__uType* List__Uno_Exception__typeof();

::uObject* List__Uno_Exception__GetEnumerator_boxed(List__Uno_Exception* __this);
void List__Uno_Exception___ObjInit(List__Uno_Exception* __this);
void List__Uno_Exception___ObjInit_1(List__Uno_Exception* __this, int capacity);
void List__Uno_Exception__Add(List__Uno_Exception* __this, ::app::Uno::Exception* item);
void List__Uno_Exception__AddRange(List__Uno_Exception* __this, ::uObject* items);
void List__Uno_Exception__BoundsCheck(List__Uno_Exception* __this, int index);
void List__Uno_Exception__Clear(List__Uno_Exception* __this);
bool List__Uno_Exception__Contains(List__Uno_Exception* __this, ::app::Uno::Exception* item);
void List__Uno_Exception__EnsureCapacity(List__Uno_Exception* __this);
int List__Uno_Exception__get_Count(List__Uno_Exception* __this);
::app::Uno::Exception* List__Uno_Exception__get_Item(List__Uno_Exception* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Exception List__Uno_Exception__GetEnumerator(List__Uno_Exception* __this);
int List__Uno_Exception__IndexOf(List__Uno_Exception* __this, ::app::Uno::Exception* item);
void List__Uno_Exception__Insert(List__Uno_Exception* __this, int index, ::app::Uno::Exception* item);
List__Uno_Exception* List__Uno_Exception__New_1(::uStatic* __this);
List__Uno_Exception* List__Uno_Exception__New_2(::uStatic* __this, int capacity);
bool List__Uno_Exception__Remove(List__Uno_Exception* __this, ::app::Uno::Exception* item);
void List__Uno_Exception__RemoveAt(List__Uno_Exception* __this, int index);
void List__Uno_Exception__set_Item(List__Uno_Exception* __this, int index, ::app::Uno::Exception* value);
void List__Uno_Exception__Sort(List__Uno_Exception* __this, ::uDelegate* comparer);
::uArray* List__Uno_Exception__ToArray(List__Uno_Exception* __this);

struct List__Uno_Exception : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Exception__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Exception___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Exception___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Exception* item) { List__Uno_Exception__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Exception__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Exception__BoundsCheck(this, index); }
    void Clear() { List__Uno_Exception__Clear(this); }
    bool Contains(::app::Uno::Exception* item) { return List__Uno_Exception__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Exception__EnsureCapacity(this); }
    int Count() { return List__Uno_Exception__get_Count(this); }
    ::app::Uno::Exception* Item(int index) { return List__Uno_Exception__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Exception GetEnumerator();
    int IndexOf(::app::Uno::Exception* item) { return List__Uno_Exception__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Exception* item) { List__Uno_Exception__Insert(this, index, item); }
    bool Remove(::app::Uno::Exception* item) { return List__Uno_Exception__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Exception__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Exception* value) { List__Uno_Exception__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Exception__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Exception__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Exception.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Exception List__Uno_Exception::GetEnumerator() { return List__Uno_Exception__GetEnumerator(this); }

}}}


#endif
