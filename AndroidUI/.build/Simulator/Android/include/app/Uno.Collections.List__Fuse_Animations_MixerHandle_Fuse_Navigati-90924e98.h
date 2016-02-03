// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_NAVIGATI_90924E98_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_NAVIGATI_90924E98_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_N-97d50335.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_NavigationEdge; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_;

struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___uType* List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Add(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Clear(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Contains(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_ List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Insert(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item);
List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Remove(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* value);
void List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Sort(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* item) { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* value) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-33131de.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_ List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___GetEnumerator(this); }

}}}


#endif
