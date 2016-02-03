// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__INT4_H__
#define __APP_UNO_COLLECTIONS_LIST__INT4_H__

#include <app/Uno.Collections.ICollection__int4.h>
#include <app/Uno.Collections.IEnumerable__int4.h>
#include <app/Uno.Collections.IList__int4.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__int4; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__int4;

struct List__int4__uType : ::uClassType
{
    ::app::Uno::Collections::IList__int4 __interface_0;
    ::app::Uno::Collections::ICollection__int4 __interface_1;
    ::app::Uno::Collections::IEnumerable__int4 __interface_2;
};

List__int4__uType* List__int4__typeof();

::uObject* List__int4__GetEnumerator_boxed(List__int4* __this);
void List__int4___ObjInit(List__int4* __this);
void List__int4___ObjInit_1(List__int4* __this, int capacity);
void List__int4__Add(List__int4* __this, ::app::Uno::Int4 item);
void List__int4__AddRange(List__int4* __this, ::uObject* items);
void List__int4__BoundsCheck(List__int4* __this, int index);
void List__int4__Clear(List__int4* __this);
bool List__int4__Contains(List__int4* __this, ::app::Uno::Int4 item);
void List__int4__EnsureCapacity(List__int4* __this);
int List__int4__get_Count(List__int4* __this);
::app::Uno::Int4 List__int4__get_Item(List__int4* __this, int index);
::app::Uno::Collections::List1_Enumerator__int4 List__int4__GetEnumerator(List__int4* __this);
int List__int4__IndexOf(List__int4* __this, ::app::Uno::Int4 item);
void List__int4__Insert(List__int4* __this, int index, ::app::Uno::Int4 item);
List__int4* List__int4__New_1(::uStatic* __this);
List__int4* List__int4__New_2(::uStatic* __this, int capacity);
bool List__int4__Remove(List__int4* __this, ::app::Uno::Int4 item);
void List__int4__RemoveAt(List__int4* __this, int index);
void List__int4__set_Item(List__int4* __this, int index, ::app::Uno::Int4 value);
void List__int4__Sort(List__int4* __this, ::uDelegate* comparer);
::uArray* List__int4__ToArray(List__int4* __this);

struct List__int4 : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__int4__GetEnumerator_boxed(this); }
    void _ObjInit() { List__int4___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__int4___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Int4 item);
    void AddRange(::uObject* items) { List__int4__AddRange(this, items); }
    void BoundsCheck(int index) { List__int4__BoundsCheck(this, index); }
    void Clear() { List__int4__Clear(this); }
    bool Contains(::app::Uno::Int4 item);
    void EnsureCapacity() { List__int4__EnsureCapacity(this); }
    int Count() { return List__int4__get_Count(this); }
    ::app::Uno::Int4 Item(int index);
    ::app::Uno::Collections::List1_Enumerator__int4 GetEnumerator();
    int IndexOf(::app::Uno::Int4 item);
    void Insert(int index, ::app::Uno::Int4 item);
    bool Remove(::app::Uno::Int4 item);
    void RemoveAt(int index) { List__int4__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Int4 value);
    void Sort(::uDelegate* comparer) { List__int4__Sort(this, comparer); }
    ::uArray* ToArray() { return List__int4__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__int4.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__int4::Add(::app::Uno::Int4 item) { List__int4__Add(this, item); }
inline bool List__int4::Contains(::app::Uno::Int4 item) { return List__int4__Contains(this, item); }
inline ::app::Uno::Int4 List__int4::Item(int index) { return List__int4__get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__int4 List__int4::GetEnumerator() { return List__int4__GetEnumerator(this); }
inline int List__int4::IndexOf(::app::Uno::Int4 item) { return List__int4__IndexOf(this, item); }
inline void List__int4::Insert(int index, ::app::Uno::Int4 item) { List__int4__Insert(this, index, item); }
inline bool List__int4::Remove(::app::Uno::Int4 item) { return List__int4__Remove(this, item); }
inline void List__int4::Item(int index, ::app::Uno::Int4 value) { List__int4__set_Item(this, index, value); }

}}}


#endif
