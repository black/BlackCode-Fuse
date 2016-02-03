// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_DRAWING__3F43563F_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_DRAWING__3F43563F_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-7866b3e4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_;

struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___uType* List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Add(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Clear(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Contains(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_ List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Insert(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item);
List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Remove(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* value);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Sort(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* item) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* value) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-1769ca46.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_ List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___GetEnumerator(this); }

}}}


#endif
