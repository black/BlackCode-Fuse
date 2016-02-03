// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__CHAR_H__
#define __APP_UNO_COLLECTIONS_LIST__CHAR_H__

#include <app/Uno.Collections.IEnumerable__char.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__char; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__char;

struct List__char__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__char __interface_0;
};

List__char__uType* List__char__typeof();

::uObject* List__char__GetEnumerator_boxed(List__char* __this);
void List__char___ObjInit(List__char* __this);
void List__char___ObjInit_1(List__char* __this, int capacity);
void List__char__Add(List__char* __this, ::uChar item);
void List__char__AddRange(List__char* __this, ::uObject* items);
void List__char__BoundsCheck(List__char* __this, int index);
void List__char__Clear(List__char* __this);
bool List__char__Contains(List__char* __this, ::uChar item);
void List__char__EnsureCapacity(List__char* __this);
int List__char__get_Count(List__char* __this);
::uChar List__char__get_Item(List__char* __this, int index);
::app::Uno::Collections::List1_Enumerator__char List__char__GetEnumerator(List__char* __this);
int List__char__IndexOf(List__char* __this, ::uChar item);
void List__char__Insert(List__char* __this, int index, ::uChar item);
List__char* List__char__New_1(::uStatic* __this);
List__char* List__char__New_2(::uStatic* __this, int capacity);
bool List__char__Remove(List__char* __this, ::uChar item);
void List__char__RemoveAt(List__char* __this, int index);
void List__char__set_Item(List__char* __this, int index, ::uChar value);
void List__char__Sort(List__char* __this, ::uDelegate* comparer);
::uArray* List__char__ToArray(List__char* __this);

struct List__char : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__char__GetEnumerator_boxed(this); }
    void _ObjInit() { List__char___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__char___ObjInit_1(this, capacity); }
    void Add(::uChar item) { List__char__Add(this, item); }
    void AddRange(::uObject* items) { List__char__AddRange(this, items); }
    void BoundsCheck(int index) { List__char__BoundsCheck(this, index); }
    void Clear() { List__char__Clear(this); }
    bool Contains(::uChar item) { return List__char__Contains(this, item); }
    void EnsureCapacity() { List__char__EnsureCapacity(this); }
    int Count() { return List__char__get_Count(this); }
    ::uChar Item(int index) { return List__char__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__char GetEnumerator();
    int IndexOf(::uChar item) { return List__char__IndexOf(this, item); }
    void Insert(int index, ::uChar item) { List__char__Insert(this, index, item); }
    bool Remove(::uChar item) { return List__char__Remove(this, item); }
    void RemoveAt(int index) { List__char__RemoveAt(this, index); }
    void Item(int index, ::uChar value) { List__char__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__char__Sort(this, comparer); }
    ::uArray* ToArray() { return List__char__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__char.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__char List__char::GetEnumerator() { return List__char__GetEnumerator(this); }

}}}


#endif
