// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_ELEMENTS_EE8D3288_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_ELEMENTS_EE8D3288_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-30ffbd8b.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Visibility; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_;

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Add(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Clear(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Contains(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Insert(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item);
List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Remove(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* value);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Sort(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* value) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-74c7eae.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___GetEnumerator(this); }

}}}


#endif
