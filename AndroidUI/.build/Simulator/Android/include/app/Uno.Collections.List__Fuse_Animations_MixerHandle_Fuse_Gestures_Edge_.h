// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_GESTURES_EDGE__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_GESTURES_EDGE__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_G-b726a16b.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Gestures_Edge; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_;

struct List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___uType* List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Add(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Clear(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Contains(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_ List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Insert(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item);
List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Remove(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* value);
void List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Sort(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item) { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item) { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* item) { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* value) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-5a8f649d.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_ List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___GetEnumerator(this); }

}}}


#endif
