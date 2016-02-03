// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Navigation_INavigationAnimator; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Navigation_INavigationAnimator;

struct List__Fuse_Navigation_INavigationAnimator__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Navigation_INavigationAnimator __interface_2;
};

List__Fuse_Navigation_INavigationAnimator__uType* List__Fuse_Navigation_INavigationAnimator__typeof();

::uObject* List__Fuse_Navigation_INavigationAnimator__GetEnumerator_boxed(List__Fuse_Navigation_INavigationAnimator* __this);
void List__Fuse_Navigation_INavigationAnimator___ObjInit(List__Fuse_Navigation_INavigationAnimator* __this);
void List__Fuse_Navigation_INavigationAnimator___ObjInit_1(List__Fuse_Navigation_INavigationAnimator* __this, int capacity);
void List__Fuse_Navigation_INavigationAnimator__Add(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* item);
void List__Fuse_Navigation_INavigationAnimator__AddRange(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* items);
void List__Fuse_Navigation_INavigationAnimator__BoundsCheck(List__Fuse_Navigation_INavigationAnimator* __this, int index);
void List__Fuse_Navigation_INavigationAnimator__Clear(List__Fuse_Navigation_INavigationAnimator* __this);
bool List__Fuse_Navigation_INavigationAnimator__Contains(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* item);
void List__Fuse_Navigation_INavigationAnimator__EnsureCapacity(List__Fuse_Navigation_INavigationAnimator* __this);
int List__Fuse_Navigation_INavigationAnimator__get_Count(List__Fuse_Navigation_INavigationAnimator* __this);
::uObject* List__Fuse_Navigation_INavigationAnimator__get_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_INavigationAnimator List__Fuse_Navigation_INavigationAnimator__GetEnumerator(List__Fuse_Navigation_INavigationAnimator* __this);
int List__Fuse_Navigation_INavigationAnimator__IndexOf(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* item);
void List__Fuse_Navigation_INavigationAnimator__Insert(List__Fuse_Navigation_INavigationAnimator* __this, int index, ::uObject* item);
List__Fuse_Navigation_INavigationAnimator* List__Fuse_Navigation_INavigationAnimator__New_1(::uStatic* __this);
List__Fuse_Navigation_INavigationAnimator* List__Fuse_Navigation_INavigationAnimator__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Navigation_INavigationAnimator__Remove(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* item);
void List__Fuse_Navigation_INavigationAnimator__RemoveAt(List__Fuse_Navigation_INavigationAnimator* __this, int index);
void List__Fuse_Navigation_INavigationAnimator__set_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index, ::uObject* value);
void List__Fuse_Navigation_INavigationAnimator__Sort(List__Fuse_Navigation_INavigationAnimator* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Navigation_INavigationAnimator__ToArray(List__Fuse_Navigation_INavigationAnimator* __this);

struct List__Fuse_Navigation_INavigationAnimator : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Navigation_INavigationAnimator__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Navigation_INavigationAnimator___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Navigation_INavigationAnimator___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Navigation_INavigationAnimator__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Navigation_INavigationAnimator__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Navigation_INavigationAnimator__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Navigation_INavigationAnimator__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Navigation_INavigationAnimator__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Navigation_INavigationAnimator__EnsureCapacity(this); }
    int Count() { return List__Fuse_Navigation_INavigationAnimator__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Navigation_INavigationAnimator__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_INavigationAnimator GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_Navigation_INavigationAnimator__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_Navigation_INavigationAnimator__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_Navigation_INavigationAnimator__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Navigation_INavigationAnimator__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Navigation_INavigationAnimator__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Navigation_INavigationAnimator__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Navigation_INavigationAnimator__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Navigation_INavigationAnimator.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_INavigationAnimator List__Fuse_Navigation_INavigationAnimator::GetEnumerator() { return List__Fuse_Navigation_INavigationAnimator__GetEnumerator(this); }

}}}


#endif
