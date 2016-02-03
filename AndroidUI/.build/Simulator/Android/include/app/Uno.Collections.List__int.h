// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__INT_H__
#define __APP_UNO_COLLECTIONS_LIST__INT_H__

#include <app/Uno.Collections.IEnumerable__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__int;

struct List__int__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__int __interface_0;
};

List__int__uType* List__int__typeof();

::uObject* List__int__GetEnumerator_boxed(List__int* __this);
void List__int___ObjInit(List__int* __this);
void List__int___ObjInit_1(List__int* __this, int capacity);
void List__int__Add(List__int* __this, int item);
void List__int__AddRange(List__int* __this, ::uObject* items);
void List__int__BoundsCheck(List__int* __this, int index);
void List__int__Clear(List__int* __this);
bool List__int__Contains(List__int* __this, int item);
void List__int__EnsureCapacity(List__int* __this);
int List__int__get_Count(List__int* __this);
int List__int__get_Item(List__int* __this, int index);
::app::Uno::Collections::List1_Enumerator__int List__int__GetEnumerator(List__int* __this);
int List__int__IndexOf(List__int* __this, int item);
void List__int__Insert(List__int* __this, int index, int item);
List__int* List__int__New_1(::uStatic* __this);
List__int* List__int__New_2(::uStatic* __this, int capacity);
bool List__int__Remove(List__int* __this, int item);
void List__int__RemoveAt(List__int* __this, int index);
void List__int__set_Item(List__int* __this, int index, int value);
void List__int__Sort(List__int* __this, ::uDelegate* comparer);
::uArray* List__int__ToArray(List__int* __this);

struct List__int : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__int__GetEnumerator_boxed(this); }
    void _ObjInit() { List__int___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__int___ObjInit_1(this, capacity); }
    void Add(int item) { List__int__Add(this, item); }
    void AddRange(::uObject* items) { List__int__AddRange(this, items); }
    void BoundsCheck(int index) { List__int__BoundsCheck(this, index); }
    void Clear() { List__int__Clear(this); }
    bool Contains(int item) { return List__int__Contains(this, item); }
    void EnsureCapacity() { List__int__EnsureCapacity(this); }
    int Count() { return List__int__get_Count(this); }
    int Item(int index) { return List__int__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__int GetEnumerator();
    int IndexOf(int item) { return List__int__IndexOf(this, item); }
    void Insert(int index, int item) { List__int__Insert(this, index, item); }
    bool Remove(int item) { return List__int__Remove(this, item); }
    void RemoveAt(int index) { List__int__RemoveAt(this, index); }
    void Item(int index, int value) { List__int__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__int__Sort(this, comparer); }
    ::uArray* ToArray() { return List__int__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__int List__int::GetEnumerator() { return List__int__GetEnumerator(this); }

}}}


#endif
