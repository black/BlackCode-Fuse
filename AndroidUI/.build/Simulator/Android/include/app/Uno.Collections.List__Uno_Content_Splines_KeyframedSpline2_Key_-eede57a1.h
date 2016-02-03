// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__EEDE57A1_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE2_KEY__EEDE57A1_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Splines_KeyframedSplin-3a226e87.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float__float.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_;

struct List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Splines_KeyframedSpline2_Key_float_float_ __interface_0;
};

List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___uType* List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___typeof();

::uObject* List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___GetEnumerator_boxed(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float____ObjInit(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float____ObjInit_1(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, int capacity);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Add(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___AddRange(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, ::uObject* items);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___BoundsCheck(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, int index);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Clear(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
bool List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Contains(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___EnsureCapacity(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
int List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___get_Count(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___get_Item(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_ List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___GetEnumerator(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);
int List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___IndexOf(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Insert(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, int index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___New_1(::uStatic* __this);
List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___New_2(::uStatic* __this, int capacity);
bool List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Remove(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___RemoveAt(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, int index);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___set_Item(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, int index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float value);
void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Sort(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this, ::uDelegate* comparer);
::uArray* List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___ToArray(List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_* __this);

struct List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float____ObjInit_1(this, capacity); }
    void Add(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
    void AddRange(::uObject* items) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___BoundsCheck(this, index); }
    void Clear() { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Clear(this); }
    bool Contains(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
    void EnsureCapacity() { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___EnsureCapacity(this); }
    int Count() { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___get_Count(this); }
    ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float Item(int index);
    ::app::Uno::Collections::List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_ GetEnumerator();
    int IndexOf(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
    void Insert(int index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
    bool Remove(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item);
    void RemoveAt(int index) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float value);
    void Sort(::uDelegate* comparer) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Content_Splines_Keyframed-328b15fa.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::Add(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Add(this, item); }
inline bool List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::Contains(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item) { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Contains(this, item); }
inline ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::Item(int index) { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___get_Item(this, index); }
inline ::app::Uno::Collections::List1_Enumerator__Uno_Content_Splines_KeyframedSpline2_Key_float_float_ List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::GetEnumerator() { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___GetEnumerator(this); }
inline int List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::IndexOf(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item) { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___IndexOf(this, item); }
inline void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::Insert(int index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Insert(this, index, item); }
inline bool List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::Remove(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float item) { return List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___Remove(this, item); }
inline void List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_::Item(int index, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float value) { List__Uno_Content_Splines_KeyframedSpline2_Key_float_float___set_Item(this, index, value); }

}}}


#endif
