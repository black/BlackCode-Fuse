// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_NAVIGATI_A2FB39D8_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_NAVIGATI_A2FB39D8_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-96a10878.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_;

struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___uType* List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Add(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Clear(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Contains(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_ List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Insert(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item);
List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Remove(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* value);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Sort(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* item) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* value) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-44344a6a.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_ List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___GetEnumerator(this); }

}}}


#endif
