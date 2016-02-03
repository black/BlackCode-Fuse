// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_UNO_EVENT_ARGS__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_UNO_EVENT_ARGS__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Uno_EventArgs_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_EventArgs; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_EventArgs_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Uno_EventArgs_;

struct List__Fuse_Animations_MixerHandle_Uno_EventArgs___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Uno_EventArgs_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Uno_EventArgs___uType* List__Fuse_Animations_MixerHandle_Uno_EventArgs___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Uno_EventArgs___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs____ObjInit(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs____ObjInit_1(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___Add(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___AddRange(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___BoundsCheck(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, int index);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___Clear(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this);
bool List__Fuse_Animations_MixerHandle_Uno_EventArgs___Contains(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___EnsureCapacity(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this);
int List__Fuse_Animations_MixerHandle_Uno_EventArgs___get_Count(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this);
::app::Fuse::Animations::MixerHandle__Uno_EventArgs* List__Fuse_Animations_MixerHandle_Uno_EventArgs___get_Item(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Uno_EventArgs_ List__Fuse_Animations_MixerHandle_Uno_EventArgs___GetEnumerator(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this);
int List__Fuse_Animations_MixerHandle_Uno_EventArgs___IndexOf(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___Insert(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, int index, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item);
List__Fuse_Animations_MixerHandle_Uno_EventArgs_* List__Fuse_Animations_MixerHandle_Uno_EventArgs___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Uno_EventArgs_* List__Fuse_Animations_MixerHandle_Uno_EventArgs___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Uno_EventArgs___Remove(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___RemoveAt(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, int index);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___set_Item(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, int index, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* value);
void List__Fuse_Animations_MixerHandle_Uno_EventArgs___Sort(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Uno_EventArgs___ToArray(List__Fuse_Animations_MixerHandle_Uno_EventArgs_* __this);

struct List__Fuse_Animations_MixerHandle_Uno_EventArgs_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Uno_EventArgs____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Uno_EventArgs____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item) { List__Fuse_Animations_MixerHandle_Uno_EventArgs___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Uno_EventArgs___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Uno_EventArgs___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Uno_EventArgs___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item) { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Uno_EventArgs___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* Item(int index) { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Uno_EventArgs_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item) { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item) { List__Fuse_Animations_MixerHandle_Uno_EventArgs___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Uno_EventArgs* item) { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Uno_EventArgs___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* value) { List__Fuse_Animations_MixerHandle_Uno_EventArgs___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Uno_EventArgs___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_U-e843a65b.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Uno_EventArgs_ List__Fuse_Animations_MixerHandle_Uno_EventArgs_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Uno_EventArgs___GetEnumerator(this); }

}}}


#endif
