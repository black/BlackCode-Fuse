// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_SKIN_BONE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_SKIN_BONE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_SkinBone.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Models_SkinBone; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinBone; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Models_SkinBone;

struct List__Uno_Content_Models_SkinBone__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_SkinBone __interface_0;
};

List__Uno_Content_Models_SkinBone__uType* List__Uno_Content_Models_SkinBone__typeof();

::uObject* List__Uno_Content_Models_SkinBone__GetEnumerator_boxed(List__Uno_Content_Models_SkinBone* __this);
void List__Uno_Content_Models_SkinBone___ObjInit(List__Uno_Content_Models_SkinBone* __this);
void List__Uno_Content_Models_SkinBone___ObjInit_1(List__Uno_Content_Models_SkinBone* __this, int capacity);
void List__Uno_Content_Models_SkinBone__Add(List__Uno_Content_Models_SkinBone* __this, ::app::Uno::Content::Models::SkinBone* item);
void List__Uno_Content_Models_SkinBone__AddRange(List__Uno_Content_Models_SkinBone* __this, ::uObject* items);
void List__Uno_Content_Models_SkinBone__BoundsCheck(List__Uno_Content_Models_SkinBone* __this, int index);
void List__Uno_Content_Models_SkinBone__Clear(List__Uno_Content_Models_SkinBone* __this);
bool List__Uno_Content_Models_SkinBone__Contains(List__Uno_Content_Models_SkinBone* __this, ::app::Uno::Content::Models::SkinBone* item);
void List__Uno_Content_Models_SkinBone__EnsureCapacity(List__Uno_Content_Models_SkinBone* __this);
int List__Uno_Content_Models_SkinBone__get_Count(List__Uno_Content_Models_SkinBone* __this);
::app::Uno::Content::Models::SkinBone* List__Uno_Content_Models_SkinBone__get_Item(List__Uno_Content_Models_SkinBone* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_SkinBone List__Uno_Content_Models_SkinBone__GetEnumerator(List__Uno_Content_Models_SkinBone* __this);
int List__Uno_Content_Models_SkinBone__IndexOf(List__Uno_Content_Models_SkinBone* __this, ::app::Uno::Content::Models::SkinBone* item);
void List__Uno_Content_Models_SkinBone__Insert(List__Uno_Content_Models_SkinBone* __this, int index, ::app::Uno::Content::Models::SkinBone* item);
List__Uno_Content_Models_SkinBone* List__Uno_Content_Models_SkinBone__New_1(::uStatic* __this);
List__Uno_Content_Models_SkinBone* List__Uno_Content_Models_SkinBone__New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Models_SkinBone__Remove(List__Uno_Content_Models_SkinBone* __this, ::app::Uno::Content::Models::SkinBone* item);
void List__Uno_Content_Models_SkinBone__RemoveAt(List__Uno_Content_Models_SkinBone* __this, int index);
void List__Uno_Content_Models_SkinBone__set_Item(List__Uno_Content_Models_SkinBone* __this, int index, ::app::Uno::Content::Models::SkinBone* value);
void List__Uno_Content_Models_SkinBone__Sort(List__Uno_Content_Models_SkinBone* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Models_SkinBone__ToArray(List__Uno_Content_Models_SkinBone* __this);

struct List__Uno_Content_Models_SkinBone : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Models_SkinBone__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Models_SkinBone___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Models_SkinBone___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Models::SkinBone* item) { List__Uno_Content_Models_SkinBone__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Content_Models_SkinBone__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Models_SkinBone__BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Models_SkinBone__Clear(this); }
    bool Contains(::app::Uno::Content::Models::SkinBone* item) { return List__Uno_Content_Models_SkinBone__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Content_Models_SkinBone__EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Models_SkinBone__get_Count(this); }
    ::app::Uno::Content::Models::SkinBone* Item(int index) { return List__Uno_Content_Models_SkinBone__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_SkinBone GetEnumerator();
    int IndexOf(::app::Uno::Content::Models::SkinBone* item) { return List__Uno_Content_Models_SkinBone__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Content::Models::SkinBone* item) { List__Uno_Content_Models_SkinBone__Insert(this, index, item); }
    bool Remove(::app::Uno::Content::Models::SkinBone* item) { return List__Uno_Content_Models_SkinBone__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Content_Models_SkinBone__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Models::SkinBone* value) { List__Uno_Content_Models_SkinBone__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Content_Models_SkinBone__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Models_SkinBone__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_SkinBone.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_SkinBone List__Uno_Content_Models_SkinBone::GetEnumerator() { return List__Uno_Content_Models_SkinBone__GetEnumerator(this); }

}}}


#endif
