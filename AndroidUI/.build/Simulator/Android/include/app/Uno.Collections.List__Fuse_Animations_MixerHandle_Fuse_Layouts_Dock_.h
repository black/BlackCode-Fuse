// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS_DOCK__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_LAYOUTS_DOCK__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_L-cf5aa35c.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Dock; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_;

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___uType* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Add(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Clear(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Contains(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Insert(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Remove(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* value);
void List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Sort(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* item) { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* value) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-317b6cb9.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_ List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___GetEnumerator(this); }

}}}


#endif
