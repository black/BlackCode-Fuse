// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_FONT__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_FONT__H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_MixerHandle_Fuse_Font_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Font; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Font_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Font_;

struct List__Fuse_Animations_MixerHandle_Fuse_Font___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_MixerHandle_Fuse_Font_ __interface_0;
};

List__Fuse_Animations_MixerHandle_Fuse_Font___uType* List__Fuse_Animations_MixerHandle_Fuse_Font___typeof();

::uObject* List__Fuse_Animations_MixerHandle_Fuse_Font___GetEnumerator_boxed(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Font____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Font____ObjInit_1(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, int capacity);
void List__Fuse_Animations_MixerHandle_Fuse_Font___Add(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* item);
void List__Fuse_Animations_MixerHandle_Fuse_Font___AddRange(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, ::uObject* items);
void List__Fuse_Animations_MixerHandle_Fuse_Font___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Font___Clear(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Font___Contains(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* item);
void List__Fuse_Animations_MixerHandle_Fuse_Font___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Font___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Font* List__Fuse_Animations_MixerHandle_Fuse_Font___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Font_ List__Fuse_Animations_MixerHandle_Fuse_Font___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Font___IndexOf(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* item);
void List__Fuse_Animations_MixerHandle_Fuse_Font___Insert(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Font* item);
List__Fuse_Animations_MixerHandle_Fuse_Font_* List__Fuse_Animations_MixerHandle_Fuse_Font___New_1(::uStatic* __this);
List__Fuse_Animations_MixerHandle_Fuse_Font_* List__Fuse_Animations_MixerHandle_Fuse_Font___New_2(::uStatic* __this, int capacity);
bool List__Fuse_Animations_MixerHandle_Fuse_Font___Remove(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* item);
void List__Fuse_Animations_MixerHandle_Fuse_Font___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Font___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Font* value);
void List__Fuse_Animations_MixerHandle_Fuse_Font___Sort(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Animations_MixerHandle_Fuse_Font___ToArray(List__Fuse_Animations_MixerHandle_Fuse_Font_* __this);

struct List__Fuse_Animations_MixerHandle_Fuse_Font_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Animations_MixerHandle_Fuse_Font___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Font____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Animations_MixerHandle_Fuse_Font____ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Animations::MixerHandle__Fuse_Font* item) { List__Fuse_Animations_MixerHandle_Fuse_Font___Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Animations_MixerHandle_Fuse_Font___AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Font___BoundsCheck(this, index); }
    void Clear() { List__Fuse_Animations_MixerHandle_Fuse_Font___Clear(this); }
    bool Contains(::app::Fuse::Animations::MixerHandle__Fuse_Font* item) { return List__Fuse_Animations_MixerHandle_Fuse_Font___Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Font___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Font___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Font* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Font___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Font_ GetEnumerator();
    int IndexOf(::app::Fuse::Animations::MixerHandle__Fuse_Font* item) { return List__Fuse_Animations_MixerHandle_Fuse_Font___IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Font* item) { List__Fuse_Animations_MixerHandle_Fuse_Font___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Font* item) { return List__Fuse_Animations_MixerHandle_Fuse_Font___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Font___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Font* value) { List__Fuse_Animations_MixerHandle_Fuse_Font___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Animations_MixerHandle_Fuse_Font___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Animations_MixerHandle_Fuse_Font___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Font_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Font_ List__Fuse_Animations_MixerHandle_Fuse_Font_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Font___GetEnumerator(this); }

}}}


#endif
