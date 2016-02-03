// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_JAVA_SCRIPT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_JAVA_SCRIPT_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct JavaScript; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Reactive_JavaScript; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Reactive_JavaScript;

struct List__Fuse_Reactive_JavaScript__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Reactive_JavaScript __interface_0;
};

List__Fuse_Reactive_JavaScript__uType* List__Fuse_Reactive_JavaScript__typeof();

::uObject* List__Fuse_Reactive_JavaScript__GetEnumerator_boxed(List__Fuse_Reactive_JavaScript* __this);
void List__Fuse_Reactive_JavaScript___ObjInit(List__Fuse_Reactive_JavaScript* __this);
void List__Fuse_Reactive_JavaScript___ObjInit_1(List__Fuse_Reactive_JavaScript* __this, int capacity);
void List__Fuse_Reactive_JavaScript__Add(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item);
void List__Fuse_Reactive_JavaScript__AddRange(List__Fuse_Reactive_JavaScript* __this, ::uObject* items);
void List__Fuse_Reactive_JavaScript__BoundsCheck(List__Fuse_Reactive_JavaScript* __this, int index);
void List__Fuse_Reactive_JavaScript__Clear(List__Fuse_Reactive_JavaScript* __this);
bool List__Fuse_Reactive_JavaScript__Contains(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item);
void List__Fuse_Reactive_JavaScript__EnsureCapacity(List__Fuse_Reactive_JavaScript* __this);
int List__Fuse_Reactive_JavaScript__get_Count(List__Fuse_Reactive_JavaScript* __this);
::app::Fuse::Reactive::JavaScript* List__Fuse_Reactive_JavaScript__get_Item(List__Fuse_Reactive_JavaScript* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript List__Fuse_Reactive_JavaScript__GetEnumerator(List__Fuse_Reactive_JavaScript* __this);
int List__Fuse_Reactive_JavaScript__IndexOf(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item);
void List__Fuse_Reactive_JavaScript__Insert(List__Fuse_Reactive_JavaScript* __this, int index, ::app::Fuse::Reactive::JavaScript* item);
List__Fuse_Reactive_JavaScript* List__Fuse_Reactive_JavaScript__New_1(::uStatic* __this);
List__Fuse_Reactive_JavaScript* List__Fuse_Reactive_JavaScript__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Reactive_JavaScript__Remove(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item);
void List__Fuse_Reactive_JavaScript__RemoveAt(List__Fuse_Reactive_JavaScript* __this, int index);
void List__Fuse_Reactive_JavaScript__set_Item(List__Fuse_Reactive_JavaScript* __this, int index, ::app::Fuse::Reactive::JavaScript* value);
void List__Fuse_Reactive_JavaScript__Sort(List__Fuse_Reactive_JavaScript* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Reactive_JavaScript__ToArray(List__Fuse_Reactive_JavaScript* __this);

struct List__Fuse_Reactive_JavaScript : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Reactive_JavaScript__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Reactive_JavaScript___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Reactive_JavaScript___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Reactive::JavaScript* item) { List__Fuse_Reactive_JavaScript__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Reactive_JavaScript__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Reactive_JavaScript__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Reactive_JavaScript__Clear(this); }
    bool Contains(::app::Fuse::Reactive::JavaScript* item) { return List__Fuse_Reactive_JavaScript__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Reactive_JavaScript__EnsureCapacity(this); }
    int Count() { return List__Fuse_Reactive_JavaScript__get_Count(this); }
    ::app::Fuse::Reactive::JavaScript* Item(int index) { return List__Fuse_Reactive_JavaScript__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript GetEnumerator();
    int IndexOf(::app::Fuse::Reactive::JavaScript* item) { return List__Fuse_Reactive_JavaScript__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Reactive::JavaScript* item) { List__Fuse_Reactive_JavaScript__Insert(this, index, item); }
    bool Remove(::app::Fuse::Reactive::JavaScript* item) { return List__Fuse_Reactive_JavaScript__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Reactive_JavaScript__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Reactive::JavaScript* value) { List__Fuse_Reactive_JavaScript__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Reactive_JavaScript__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Reactive_JavaScript__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_JavaScript.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript List__Fuse_Reactive_JavaScript::GetEnumerator() { return List__Fuse_Reactive_JavaScript__GetEnumerator(this); }

}}}


#endif
