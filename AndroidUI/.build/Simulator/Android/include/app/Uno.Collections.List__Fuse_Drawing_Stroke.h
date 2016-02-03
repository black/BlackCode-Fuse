// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_STROKE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_STROKE_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Stroke;

struct List__Fuse_Drawing_Stroke__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Drawing_Stroke __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke __interface_2;
};

List__Fuse_Drawing_Stroke__uType* List__Fuse_Drawing_Stroke__typeof();

::uObject* List__Fuse_Drawing_Stroke__GetEnumerator_boxed(List__Fuse_Drawing_Stroke* __this);
void List__Fuse_Drawing_Stroke___ObjInit(List__Fuse_Drawing_Stroke* __this);
void List__Fuse_Drawing_Stroke___ObjInit_1(List__Fuse_Drawing_Stroke* __this, int capacity);
void List__Fuse_Drawing_Stroke__Add(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item);
void List__Fuse_Drawing_Stroke__AddRange(List__Fuse_Drawing_Stroke* __this, ::uObject* items);
void List__Fuse_Drawing_Stroke__BoundsCheck(List__Fuse_Drawing_Stroke* __this, int index);
void List__Fuse_Drawing_Stroke__Clear(List__Fuse_Drawing_Stroke* __this);
bool List__Fuse_Drawing_Stroke__Contains(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item);
void List__Fuse_Drawing_Stroke__EnsureCapacity(List__Fuse_Drawing_Stroke* __this);
int List__Fuse_Drawing_Stroke__get_Count(List__Fuse_Drawing_Stroke* __this);
::app::Fuse::Drawing::Stroke* List__Fuse_Drawing_Stroke__get_Item(List__Fuse_Drawing_Stroke* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke List__Fuse_Drawing_Stroke__GetEnumerator(List__Fuse_Drawing_Stroke* __this);
int List__Fuse_Drawing_Stroke__IndexOf(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item);
void List__Fuse_Drawing_Stroke__Insert(List__Fuse_Drawing_Stroke* __this, int index, ::app::Fuse::Drawing::Stroke* item);
List__Fuse_Drawing_Stroke* List__Fuse_Drawing_Stroke__New_1(::uStatic* __this);
List__Fuse_Drawing_Stroke* List__Fuse_Drawing_Stroke__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Drawing_Stroke__Remove(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item);
void List__Fuse_Drawing_Stroke__RemoveAt(List__Fuse_Drawing_Stroke* __this, int index);
void List__Fuse_Drawing_Stroke__set_Item(List__Fuse_Drawing_Stroke* __this, int index, ::app::Fuse::Drawing::Stroke* value);
void List__Fuse_Drawing_Stroke__Sort(List__Fuse_Drawing_Stroke* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Drawing_Stroke__ToArray(List__Fuse_Drawing_Stroke* __this);

struct List__Fuse_Drawing_Stroke : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Stroke__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Drawing_Stroke___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Drawing_Stroke___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Drawing::Stroke* item) { List__Fuse_Drawing_Stroke__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Drawing_Stroke__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Drawing_Stroke__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Drawing_Stroke__Clear(this); }
    bool Contains(::app::Fuse::Drawing::Stroke* item) { return List__Fuse_Drawing_Stroke__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Drawing_Stroke__EnsureCapacity(this); }
    int Count() { return List__Fuse_Drawing_Stroke__get_Count(this); }
    ::app::Fuse::Drawing::Stroke* Item(int index) { return List__Fuse_Drawing_Stroke__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke GetEnumerator();
    int IndexOf(::app::Fuse::Drawing::Stroke* item) { return List__Fuse_Drawing_Stroke__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Drawing::Stroke* item) { List__Fuse_Drawing_Stroke__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::Stroke* item) { return List__Fuse_Drawing_Stroke__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Drawing_Stroke__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Drawing::Stroke* value) { List__Fuse_Drawing_Stroke__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Drawing_Stroke__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Drawing_Stroke__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Stroke.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke List__Fuse_Drawing_Stroke::GetEnumerator() { return List__Fuse_Drawing_Stroke__GetEnumerator(this); }

}}}


#endif
