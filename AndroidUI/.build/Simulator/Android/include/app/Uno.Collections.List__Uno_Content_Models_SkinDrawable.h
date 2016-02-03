// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_SKIN_DRAWABLE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_SKIN_DRAWABLE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Models_SkinDrawable; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinDrawable; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Models_SkinDrawable;

struct List__Uno_Content_Models_SkinDrawable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_SkinDrawable __interface_0;
};

List__Uno_Content_Models_SkinDrawable__uType* List__Uno_Content_Models_SkinDrawable__typeof();

::uObject* List__Uno_Content_Models_SkinDrawable__GetEnumerator_boxed(List__Uno_Content_Models_SkinDrawable* __this);
void List__Uno_Content_Models_SkinDrawable___ObjInit(List__Uno_Content_Models_SkinDrawable* __this);
void List__Uno_Content_Models_SkinDrawable___ObjInit_1(List__Uno_Content_Models_SkinDrawable* __this, int capacity);
void List__Uno_Content_Models_SkinDrawable__Add(List__Uno_Content_Models_SkinDrawable* __this, ::app::Uno::Content::Models::SkinDrawable* item);
void List__Uno_Content_Models_SkinDrawable__AddRange(List__Uno_Content_Models_SkinDrawable* __this, ::uObject* items);
void List__Uno_Content_Models_SkinDrawable__BoundsCheck(List__Uno_Content_Models_SkinDrawable* __this, int index);
void List__Uno_Content_Models_SkinDrawable__Clear(List__Uno_Content_Models_SkinDrawable* __this);
bool List__Uno_Content_Models_SkinDrawable__Contains(List__Uno_Content_Models_SkinDrawable* __this, ::app::Uno::Content::Models::SkinDrawable* item);
void List__Uno_Content_Models_SkinDrawable__EnsureCapacity(List__Uno_Content_Models_SkinDrawable* __this);
int List__Uno_Content_Models_SkinDrawable__get_Count(List__Uno_Content_Models_SkinDrawable* __this);
::app::Uno::Content::Models::SkinDrawable* List__Uno_Content_Models_SkinDrawable__get_Item(List__Uno_Content_Models_SkinDrawable* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_SkinDrawable List__Uno_Content_Models_SkinDrawable__GetEnumerator(List__Uno_Content_Models_SkinDrawable* __this);
int List__Uno_Content_Models_SkinDrawable__IndexOf(List__Uno_Content_Models_SkinDrawable* __this, ::app::Uno::Content::Models::SkinDrawable* item);
void List__Uno_Content_Models_SkinDrawable__Insert(List__Uno_Content_Models_SkinDrawable* __this, int index, ::app::Uno::Content::Models::SkinDrawable* item);
List__Uno_Content_Models_SkinDrawable* List__Uno_Content_Models_SkinDrawable__New_1(::uStatic* __this);
List__Uno_Content_Models_SkinDrawable* List__Uno_Content_Models_SkinDrawable__New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Models_SkinDrawable__Remove(List__Uno_Content_Models_SkinDrawable* __this, ::app::Uno::Content::Models::SkinDrawable* item);
void List__Uno_Content_Models_SkinDrawable__RemoveAt(List__Uno_Content_Models_SkinDrawable* __this, int index);
void List__Uno_Content_Models_SkinDrawable__set_Item(List__Uno_Content_Models_SkinDrawable* __this, int index, ::app::Uno::Content::Models::SkinDrawable* value);
void List__Uno_Content_Models_SkinDrawable__Sort(List__Uno_Content_Models_SkinDrawable* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Models_SkinDrawable__ToArray(List__Uno_Content_Models_SkinDrawable* __this);

struct List__Uno_Content_Models_SkinDrawable : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Models_SkinDrawable__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Models_SkinDrawable___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Models_SkinDrawable___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Models::SkinDrawable* item) { List__Uno_Content_Models_SkinDrawable__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Content_Models_SkinDrawable__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Models_SkinDrawable__BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Models_SkinDrawable__Clear(this); }
    bool Contains(::app::Uno::Content::Models::SkinDrawable* item) { return List__Uno_Content_Models_SkinDrawable__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Content_Models_SkinDrawable__EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Models_SkinDrawable__get_Count(this); }
    ::app::Uno::Content::Models::SkinDrawable* Item(int index) { return List__Uno_Content_Models_SkinDrawable__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_SkinDrawable GetEnumerator();
    int IndexOf(::app::Uno::Content::Models::SkinDrawable* item) { return List__Uno_Content_Models_SkinDrawable__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Content::Models::SkinDrawable* item) { List__Uno_Content_Models_SkinDrawable__Insert(this, index, item); }
    bool Remove(::app::Uno::Content::Models::SkinDrawable* item) { return List__Uno_Content_Models_SkinDrawable__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Content_Models_SkinDrawable__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Models::SkinDrawable* value) { List__Uno_Content_Models_SkinDrawable__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Content_Models_SkinDrawable__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Models_SkinDrawable__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_SkinDrawable.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_SkinDrawable List__Uno_Content_Models_SkinDrawable::GetEnumerator() { return List__Uno_Content_Models_SkinDrawable__GetEnumerator(this); }

}}}


#endif
