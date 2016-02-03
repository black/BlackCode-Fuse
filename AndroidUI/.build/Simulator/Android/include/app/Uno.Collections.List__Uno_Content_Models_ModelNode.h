// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_NODE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_NODE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Models_ModelNode; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Models_ModelNode;

struct List__Uno_Content_Models_ModelNode__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelNode __interface_0;
};

List__Uno_Content_Models_ModelNode__uType* List__Uno_Content_Models_ModelNode__typeof();

::uObject* List__Uno_Content_Models_ModelNode__GetEnumerator_boxed(List__Uno_Content_Models_ModelNode* __this);
void List__Uno_Content_Models_ModelNode___ObjInit(List__Uno_Content_Models_ModelNode* __this);
void List__Uno_Content_Models_ModelNode___ObjInit_1(List__Uno_Content_Models_ModelNode* __this, int capacity);
void List__Uno_Content_Models_ModelNode__Add(List__Uno_Content_Models_ModelNode* __this, ::app::Uno::Content::Models::ModelNode* item);
void List__Uno_Content_Models_ModelNode__AddRange(List__Uno_Content_Models_ModelNode* __this, ::uObject* items);
void List__Uno_Content_Models_ModelNode__BoundsCheck(List__Uno_Content_Models_ModelNode* __this, int index);
void List__Uno_Content_Models_ModelNode__Clear(List__Uno_Content_Models_ModelNode* __this);
bool List__Uno_Content_Models_ModelNode__Contains(List__Uno_Content_Models_ModelNode* __this, ::app::Uno::Content::Models::ModelNode* item);
void List__Uno_Content_Models_ModelNode__EnsureCapacity(List__Uno_Content_Models_ModelNode* __this);
int List__Uno_Content_Models_ModelNode__get_Count(List__Uno_Content_Models_ModelNode* __this);
::app::Uno::Content::Models::ModelNode* List__Uno_Content_Models_ModelNode__get_Item(List__Uno_Content_Models_ModelNode* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelNode List__Uno_Content_Models_ModelNode__GetEnumerator(List__Uno_Content_Models_ModelNode* __this);
int List__Uno_Content_Models_ModelNode__IndexOf(List__Uno_Content_Models_ModelNode* __this, ::app::Uno::Content::Models::ModelNode* item);
void List__Uno_Content_Models_ModelNode__Insert(List__Uno_Content_Models_ModelNode* __this, int index, ::app::Uno::Content::Models::ModelNode* item);
List__Uno_Content_Models_ModelNode* List__Uno_Content_Models_ModelNode__New_1(::uStatic* __this);
List__Uno_Content_Models_ModelNode* List__Uno_Content_Models_ModelNode__New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Models_ModelNode__Remove(List__Uno_Content_Models_ModelNode* __this, ::app::Uno::Content::Models::ModelNode* item);
void List__Uno_Content_Models_ModelNode__RemoveAt(List__Uno_Content_Models_ModelNode* __this, int index);
void List__Uno_Content_Models_ModelNode__set_Item(List__Uno_Content_Models_ModelNode* __this, int index, ::app::Uno::Content::Models::ModelNode* value);
void List__Uno_Content_Models_ModelNode__Sort(List__Uno_Content_Models_ModelNode* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Models_ModelNode__ToArray(List__Uno_Content_Models_ModelNode* __this);

struct List__Uno_Content_Models_ModelNode : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Models_ModelNode__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Models_ModelNode___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Models_ModelNode___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Models::ModelNode* item) { List__Uno_Content_Models_ModelNode__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Content_Models_ModelNode__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Models_ModelNode__BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Models_ModelNode__Clear(this); }
    bool Contains(::app::Uno::Content::Models::ModelNode* item) { return List__Uno_Content_Models_ModelNode__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Content_Models_ModelNode__EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Models_ModelNode__get_Count(this); }
    ::app::Uno::Content::Models::ModelNode* Item(int index) { return List__Uno_Content_Models_ModelNode__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelNode GetEnumerator();
    int IndexOf(::app::Uno::Content::Models::ModelNode* item) { return List__Uno_Content_Models_ModelNode__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Content::Models::ModelNode* item) { List__Uno_Content_Models_ModelNode__Insert(this, index, item); }
    bool Remove(::app::Uno::Content::Models::ModelNode* item) { return List__Uno_Content_Models_ModelNode__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Content_Models_ModelNode__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Models::ModelNode* value) { List__Uno_Content_Models_ModelNode__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Content_Models_ModelNode__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Models_ModelNode__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelNode.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelNode List__Uno_Content_Models_ModelNode::GetEnumerator() { return List__Uno_Content_Models_ModelNode__GetEnumerator(this); }

}}}


#endif
