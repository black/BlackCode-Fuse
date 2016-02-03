// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_PLATFORM_KEY_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_PLATFORM_KEY_H__

#include <app/Uno.Collections.IEnumerable__Uno_Platform_Key.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Platform_Key; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Platform_Key;

struct List__Uno_Platform_Key__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Platform_Key __interface_0;
};

List__Uno_Platform_Key__uType* List__Uno_Platform_Key__typeof();

::uObject* List__Uno_Platform_Key__GetEnumerator_boxed(List__Uno_Platform_Key* __this);
void List__Uno_Platform_Key___ObjInit(List__Uno_Platform_Key* __this);
void List__Uno_Platform_Key___ObjInit_1(List__Uno_Platform_Key* __this, int capacity);
void List__Uno_Platform_Key__Add(List__Uno_Platform_Key* __this, int item);
void List__Uno_Platform_Key__AddRange(List__Uno_Platform_Key* __this, ::uObject* items);
void List__Uno_Platform_Key__BoundsCheck(List__Uno_Platform_Key* __this, int index);
void List__Uno_Platform_Key__Clear(List__Uno_Platform_Key* __this);
bool List__Uno_Platform_Key__Contains(List__Uno_Platform_Key* __this, int item);
void List__Uno_Platform_Key__EnsureCapacity(List__Uno_Platform_Key* __this);
int List__Uno_Platform_Key__get_Count(List__Uno_Platform_Key* __this);
int List__Uno_Platform_Key__get_Item(List__Uno_Platform_Key* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Platform_Key List__Uno_Platform_Key__GetEnumerator(List__Uno_Platform_Key* __this);
int List__Uno_Platform_Key__IndexOf(List__Uno_Platform_Key* __this, int item);
void List__Uno_Platform_Key__Insert(List__Uno_Platform_Key* __this, int index, int item);
List__Uno_Platform_Key* List__Uno_Platform_Key__New_1(::uStatic* __this);
List__Uno_Platform_Key* List__Uno_Platform_Key__New_2(::uStatic* __this, int capacity);
bool List__Uno_Platform_Key__Remove(List__Uno_Platform_Key* __this, int item);
void List__Uno_Platform_Key__RemoveAt(List__Uno_Platform_Key* __this, int index);
void List__Uno_Platform_Key__set_Item(List__Uno_Platform_Key* __this, int index, int value);
void List__Uno_Platform_Key__Sort(List__Uno_Platform_Key* __this, ::uDelegate* comparer);
::uArray* List__Uno_Platform_Key__ToArray(List__Uno_Platform_Key* __this);

struct List__Uno_Platform_Key : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Platform_Key__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Platform_Key___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Platform_Key___ObjInit_1(this, capacity); }
    void Add(int item) { List__Uno_Platform_Key__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Platform_Key__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Platform_Key__BoundsCheck(this, index); }
    void Clear() { List__Uno_Platform_Key__Clear(this); }
    bool Contains(int item) { return List__Uno_Platform_Key__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Platform_Key__EnsureCapacity(this); }
    int Count() { return List__Uno_Platform_Key__get_Count(this); }
    int Item(int index) { return List__Uno_Platform_Key__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Platform_Key GetEnumerator();
    int IndexOf(int item) { return List__Uno_Platform_Key__IndexOf(this, item); }
    void Insert(int index, int item) { List__Uno_Platform_Key__Insert(this, index, item); }
    bool Remove(int item) { return List__Uno_Platform_Key__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Platform_Key__RemoveAt(this, index); }
    void Item(int index, int value) { List__Uno_Platform_Key__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Platform_Key__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Platform_Key__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Platform_Key.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Platform_Key List__Uno_Platform_Key::GetEnumerator() { return List__Uno_Platform_Key__GetEnumerator(this); }

}}}


#endif
