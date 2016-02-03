// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__BYTE___H__
#define __APP_UNO_COLLECTIONS_LIST__BYTE___H__

#include <app/Uno.Collections.IEnumerable__byte__.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__byte__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__byte__;

struct List__byte____uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__byte__ __interface_0;
};

List__byte____uType* List__byte____typeof();

::uObject* List__byte____GetEnumerator_boxed(List__byte__* __this);
void List__byte_____ObjInit(List__byte__* __this);
void List__byte_____ObjInit_1(List__byte__* __this, int capacity);
void List__byte____Add(List__byte__* __this, ::uArray* item);
void List__byte____AddRange(List__byte__* __this, ::uObject* items);
void List__byte____BoundsCheck(List__byte__* __this, int index);
void List__byte____Clear(List__byte__* __this);
bool List__byte____Contains(List__byte__* __this, ::uArray* item);
void List__byte____EnsureCapacity(List__byte__* __this);
int List__byte____get_Count(List__byte__* __this);
::uArray* List__byte____get_Item(List__byte__* __this, int index);
::app::Uno::Collections::List1_Enumerator__byte__ List__byte____GetEnumerator(List__byte__* __this);
int List__byte____IndexOf(List__byte__* __this, ::uArray* item);
void List__byte____Insert(List__byte__* __this, int index, ::uArray* item);
List__byte__* List__byte____New_1(::uStatic* __this);
List__byte__* List__byte____New_2(::uStatic* __this, int capacity);
bool List__byte____Remove(List__byte__* __this, ::uArray* item);
void List__byte____RemoveAt(List__byte__* __this, int index);
void List__byte____set_Item(List__byte__* __this, int index, ::uArray* value);
void List__byte____Sort(List__byte__* __this, ::uDelegate* comparer);
::uArray* List__byte____ToArray(List__byte__* __this);

struct List__byte__ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__byte____GetEnumerator_boxed(this); }
    void _ObjInit() { List__byte_____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__byte_____ObjInit_1(this, capacity); }
    void Add(::uArray* item) { List__byte____Add(this, item); }
    void AddRange(::uObject* items) { List__byte____AddRange(this, items); }
    void BoundsCheck(int index) { List__byte____BoundsCheck(this, index); }
    void Clear() { List__byte____Clear(this); }
    bool Contains(::uArray* item) { return List__byte____Contains(this, item); }
    void EnsureCapacity() { List__byte____EnsureCapacity(this); }
    int Count() { return List__byte____get_Count(this); }
    ::uArray* Item(int index) { return List__byte____get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__byte__ GetEnumerator();
    int IndexOf(::uArray* item) { return List__byte____IndexOf(this, item); }
    void Insert(int index, ::uArray* item) { List__byte____Insert(this, index, item); }
    bool Remove(::uArray* item) { return List__byte____Remove(this, item); }
    void RemoveAt(int index) { List__byte____RemoveAt(this, index); }
    void Item(int index, ::uArray* value) { List__byte____set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__byte____Sort(this, comparer); }
    ::uArray* ToArray() { return List__byte____ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__byte__.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__byte__ List__byte__::GetEnumerator() { return List__byte____GetEnumerator(this); }

}}}


#endif
