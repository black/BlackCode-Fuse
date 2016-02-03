// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_KEYFRAME_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_KEYFRAME_H__

#include <app/Uno.Collections.ICollection__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Animations_Keyframe.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Keyframe.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Keyframe; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_Keyframe; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_Keyframe;

struct List__Fuse_Animations_Keyframe__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Animations_Keyframe __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Animations_Keyframe __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_Keyframe __interface_2;
};

List__Fuse_Animations_Keyframe__uType* List__Fuse_Animations_Keyframe__typeof();

::uObject* List__Fuse_Animations_Keyframe__GetEnumerator_boxed(List__Fuse_Animations_Keyframe* __this);
void List__Fuse_Animations_Keyframe___ObjInit(List__Fuse_Animations_Keyframe* __this);
void List__Fuse_Animations_Keyframe___ObjInit_1(List__Fuse_Animations_Keyframe* __this, int capacity);
void List__Fuse_Animations_Keyframe__Add(List__Fuse_Animations_Keyframe* __this, ::app::Fuse::Animations::Keyframe* item);
void List__Fuse_Animations_Keyframe__AddRange(List__Fuse_Animations_Keyframe* __this, ::uObject* items);
void List__Fuse_Animations_Keyframe__BoundsCheck(List__Fuse_Animations_Keyframe* __this, int index);
void List__Fuse_Animations_Keyframe__Clear(List__Fuse_Animations_Keyframe* __this);
bool List__Fuse_Animations_Keyframe__Contains(List__Fuse_Animations_Keyframe* __this, ::app::Fuse::Animations::Keyframe* item);
void List__Fuse_Animations_Keyframe__EnsureCapacity(List__Fuse_Animations_Keyframe* __this);
int List__Fuse_Animations_Keyframe__get_Count(List__Fuse_Animations_Keyframe* __this);
::app::Fuse::Animations::Keyframe* List__Fuse_Animations_Keyframe__get_Item(List__Fuse_Animations_Keyframe* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Keyframe List__Fuse_Animations_Keyframe__GetEnumerator(List__Fuse_Animations_Keyframe* __this);
int List__Fuse_Animations_Keyframe__IndexOf(List__Fuse_Animations_Keyframe* __this, ::app::Fuse::Animations::Keyframe* item);
void List__Fuse_Animations_Keyframe__Insert(List__Fuse_Animations_Keyframe* __this, int index, ::app::Fuse::Animations::Keyframe* item);
List__Fuse_Animations_Keyframe* List__Fuse_Animations_Keyframe__New_1(::uStatic* __this);
List__Fuse_Animations_Keyframe* List__Fuse_Animations_Keyframe__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_Keyframe__Remove(List__Fuse_Animations_Keyframe* __this, ::app::Fuse::Animations::Keyframe* item);
void List__Fuse_Animations_Keyframe__RemoveAt(List__Fuse_Animations_Keyframe* __this, int index);
void List__Fuse_Animations_Keyframe__set_Item(List__Fuse_Animations_Keyframe* __this, int index, ::app::Fuse::Animations::Keyframe* value);
void List__Fuse_Animations_Keyframe__Sort(List__Fuse_Animations_Keyframe* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_Keyframe__ToArray(List__Fuse_Animations_Keyframe* __this);

struct List__Fuse_Animations_Keyframe : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_Keyframe__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_Keyframe___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_Keyframe___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::Keyframe* item) { List__Fuse_Animations_Keyframe__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_Keyframe__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_Keyframe__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_Keyframe__Clear(this); }
    bool Contains(::app::Fuse::Animations::Keyframe* item) { return List__Fuse_Animations_Keyframe__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_Keyframe__EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_Keyframe__get_Count(this); }
    ::app::Fuse::Animations::Keyframe* Item(int index) { return List__Fuse_Animations_Keyframe__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Keyframe GetEnumerator();
    int IndexOf(::app::Fuse::Animations::Keyframe* item) { return List__Fuse_Animations_Keyframe__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::Keyframe* item) { List__Fuse_Animations_Keyframe__Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::Keyframe* item) { return List__Fuse_Animations_Keyframe__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_Keyframe__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::Keyframe* value) { List__Fuse_Animations_Keyframe__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_Keyframe__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_Keyframe__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_Keyframe.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Keyframe List__Fuse_Animations_Keyframe::GetEnumerator() { return List__Fuse_Animations_Keyframe__GetEnumerator(this); }

}}}


#endif
