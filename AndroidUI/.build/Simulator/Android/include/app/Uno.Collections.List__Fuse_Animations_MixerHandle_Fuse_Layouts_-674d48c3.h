// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS__674D48C3_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS__674D48C3_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-4b15a010.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Orientation; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_;

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___uType* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Add(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Clear(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Contains(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Insert(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Remove(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* value);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Sort(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* value) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-ee9332a8.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___GetEnumerator(this); }

}}}


#endif
