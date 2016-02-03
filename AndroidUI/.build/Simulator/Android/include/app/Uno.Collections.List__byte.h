// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__BYTE_H__
#define __APP_UNO_COLLECTIONS_LIST__BYTE_H__

#include <app/Uno.Collections.IEnumerable__byte.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__byte; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__byte;

struct List__byte__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__byte __interface_0;
};

List__byte__uType* List__byte__typeof();

::uObject* List__byte__GetEnumerator_boxed(List__byte* __this);
void List__byte___ObjInit(List__byte* __this);
void List__byte___ObjInit_1(List__byte* __this, int capacity);
void List__byte__Add(List__byte* __this, ::uByte item);
void List__byte__AddRange(List__byte* __this, ::uObject* items);
void List__byte__BoundsCheck(List__byte* __this, int index);
void List__byte__Clear(List__byte* __this);
bool List__byte__Contains(List__byte* __this, ::uByte item);
void List__byte__EnsureCapacity(List__byte* __this);
int List__byte__get_Count(List__byte* __this);
::uByte List__byte__get_Item(List__byte* __this, int index);
::app::Uno::Collections::List1_Enumerator__byte List__byte__GetEnumerator(List__byte* __this);
int List__byte__IndexOf(List__byte* __this, ::uByte item);
void List__byte__Insert(List__byte* __this, int index, ::uByte item);
List__byte* List__byte__New_1(::uStatic* __this);
List__byte* List__byte__New_2(::uStatic* __this, int capacity);
bool List__byte__Remove(List__byte* __this, ::uByte item);
void List__byte__RemoveAt(List__byte* __this, int index);
void List__byte__set_Item(List__byte* __this, int index, ::uByte value);
void List__byte__Sort(List__byte* __this, ::uDelegate* comparer);
::uArray* List__byte__ToArray(List__byte* __this);

struct List__byte : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__byte__GetEnumerator_boxed(this); }
    void _ObjInit() { List__byte___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__byte___ObjInit_1(this, capacity); }
    void Add(::uByte item) { List__byte__Add(this, item); }
    void AddRange(::uObject* items) { List__byte__AddRange(this, items); }
    void BoundsCheck(int index) { List__byte__BoundsCheck(this, index); }
    void Clear() { List__byte__Clear(this); }
    bool Contains(::uByte item) { return List__byte__Contains(this, item); }
    void EnsureCapacity() { List__byte__EnsureCapacity(this); }
    int Count() { return List__byte__get_Count(this); }
    ::uByte Item(int index) { return List__byte__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__byte GetEnumerator();
    int IndexOf(::uByte item) { return List__byte__IndexOf(this, item); }
    void Insert(int index, ::uByte item) { List__byte__Insert(this, index, item); }
    bool Remove(::uByte item) { return List__byte__Remove(this, item); }
    void RemoveAt(int index) { List__byte__RemoveAt(this, index); }
    void Item(int index, ::uByte value) { List__byte__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__byte__Sort(this, comparer); }
    ::uArray* ToArray() { return List__byte__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__byte.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__byte List__byte::GetEnumerator() { return List__byte__GetEnumerator(this); }

}}}


#endif
