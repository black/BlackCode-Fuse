// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FLOAT3_H__
#define __APP_UNO_COLLECTIONS_LIST__FLOAT3_H__

#include <app/Uno.Collections.IEnumerable__float3.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__float3; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__float3;

struct List__float3__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float3 __interface_0;
};

List__float3__uType* List__float3__typeof();

::uObject* List__float3__GetEnumerator_boxed(List__float3* __this);
void List__float3___ObjInit(List__float3* __this);
void List__float3___ObjInit_1(List__float3* __this, int capacity);
void List__float3__Add(List__float3* __this, ::app::Uno::Float3 item);
void List__float3__AddRange(List__float3* __this, ::uObject* items);
void List__float3__BoundsCheck(List__float3* __this, int index);
void List__float3__Clear(List__float3* __this);
bool List__float3__Contains(List__float3* __this, ::app::Uno::Float3 item);
void List__float3__EnsureCapacity(List__float3* __this);
int List__float3__get_Count(List__float3* __this);
::app::Uno::Float3 List__float3__get_Item(List__float3* __this, int index);
::app::Uno::Collections::List1_Enumerator__float3 List__float3__GetEnumerator(List__float3* __this);
int List__float3__IndexOf(List__float3* __this, ::app::Uno::Float3 item);
void List__float3__Insert(List__float3* __this, int index, ::app::Uno::Float3 item);
List__float3* List__float3__New_1(::uStatic* __this);
List__float3* List__float3__New_2(::uStatic* __this, int capacity);
bool List__float3__Remove(List__float3* __this, ::app::Uno::Float3 item);
void List__float3__RemoveAt(List__float3* __this, int index);
void List__float3__set_Item(List__float3* __this, int index, ::app::Uno::Float3 value);
void List__float3__Sort(List__float3* __this, ::uDelegate* comparer);
::uArray* List__float3__ToArray(List__float3* __this);

struct List__float3 : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__float3__GetEnumerator_boxed(this); }
    void _ObjInit() { List__float3___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__float3___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Float3 item);
    void AddRange(::uObject* items) { List__float3__AddRange(this, items); }
    void BoundsCheck(int index) { List__float3__BoundsCheck(this, index); }
    void Clear() { List__float3__Clear(this); }
    bool Contains(::app::Uno::Float3 item);
    void EnsureCapacity() { List__float3__EnsureCapacity(this); }
    int Count() { return List__float3__get_Count(this); }
    ::app::Uno::Float3 Item(int index);
    ::app::Uno::Collections::List1_Enumerator__float3 GetEnumerator();
    int IndexOf(::app::Uno::Float3 item);
    void Insert(int index, ::app::Uno::Float3 item);
    bool Remove(::app::Uno::Float3 item);
    void RemoveAt(int index) { List__float3__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Float3 value);
    void Sort(::uDelegate* comparer) { List__float3__Sort(this, comparer); }
    ::uArray* ToArray() { return List__float3__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__float3.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__float3::Add(::app::Uno::Float3 item) { List__float3__Add(this, item); }
inline bool List__float3::Contains(::app::Uno::Float3 item) { return List__float3__Contains(this, item); }
inline ::app::Uno::Float3 List__float3::Item(int index) { return List__float3__get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__float3 List__float3::GetEnumerator() { return List__float3__GetEnumerator(this); }
inline int List__float3::IndexOf(::app::Uno::Float3 item) { return List__float3__IndexOf(this, item); }
inline void List__float3::Insert(int index, ::app::Uno::Float3 item) { List__float3__Insert(this, index, item); }
inline bool List__float3::Remove(::app::Uno::Float3 item) { return List__float3__Remove(this, item); }
inline void List__float3::Item(int index, ::app::Uno::Float3 value) { List__float3__set_Item(this, index, value); }

}}}


#endif
