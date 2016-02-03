// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_I_VIEWPORT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_I_VIEWPORT_H__

#include <app/Uno.Collections.ICollection__Fuse_IViewport.h>
#include <app/Uno.Collections.IEnumerable__Fuse_IViewport.h>
#include <app/Uno.Collections.IList__Fuse_IViewport.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_IViewport; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_IViewport;

struct List__Fuse_IViewport__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_IViewport __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_IViewport __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_IViewport __interface_2;
};

List__Fuse_IViewport__uType* List__Fuse_IViewport__typeof();

::uObject* List__Fuse_IViewport__GetEnumerator_boxed(List__Fuse_IViewport* __this);
void List__Fuse_IViewport___ObjInit(List__Fuse_IViewport* __this);
void List__Fuse_IViewport___ObjInit_1(List__Fuse_IViewport* __this, int capacity);
void List__Fuse_IViewport__Add(List__Fuse_IViewport* __this, ::uObject* item);
void List__Fuse_IViewport__AddRange(List__Fuse_IViewport* __this, ::uObject* items);
void List__Fuse_IViewport__BoundsCheck(List__Fuse_IViewport* __this, int index);
void List__Fuse_IViewport__Clear(List__Fuse_IViewport* __this);
bool List__Fuse_IViewport__Contains(List__Fuse_IViewport* __this, ::uObject* item);
void List__Fuse_IViewport__EnsureCapacity(List__Fuse_IViewport* __this);
int List__Fuse_IViewport__get_Count(List__Fuse_IViewport* __this);
::uObject* List__Fuse_IViewport__get_Item(List__Fuse_IViewport* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_IViewport List__Fuse_IViewport__GetEnumerator(List__Fuse_IViewport* __this);
int List__Fuse_IViewport__IndexOf(List__Fuse_IViewport* __this, ::uObject* item);
void List__Fuse_IViewport__Insert(List__Fuse_IViewport* __this, int index, ::uObject* item);
List__Fuse_IViewport* List__Fuse_IViewport__New_1(::uStatic* __this);
List__Fuse_IViewport* List__Fuse_IViewport__New_2(::uStatic* __this, int capacity);
bool List__Fuse_IViewport__Remove(List__Fuse_IViewport* __this, ::uObject* item);
void List__Fuse_IViewport__RemoveAt(List__Fuse_IViewport* __this, int index);
void List__Fuse_IViewport__set_Item(List__Fuse_IViewport* __this, int index, ::uObject* value);
void List__Fuse_IViewport__Sort(List__Fuse_IViewport* __this, ::uDelegate* comparer);
::uArray* List__Fuse_IViewport__ToArray(List__Fuse_IViewport* __this);

struct List__Fuse_IViewport : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_IViewport__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_IViewport___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_IViewport___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_IViewport__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_IViewport__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_IViewport__BoundsCheck(this, index); }
    void Clear() { List__Fuse_IViewport__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_IViewport__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_IViewport__EnsureCapacity(this); }
    int Count() { return List__Fuse_IViewport__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_IViewport__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_IViewport GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_IViewport__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_IViewport__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_IViewport__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_IViewport__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_IViewport__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_IViewport__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_IViewport__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_IViewport.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_IViewport List__Fuse_IViewport::GetEnumerator() { return List__Fuse_IViewport__GetEnumerator(this); }

}}}


#endif
