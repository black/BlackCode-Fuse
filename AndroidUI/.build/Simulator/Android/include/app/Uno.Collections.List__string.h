// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__STRING_H__
#define __APP_UNO_COLLECTIONS_LIST__STRING_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__string;

struct List__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

List__string__uType* List__string__typeof();

::uObject* List__string__GetEnumerator_boxed(List__string* __this);
void List__string___ObjInit(List__string* __this);
void List__string___ObjInit_1(List__string* __this, int capacity);
void List__string__Add(List__string* __this, ::uString* item);
void List__string__AddRange(List__string* __this, ::uObject* items);
void List__string__BoundsCheck(List__string* __this, int index);
void List__string__Clear(List__string* __this);
bool List__string__Contains(List__string* __this, ::uString* item);
void List__string__EnsureCapacity(List__string* __this);
int List__string__get_Count(List__string* __this);
::uString* List__string__get_Item(List__string* __this, int index);
::app::Uno::Collections::List1_Enumerator__string List__string__GetEnumerator(List__string* __this);
int List__string__IndexOf(List__string* __this, ::uString* item);
void List__string__Insert(List__string* __this, int index, ::uString* item);
List__string* List__string__New_1(::uStatic* __this);
List__string* List__string__New_2(::uStatic* __this, int capacity);
bool List__string__Remove(List__string* __this, ::uString* item);
void List__string__RemoveAt(List__string* __this, int index);
void List__string__set_Item(List__string* __this, int index, ::uString* value);
void List__string__Sort(List__string* __this, ::uDelegate* comparer);
::uArray* List__string__ToArray(List__string* __this);

struct List__string : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__string__GetEnumerator_boxed(this); }
    void _ObjInit() { List__string___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__string___ObjInit_1(this, capacity); }
    void Add(::uString* item) { List__string__Add(this, item); }
    void AddRange(::uObject* items) { List__string__AddRange(this, items); }
    void BoundsCheck(int index) { List__string__BoundsCheck(this, index); }
    void Clear() { List__string__Clear(this); }
    bool Contains(::uString* item) { return List__string__Contains(this, item); }
    void EnsureCapacity() { List__string__EnsureCapacity(this); }
    int Count() { return List__string__get_Count(this); }
    ::uString* Item(int index) { return List__string__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__string GetEnumerator();
    int IndexOf(::uString* item) { return List__string__IndexOf(this, item); }
    void Insert(int index, ::uString* item) { List__string__Insert(this, index, item); }
    bool Remove(::uString* item) { return List__string__Remove(this, item); }
    void RemoveAt(int index) { List__string__RemoveAt(this, index); }
    void Item(int index, ::uString* value) { List__string__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__string__Sort(this, comparer); }
    ::uArray* ToArray() { return List__string__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__string List__string::GetEnumerator() { return List__string__GetEnumerator(this); }

}}}


#endif
