// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FLOAT2_H__
#define __APP_UNO_COLLECTIONS_LIST__FLOAT2_H__

#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IList__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__float2; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__float2;

struct List__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IList__float2 __interface_0;
    ::app::Uno::Collections::IEnumerable__float2 __interface_1;
};

List__float2__uType* List__float2__typeof();

::uObject* List__float2__GetEnumerator_boxed(List__float2* __this);
void List__float2___ObjInit(List__float2* __this);
void List__float2___ObjInit_1(List__float2* __this, int capacity);
void List__float2__Add(List__float2* __this, ::app::Uno::Float2 item);
void List__float2__AddRange(List__float2* __this, ::uObject* items);
void List__float2__BoundsCheck(List__float2* __this, int index);
void List__float2__Clear(List__float2* __this);
bool List__float2__Contains(List__float2* __this, ::app::Uno::Float2 item);
void List__float2__EnsureCapacity(List__float2* __this);
int List__float2__get_Count(List__float2* __this);
::app::Uno::Float2 List__float2__get_Item(List__float2* __this, int index);
::app::Uno::Collections::List1_Enumerator__float2 List__float2__GetEnumerator(List__float2* __this);
int List__float2__IndexOf(List__float2* __this, ::app::Uno::Float2 item);
void List__float2__Insert(List__float2* __this, int index, ::app::Uno::Float2 item);
List__float2* List__float2__New_1(::uStatic* __this);
List__float2* List__float2__New_2(::uStatic* __this, int capacity);
bool List__float2__Remove(List__float2* __this, ::app::Uno::Float2 item);
void List__float2__RemoveAt(List__float2* __this, int index);
void List__float2__set_Item(List__float2* __this, int index, ::app::Uno::Float2 value);
void List__float2__Sort(List__float2* __this, ::uDelegate* comparer);
::uArray* List__float2__ToArray(List__float2* __this);

struct List__float2 : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__float2__GetEnumerator_boxed(this); }
    void _ObjInit() { List__float2___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__float2___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Float2 item);
    void AddRange(::uObject* items) { List__float2__AddRange(this, items); }
    void BoundsCheck(int index) { List__float2__BoundsCheck(this, index); }
    void Clear() { List__float2__Clear(this); }
    bool Contains(::app::Uno::Float2 item);
    void EnsureCapacity() { List__float2__EnsureCapacity(this); }
    int Count() { return List__float2__get_Count(this); }
    ::app::Uno::Float2 Item(int index);
    ::app::Uno::Collections::List1_Enumerator__float2 GetEnumerator();
    int IndexOf(::app::Uno::Float2 item);
    void Insert(int index, ::app::Uno::Float2 item);
    bool Remove(::app::Uno::Float2 item);
    void RemoveAt(int index) { List__float2__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Float2 value);
    void Sort(::uDelegate* comparer) { List__float2__Sort(this, comparer); }
    ::uArray* ToArray() { return List__float2__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__float2.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__float2::Add(::app::Uno::Float2 item) { List__float2__Add(this, item); }
inline bool List__float2::Contains(::app::Uno::Float2 item) { return List__float2__Contains(this, item); }
inline ::app::Uno::Float2 List__float2::Item(int index) { return List__float2__get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__float2 List__float2::GetEnumerator() { return List__float2__GetEnumerator(this); }
inline int List__float2::IndexOf(::app::Uno::Float2 item) { return List__float2__IndexOf(this, item); }
inline void List__float2::Insert(int index, ::app::Uno::Float2 item) { List__float2__Insert(this, index, item); }
inline bool List__float2::Remove(::app::Uno::Float2 item) { return List__float2__Remove(this, item); }
inline void List__float2::Item(int index, ::app::Uno::Float2 value) { List__float2__set_Item(this, index, value); }

}}}


#endif
