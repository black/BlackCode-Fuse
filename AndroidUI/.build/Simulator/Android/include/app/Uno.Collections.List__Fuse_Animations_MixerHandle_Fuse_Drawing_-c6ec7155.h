// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_DRAWING__C6EC7155_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_DRAWING__C6EC7155_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_D-4484f798.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_BlendMode; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_;

struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___uType* List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Add(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Clear(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Contains(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_ List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Insert(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item);
List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Remove(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* value);
void List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Sort(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* item) { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* value) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-ce2a31ca.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_ List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___GetEnumerator(this); }

}}}


#endif
