// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_SKIN_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_SKIN_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Models_ModelSkin; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelSkin; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Models_ModelSkin;

struct List__Uno_Content_Models_ModelSkin__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelSkin __interface_0;
};

List__Uno_Content_Models_ModelSkin__uType* List__Uno_Content_Models_ModelSkin__typeof();

::uObject* List__Uno_Content_Models_ModelSkin__GetEnumerator_boxed(List__Uno_Content_Models_ModelSkin* __this);
void List__Uno_Content_Models_ModelSkin___ObjInit(List__Uno_Content_Models_ModelSkin* __this);
void List__Uno_Content_Models_ModelSkin___ObjInit_1(List__Uno_Content_Models_ModelSkin* __this, int capacity);
void List__Uno_Content_Models_ModelSkin__Add(List__Uno_Content_Models_ModelSkin* __this, ::app::Uno::Content::Models::ModelSkin* item);
void List__Uno_Content_Models_ModelSkin__AddRange(List__Uno_Content_Models_ModelSkin* __this, ::uObject* items);
void List__Uno_Content_Models_ModelSkin__BoundsCheck(List__Uno_Content_Models_ModelSkin* __this, int index);
void List__Uno_Content_Models_ModelSkin__Clear(List__Uno_Content_Models_ModelSkin* __this);
bool List__Uno_Content_Models_ModelSkin__Contains(List__Uno_Content_Models_ModelSkin* __this, ::app::Uno::Content::Models::ModelSkin* item);
void List__Uno_Content_Models_ModelSkin__EnsureCapacity(List__Uno_Content_Models_ModelSkin* __this);
int List__Uno_Content_Models_ModelSkin__get_Count(List__Uno_Content_Models_ModelSkin* __this);
::app::Uno::Content::Models::ModelSkin* List__Uno_Content_Models_ModelSkin__get_Item(List__Uno_Content_Models_ModelSkin* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelSkin List__Uno_Content_Models_ModelSkin__GetEnumerator(List__Uno_Content_Models_ModelSkin* __this);
int List__Uno_Content_Models_ModelSkin__IndexOf(List__Uno_Content_Models_ModelSkin* __this, ::app::Uno::Content::Models::ModelSkin* item);
void List__Uno_Content_Models_ModelSkin__Insert(List__Uno_Content_Models_ModelSkin* __this, int index, ::app::Uno::Content::Models::ModelSkin* item);
List__Uno_Content_Models_ModelSkin* List__Uno_Content_Models_ModelSkin__New_1(::uStatic* __this);
List__Uno_Content_Models_ModelSkin* List__Uno_Content_Models_ModelSkin__New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Models_ModelSkin__Remove(List__Uno_Content_Models_ModelSkin* __this, ::app::Uno::Content::Models::ModelSkin* item);
void List__Uno_Content_Models_ModelSkin__RemoveAt(List__Uno_Content_Models_ModelSkin* __this, int index);
void List__Uno_Content_Models_ModelSkin__set_Item(List__Uno_Content_Models_ModelSkin* __this, int index, ::app::Uno::Content::Models::ModelSkin* value);
void List__Uno_Content_Models_ModelSkin__Sort(List__Uno_Content_Models_ModelSkin* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Models_ModelSkin__ToArray(List__Uno_Content_Models_ModelSkin* __this);

struct List__Uno_Content_Models_ModelSkin : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Models_ModelSkin__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Models_ModelSkin___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Models_ModelSkin___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Models::ModelSkin* item) { List__Uno_Content_Models_ModelSkin__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Content_Models_ModelSkin__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Models_ModelSkin__BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Models_ModelSkin__Clear(this); }
    bool Contains(::app::Uno::Content::Models::ModelSkin* item) { return List__Uno_Content_Models_ModelSkin__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Content_Models_ModelSkin__EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Models_ModelSkin__get_Count(this); }
    ::app::Uno::Content::Models::ModelSkin* Item(int index) { return List__Uno_Content_Models_ModelSkin__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelSkin GetEnumerator();
    int IndexOf(::app::Uno::Content::Models::ModelSkin* item) { return List__Uno_Content_Models_ModelSkin__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Content::Models::ModelSkin* item) { List__Uno_Content_Models_ModelSkin__Insert(this, index, item); }
    bool Remove(::app::Uno::Content::Models::ModelSkin* item) { return List__Uno_Content_Models_ModelSkin__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Content_Models_ModelSkin__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Models::ModelSkin* value) { List__Uno_Content_Models_ModelSkin__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Content_Models_ModelSkin__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Models_ModelSkin__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelSkin.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelSkin List__Uno_Content_Models_ModelSkin::GetEnumerator() { return List__Uno_Content_Models_ModelSkin__GetEnumerator(this); }

}}}


#endif
