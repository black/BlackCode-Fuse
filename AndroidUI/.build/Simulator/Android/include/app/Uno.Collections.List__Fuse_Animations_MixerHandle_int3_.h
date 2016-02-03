// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_INT3__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_INT3__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_int3_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int3; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_int3_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_int3_;

struct List__Fuse_Animations_MixerHandle_int3___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_int3_ __interface_0;
};

List__Fuse_Animations_MixerHandle_int3___uType* List__Fuse_Animations_MixerHandle_int3___typeof();

::uObject* List__Fuse_Animations_MixerHandle_int3___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_int3_* __this);
void List__Fuse_Animations_MixerHandle_int3____ObjInit(List__Fuse_Animations_MixerHandle_int3_* __this);
void List__Fuse_Animations_MixerHandle_int3____ObjInit_1(List__Fuse_Animations_MixerHandle_int3_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_int3___Add(List__Fuse_Animations_MixerHandle_int3_* __this, ::app::Fuse::Animations::MixerHandle__int3* item);
void List__Fuse_Animations_MixerHandle_int3___AddRange(List__Fuse_Animations_MixerHandle_int3_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_int3___BoundsCheck(List__Fuse_Animations_MixerHandle_int3_* __this, int index);
void List__Fuse_Animations_MixerHandle_int3___Clear(List__Fuse_Animations_MixerHandle_int3_* __this);
bool List__Fuse_Animations_MixerHandle_int3___Contains(List__Fuse_Animations_MixerHandle_int3_* __this, ::app::Fuse::Animations::MixerHandle__int3* item);
void List__Fuse_Animations_MixerHandle_int3___EnsureCapacity(List__Fuse_Animations_MixerHandle_int3_* __this);
int List__Fuse_Animations_MixerHandle_int3___get_Count(List__Fuse_Animations_MixerHandle_int3_* __this);
::app::Fuse::Animations::MixerHandle__int3* List__Fuse_Animations_MixerHandle_int3___get_Item(List__Fuse_Animations_MixerHandle_int3_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_int3_ List__Fuse_Animations_MixerHandle_int3___GetEnumerator(List__Fuse_Animations_MixerHandle_int3_* __this);
int List__Fuse_Animations_MixerHandle_int3___IndexOf(List__Fuse_Animations_MixerHandle_int3_* __this, ::app::Fuse::Animations::MixerHandle__int3* item);
void List__Fuse_Animations_MixerHandle_int3___Insert(List__Fuse_Animations_MixerHandle_int3_* __this, int index, ::app::Fuse::Animations::MixerHandle__int3* item);
List__Fuse_Animations_MixerHandle_int3_* List__Fuse_Animations_MixerHandle_int3___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_int3_* List__Fuse_Animations_MixerHandle_int3___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_int3___Remove(List__Fuse_Animations_MixerHandle_int3_* __this, ::app::Fuse::Animations::MixerHandle__int3* item);
void List__Fuse_Animations_MixerHandle_int3___RemoveAt(List__Fuse_Animations_MixerHandle_int3_* __this, int index);
void List__Fuse_Animations_MixerHandle_int3___set_Item(List__Fuse_Animations_MixerHandle_int3_* __this, int index, ::app::Fuse::Animations::MixerHandle__int3* value);
void List__Fuse_Animations_MixerHandle_int3___Sort(List__Fuse_Animations_MixerHandle_int3_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_int3___ToArray(List__Fuse_Animations_MixerHandle_int3_* __this);

struct List__Fuse_Animations_MixerHandle_int3_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_int3___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_int3____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_int3____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__int3* item) { List__Fuse_Animations_MixerHandle_int3___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_int3___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_int3___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_int3___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__int3* item) { return List__Fuse_Animations_MixerHandle_int3___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_int3___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_int3___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__int3* Item(int index) { return List__Fuse_Animations_MixerHandle_int3___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_int3_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__int3* item) { return List__Fuse_Animations_MixerHandle_int3___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__int3* item) { List__Fuse_Animations_MixerHandle_int3___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__int3* item) { return List__Fuse_Animations_MixerHandle_int3___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_int3___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__int3* value) { List__Fuse_Animations_MixerHandle_int3___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_int3___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_int3___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_int3_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_int3_ List__Fuse_Animations_MixerHandle_int3_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_int3___GetEnumerator(this); }

}}}


#endif
