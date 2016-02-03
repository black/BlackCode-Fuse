// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_FOCUS_LOST_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_FOCUS_LOST_HANDLER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_FocusLostHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_FocusLostHandler;

struct List__Fuse_Input_FocusLostHandler__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Input_FocusLostHandler __interface_0;
};

List__Fuse_Input_FocusLostHandler__uType* List__Fuse_Input_FocusLostHandler__typeof();

::uObject* List__Fuse_Input_FocusLostHandler__GetEnumerator_boxed(List__Fuse_Input_FocusLostHandler* __this);
void List__Fuse_Input_FocusLostHandler___ObjInit(List__Fuse_Input_FocusLostHandler* __this);
void List__Fuse_Input_FocusLostHandler___ObjInit_1(List__Fuse_Input_FocusLostHandler* __this, int capacity);
void List__Fuse_Input_FocusLostHandler__Add(List__Fuse_Input_FocusLostHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusLostHandler__AddRange(List__Fuse_Input_FocusLostHandler* __this, ::uObject* items);
void List__Fuse_Input_FocusLostHandler__BoundsCheck(List__Fuse_Input_FocusLostHandler* __this, int index);
void List__Fuse_Input_FocusLostHandler__Clear(List__Fuse_Input_FocusLostHandler* __this);
bool List__Fuse_Input_FocusLostHandler__Contains(List__Fuse_Input_FocusLostHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusLostHandler__EnsureCapacity(List__Fuse_Input_FocusLostHandler* __this);
int List__Fuse_Input_FocusLostHandler__get_Count(List__Fuse_Input_FocusLostHandler* __this);
::uDelegate* List__Fuse_Input_FocusLostHandler__get_Item(List__Fuse_Input_FocusLostHandler* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Input_FocusLostHandler List__Fuse_Input_FocusLostHandler__GetEnumerator(List__Fuse_Input_FocusLostHandler* __this);
int List__Fuse_Input_FocusLostHandler__IndexOf(List__Fuse_Input_FocusLostHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusLostHandler__Insert(List__Fuse_Input_FocusLostHandler* __this, int index, ::uDelegate* item);
List__Fuse_Input_FocusLostHandler* List__Fuse_Input_FocusLostHandler__New_1(::uStatic* __this);
List__Fuse_Input_FocusLostHandler* List__Fuse_Input_FocusLostHandler__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Input_FocusLostHandler__Remove(List__Fuse_Input_FocusLostHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusLostHandler__RemoveAt(List__Fuse_Input_FocusLostHandler* __this, int index);
void List__Fuse_Input_FocusLostHandler__set_Item(List__Fuse_Input_FocusLostHandler* __this, int index, ::uDelegate* value);
void List__Fuse_Input_FocusLostHandler__Sort(List__Fuse_Input_FocusLostHandler* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Input_FocusLostHandler__ToArray(List__Fuse_Input_FocusLostHandler* __this);

struct List__Fuse_Input_FocusLostHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Input_FocusLostHandler__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Input_FocusLostHandler___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Input_FocusLostHandler___ObjInit_1(this, capacity); }
    void Add(::uDelegate* item) { List__Fuse_Input_FocusLostHandler__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Input_FocusLostHandler__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Input_FocusLostHandler__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Input_FocusLostHandler__Clear(this); }
    bool Contains(::uDelegate* item) { return List__Fuse_Input_FocusLostHandler__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Input_FocusLostHandler__EnsureCapacity(this); }
    int Count() { return List__Fuse_Input_FocusLostHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Fuse_Input_FocusLostHandler__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Input_FocusLostHandler GetEnumerator();
    int IndexOf(::uDelegate* item) { return List__Fuse_Input_FocusLostHandler__IndexOf(this, item); }
    void Insert(int index, ::uDelegate* item) { List__Fuse_Input_FocusLostHandler__Insert(this, index, item); }
    bool Remove(::uDelegate* item) { return List__Fuse_Input_FocusLostHandler__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Input_FocusLostHandler__RemoveAt(this, index); }
    void Item(int index, ::uDelegate* value) { List__Fuse_Input_FocusLostHandler__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Input_FocusLostHandler__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Input_FocusLostHandler__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_FocusLostHandler.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Input_FocusLostHandler List__Fuse_Input_FocusLostHandler::GetEnumerator() { return List__Fuse_Input_FocusLostHandler__GetEnumerator(this); }

}}}


#endif
