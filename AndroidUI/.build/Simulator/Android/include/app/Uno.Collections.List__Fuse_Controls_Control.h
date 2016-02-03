// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_CONTROL_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_CONTROL_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Control.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Controls_Control; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Controls_Control;

struct List__Fuse_Controls_Control__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Controls_Control __interface_0;
};

List__Fuse_Controls_Control__uType* List__Fuse_Controls_Control__typeof();

::uObject* List__Fuse_Controls_Control__GetEnumerator_boxed(List__Fuse_Controls_Control* __this);
void List__Fuse_Controls_Control___ObjInit(List__Fuse_Controls_Control* __this);
void List__Fuse_Controls_Control___ObjInit_1(List__Fuse_Controls_Control* __this, int capacity);
void List__Fuse_Controls_Control__Add(List__Fuse_Controls_Control* __this, ::app::Fuse::Controls::Control* item);
void List__Fuse_Controls_Control__AddRange(List__Fuse_Controls_Control* __this, ::uObject* items);
void List__Fuse_Controls_Control__BoundsCheck(List__Fuse_Controls_Control* __this, int index);
void List__Fuse_Controls_Control__Clear(List__Fuse_Controls_Control* __this);
bool List__Fuse_Controls_Control__Contains(List__Fuse_Controls_Control* __this, ::app::Fuse::Controls::Control* item);
void List__Fuse_Controls_Control__EnsureCapacity(List__Fuse_Controls_Control* __this);
int List__Fuse_Controls_Control__get_Count(List__Fuse_Controls_Control* __this);
::app::Fuse::Controls::Control* List__Fuse_Controls_Control__get_Item(List__Fuse_Controls_Control* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Control List__Fuse_Controls_Control__GetEnumerator(List__Fuse_Controls_Control* __this);
int List__Fuse_Controls_Control__IndexOf(List__Fuse_Controls_Control* __this, ::app::Fuse::Controls::Control* item);
void List__Fuse_Controls_Control__Insert(List__Fuse_Controls_Control* __this, int index, ::app::Fuse::Controls::Control* item);
List__Fuse_Controls_Control* List__Fuse_Controls_Control__New_1(::uStatic* __this);
List__Fuse_Controls_Control* List__Fuse_Controls_Control__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Controls_Control__Remove(List__Fuse_Controls_Control* __this, ::app::Fuse::Controls::Control* item);
void List__Fuse_Controls_Control__RemoveAt(List__Fuse_Controls_Control* __this, int index);
void List__Fuse_Controls_Control__set_Item(List__Fuse_Controls_Control* __this, int index, ::app::Fuse::Controls::Control* value);
void List__Fuse_Controls_Control__Sort(List__Fuse_Controls_Control* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Controls_Control__ToArray(List__Fuse_Controls_Control* __this);

struct List__Fuse_Controls_Control : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Controls_Control__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Controls_Control___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Controls_Control___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Controls::Control* item) { List__Fuse_Controls_Control__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Controls_Control__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Controls_Control__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Controls_Control__Clear(this); }
    bool Contains(::app::Fuse::Controls::Control* item) { return List__Fuse_Controls_Control__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Controls_Control__EnsureCapacity(this); }
    int Count() { return List__Fuse_Controls_Control__get_Count(this); }
    ::app::Fuse::Controls::Control* Item(int index) { return List__Fuse_Controls_Control__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Control GetEnumerator();
    int IndexOf(::app::Fuse::Controls::Control* item) { return List__Fuse_Controls_Control__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Controls::Control* item) { List__Fuse_Controls_Control__Insert(this, index, item); }
    bool Remove(::app::Fuse::Controls::Control* item) { return List__Fuse_Controls_Control__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Controls_Control__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Controls::Control* value) { List__Fuse_Controls_Control__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Controls_Control__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Controls_Control__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_Control.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Control List__Fuse_Controls_Control::GetEnumerator() { return List__Fuse_Controls_Control__GetEnumerator(this); }

}}}


#endif
