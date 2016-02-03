// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_CONTOUR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Contour; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Contour;

struct List__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour __interface_0;
};

List__Fuse_Drawing_Contour__uType* List__Fuse_Drawing_Contour__typeof();

::uObject* List__Fuse_Drawing_Contour__GetEnumerator_boxed(List__Fuse_Drawing_Contour* __this);
void List__Fuse_Drawing_Contour___ObjInit(List__Fuse_Drawing_Contour* __this);
void List__Fuse_Drawing_Contour___ObjInit_1(List__Fuse_Drawing_Contour* __this, int capacity);
void List__Fuse_Drawing_Contour__Add(List__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item);
void List__Fuse_Drawing_Contour__AddRange(List__Fuse_Drawing_Contour* __this, ::uObject* items);
void List__Fuse_Drawing_Contour__BoundsCheck(List__Fuse_Drawing_Contour* __this, int index);
void List__Fuse_Drawing_Contour__Clear(List__Fuse_Drawing_Contour* __this);
bool List__Fuse_Drawing_Contour__Contains(List__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item);
void List__Fuse_Drawing_Contour__EnsureCapacity(List__Fuse_Drawing_Contour* __this);
int List__Fuse_Drawing_Contour__get_Count(List__Fuse_Drawing_Contour* __this);
::app::Fuse::Drawing::Contour* List__Fuse_Drawing_Contour__get_Item(List__Fuse_Drawing_Contour* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour List__Fuse_Drawing_Contour__GetEnumerator(List__Fuse_Drawing_Contour* __this);
int List__Fuse_Drawing_Contour__IndexOf(List__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item);
void List__Fuse_Drawing_Contour__Insert(List__Fuse_Drawing_Contour* __this, int index, ::app::Fuse::Drawing::Contour* item);
List__Fuse_Drawing_Contour* List__Fuse_Drawing_Contour__New_1(::uStatic* __this);
List__Fuse_Drawing_Contour* List__Fuse_Drawing_Contour__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Drawing_Contour__Remove(List__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item);
void List__Fuse_Drawing_Contour__RemoveAt(List__Fuse_Drawing_Contour* __this, int index);
void List__Fuse_Drawing_Contour__set_Item(List__Fuse_Drawing_Contour* __this, int index, ::app::Fuse::Drawing::Contour* value);
void List__Fuse_Drawing_Contour__Sort(List__Fuse_Drawing_Contour* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Drawing_Contour__ToArray(List__Fuse_Drawing_Contour* __this);

struct List__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Contour__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Drawing_Contour___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Drawing_Contour___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Drawing::Contour* item) { List__Fuse_Drawing_Contour__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Drawing_Contour__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Drawing_Contour__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Drawing_Contour__Clear(this); }
    bool Contains(::app::Fuse::Drawing::Contour* item) { return List__Fuse_Drawing_Contour__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Drawing_Contour__EnsureCapacity(this); }
    int Count() { return List__Fuse_Drawing_Contour__get_Count(this); }
    ::app::Fuse::Drawing::Contour* Item(int index) { return List__Fuse_Drawing_Contour__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour GetEnumerator();
    int IndexOf(::app::Fuse::Drawing::Contour* item) { return List__Fuse_Drawing_Contour__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Drawing::Contour* item) { List__Fuse_Drawing_Contour__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::Contour* item) { return List__Fuse_Drawing_Contour__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Drawing_Contour__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Drawing::Contour* value) { List__Fuse_Drawing_Contour__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Drawing_Contour__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Drawing_Contour__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Contour.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour List__Fuse_Drawing_Contour::GetEnumerator() { return List__Fuse_Drawing_Contour__GetEnumerator(this); }

}}}


#endif
