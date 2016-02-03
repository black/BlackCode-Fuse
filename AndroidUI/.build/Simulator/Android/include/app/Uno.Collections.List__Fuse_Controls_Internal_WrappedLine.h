// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_INTERNAL_WRAPPED_LINE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_INTERNAL_WRAPPED_LINE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Controls_Internal_WrappedLine; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Controls_Internal_WrappedLine;

struct List__Fuse_Controls_Internal_WrappedLine__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Controls_Internal_WrappedLine __interface_0;
};

List__Fuse_Controls_Internal_WrappedLine__uType* List__Fuse_Controls_Internal_WrappedLine__typeof();

::uObject* List__Fuse_Controls_Internal_WrappedLine__GetEnumerator_boxed(List__Fuse_Controls_Internal_WrappedLine* __this);
void List__Fuse_Controls_Internal_WrappedLine___ObjInit(List__Fuse_Controls_Internal_WrappedLine* __this);
void List__Fuse_Controls_Internal_WrappedLine___ObjInit_1(List__Fuse_Controls_Internal_WrappedLine* __this, int capacity);
void List__Fuse_Controls_Internal_WrappedLine__Add(List__Fuse_Controls_Internal_WrappedLine* __this, ::app::Fuse::Controls::Internal::WrappedLine* item);
void List__Fuse_Controls_Internal_WrappedLine__AddRange(List__Fuse_Controls_Internal_WrappedLine* __this, ::uObject* items);
void List__Fuse_Controls_Internal_WrappedLine__BoundsCheck(List__Fuse_Controls_Internal_WrappedLine* __this, int index);
void List__Fuse_Controls_Internal_WrappedLine__Clear(List__Fuse_Controls_Internal_WrappedLine* __this);
bool List__Fuse_Controls_Internal_WrappedLine__Contains(List__Fuse_Controls_Internal_WrappedLine* __this, ::app::Fuse::Controls::Internal::WrappedLine* item);
void List__Fuse_Controls_Internal_WrappedLine__EnsureCapacity(List__Fuse_Controls_Internal_WrappedLine* __this);
int List__Fuse_Controls_Internal_WrappedLine__get_Count(List__Fuse_Controls_Internal_WrappedLine* __this);
::app::Fuse::Controls::Internal::WrappedLine* List__Fuse_Controls_Internal_WrappedLine__get_Item(List__Fuse_Controls_Internal_WrappedLine* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WrappedLine List__Fuse_Controls_Internal_WrappedLine__GetEnumerator(List__Fuse_Controls_Internal_WrappedLine* __this);
int List__Fuse_Controls_Internal_WrappedLine__IndexOf(List__Fuse_Controls_Internal_WrappedLine* __this, ::app::Fuse::Controls::Internal::WrappedLine* item);
void List__Fuse_Controls_Internal_WrappedLine__Insert(List__Fuse_Controls_Internal_WrappedLine* __this, int index, ::app::Fuse::Controls::Internal::WrappedLine* item);
List__Fuse_Controls_Internal_WrappedLine* List__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this);
List__Fuse_Controls_Internal_WrappedLine* List__Fuse_Controls_Internal_WrappedLine__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Controls_Internal_WrappedLine__Remove(List__Fuse_Controls_Internal_WrappedLine* __this, ::app::Fuse::Controls::Internal::WrappedLine* item);
void List__Fuse_Controls_Internal_WrappedLine__RemoveAt(List__Fuse_Controls_Internal_WrappedLine* __this, int index);
void List__Fuse_Controls_Internal_WrappedLine__set_Item(List__Fuse_Controls_Internal_WrappedLine* __this, int index, ::app::Fuse::Controls::Internal::WrappedLine* value);
void List__Fuse_Controls_Internal_WrappedLine__Sort(List__Fuse_Controls_Internal_WrappedLine* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Controls_Internal_WrappedLine__ToArray(List__Fuse_Controls_Internal_WrappedLine* __this);

struct List__Fuse_Controls_Internal_WrappedLine : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Controls_Internal_WrappedLine__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Controls_Internal_WrappedLine___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Controls_Internal_WrappedLine___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Controls::Internal::WrappedLine* item) { List__Fuse_Controls_Internal_WrappedLine__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Controls_Internal_WrappedLine__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Controls_Internal_WrappedLine__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Controls_Internal_WrappedLine__Clear(this); }
    bool Contains(::app::Fuse::Controls::Internal::WrappedLine* item) { return List__Fuse_Controls_Internal_WrappedLine__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Controls_Internal_WrappedLine__EnsureCapacity(this); }
    int Count() { return List__Fuse_Controls_Internal_WrappedLine__get_Count(this); }
    ::app::Fuse::Controls::Internal::WrappedLine* Item(int index) { return List__Fuse_Controls_Internal_WrappedLine__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WrappedLine GetEnumerator();
    int IndexOf(::app::Fuse::Controls::Internal::WrappedLine* item) { return List__Fuse_Controls_Internal_WrappedLine__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Controls::Internal::WrappedLine* item) { List__Fuse_Controls_Internal_WrappedLine__Insert(this, index, item); }
    bool Remove(::app::Fuse::Controls::Internal::WrappedLine* item) { return List__Fuse_Controls_Internal_WrappedLine__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Controls_Internal_WrappedLine__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Controls::Internal::WrappedLine* value) { List__Fuse_Controls_Internal_WrappedLine__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Controls_Internal_WrappedLine__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Controls_Internal_WrappedLine__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_Internal_WrappedLine.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WrappedLine List__Fuse_Controls_Internal_WrappedLine::GetEnumerator() { return List__Fuse_Controls_Internal_WrappedLine__GetEnumerator(this); }

}}}


#endif
