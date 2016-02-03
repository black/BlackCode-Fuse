// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_TRIGGERS_STATE__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_TRIGGERS_STATE__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_T-8bfd8235.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_State; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_State_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_;

struct List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Triggers_State_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___uType* List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Add(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Clear(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Contains(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_State_ List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Insert(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item);
List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Remove(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* value);
void List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Sort(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item) { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_State_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item) { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* item) { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* value) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-9effb1d7.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_State_ List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___GetEnumerator(this); }

}}}


#endif
