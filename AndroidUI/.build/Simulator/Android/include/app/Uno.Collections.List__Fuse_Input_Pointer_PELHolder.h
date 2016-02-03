// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PELHolder; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_Pointer_PELHolder; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_Pointer_PELHolder;

struct List__Fuse_Input_Pointer_PELHolder__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Input_Pointer_PELHolder __interface_0;
};

List__Fuse_Input_Pointer_PELHolder__uType* List__Fuse_Input_Pointer_PELHolder__typeof();

::uObject* List__Fuse_Input_Pointer_PELHolder__GetEnumerator_boxed(List__Fuse_Input_Pointer_PELHolder* __this);
void List__Fuse_Input_Pointer_PELHolder___ObjInit(List__Fuse_Input_Pointer_PELHolder* __this);
void List__Fuse_Input_Pointer_PELHolder___ObjInit_1(List__Fuse_Input_Pointer_PELHolder* __this, int capacity);
void List__Fuse_Input_Pointer_PELHolder__Add(List__Fuse_Input_Pointer_PELHolder* __this, ::app::Fuse::Input::Pointer_PELHolder* item);
void List__Fuse_Input_Pointer_PELHolder__AddRange(List__Fuse_Input_Pointer_PELHolder* __this, ::uObject* items);
void List__Fuse_Input_Pointer_PELHolder__BoundsCheck(List__Fuse_Input_Pointer_PELHolder* __this, int index);
void List__Fuse_Input_Pointer_PELHolder__Clear(List__Fuse_Input_Pointer_PELHolder* __this);
bool List__Fuse_Input_Pointer_PELHolder__Contains(List__Fuse_Input_Pointer_PELHolder* __this, ::app::Fuse::Input::Pointer_PELHolder* item);
void List__Fuse_Input_Pointer_PELHolder__EnsureCapacity(List__Fuse_Input_Pointer_PELHolder* __this);
int List__Fuse_Input_Pointer_PELHolder__get_Count(List__Fuse_Input_Pointer_PELHolder* __this);
::app::Fuse::Input::Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__get_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Input_Pointer_PELHolder List__Fuse_Input_Pointer_PELHolder__GetEnumerator(List__Fuse_Input_Pointer_PELHolder* __this);
int List__Fuse_Input_Pointer_PELHolder__IndexOf(List__Fuse_Input_Pointer_PELHolder* __this, ::app::Fuse::Input::Pointer_PELHolder* item);
void List__Fuse_Input_Pointer_PELHolder__Insert(List__Fuse_Input_Pointer_PELHolder* __this, int index, ::app::Fuse::Input::Pointer_PELHolder* item);
List__Fuse_Input_Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__New_1(::uStatic* __this);
List__Fuse_Input_Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Input_Pointer_PELHolder__Remove(List__Fuse_Input_Pointer_PELHolder* __this, ::app::Fuse::Input::Pointer_PELHolder* item);
void List__Fuse_Input_Pointer_PELHolder__RemoveAt(List__Fuse_Input_Pointer_PELHolder* __this, int index);
void List__Fuse_Input_Pointer_PELHolder__set_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index, ::app::Fuse::Input::Pointer_PELHolder* value);
void List__Fuse_Input_Pointer_PELHolder__Sort(List__Fuse_Input_Pointer_PELHolder* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Input_Pointer_PELHolder__ToArray(List__Fuse_Input_Pointer_PELHolder* __this);

struct List__Fuse_Input_Pointer_PELHolder : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Input_Pointer_PELHolder__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Input_Pointer_PELHolder___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Input_Pointer_PELHolder___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Input::Pointer_PELHolder* item) { List__Fuse_Input_Pointer_PELHolder__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Input_Pointer_PELHolder__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Input_Pointer_PELHolder__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Input_Pointer_PELHolder__Clear(this); }
    bool Contains(::app::Fuse::Input::Pointer_PELHolder* item) { return List__Fuse_Input_Pointer_PELHolder__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Input_Pointer_PELHolder__EnsureCapacity(this); }
    int Count() { return List__Fuse_Input_Pointer_PELHolder__get_Count(this); }
    ::app::Fuse::Input::Pointer_PELHolder* Item(int index) { return List__Fuse_Input_Pointer_PELHolder__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Input_Pointer_PELHolder GetEnumerator();
    int IndexOf(::app::Fuse::Input::Pointer_PELHolder* item) { return List__Fuse_Input_Pointer_PELHolder__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Input::Pointer_PELHolder* item) { List__Fuse_Input_Pointer_PELHolder__Insert(this, index, item); }
    bool Remove(::app::Fuse::Input::Pointer_PELHolder* item) { return List__Fuse_Input_Pointer_PELHolder__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Input_Pointer_PELHolder__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Input::Pointer_PELHolder* value) { List__Fuse_Input_Pointer_PELHolder__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Input_Pointer_PELHolder__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Input_Pointer_PELHolder__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_Pointer_PELHolder.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Input_Pointer_PELHolder List__Fuse_Input_Pointer_PELHolder::GetEnumerator() { return List__Fuse_Input_Pointer_PELHolder__GetEnumerator(this); }

}}}


#endif
