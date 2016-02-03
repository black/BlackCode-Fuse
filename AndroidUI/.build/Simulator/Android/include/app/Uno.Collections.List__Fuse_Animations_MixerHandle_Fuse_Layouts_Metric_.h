// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS_METRIC__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS_METRIC__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-aae5abc5.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Metric; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_;

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___uType* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Add(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Clear(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Contains(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Insert(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Remove(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* value);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Sort(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* value) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-92bf0fa1.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___GetEnumerator(this); }

}}}


#endif
