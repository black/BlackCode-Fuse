// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_GRAPHICS_POLYGON_FACE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_GRAPHICS_POLYGON_FACE_H__

#include <app/Uno.Collections.ICollection__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IEnumerable__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IList__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Graphics_PolygonFace; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Graphics_PolygonFace;

struct List__Uno_Graphics_PolygonFace__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Graphics_PolygonFace __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_Graphics_PolygonFace __interface_2;
};

List__Uno_Graphics_PolygonFace__uType* List__Uno_Graphics_PolygonFace__typeof();

::uObject* List__Uno_Graphics_PolygonFace__GetEnumerator_boxed(List__Uno_Graphics_PolygonFace* __this);
void List__Uno_Graphics_PolygonFace___ObjInit(List__Uno_Graphics_PolygonFace* __this);
void List__Uno_Graphics_PolygonFace___ObjInit_1(List__Uno_Graphics_PolygonFace* __this, int capacity);
void List__Uno_Graphics_PolygonFace__Add(List__Uno_Graphics_PolygonFace* __this, int item);
void List__Uno_Graphics_PolygonFace__AddRange(List__Uno_Graphics_PolygonFace* __this, ::uObject* items);
void List__Uno_Graphics_PolygonFace__BoundsCheck(List__Uno_Graphics_PolygonFace* __this, int index);
void List__Uno_Graphics_PolygonFace__Clear(List__Uno_Graphics_PolygonFace* __this);
bool List__Uno_Graphics_PolygonFace__Contains(List__Uno_Graphics_PolygonFace* __this, int item);
void List__Uno_Graphics_PolygonFace__EnsureCapacity(List__Uno_Graphics_PolygonFace* __this);
int List__Uno_Graphics_PolygonFace__get_Count(List__Uno_Graphics_PolygonFace* __this);
int List__Uno_Graphics_PolygonFace__get_Item(List__Uno_Graphics_PolygonFace* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Graphics_PolygonFace List__Uno_Graphics_PolygonFace__GetEnumerator(List__Uno_Graphics_PolygonFace* __this);
int List__Uno_Graphics_PolygonFace__IndexOf(List__Uno_Graphics_PolygonFace* __this, int item);
void List__Uno_Graphics_PolygonFace__Insert(List__Uno_Graphics_PolygonFace* __this, int index, int item);
List__Uno_Graphics_PolygonFace* List__Uno_Graphics_PolygonFace__New_1(::uStatic* __this);
List__Uno_Graphics_PolygonFace* List__Uno_Graphics_PolygonFace__New_2(::uStatic* __this, int capacity);
bool List__Uno_Graphics_PolygonFace__Remove(List__Uno_Graphics_PolygonFace* __this, int item);
void List__Uno_Graphics_PolygonFace__RemoveAt(List__Uno_Graphics_PolygonFace* __this, int index);
void List__Uno_Graphics_PolygonFace__set_Item(List__Uno_Graphics_PolygonFace* __this, int index, int value);
void List__Uno_Graphics_PolygonFace__Sort(List__Uno_Graphics_PolygonFace* __this, ::uDelegate* comparer);
::uArray* List__Uno_Graphics_PolygonFace__ToArray(List__Uno_Graphics_PolygonFace* __this);

struct List__Uno_Graphics_PolygonFace : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Graphics_PolygonFace__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Graphics_PolygonFace___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Graphics_PolygonFace___ObjInit_1(this, capacity); }
    void Add(int item) { List__Uno_Graphics_PolygonFace__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Graphics_PolygonFace__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Graphics_PolygonFace__BoundsCheck(this, index); }
    void Clear() { List__Uno_Graphics_PolygonFace__Clear(this); }
    bool Contains(int item) { return List__Uno_Graphics_PolygonFace__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Graphics_PolygonFace__EnsureCapacity(this); }
    int Count() { return List__Uno_Graphics_PolygonFace__get_Count(this); }
    int Item(int index) { return List__Uno_Graphics_PolygonFace__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Graphics_PolygonFace GetEnumerator();
    int IndexOf(int item) { return List__Uno_Graphics_PolygonFace__IndexOf(this, item); }
    void Insert(int index, int item) { List__Uno_Graphics_PolygonFace__Insert(this, index, item); }
    bool Remove(int item) { return List__Uno_Graphics_PolygonFace__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Graphics_PolygonFace__RemoveAt(this, index); }
    void Item(int index, int value) { List__Uno_Graphics_PolygonFace__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Graphics_PolygonFace__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Graphics_PolygonFace__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Graphics_PolygonFace.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Graphics_PolygonFace List__Uno_Graphics_PolygonFace::GetEnumerator() { return List__Uno_Graphics_PolygonFace__GetEnumerator(this); }

}}}


#endif
