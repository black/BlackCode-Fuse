// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Models_ModelDrawable; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Models_ModelDrawable;

struct List__Uno_Content_Models_ModelDrawable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelDrawable __interface_0;
};

List__Uno_Content_Models_ModelDrawable__uType* List__Uno_Content_Models_ModelDrawable__typeof();

::uObject* List__Uno_Content_Models_ModelDrawable__GetEnumerator_boxed(List__Uno_Content_Models_ModelDrawable* __this);
void List__Uno_Content_Models_ModelDrawable___ObjInit(List__Uno_Content_Models_ModelDrawable* __this);
void List__Uno_Content_Models_ModelDrawable___ObjInit_1(List__Uno_Content_Models_ModelDrawable* __this, int capacity);
void List__Uno_Content_Models_ModelDrawable__Add(List__Uno_Content_Models_ModelDrawable* __this, ::app::Uno::Content::Models::ModelDrawable* item);
void List__Uno_Content_Models_ModelDrawable__AddRange(List__Uno_Content_Models_ModelDrawable* __this, ::uObject* items);
void List__Uno_Content_Models_ModelDrawable__BoundsCheck(List__Uno_Content_Models_ModelDrawable* __this, int index);
void List__Uno_Content_Models_ModelDrawable__Clear(List__Uno_Content_Models_ModelDrawable* __this);
bool List__Uno_Content_Models_ModelDrawable__Contains(List__Uno_Content_Models_ModelDrawable* __this, ::app::Uno::Content::Models::ModelDrawable* item);
void List__Uno_Content_Models_ModelDrawable__EnsureCapacity(List__Uno_Content_Models_ModelDrawable* __this);
int List__Uno_Content_Models_ModelDrawable__get_Count(List__Uno_Content_Models_ModelDrawable* __this);
::app::Uno::Content::Models::ModelDrawable* List__Uno_Content_Models_ModelDrawable__get_Item(List__Uno_Content_Models_ModelDrawable* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelDrawable List__Uno_Content_Models_ModelDrawable__GetEnumerator(List__Uno_Content_Models_ModelDrawable* __this);
int List__Uno_Content_Models_ModelDrawable__IndexOf(List__Uno_Content_Models_ModelDrawable* __this, ::app::Uno::Content::Models::ModelDrawable* item);
void List__Uno_Content_Models_ModelDrawable__Insert(List__Uno_Content_Models_ModelDrawable* __this, int index, ::app::Uno::Content::Models::ModelDrawable* item);
List__Uno_Content_Models_ModelDrawable* List__Uno_Content_Models_ModelDrawable__New_1(::uStatic* __this);
List__Uno_Content_Models_ModelDrawable* List__Uno_Content_Models_ModelDrawable__New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Models_ModelDrawable__Remove(List__Uno_Content_Models_ModelDrawable* __this, ::app::Uno::Content::Models::ModelDrawable* item);
void List__Uno_Content_Models_ModelDrawable__RemoveAt(List__Uno_Content_Models_ModelDrawable* __this, int index);
void List__Uno_Content_Models_ModelDrawable__set_Item(List__Uno_Content_Models_ModelDrawable* __this, int index, ::app::Uno::Content::Models::ModelDrawable* value);
void List__Uno_Content_Models_ModelDrawable__Sort(List__Uno_Content_Models_ModelDrawable* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Models_ModelDrawable__ToArray(List__Uno_Content_Models_ModelDrawable* __this);

struct List__Uno_Content_Models_ModelDrawable : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Models_ModelDrawable__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Models_ModelDrawable___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Models_ModelDrawable___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Models::ModelDrawable* item) { List__Uno_Content_Models_ModelDrawable__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Content_Models_ModelDrawable__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Models_ModelDrawable__BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Models_ModelDrawable__Clear(this); }
    bool Contains(::app::Uno::Content::Models::ModelDrawable* item) { return List__Uno_Content_Models_ModelDrawable__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Content_Models_ModelDrawable__EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Models_ModelDrawable__get_Count(this); }
    ::app::Uno::Content::Models::ModelDrawable* Item(int index) { return List__Uno_Content_Models_ModelDrawable__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelDrawable GetEnumerator();
    int IndexOf(::app::Uno::Content::Models::ModelDrawable* item) { return List__Uno_Content_Models_ModelDrawable__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Content::Models::ModelDrawable* item) { List__Uno_Content_Models_ModelDrawable__Insert(this, index, item); }
    bool Remove(::app::Uno::Content::Models::ModelDrawable* item) { return List__Uno_Content_Models_ModelDrawable__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Content_Models_ModelDrawable__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Models::ModelDrawable* value) { List__Uno_Content_Models_ModelDrawable__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Content_Models_ModelDrawable__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Models_ModelDrawable__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelDrawable.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelDrawable List__Uno_Content_Models_ModelDrawable::GetEnumerator() { return List__Uno_Content_Models_ModelDrawable__GetEnumerator(this); }

}}}


#endif
