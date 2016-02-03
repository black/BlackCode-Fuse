// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_NATIVE_MEMBER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_NATIVE_MEMBER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct NativeMember; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Scripting_NativeMember; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Scripting_NativeMember;

struct List__Fuse_Scripting_NativeMember__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Scripting_NativeMember __interface_0;
};

List__Fuse_Scripting_NativeMember__uType* List__Fuse_Scripting_NativeMember__typeof();

::uObject* List__Fuse_Scripting_NativeMember__GetEnumerator_boxed(List__Fuse_Scripting_NativeMember* __this);
void List__Fuse_Scripting_NativeMember___ObjInit(List__Fuse_Scripting_NativeMember* __this);
void List__Fuse_Scripting_NativeMember___ObjInit_1(List__Fuse_Scripting_NativeMember* __this, int capacity);
void List__Fuse_Scripting_NativeMember__Add(List__Fuse_Scripting_NativeMember* __this, ::app::Fuse::Scripting::NativeMember* item);
void List__Fuse_Scripting_NativeMember__AddRange(List__Fuse_Scripting_NativeMember* __this, ::uObject* items);
void List__Fuse_Scripting_NativeMember__BoundsCheck(List__Fuse_Scripting_NativeMember* __this, int index);
void List__Fuse_Scripting_NativeMember__Clear(List__Fuse_Scripting_NativeMember* __this);
bool List__Fuse_Scripting_NativeMember__Contains(List__Fuse_Scripting_NativeMember* __this, ::app::Fuse::Scripting::NativeMember* item);
void List__Fuse_Scripting_NativeMember__EnsureCapacity(List__Fuse_Scripting_NativeMember* __this);
int List__Fuse_Scripting_NativeMember__get_Count(List__Fuse_Scripting_NativeMember* __this);
::app::Fuse::Scripting::NativeMember* List__Fuse_Scripting_NativeMember__get_Item(List__Fuse_Scripting_NativeMember* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember List__Fuse_Scripting_NativeMember__GetEnumerator(List__Fuse_Scripting_NativeMember* __this);
int List__Fuse_Scripting_NativeMember__IndexOf(List__Fuse_Scripting_NativeMember* __this, ::app::Fuse::Scripting::NativeMember* item);
void List__Fuse_Scripting_NativeMember__Insert(List__Fuse_Scripting_NativeMember* __this, int index, ::app::Fuse::Scripting::NativeMember* item);
List__Fuse_Scripting_NativeMember* List__Fuse_Scripting_NativeMember__New_1(::uStatic* __this);
List__Fuse_Scripting_NativeMember* List__Fuse_Scripting_NativeMember__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Scripting_NativeMember__Remove(List__Fuse_Scripting_NativeMember* __this, ::app::Fuse::Scripting::NativeMember* item);
void List__Fuse_Scripting_NativeMember__RemoveAt(List__Fuse_Scripting_NativeMember* __this, int index);
void List__Fuse_Scripting_NativeMember__set_Item(List__Fuse_Scripting_NativeMember* __this, int index, ::app::Fuse::Scripting::NativeMember* value);
void List__Fuse_Scripting_NativeMember__Sort(List__Fuse_Scripting_NativeMember* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Scripting_NativeMember__ToArray(List__Fuse_Scripting_NativeMember* __this);

struct List__Fuse_Scripting_NativeMember : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Scripting_NativeMember__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Scripting_NativeMember___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Scripting_NativeMember___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Scripting::NativeMember* item) { List__Fuse_Scripting_NativeMember__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Scripting_NativeMember__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Scripting_NativeMember__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Scripting_NativeMember__Clear(this); }
    bool Contains(::app::Fuse::Scripting::NativeMember* item) { return List__Fuse_Scripting_NativeMember__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Scripting_NativeMember__EnsureCapacity(this); }
    int Count() { return List__Fuse_Scripting_NativeMember__get_Count(this); }
    ::app::Fuse::Scripting::NativeMember* Item(int index) { return List__Fuse_Scripting_NativeMember__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember GetEnumerator();
    int IndexOf(::app::Fuse::Scripting::NativeMember* item) { return List__Fuse_Scripting_NativeMember__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Scripting::NativeMember* item) { List__Fuse_Scripting_NativeMember__Insert(this, index, item); }
    bool Remove(::app::Fuse::Scripting::NativeMember* item) { return List__Fuse_Scripting_NativeMember__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Scripting_NativeMember__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Scripting::NativeMember* value) { List__Fuse_Scripting_NativeMember__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Scripting_NativeMember__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Scripting_NativeMember__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Scripting_NativeMember.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember List__Fuse_Scripting_NativeMember::GetEnumerator() { return List__Fuse_Scripting_NativeMember__GetEnumerator(this); }

}}}


#endif
