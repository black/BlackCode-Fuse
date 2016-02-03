// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FLOAT4_H__
#define __APP_UNO_COLLECTIONS_LIST__FLOAT4_H__

#include <app/Uno.Collections.IEnumerable__float4.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__float4; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__float4;

struct List__float4__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float4 __interface_0;
};

List__float4__uType* List__float4__typeof();

::uObject* List__float4__GetEnumerator_boxed(List__float4* __this);
void List__float4___ObjInit(List__float4* __this);
void List__float4___ObjInit_1(List__float4* __this, int capacity);
void List__float4__Add(List__float4* __this, ::app::Uno::Float4 item);
void List__float4__AddRange(List__float4* __this, ::uObject* items);
void List__float4__BoundsCheck(List__float4* __this, int index);
void List__float4__Clear(List__float4* __this);
bool List__float4__Contains(List__float4* __this, ::app::Uno::Float4 item);
void List__float4__EnsureCapacity(List__float4* __this);
int List__float4__get_Count(List__float4* __this);
::app::Uno::Float4 List__float4__get_Item(List__float4* __this, int index);
::app::Uno::Collections::List1_Enumerator__float4 List__float4__GetEnumerator(List__float4* __this);
int List__float4__IndexOf(List__float4* __this, ::app::Uno::Float4 item);
void List__float4__Insert(List__float4* __this, int index, ::app::Uno::Float4 item);
List__float4* List__float4__New_1(::uStatic* __this);
List__float4* List__float4__New_2(::uStatic* __this, int capacity);
bool List__float4__Remove(List__float4* __this, ::app::Uno::Float4 item);
void List__float4__RemoveAt(List__float4* __this, int index);
void List__float4__set_Item(List__float4* __this, int index, ::app::Uno::Float4 value);
void List__float4__Sort(List__float4* __this, ::uDelegate* comparer);
::uArray* List__float4__ToArray(List__float4* __this);

struct List__float4 : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__float4__GetEnumerator_boxed(this); }
    void _ObjInit() { List__float4___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__float4___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Float4 item);
    void AddRange(::uObject* items) { List__float4__AddRange(this, items); }
    void BoundsCheck(int index) { List__float4__BoundsCheck(this, index); }
    void Clear() { List__float4__Clear(this); }
    bool Contains(::app::Uno::Float4 item);
    void EnsureCapacity() { List__float4__EnsureCapacity(this); }
    int Count() { return List__float4__get_Count(this); }
    ::app::Uno::Float4 Item(int index);
    ::app::Uno::Collections::List1_Enumerator__float4 GetEnumerator();
    int IndexOf(::app::Uno::Float4 item);
    void Insert(int index, ::app::Uno::Float4 item);
    bool Remove(::app::Uno::Float4 item);
    void RemoveAt(int index) { List__float4__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Float4 value);
    void Sort(::uDelegate* comparer) { List__float4__Sort(this, comparer); }
    ::uArray* ToArray() { return List__float4__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__float4.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__float4::Add(::app::Uno::Float4 item) { List__float4__Add(this, item); }
inline bool List__float4::Contains(::app::Uno::Float4 item) { return List__float4__Contains(this, item); }
inline ::app::Uno::Float4 List__float4::Item(int index) { return List__float4__get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__float4 List__float4::GetEnumerator() { return List__float4__GetEnumerator(this); }
inline int List__float4::IndexOf(::app::Uno::Float4 item) { return List__float4__IndexOf(this, item); }
inline void List__float4::Insert(int index, ::app::Uno::Float4 item) { List__float4__Insert(this, index, item); }
inline bool List__float4::Remove(::app::Uno::Float4 item) { return List__float4__Remove(this, item); }
inline void List__float4::Item(int index, ::app::Uno::Float4 value) { List__float4__set_Item(this, index, value); }

}}}


#endif
