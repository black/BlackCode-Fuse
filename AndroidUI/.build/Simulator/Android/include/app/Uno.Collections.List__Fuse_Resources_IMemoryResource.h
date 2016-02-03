// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_MEMORY_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_MEMORY_RESOURCE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Resources_IMemoryResource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Resources_IMemoryResource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Resources_IMemoryResource;

struct List__Fuse_Resources_IMemoryResource__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Resources_IMemoryResource __interface_0;
};

List__Fuse_Resources_IMemoryResource__uType* List__Fuse_Resources_IMemoryResource__typeof();

::uObject* List__Fuse_Resources_IMemoryResource__GetEnumerator_boxed(List__Fuse_Resources_IMemoryResource* __this);
void List__Fuse_Resources_IMemoryResource___ObjInit(List__Fuse_Resources_IMemoryResource* __this);
void List__Fuse_Resources_IMemoryResource___ObjInit_1(List__Fuse_Resources_IMemoryResource* __this, int capacity);
void List__Fuse_Resources_IMemoryResource__Add(List__Fuse_Resources_IMemoryResource* __this, ::uObject* item);
void List__Fuse_Resources_IMemoryResource__AddRange(List__Fuse_Resources_IMemoryResource* __this, ::uObject* items);
void List__Fuse_Resources_IMemoryResource__BoundsCheck(List__Fuse_Resources_IMemoryResource* __this, int index);
void List__Fuse_Resources_IMemoryResource__Clear(List__Fuse_Resources_IMemoryResource* __this);
bool List__Fuse_Resources_IMemoryResource__Contains(List__Fuse_Resources_IMemoryResource* __this, ::uObject* item);
void List__Fuse_Resources_IMemoryResource__EnsureCapacity(List__Fuse_Resources_IMemoryResource* __this);
int List__Fuse_Resources_IMemoryResource__get_Count(List__Fuse_Resources_IMemoryResource* __this);
::uObject* List__Fuse_Resources_IMemoryResource__get_Item(List__Fuse_Resources_IMemoryResource* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Resources_IMemoryResource List__Fuse_Resources_IMemoryResource__GetEnumerator(List__Fuse_Resources_IMemoryResource* __this);
int List__Fuse_Resources_IMemoryResource__IndexOf(List__Fuse_Resources_IMemoryResource* __this, ::uObject* item);
void List__Fuse_Resources_IMemoryResource__Insert(List__Fuse_Resources_IMemoryResource* __this, int index, ::uObject* item);
List__Fuse_Resources_IMemoryResource* List__Fuse_Resources_IMemoryResource__New_1(::uStatic* __this);
List__Fuse_Resources_IMemoryResource* List__Fuse_Resources_IMemoryResource__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Resources_IMemoryResource__Remove(List__Fuse_Resources_IMemoryResource* __this, ::uObject* item);
void List__Fuse_Resources_IMemoryResource__RemoveAt(List__Fuse_Resources_IMemoryResource* __this, int index);
void List__Fuse_Resources_IMemoryResource__set_Item(List__Fuse_Resources_IMemoryResource* __this, int index, ::uObject* value);
void List__Fuse_Resources_IMemoryResource__Sort(List__Fuse_Resources_IMemoryResource* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Resources_IMemoryResource__ToArray(List__Fuse_Resources_IMemoryResource* __this);

struct List__Fuse_Resources_IMemoryResource : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Resources_IMemoryResource__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Resources_IMemoryResource___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Resources_IMemoryResource___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Resources_IMemoryResource__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Resources_IMemoryResource__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Resources_IMemoryResource__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Resources_IMemoryResource__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Resources_IMemoryResource__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Resources_IMemoryResource__EnsureCapacity(this); }
    int Count() { return List__Fuse_Resources_IMemoryResource__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Resources_IMemoryResource__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_IMemoryResource GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_Resources_IMemoryResource__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_Resources_IMemoryResource__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_Resources_IMemoryResource__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Resources_IMemoryResource__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Resources_IMemoryResource__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Resources_IMemoryResource__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Resources_IMemoryResource__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_IMemoryResource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_IMemoryResource List__Fuse_Resources_IMemoryResource::GetEnumerator() { return List__Fuse_Resources_IMemoryResource__GetEnumerator(this); }

}}}


#endif
