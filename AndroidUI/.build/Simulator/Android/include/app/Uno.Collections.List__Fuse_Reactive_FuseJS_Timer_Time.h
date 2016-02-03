// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_FuseJS_Timer_Time.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer_Time; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Reactive_FuseJS_Timer_Time;

struct List__Fuse_Reactive_FuseJS_Timer_Time__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Reactive_FuseJS_Timer_Time __interface_0;
};

List__Fuse_Reactive_FuseJS_Timer_Time__uType* List__Fuse_Reactive_FuseJS_Timer_Time__typeof();

::uObject* List__Fuse_Reactive_FuseJS_Timer_Time__GetEnumerator_boxed(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
void List__Fuse_Reactive_FuseJS_Timer_Time___ObjInit(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
void List__Fuse_Reactive_FuseJS_Timer_Time___ObjInit_1(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int capacity);
void List__Fuse_Reactive_FuseJS_Timer_Time__Add(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer_Time* item);
void List__Fuse_Reactive_FuseJS_Timer_Time__AddRange(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::uObject* items);
void List__Fuse_Reactive_FuseJS_Timer_Time__BoundsCheck(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index);
void List__Fuse_Reactive_FuseJS_Timer_Time__Clear(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
bool List__Fuse_Reactive_FuseJS_Timer_Time__Contains(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer_Time* item);
void List__Fuse_Reactive_FuseJS_Timer_Time__EnsureCapacity(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
int List__Fuse_Reactive_FuseJS_Timer_Time__get_Count(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
::app::Fuse::Reactive::FuseJS::Timer_Time* List__Fuse_Reactive_FuseJS_Timer_Time__get_Item(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time List__Fuse_Reactive_FuseJS_Timer_Time__GetEnumerator(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
int List__Fuse_Reactive_FuseJS_Timer_Time__IndexOf(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer_Time* item);
void List__Fuse_Reactive_FuseJS_Timer_Time__Insert(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index, ::app::Fuse::Reactive::FuseJS::Timer_Time* item);
List__Fuse_Reactive_FuseJS_Timer_Time* List__Fuse_Reactive_FuseJS_Timer_Time__New_1(::uStatic* __this);
List__Fuse_Reactive_FuseJS_Timer_Time* List__Fuse_Reactive_FuseJS_Timer_Time__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Reactive_FuseJS_Timer_Time__Remove(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer_Time* item);
void List__Fuse_Reactive_FuseJS_Timer_Time__RemoveAt(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index);
void List__Fuse_Reactive_FuseJS_Timer_Time__set_Item(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index, ::app::Fuse::Reactive::FuseJS::Timer_Time* value);
void List__Fuse_Reactive_FuseJS_Timer_Time__Sort(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Reactive_FuseJS_Timer_Time__ToArray(List__Fuse_Reactive_FuseJS_Timer_Time* __this);

struct List__Fuse_Reactive_FuseJS_Timer_Time : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Reactive_FuseJS_Timer_Time__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Reactive_FuseJS_Timer_Time___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Reactive_FuseJS_Timer_Time___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Reactive::FuseJS::Timer_Time* item) { List__Fuse_Reactive_FuseJS_Timer_Time__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Reactive_FuseJS_Timer_Time__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Reactive_FuseJS_Timer_Time__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Reactive_FuseJS_Timer_Time__Clear(this); }
    bool Contains(::app::Fuse::Reactive::FuseJS::Timer_Time* item) { return List__Fuse_Reactive_FuseJS_Timer_Time__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Reactive_FuseJS_Timer_Time__EnsureCapacity(this); }
    int Count() { return List__Fuse_Reactive_FuseJS_Timer_Time__get_Count(this); }
    ::app::Fuse::Reactive::FuseJS::Timer_Time* Item(int index) { return List__Fuse_Reactive_FuseJS_Timer_Time__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time GetEnumerator();
    int IndexOf(::app::Fuse::Reactive::FuseJS::Timer_Time* item) { return List__Fuse_Reactive_FuseJS_Timer_Time__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Reactive::FuseJS::Timer_Time* item) { List__Fuse_Reactive_FuseJS_Timer_Time__Insert(this, index, item); }
    bool Remove(::app::Fuse::Reactive::FuseJS::Timer_Time* item) { return List__Fuse_Reactive_FuseJS_Timer_Time__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Reactive_FuseJS_Timer_Time__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Reactive::FuseJS::Timer_Time* value) { List__Fuse_Reactive_FuseJS_Timer_Time__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Reactive_FuseJS_Timer_Time__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Reactive_FuseJS_Timer_Time__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_FuseJS_Timer_Time List__Fuse_Reactive_FuseJS_Timer_Time::GetEnumerator() { return List__Fuse_Reactive_FuseJS_Timer_Time__GetEnumerator(this); }

}}}


#endif
