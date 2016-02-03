// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_I_NAME_LISTENER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_I_NAME_LISTENER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Scripting_INameListener.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Scripting_INameListener; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Scripting_INameListener;

struct List__Fuse_Scripting_INameListener__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Scripting_INameListener __interface_0;
};

List__Fuse_Scripting_INameListener__uType* List__Fuse_Scripting_INameListener__typeof();

::uObject* List__Fuse_Scripting_INameListener__GetEnumerator_boxed(List__Fuse_Scripting_INameListener* __this);
void List__Fuse_Scripting_INameListener___ObjInit(List__Fuse_Scripting_INameListener* __this);
void List__Fuse_Scripting_INameListener___ObjInit_1(List__Fuse_Scripting_INameListener* __this, int capacity);
void List__Fuse_Scripting_INameListener__Add(List__Fuse_Scripting_INameListener* __this, ::uObject* item);
void List__Fuse_Scripting_INameListener__AddRange(List__Fuse_Scripting_INameListener* __this, ::uObject* items);
void List__Fuse_Scripting_INameListener__BoundsCheck(List__Fuse_Scripting_INameListener* __this, int index);
void List__Fuse_Scripting_INameListener__Clear(List__Fuse_Scripting_INameListener* __this);
bool List__Fuse_Scripting_INameListener__Contains(List__Fuse_Scripting_INameListener* __this, ::uObject* item);
void List__Fuse_Scripting_INameListener__EnsureCapacity(List__Fuse_Scripting_INameListener* __this);
int List__Fuse_Scripting_INameListener__get_Count(List__Fuse_Scripting_INameListener* __this);
::uObject* List__Fuse_Scripting_INameListener__get_Item(List__Fuse_Scripting_INameListener* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_INameListener List__Fuse_Scripting_INameListener__GetEnumerator(List__Fuse_Scripting_INameListener* __this);
int List__Fuse_Scripting_INameListener__IndexOf(List__Fuse_Scripting_INameListener* __this, ::uObject* item);
void List__Fuse_Scripting_INameListener__Insert(List__Fuse_Scripting_INameListener* __this, int index, ::uObject* item);
List__Fuse_Scripting_INameListener* List__Fuse_Scripting_INameListener__New_1(::uStatic* __this);
List__Fuse_Scripting_INameListener* List__Fuse_Scripting_INameListener__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Scripting_INameListener__Remove(List__Fuse_Scripting_INameListener* __this, ::uObject* item);
void List__Fuse_Scripting_INameListener__RemoveAt(List__Fuse_Scripting_INameListener* __this, int index);
void List__Fuse_Scripting_INameListener__set_Item(List__Fuse_Scripting_INameListener* __this, int index, ::uObject* value);
void List__Fuse_Scripting_INameListener__Sort(List__Fuse_Scripting_INameListener* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Scripting_INameListener__ToArray(List__Fuse_Scripting_INameListener* __this);

struct List__Fuse_Scripting_INameListener : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Scripting_INameListener__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Scripting_INameListener___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Scripting_INameListener___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Scripting_INameListener__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Scripting_INameListener__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Scripting_INameListener__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Scripting_INameListener__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Scripting_INameListener__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Scripting_INameListener__EnsureCapacity(this); }
    int Count() { return List__Fuse_Scripting_INameListener__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Scripting_INameListener__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_INameListener GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_Scripting_INameListener__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_Scripting_INameListener__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_Scripting_INameListener__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Scripting_INameListener__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Scripting_INameListener__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Scripting_INameListener__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Scripting_INameListener__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Scripting_INameListener.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_INameListener List__Fuse_Scripting_INameListener::GetEnumerator() { return List__Fuse_Scripting_INameListener__GetEnumerator(this); }

}}}


#endif
