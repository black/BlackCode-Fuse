// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_UNO_U_X_FILE_SOURCE__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_UNO_U_X_FILE_SOURCE__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Uno_UX-7bf18801.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_;

struct List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Uno_UX_FileSource_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___uType* List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource____ObjInit(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource____ObjInit_1(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Add(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___AddRange(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___BoundsCheck(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, int index);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Clear(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
bool List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Contains(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___EnsureCapacity(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
int List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___get_Count(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___get_Item(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_ List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___GetEnumerator(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
int List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___IndexOf(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Insert(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, int index, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item);
List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Remove(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___RemoveAt(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, int index);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___set_Item(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, int index, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* value);
void List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Sort(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___ToArray(List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);

struct List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item) { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* Item(int index) { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item) { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* item) { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* value) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_U-12b17040.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_ List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___GetEnumerator(this); }

}}}


#endif
