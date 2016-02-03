// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_ELEMENTS_ELEMENT__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_ELEMENTS_ELEMENT__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_E-e54bb317.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Element; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Element_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_;

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Elements_Element_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___uType* List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Add(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Clear(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Contains(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Element_ List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Insert(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item);
List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Remove(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* value);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Sort(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Element_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* item) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* value) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-84e891c8.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Element_ List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___GetEnumerator(this); }

}}}


#endif
