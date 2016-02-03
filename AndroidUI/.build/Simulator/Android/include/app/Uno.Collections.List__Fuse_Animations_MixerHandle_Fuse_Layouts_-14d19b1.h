// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS__14D19B1_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS__14D19B1_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-7ff6e40b.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_FlowDirection; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_;

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___uType* List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Add(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Clear(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Contains(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Insert(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Remove(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* value);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Sort(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* value) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-9650ca3e.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___GetEnumerator(this); }

}}}


#endif
