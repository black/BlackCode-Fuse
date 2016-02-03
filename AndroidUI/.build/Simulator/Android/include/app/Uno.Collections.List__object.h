// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__OBJECT_H__
#define __APP_UNO_COLLECTIONS_LIST__OBJECT_H__

#include <app/Uno.Collections.IEnumerable__object.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__object;

struct List__object__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__object __interface_0;
};

List__object__uType* List__object__typeof();

::uObject* List__object__GetEnumerator_boxed(List__object* __this);
void List__object___ObjInit(List__object* __this);
void List__object___ObjInit_1(List__object* __this, int capacity);
void List__object__Add(List__object* __this, ::uObject* item);
void List__object__AddRange(List__object* __this, ::uObject* items);
void List__object__BoundsCheck(List__object* __this, int index);
void List__object__Clear(List__object* __this);
bool List__object__Contains(List__object* __this, ::uObject* item);
void List__object__EnsureCapacity(List__object* __this);
int List__object__get_Count(List__object* __this);
::uObject* List__object__get_Item(List__object* __this, int index);
::app::Uno::Collections::List1_Enumerator__object List__object__GetEnumerator(List__object* __this);
int List__object__IndexOf(List__object* __this, ::uObject* item);
void List__object__Insert(List__object* __this, int index, ::uObject* item);
List__object* List__object__New_1(::uStatic* __this);
List__object* List__object__New_2(::uStatic* __this, int capacity);
bool List__object__Remove(List__object* __this, ::uObject* item);
void List__object__RemoveAt(List__object* __this, int index);
void List__object__set_Item(List__object* __this, int index, ::uObject* value);
void List__object__Sort(List__object* __this, ::uDelegate* comparer);
::uArray* List__object__ToArray(List__object* __this);

struct List__object : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__object__GetEnumerator_boxed(this); }
    void _ObjInit() { List__object___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__object___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__object__Add(this, item); }
    void AddRange(::uObject* items) { List__object__AddRange(this, items); }
    void BoundsCheck(int index) { List__object__BoundsCheck(this, index); }
    void Clear() { List__object__Clear(this); }
    bool Contains(::uObject* item) { return List__object__Contains(this, item); }
    void EnsureCapacity() { List__object__EnsureCapacity(this); }
    int Count() { return List__object__get_Count(this); }
    ::uObject* Item(int index) { return List__object__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__object GetEnumerator();
    int IndexOf(::uObject* item) { return List__object__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__object__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__object__Remove(this, item); }
    void RemoveAt(int index) { List__object__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__object__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__object__Sort(this, comparer); }
    ::uArray* ToArray() { return List__object__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__object.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__object List__object::GetEnumerator() { return List__object__GetEnumerator(this); }

}}}


#endif
