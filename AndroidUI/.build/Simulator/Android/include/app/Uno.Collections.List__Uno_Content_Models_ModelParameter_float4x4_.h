// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_PARAMETER_FLOAT4X4__H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_MODELS_MODEL_PARAMETER_FLOAT4X4__H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float4x4; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Models_ModelParameter_float4x4_;

struct List__Uno_Content_Models_ModelParameter_float4x4___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelParameter_float4x4_ __interface_0;
};

List__Uno_Content_Models_ModelParameter_float4x4___uType* List__Uno_Content_Models_ModelParameter_float4x4___typeof();

::uObject* List__Uno_Content_Models_ModelParameter_float4x4___GetEnumerator_boxed(List__Uno_Content_Models_ModelParameter_float4x4_* __this);
void List__Uno_Content_Models_ModelParameter_float4x4____ObjInit(List__Uno_Content_Models_ModelParameter_float4x4_* __this);
void List__Uno_Content_Models_ModelParameter_float4x4____ObjInit_1(List__Uno_Content_Models_ModelParameter_float4x4_* __this, int capacity);
void List__Uno_Content_Models_ModelParameter_float4x4___Add(List__Uno_Content_Models_ModelParameter_float4x4_* __this, ::app::Uno::Content::Models::ModelParameter__float4x4* item);
void List__Uno_Content_Models_ModelParameter_float4x4___AddRange(List__Uno_Content_Models_ModelParameter_float4x4_* __this, ::uObject* items);
void List__Uno_Content_Models_ModelParameter_float4x4___BoundsCheck(List__Uno_Content_Models_ModelParameter_float4x4_* __this, int index);
void List__Uno_Content_Models_ModelParameter_float4x4___Clear(List__Uno_Content_Models_ModelParameter_float4x4_* __this);
bool List__Uno_Content_Models_ModelParameter_float4x4___Contains(List__Uno_Content_Models_ModelParameter_float4x4_* __this, ::app::Uno::Content::Models::ModelParameter__float4x4* item);
void List__Uno_Content_Models_ModelParameter_float4x4___EnsureCapacity(List__Uno_Content_Models_ModelParameter_float4x4_* __this);
int List__Uno_Content_Models_ModelParameter_float4x4___get_Count(List__Uno_Content_Models_ModelParameter_float4x4_* __this);
::app::Uno::Content::Models::ModelParameter__float4x4* List__Uno_Content_Models_ModelParameter_float4x4___get_Item(List__Uno_Content_Models_ModelParameter_float4x4_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_ List__Uno_Content_Models_ModelParameter_float4x4___GetEnumerator(List__Uno_Content_Models_ModelParameter_float4x4_* __this);
int List__Uno_Content_Models_ModelParameter_float4x4___IndexOf(List__Uno_Content_Models_ModelParameter_float4x4_* __this, ::app::Uno::Content::Models::ModelParameter__float4x4* item);
void List__Uno_Content_Models_ModelParameter_float4x4___Insert(List__Uno_Content_Models_ModelParameter_float4x4_* __this, int index, ::app::Uno::Content::Models::ModelParameter__float4x4* item);
List__Uno_Content_Models_ModelParameter_float4x4_* List__Uno_Content_Models_ModelParameter_float4x4___New_1(::uStatic* __this);
List__Uno_Content_Models_ModelParameter_float4x4_* List__Uno_Content_Models_ModelParameter_float4x4___New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Models_ModelParameter_float4x4___Remove(List__Uno_Content_Models_ModelParameter_float4x4_* __this, ::app::Uno::Content::Models::ModelParameter__float4x4* item);
void List__Uno_Content_Models_ModelParameter_float4x4___RemoveAt(List__Uno_Content_Models_ModelParameter_float4x4_* __this, int index);
void List__Uno_Content_Models_ModelParameter_float4x4___set_Item(List__Uno_Content_Models_ModelParameter_float4x4_* __this, int index, ::app::Uno::Content::Models::ModelParameter__float4x4* value);
void List__Uno_Content_Models_ModelParameter_float4x4___Sort(List__Uno_Content_Models_ModelParameter_float4x4_* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Models_ModelParameter_float4x4___ToArray(List__Uno_Content_Models_ModelParameter_float4x4_* __this);

struct List__Uno_Content_Models_ModelParameter_float4x4_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Models_ModelParameter_float4x4___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Models_ModelParameter_float4x4____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Models_ModelParameter_float4x4____ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Models::ModelParameter__float4x4* item) { List__Uno_Content_Models_ModelParameter_float4x4___Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Content_Models_ModelParameter_float4x4___AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Models_ModelParameter_float4x4___BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Models_ModelParameter_float4x4___Clear(this); }
    bool Contains(::app::Uno::Content::Models::ModelParameter__float4x4* item) { return List__Uno_Content_Models_ModelParameter_float4x4___Contains(this, item); }
    void EnsureCapacity() { List__Uno_Content_Models_ModelParameter_float4x4___EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Models_ModelParameter_float4x4___get_Count(this); }
    ::app::Uno::Content::Models::ModelParameter__float4x4* Item(int index) { return List__Uno_Content_Models_ModelParameter_float4x4___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_ GetEnumerator();
    int IndexOf(::app::Uno::Content::Models::ModelParameter__float4x4* item) { return List__Uno_Content_Models_ModelParameter_float4x4___IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Content::Models::ModelParameter__float4x4* item) { List__Uno_Content_Models_ModelParameter_float4x4___Insert(this, index, item); }
    bool Remove(::app::Uno::Content::Models::ModelParameter__float4x4* item) { return List__Uno_Content_Models_ModelParameter_float4x4___Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Content_Models_ModelParameter_float4x4___RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Models::ModelParameter__float4x4* value) { List__Uno_Content_Models_ModelParameter_float4x4___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Content_Models_ModelParameter_float4x4___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Models_ModelParameter_float4x4___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Models_ModelParam-bbf1eed2.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Models_ModelParameter_float4x4_ List__Uno_Content_Models_ModelParameter_float4x4_::GetEnumerator() { return List__Uno_Content_Models_ModelParameter_float4x4___GetEnumerator(this); }

}}}


#endif
