// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_RESOURCE_C3432DCB_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_RESOURCE_C3432DCB_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_R-775117ec.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Resources_ImageSource; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_;

struct List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___uType* List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Add(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Clear(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Contains(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_ List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Insert(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item);
List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Remove(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* value);
void List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Sort(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item) { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item) { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* item) { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* value) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-69694321.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_ List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___GetEnumerator(this); }

}}}


#endif
