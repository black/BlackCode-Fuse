// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_LEFT_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_LEFT_HANDLER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Input_PointerLeftHandler.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_PointerLeftHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_PointerLeftHandler;

struct List__Fuse_Input_PointerLeftHandler__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Input_PointerLeftHandler __interface_0;
};

List__Fuse_Input_PointerLeftHandler__uType* List__Fuse_Input_PointerLeftHandler__typeof();

::uObject* List__Fuse_Input_PointerLeftHandler__GetEnumerator_boxed(List__Fuse_Input_PointerLeftHandler* __this);
void List__Fuse_Input_PointerLeftHandler___ObjInit(List__Fuse_Input_PointerLeftHandler* __this);
void List__Fuse_Input_PointerLeftHandler___ObjInit_1(List__Fuse_Input_PointerLeftHandler* __this, int capacity);
void List__Fuse_Input_PointerLeftHandler__Add(List__Fuse_Input_PointerLeftHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerLeftHandler__AddRange(List__Fuse_Input_PointerLeftHandler* __this, ::uObject* items);
void List__Fuse_Input_PointerLeftHandler__BoundsCheck(List__Fuse_Input_PointerLeftHandler* __this, int index);
void List__Fuse_Input_PointerLeftHandler__Clear(List__Fuse_Input_PointerLeftHandler* __this);
bool List__Fuse_Input_PointerLeftHandler__Contains(List__Fuse_Input_PointerLeftHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerLeftHandler__EnsureCapacity(List__Fuse_Input_PointerLeftHandler* __this);
int List__Fuse_Input_PointerLeftHandler__get_Count(List__Fuse_Input_PointerLeftHandler* __this);
::uDelegate* List__Fuse_Input_PointerLeftHandler__get_Item(List__Fuse_Input_PointerLeftHandler* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Input_PointerLeftHandler List__Fuse_Input_PointerLeftHandler__GetEnumerator(List__Fuse_Input_PointerLeftHandler* __this);
int List__Fuse_Input_PointerLeftHandler__IndexOf(List__Fuse_Input_PointerLeftHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerLeftHandler__Insert(List__Fuse_Input_PointerLeftHandler* __this, int index, ::uDelegate* item);
List__Fuse_Input_PointerLeftHandler* List__Fuse_Input_PointerLeftHandler__New_1(::uStatic* __this);
List__Fuse_Input_PointerLeftHandler* List__Fuse_Input_PointerLeftHandler__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Input_PointerLeftHandler__Remove(List__Fuse_Input_PointerLeftHandler* __this, ::uDelegate* item);
void List__Fuse_Input_PointerLeftHandler__RemoveAt(List__Fuse_Input_PointerLeftHandler* __this, int index);
void List__Fuse_Input_PointerLeftHandler__set_Item(List__Fuse_Input_PointerLeftHandler* __this, int index, ::uDelegate* value);
void List__Fuse_Input_PointerLeftHandler__Sort(List__Fuse_Input_PointerLeftHandler* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Input_PointerLeftHandler__ToArray(List__Fuse_Input_PointerLeftHandler* __this);

struct List__Fuse_Input_PointerLeftHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Input_PointerLeftHandler__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Input_PointerLeftHandler___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Input_PointerLeftHandler___ObjInit_1(this, capacity); }
    void Add(::uDelegate* item) { List__Fuse_Input_PointerLeftHandler__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Input_PointerLeftHandler__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Input_PointerLeftHandler__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Input_PointerLeftHandler__Clear(this); }
    bool Contains(::uDelegate* item) { return List__Fuse_Input_PointerLeftHandler__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Input_PointerLeftHandler__EnsureCapacity(this); }
    int Count() { return List__Fuse_Input_PointerLeftHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Fuse_Input_PointerLeftHandler__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Input_PointerLeftHandler GetEnumerator();
    int IndexOf(::uDelegate* item) { return List__Fuse_Input_PointerLeftHandler__IndexOf(this, item); }
    void Insert(int index, ::uDelegate* item) { List__Fuse_Input_PointerLeftHandler__Insert(this, index, item); }
    bool Remove(::uDelegate* item) { return List__Fuse_Input_PointerLeftHandler__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Input_PointerLeftHandler__RemoveAt(this, index); }
    void Item(int index, ::uDelegate* value) { List__Fuse_Input_PointerLeftHandler__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Input_PointerLeftHandler__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Input_PointerLeftHandler__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_PointerLeftHandler.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Input_PointerLeftHandler List__Fuse_Input_PointerLeftHandler::GetEnumerator() { return List__Fuse_Input_PointerLeftHandler__GetEnumerator(this); }

}}}


#endif
