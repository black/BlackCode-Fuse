// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_I_MIXER_MASTER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_I_MIXER_MASTER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_IMixerMaster; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_IMixerMaster;

struct List__Fuse_Animations_IMixerMaster__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_IMixerMaster __interface_0;
};

List__Fuse_Animations_IMixerMaster__uType* List__Fuse_Animations_IMixerMaster__typeof();

::uObject* List__Fuse_Animations_IMixerMaster__GetEnumerator_boxed(List__Fuse_Animations_IMixerMaster* __this);
void List__Fuse_Animations_IMixerMaster___ObjInit(List__Fuse_Animations_IMixerMaster* __this);
void List__Fuse_Animations_IMixerMaster___ObjInit_1(List__Fuse_Animations_IMixerMaster* __this, int capacity);
void List__Fuse_Animations_IMixerMaster__Add(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__AddRange(List__Fuse_Animations_IMixerMaster* __this, ::uObject* items);
void List__Fuse_Animations_IMixerMaster__BoundsCheck(List__Fuse_Animations_IMixerMaster* __this, int index);
void List__Fuse_Animations_IMixerMaster__Clear(List__Fuse_Animations_IMixerMaster* __this);
bool List__Fuse_Animations_IMixerMaster__Contains(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__EnsureCapacity(List__Fuse_Animations_IMixerMaster* __this);
int List__Fuse_Animations_IMixerMaster__get_Count(List__Fuse_Animations_IMixerMaster* __this);
::uObject* List__Fuse_Animations_IMixerMaster__get_Item(List__Fuse_Animations_IMixerMaster* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster List__Fuse_Animations_IMixerMaster__GetEnumerator(List__Fuse_Animations_IMixerMaster* __this);
int List__Fuse_Animations_IMixerMaster__IndexOf(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__Insert(List__Fuse_Animations_IMixerMaster* __this, int index, ::uObject* item);
List__Fuse_Animations_IMixerMaster* List__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this);
List__Fuse_Animations_IMixerMaster* List__Fuse_Animations_IMixerMaster__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_IMixerMaster__Remove(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__RemoveAt(List__Fuse_Animations_IMixerMaster* __this, int index);
void List__Fuse_Animations_IMixerMaster__set_Item(List__Fuse_Animations_IMixerMaster* __this, int index, ::uObject* value);
void List__Fuse_Animations_IMixerMaster__Sort(List__Fuse_Animations_IMixerMaster* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_IMixerMaster__ToArray(List__Fuse_Animations_IMixerMaster* __this);

struct List__Fuse_Animations_IMixerMaster : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_IMixerMaster__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_IMixerMaster___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_IMixerMaster___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Animations_IMixerMaster__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_IMixerMaster__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_IMixerMaster__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_IMixerMaster__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Animations_IMixerMaster__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_IMixerMaster__EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_IMixerMaster__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Animations_IMixerMaster__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_Animations_IMixerMaster__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_Animations_IMixerMaster__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_Animations_IMixerMaster__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_IMixerMaster__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Animations_IMixerMaster__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_IMixerMaster__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_IMixerMaster__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_IMixerMaster.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster List__Fuse_Animations_IMixerMaster::GetEnumerator() { return List__Fuse_Animations_IMixerMaster__GetEnumerator(this); }

}}}


#endif
