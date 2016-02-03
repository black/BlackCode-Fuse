// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_PATH_GEOMETRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_PATH_GEOMETRY_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_PathGeometry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_PathGeometry;

struct List__Fuse_Drawing_PathGeometry__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PathGeometry __interface_0;
};

List__Fuse_Drawing_PathGeometry__uType* List__Fuse_Drawing_PathGeometry__typeof();

::uObject* List__Fuse_Drawing_PathGeometry__GetEnumerator_boxed(List__Fuse_Drawing_PathGeometry* __this);
void List__Fuse_Drawing_PathGeometry___ObjInit(List__Fuse_Drawing_PathGeometry* __this);
void List__Fuse_Drawing_PathGeometry___ObjInit_1(List__Fuse_Drawing_PathGeometry* __this, int capacity);
void List__Fuse_Drawing_PathGeometry__Add(List__Fuse_Drawing_PathGeometry* __this, ::app::Fuse::Drawing::PathGeometry* item);
void List__Fuse_Drawing_PathGeometry__AddRange(List__Fuse_Drawing_PathGeometry* __this, ::uObject* items);
void List__Fuse_Drawing_PathGeometry__BoundsCheck(List__Fuse_Drawing_PathGeometry* __this, int index);
void List__Fuse_Drawing_PathGeometry__Clear(List__Fuse_Drawing_PathGeometry* __this);
bool List__Fuse_Drawing_PathGeometry__Contains(List__Fuse_Drawing_PathGeometry* __this, ::app::Fuse::Drawing::PathGeometry* item);
void List__Fuse_Drawing_PathGeometry__EnsureCapacity(List__Fuse_Drawing_PathGeometry* __this);
int List__Fuse_Drawing_PathGeometry__get_Count(List__Fuse_Drawing_PathGeometry* __this);
::app::Fuse::Drawing::PathGeometry* List__Fuse_Drawing_PathGeometry__get_Item(List__Fuse_Drawing_PathGeometry* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_PathGeometry List__Fuse_Drawing_PathGeometry__GetEnumerator(List__Fuse_Drawing_PathGeometry* __this);
int List__Fuse_Drawing_PathGeometry__IndexOf(List__Fuse_Drawing_PathGeometry* __this, ::app::Fuse::Drawing::PathGeometry* item);
void List__Fuse_Drawing_PathGeometry__Insert(List__Fuse_Drawing_PathGeometry* __this, int index, ::app::Fuse::Drawing::PathGeometry* item);
List__Fuse_Drawing_PathGeometry* List__Fuse_Drawing_PathGeometry__New_1(::uStatic* __this);
List__Fuse_Drawing_PathGeometry* List__Fuse_Drawing_PathGeometry__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Drawing_PathGeometry__Remove(List__Fuse_Drawing_PathGeometry* __this, ::app::Fuse::Drawing::PathGeometry* item);
void List__Fuse_Drawing_PathGeometry__RemoveAt(List__Fuse_Drawing_PathGeometry* __this, int index);
void List__Fuse_Drawing_PathGeometry__set_Item(List__Fuse_Drawing_PathGeometry* __this, int index, ::app::Fuse::Drawing::PathGeometry* value);
void List__Fuse_Drawing_PathGeometry__Sort(List__Fuse_Drawing_PathGeometry* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Drawing_PathGeometry__ToArray(List__Fuse_Drawing_PathGeometry* __this);

struct List__Fuse_Drawing_PathGeometry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_PathGeometry__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Drawing_PathGeometry___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Drawing_PathGeometry___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Drawing::PathGeometry* item) { List__Fuse_Drawing_PathGeometry__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Drawing_PathGeometry__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Drawing_PathGeometry__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Drawing_PathGeometry__Clear(this); }
    bool Contains(::app::Fuse::Drawing::PathGeometry* item) { return List__Fuse_Drawing_PathGeometry__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Drawing_PathGeometry__EnsureCapacity(this); }
    int Count() { return List__Fuse_Drawing_PathGeometry__get_Count(this); }
    ::app::Fuse::Drawing::PathGeometry* Item(int index) { return List__Fuse_Drawing_PathGeometry__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_PathGeometry GetEnumerator();
    int IndexOf(::app::Fuse::Drawing::PathGeometry* item) { return List__Fuse_Drawing_PathGeometry__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Drawing::PathGeometry* item) { List__Fuse_Drawing_PathGeometry__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::PathGeometry* item) { return List__Fuse_Drawing_PathGeometry__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Drawing_PathGeometry__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Drawing::PathGeometry* value) { List__Fuse_Drawing_PathGeometry__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Drawing_PathGeometry__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Drawing_PathGeometry__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_PathGeometry.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_PathGeometry List__Fuse_Drawing_PathGeometry::GetEnumerator() { return List__Fuse_Drawing_PathGeometry__GetEnumerator(this); }

}}}


#endif
