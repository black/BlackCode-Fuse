// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_ANIMATOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Animator; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_Animator; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_Animator;

struct List__Fuse_Animations_Animator__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Animations_Animator __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_Animator __interface_2;
};

List__Fuse_Animations_Animator__uType* List__Fuse_Animations_Animator__typeof();

::uObject* List__Fuse_Animations_Animator__GetEnumerator_boxed(List__Fuse_Animations_Animator* __this);
void List__Fuse_Animations_Animator___ObjInit(List__Fuse_Animations_Animator* __this);
void List__Fuse_Animations_Animator___ObjInit_1(List__Fuse_Animations_Animator* __this, int capacity);
void List__Fuse_Animations_Animator__Add(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item);
void List__Fuse_Animations_Animator__AddRange(List__Fuse_Animations_Animator* __this, ::uObject* items);
void List__Fuse_Animations_Animator__BoundsCheck(List__Fuse_Animations_Animator* __this, int index);
void List__Fuse_Animations_Animator__Clear(List__Fuse_Animations_Animator* __this);
bool List__Fuse_Animations_Animator__Contains(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item);
void List__Fuse_Animations_Animator__EnsureCapacity(List__Fuse_Animations_Animator* __this);
int List__Fuse_Animations_Animator__get_Count(List__Fuse_Animations_Animator* __this);
::app::Fuse::Animations::Animator* List__Fuse_Animations_Animator__get_Item(List__Fuse_Animations_Animator* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator List__Fuse_Animations_Animator__GetEnumerator(List__Fuse_Animations_Animator* __this);
int List__Fuse_Animations_Animator__IndexOf(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item);
void List__Fuse_Animations_Animator__Insert(List__Fuse_Animations_Animator* __this, int index, ::app::Fuse::Animations::Animator* item);
List__Fuse_Animations_Animator* List__Fuse_Animations_Animator__New_1(::uStatic* __this);
List__Fuse_Animations_Animator* List__Fuse_Animations_Animator__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_Animator__Remove(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item);
void List__Fuse_Animations_Animator__RemoveAt(List__Fuse_Animations_Animator* __this, int index);
void List__Fuse_Animations_Animator__set_Item(List__Fuse_Animations_Animator* __this, int index, ::app::Fuse::Animations::Animator* value);
void List__Fuse_Animations_Animator__Sort(List__Fuse_Animations_Animator* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_Animator__ToArray(List__Fuse_Animations_Animator* __this);

struct List__Fuse_Animations_Animator : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_Animator__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_Animator___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_Animator___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::Animator* item) { List__Fuse_Animations_Animator__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_Animator__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_Animator__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_Animator__Clear(this); }
    bool Contains(::app::Fuse::Animations::Animator* item) { return List__Fuse_Animations_Animator__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_Animator__EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_Animator__get_Count(this); }
    ::app::Fuse::Animations::Animator* Item(int index) { return List__Fuse_Animations_Animator__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator GetEnumerator();
    int IndexOf(::app::Fuse::Animations::Animator* item) { return List__Fuse_Animations_Animator__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::Animator* item) { List__Fuse_Animations_Animator__Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::Animator* item) { return List__Fuse_Animations_Animator__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_Animator__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::Animator* value) { List__Fuse_Animations_Animator__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_Animator__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_Animator__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_Animator.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator List__Fuse_Animations_Animator::GetEnumerator() { return List__Fuse_Animations_Animator__GetEnumerator(this); }

}}}


#endif
