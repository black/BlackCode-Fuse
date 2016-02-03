// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_VERTEX_INFLUENCE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_VERTEX_INFLUENCE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Models_VertexInfluence; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexInfluence; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Models_VertexInfluence;

struct List__Uno_Content_Models_VertexInfluence__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_VertexInfluence __interface_0;
};

List__Uno_Content_Models_VertexInfluence__uType* List__Uno_Content_Models_VertexInfluence__typeof();

::uObject* List__Uno_Content_Models_VertexInfluence__GetEnumerator_boxed(List__Uno_Content_Models_VertexInfluence* __this);
void List__Uno_Content_Models_VertexInfluence___ObjInit(List__Uno_Content_Models_VertexInfluence* __this);
void List__Uno_Content_Models_VertexInfluence___ObjInit_1(List__Uno_Content_Models_VertexInfluence* __this, int capacity);
void List__Uno_Content_Models_VertexInfluence__Add(List__Uno_Content_Models_VertexInfluence* __this, ::app::Uno::Content::Models::VertexInfluence* item);
void List__Uno_Content_Models_VertexInfluence__AddRange(List__Uno_Content_Models_VertexInfluence* __this, ::uObject* items);
void List__Uno_Content_Models_VertexInfluence__BoundsCheck(List__Uno_Content_Models_VertexInfluence* __this, int index);
void List__Uno_Content_Models_VertexInfluence__Clear(List__Uno_Content_Models_VertexInfluence* __this);
bool List__Uno_Content_Models_VertexInfluence__Contains(List__Uno_Content_Models_VertexInfluence* __this, ::app::Uno::Content::Models::VertexInfluence* item);
void List__Uno_Content_Models_VertexInfluence__EnsureCapacity(List__Uno_Content_Models_VertexInfluence* __this);
int List__Uno_Content_Models_VertexInfluence__get_Count(List__Uno_Content_Models_VertexInfluence* __this);
::app::Uno::Content::Models::VertexInfluence* List__Uno_Content_Models_VertexInfluence__get_Item(List__Uno_Content_Models_VertexInfluence* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_VertexInfluence List__Uno_Content_Models_VertexInfluence__GetEnumerator(List__Uno_Content_Models_VertexInfluence* __this);
int List__Uno_Content_Models_VertexInfluence__IndexOf(List__Uno_Content_Models_VertexInfluence* __this, ::app::Uno::Content::Models::VertexInfluence* item);
void List__Uno_Content_Models_VertexInfluence__Insert(List__Uno_Content_Models_VertexInfluence* __this, int index, ::app::Uno::Content::Models::VertexInfluence* item);
List__Uno_Content_Models_VertexInfluence* List__Uno_Content_Models_VertexInfluence__New_1(::uStatic* __this);
List__Uno_Content_Models_VertexInfluence* List__Uno_Content_Models_VertexInfluence__New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Models_VertexInfluence__Remove(List__Uno_Content_Models_VertexInfluence* __this, ::app::Uno::Content::Models::VertexInfluence* item);
void List__Uno_Content_Models_VertexInfluence__RemoveAt(List__Uno_Content_Models_VertexInfluence* __this, int index);
void List__Uno_Content_Models_VertexInfluence__set_Item(List__Uno_Content_Models_VertexInfluence* __this, int index, ::app::Uno::Content::Models::VertexInfluence* value);
void List__Uno_Content_Models_VertexInfluence__Sort(List__Uno_Content_Models_VertexInfluence* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Models_VertexInfluence__ToArray(List__Uno_Content_Models_VertexInfluence* __this);

struct List__Uno_Content_Models_VertexInfluence : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Models_VertexInfluence__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Models_VertexInfluence___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Models_VertexInfluence___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Models::VertexInfluence* item) { List__Uno_Content_Models_VertexInfluence__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Content_Models_VertexInfluence__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Models_VertexInfluence__BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Models_VertexInfluence__Clear(this); }
    bool Contains(::app::Uno::Content::Models::VertexInfluence* item) { return List__Uno_Content_Models_VertexInfluence__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Content_Models_VertexInfluence__EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Models_VertexInfluence__get_Count(this); }
    ::app::Uno::Content::Models::VertexInfluence* Item(int index) { return List__Uno_Content_Models_VertexInfluence__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_VertexInfluence GetEnumerator();
    int IndexOf(::app::Uno::Content::Models::VertexInfluence* item) { return List__Uno_Content_Models_VertexInfluence__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Content::Models::VertexInfluence* item) { List__Uno_Content_Models_VertexInfluence__Insert(this, index, item); }
    bool Remove(::app::Uno::Content::Models::VertexInfluence* item) { return List__Uno_Content_Models_VertexInfluence__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Content_Models_VertexInfluence__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Models::VertexInfluence* value) { List__Uno_Content_Models_VertexInfluence__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Content_Models_VertexInfluence__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Models_VertexInfluence__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_VertexInfluence.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_VertexInfluence List__Uno_Content_Models_VertexInfluence::GetEnumerator() { return List__Uno_Content_Models_VertexInfluence__GetEnumerator(this); }

}}}


#endif
