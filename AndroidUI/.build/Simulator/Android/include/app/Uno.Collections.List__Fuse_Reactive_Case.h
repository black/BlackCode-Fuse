// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_CASE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_CASE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IList__Fuse_Reactive_Case.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Case; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Reactive_Case; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Reactive_Case;

struct List__Fuse_Reactive_Case__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Reactive_Case __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Reactive_Case __interface_1;
};

List__Fuse_Reactive_Case__uType* List__Fuse_Reactive_Case__typeof();

::uObject* List__Fuse_Reactive_Case__GetEnumerator_boxed(List__Fuse_Reactive_Case* __this);
void List__Fuse_Reactive_Case___ObjInit(List__Fuse_Reactive_Case* __this);
void List__Fuse_Reactive_Case___ObjInit_1(List__Fuse_Reactive_Case* __this, int capacity);
void List__Fuse_Reactive_Case__Add(List__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item);
void List__Fuse_Reactive_Case__AddRange(List__Fuse_Reactive_Case* __this, ::uObject* items);
void List__Fuse_Reactive_Case__BoundsCheck(List__Fuse_Reactive_Case* __this, int index);
void List__Fuse_Reactive_Case__Clear(List__Fuse_Reactive_Case* __this);
bool List__Fuse_Reactive_Case__Contains(List__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item);
void List__Fuse_Reactive_Case__EnsureCapacity(List__Fuse_Reactive_Case* __this);
int List__Fuse_Reactive_Case__get_Count(List__Fuse_Reactive_Case* __this);
::app::Fuse::Reactive::Case* List__Fuse_Reactive_Case__get_Item(List__Fuse_Reactive_Case* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_Case List__Fuse_Reactive_Case__GetEnumerator(List__Fuse_Reactive_Case* __this);
int List__Fuse_Reactive_Case__IndexOf(List__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item);
void List__Fuse_Reactive_Case__Insert(List__Fuse_Reactive_Case* __this, int index, ::app::Fuse::Reactive::Case* item);
List__Fuse_Reactive_Case* List__Fuse_Reactive_Case__New_1(::uStatic* __this);
List__Fuse_Reactive_Case* List__Fuse_Reactive_Case__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Reactive_Case__Remove(List__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item);
void List__Fuse_Reactive_Case__RemoveAt(List__Fuse_Reactive_Case* __this, int index);
void List__Fuse_Reactive_Case__set_Item(List__Fuse_Reactive_Case* __this, int index, ::app::Fuse::Reactive::Case* value);
void List__Fuse_Reactive_Case__Sort(List__Fuse_Reactive_Case* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Reactive_Case__ToArray(List__Fuse_Reactive_Case* __this);

struct List__Fuse_Reactive_Case : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Reactive_Case__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Reactive_Case___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Reactive_Case___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Reactive::Case* item) { List__Fuse_Reactive_Case__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Reactive_Case__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Reactive_Case__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Reactive_Case__Clear(this); }
    bool Contains(::app::Fuse::Reactive::Case* item) { return List__Fuse_Reactive_Case__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Reactive_Case__EnsureCapacity(this); }
    int Count() { return List__Fuse_Reactive_Case__get_Count(this); }
    ::app::Fuse::Reactive::Case* Item(int index) { return List__Fuse_Reactive_Case__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_Case GetEnumerator();
    int IndexOf(::app::Fuse::Reactive::Case* item) { return List__Fuse_Reactive_Case__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Reactive::Case* item) { List__Fuse_Reactive_Case__Insert(this, index, item); }
    bool Remove(::app::Fuse::Reactive::Case* item) { return List__Fuse_Reactive_Case__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Reactive_Case__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Reactive::Case* value) { List__Fuse_Reactive_Case__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Reactive_Case__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Reactive_Case__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_Case.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_Case List__Fuse_Reactive_Case::GetEnumerator() { return List__Fuse_Reactive_Case__GetEnumerator(this); }

}}}


#endif
