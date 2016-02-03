// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_RELEASED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_RELEASED_HANDLER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerReleasedHandler.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_PointerReleasedHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_PointerReleasedHandler;

struct List__Fuse_Input_PointerReleasedHandler__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Input_PointerReleasedHandler __interface_0;
};

List__Fuse_Input_PointerReleasedHandler__uType* List__Fuse_Input_PointerReleasedHandler__typeof();

::uObject* List__Fuse_Input_PointerReleasedHandler__GetEnumerator_boxed(List__Fuse_Input_PointerReleasedHandler* __this);
void List__Fuse_Input_PointerReleasedHandler___ObjInit(List__Fuse_Input_PointerReleasedHandler* __this);
void List__Fuse_Input_PointerReleasedHandler___ObjInit_1(List__Fuse_Input_PointerReleasedHandler* __this, int capacity);
void List__Fuse_Input_PointerReleasedHandler__Add(List__Fuse_Input_PointerReleasedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerReleasedHandler__AddRange(List__Fuse_Input_PointerReleasedHandler* __this, ::uObject* items);
void List__Fuse_Input_PointerReleasedHandler__BoundsCheck(List__Fuse_Input_PointerReleasedHandler* __this, int index);
void List__Fuse_Input_PointerReleasedHandler__Clear(List__Fuse_Input_PointerReleasedHandler* __this);
bool List__Fuse_Input_PointerReleasedHandler__Contains(List__Fuse_Input_PointerReleasedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerReleasedHandler__EnsureCapacity(List__Fuse_Input_PointerReleasedHandler* __this);
int List__Fuse_Input_PointerReleasedHandler__get_Count(List__Fuse_Input_PointerReleasedHandler* __this);
::uDelegate* List__Fuse_Input_PointerReleasedHandler__get_Item(List__Fuse_Input_PointerReleasedHandler* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Input_PointerReleasedHandler List__Fuse_Input_PointerReleasedHandler__GetEnumerator(List__Fuse_Input_PointerReleasedHandler* __this);
int List__Fuse_Input_PointerReleasedHandler__IndexOf(List__Fuse_Input_PointerReleasedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerReleasedHandler__Insert(List__Fuse_Input_PointerReleasedHandler* __this, int index, ::uDelegate* item);
List__Fuse_Input_PointerReleasedHandler* List__Fuse_Input_PointerReleasedHandler__New_1(::uStatic* __this);
List__Fuse_Input_PointerReleasedHandler* List__Fuse_Input_PointerReleasedHandler__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Input_PointerReleasedHandler__Remove(List__Fuse_Input_PointerReleasedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerReleasedHandler__RemoveAt(List__Fuse_Input_PointerReleasedHandler* __this, int index);
void List__Fuse_Input_PointerReleasedHandler__set_Item(List__Fuse_Input_PointerReleasedHandler* __this, int index, ::uDelegate* value);
void List__Fuse_Input_PointerReleasedHandler__Sort(List__Fuse_Input_PointerReleasedHandler* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Input_PointerReleasedHandler__ToArray(List__Fuse_Input_PointerReleasedHandler* __this);

struct List__Fuse_Input_PointerReleasedHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Input_PointerReleasedHandler__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Input_PointerReleasedHandler___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Input_PointerReleasedHandler___ObjInit_1(this, capacity); }
    void Add(::uDelegate* item) { List__Fuse_Input_PointerReleasedHandler__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Input_PointerReleasedHandler__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Input_PointerReleasedHandler__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Input_PointerReleasedHandler__Clear(this); }
    bool Contains(::uDelegate* item) { return List__Fuse_Input_PointerReleasedHandler__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Input_PointerReleasedHandler__EnsureCapacity(this); }
    int Count() { return List__Fuse_Input_PointerReleasedHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Fuse_Input_PointerReleasedHandler__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Input_PointerReleasedHandler GetEnumerator();
    int IndexOf(::uDelegate* item) { return List__Fuse_Input_PointerReleasedHandler__IndexOf(this, item); }
    void Insert(int index, ::uDelegate* item) { List__Fuse_Input_PointerReleasedHandler__Insert(this, index, item); }
    bool Remove(::uDelegate* item) { return List__Fuse_Input_PointerReleasedHandler__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Input_PointerReleasedHandler__RemoveAt(this, index); }
    void Item(int index, ::uDelegate* value) { List__Fuse_Input_PointerReleasedHandler__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Input_PointerReleasedHandler__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Input_PointerReleasedHandler__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerReleasedHandler.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Input_PointerReleasedHandler List__Fuse_Input_PointerReleasedHandler::GetEnumerator() { return List__Fuse_Input_PointerReleasedHandler__GetEnumerator(this); }

}}}


#endif
