// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_FOCUS_GAINED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_FOCUS_GAINED_HANDLER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Input_FocusGainedHandler.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_FocusGainedHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_FocusGainedHandler;

struct List__Fuse_Input_FocusGainedHandler__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Input_FocusGainedHandler __interface_0;
};

List__Fuse_Input_FocusGainedHandler__uType* List__Fuse_Input_FocusGainedHandler__typeof();

::uObject* List__Fuse_Input_FocusGainedHandler__GetEnumerator_boxed(List__Fuse_Input_FocusGainedHandler* __this);
void List__Fuse_Input_FocusGainedHandler___ObjInit(List__Fuse_Input_FocusGainedHandler* __this);
void List__Fuse_Input_FocusGainedHandler___ObjInit_1(List__Fuse_Input_FocusGainedHandler* __this, int capacity);
void List__Fuse_Input_FocusGainedHandler__Add(List__Fuse_Input_FocusGainedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusGainedHandler__AddRange(List__Fuse_Input_FocusGainedHandler* __this, ::uObject* items);
void List__Fuse_Input_FocusGainedHandler__BoundsCheck(List__Fuse_Input_FocusGainedHandler* __this, int index);
void List__Fuse_Input_FocusGainedHandler__Clear(List__Fuse_Input_FocusGainedHandler* __this);
bool List__Fuse_Input_FocusGainedHandler__Contains(List__Fuse_Input_FocusGainedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusGainedHandler__EnsureCapacity(List__Fuse_Input_FocusGainedHandler* __this);
int List__Fuse_Input_FocusGainedHandler__get_Count(List__Fuse_Input_FocusGainedHandler* __this);
::uDelegate* List__Fuse_Input_FocusGainedHandler__get_Item(List__Fuse_Input_FocusGainedHandler* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Input_FocusGainedHandler List__Fuse_Input_FocusGainedHandler__GetEnumerator(List__Fuse_Input_FocusGainedHandler* __this);
int List__Fuse_Input_FocusGainedHandler__IndexOf(List__Fuse_Input_FocusGainedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusGainedHandler__Insert(List__Fuse_Input_FocusGainedHandler* __this, int index, ::uDelegate* item);
List__Fuse_Input_FocusGainedHandler* List__Fuse_Input_FocusGainedHandler__New_1(::uStatic* __this);
List__Fuse_Input_FocusGainedHandler* List__Fuse_Input_FocusGainedHandler__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Input_FocusGainedHandler__Remove(List__Fuse_Input_FocusGainedHandler* __this, ::uDelegate* item);
void List__Fuse_Input_FocusGainedHandler__RemoveAt(List__Fuse_Input_FocusGainedHandler* __this, int index);
void List__Fuse_Input_FocusGainedHandler__set_Item(List__Fuse_Input_FocusGainedHandler* __this, int index, ::uDelegate* value);
void List__Fuse_Input_FocusGainedHandler__Sort(List__Fuse_Input_FocusGainedHandler* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Input_FocusGainedHandler__ToArray(List__Fuse_Input_FocusGainedHandler* __this);

struct List__Fuse_Input_FocusGainedHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Input_FocusGainedHandler__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Input_FocusGainedHandler___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Input_FocusGainedHandler___ObjInit_1(this, capacity); }
    void Add(::uDelegate* item) { List__Fuse_Input_FocusGainedHandler__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Input_FocusGainedHandler__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Input_FocusGainedHandler__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Input_FocusGainedHandler__Clear(this); }
    bool Contains(::uDelegate* item) { return List__Fuse_Input_FocusGainedHandler__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Input_FocusGainedHandler__EnsureCapacity(this); }
    int Count() { return List__Fuse_Input_FocusGainedHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Fuse_Input_FocusGainedHandler__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Input_FocusGainedHandler GetEnumerator();
    int IndexOf(::uDelegate* item) { return List__Fuse_Input_FocusGainedHandler__IndexOf(this, item); }
    void Insert(int index, ::uDelegate* item) { List__Fuse_Input_FocusGainedHandler__Insert(this, index, item); }
    bool Remove(::uDelegate* item) { return List__Fuse_Input_FocusGainedHandler__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Input_FocusGainedHandler__RemoveAt(this, index); }
    void Item(int index, ::uDelegate* value) { List__Fuse_Input_FocusGainedHandler__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Input_FocusGainedHandler__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Input_FocusGainedHandler__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_FocusGainedHandler.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Input_FocusGainedHandler List__Fuse_Input_FocusGainedHandler::GetEnumerator() { return List__Fuse_Input_FocusGainedHandler__GetEnumerator(this); }

}}}


#endif
