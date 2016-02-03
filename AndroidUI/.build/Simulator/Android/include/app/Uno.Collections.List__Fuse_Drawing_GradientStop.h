// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_GradientStop; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_GradientStop;

struct List__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Drawing_GradientStop __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop __interface_1;
};

List__Fuse_Drawing_GradientStop__uType* List__Fuse_Drawing_GradientStop__typeof();

::uObject* List__Fuse_Drawing_GradientStop__GetEnumerator_boxed(List__Fuse_Drawing_GradientStop* __this);
void List__Fuse_Drawing_GradientStop___ObjInit(List__Fuse_Drawing_GradientStop* __this);
void List__Fuse_Drawing_GradientStop___ObjInit_1(List__Fuse_Drawing_GradientStop* __this, int capacity);
void List__Fuse_Drawing_GradientStop__Add(List__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item);
void List__Fuse_Drawing_GradientStop__AddRange(List__Fuse_Drawing_GradientStop* __this, ::uObject* items);
void List__Fuse_Drawing_GradientStop__BoundsCheck(List__Fuse_Drawing_GradientStop* __this, int index);
void List__Fuse_Drawing_GradientStop__Clear(List__Fuse_Drawing_GradientStop* __this);
bool List__Fuse_Drawing_GradientStop__Contains(List__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item);
void List__Fuse_Drawing_GradientStop__EnsureCapacity(List__Fuse_Drawing_GradientStop* __this);
int List__Fuse_Drawing_GradientStop__get_Count(List__Fuse_Drawing_GradientStop* __this);
::app::Fuse::Drawing::GradientStop* List__Fuse_Drawing_GradientStop__get_Item(List__Fuse_Drawing_GradientStop* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_GradientStop List__Fuse_Drawing_GradientStop__GetEnumerator(List__Fuse_Drawing_GradientStop* __this);
int List__Fuse_Drawing_GradientStop__IndexOf(List__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item);
void List__Fuse_Drawing_GradientStop__Insert(List__Fuse_Drawing_GradientStop* __this, int index, ::app::Fuse::Drawing::GradientStop* item);
List__Fuse_Drawing_GradientStop* List__Fuse_Drawing_GradientStop__New_1(::uStatic* __this);
List__Fuse_Drawing_GradientStop* List__Fuse_Drawing_GradientStop__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Drawing_GradientStop__Remove(List__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item);
void List__Fuse_Drawing_GradientStop__RemoveAt(List__Fuse_Drawing_GradientStop* __this, int index);
void List__Fuse_Drawing_GradientStop__set_Item(List__Fuse_Drawing_GradientStop* __this, int index, ::app::Fuse::Drawing::GradientStop* value);
void List__Fuse_Drawing_GradientStop__Sort(List__Fuse_Drawing_GradientStop* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Drawing_GradientStop__ToArray(List__Fuse_Drawing_GradientStop* __this);

struct List__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_GradientStop__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Drawing_GradientStop___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Drawing_GradientStop___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Drawing::GradientStop* item) { List__Fuse_Drawing_GradientStop__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Drawing_GradientStop__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Drawing_GradientStop__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Drawing_GradientStop__Clear(this); }
    bool Contains(::app::Fuse::Drawing::GradientStop* item) { return List__Fuse_Drawing_GradientStop__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Drawing_GradientStop__EnsureCapacity(this); }
    int Count() { return List__Fuse_Drawing_GradientStop__get_Count(this); }
    ::app::Fuse::Drawing::GradientStop* Item(int index) { return List__Fuse_Drawing_GradientStop__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_GradientStop GetEnumerator();
    int IndexOf(::app::Fuse::Drawing::GradientStop* item) { return List__Fuse_Drawing_GradientStop__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Drawing::GradientStop* item) { List__Fuse_Drawing_GradientStop__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::GradientStop* item) { return List__Fuse_Drawing_GradientStop__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Drawing_GradientStop__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Drawing::GradientStop* value) { List__Fuse_Drawing_GradientStop__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Drawing_GradientStop__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Drawing_GradientStop__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_GradientStop.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_GradientStop List__Fuse_Drawing_GradientStop::GetEnumerator() { return List__Fuse_Drawing_GradientStop__GetEnumerator(this); }

}}}


#endif
