// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Resources_ImageSource;

struct List__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Resources_ImageSource __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource __interface_2;
};

List__Fuse_Resources_ImageSource__uType* List__Fuse_Resources_ImageSource__typeof();

::uObject* List__Fuse_Resources_ImageSource__GetEnumerator_boxed(List__Fuse_Resources_ImageSource* __this);
void List__Fuse_Resources_ImageSource___ObjInit(List__Fuse_Resources_ImageSource* __this);
void List__Fuse_Resources_ImageSource___ObjInit_1(List__Fuse_Resources_ImageSource* __this, int capacity);
void List__Fuse_Resources_ImageSource__Add(List__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item);
void List__Fuse_Resources_ImageSource__AddRange(List__Fuse_Resources_ImageSource* __this, ::uObject* items);
void List__Fuse_Resources_ImageSource__BoundsCheck(List__Fuse_Resources_ImageSource* __this, int index);
void List__Fuse_Resources_ImageSource__Clear(List__Fuse_Resources_ImageSource* __this);
bool List__Fuse_Resources_ImageSource__Contains(List__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item);
void List__Fuse_Resources_ImageSource__EnsureCapacity(List__Fuse_Resources_ImageSource* __this);
int List__Fuse_Resources_ImageSource__get_Count(List__Fuse_Resources_ImageSource* __this);
::app::Fuse::Resources::ImageSource* List__Fuse_Resources_ImageSource__get_Item(List__Fuse_Resources_ImageSource* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource List__Fuse_Resources_ImageSource__GetEnumerator(List__Fuse_Resources_ImageSource* __this);
int List__Fuse_Resources_ImageSource__IndexOf(List__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item);
void List__Fuse_Resources_ImageSource__Insert(List__Fuse_Resources_ImageSource* __this, int index, ::app::Fuse::Resources::ImageSource* item);
List__Fuse_Resources_ImageSource* List__Fuse_Resources_ImageSource__New_1(::uStatic* __this);
List__Fuse_Resources_ImageSource* List__Fuse_Resources_ImageSource__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Resources_ImageSource__Remove(List__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item);
void List__Fuse_Resources_ImageSource__RemoveAt(List__Fuse_Resources_ImageSource* __this, int index);
void List__Fuse_Resources_ImageSource__set_Item(List__Fuse_Resources_ImageSource* __this, int index, ::app::Fuse::Resources::ImageSource* value);
void List__Fuse_Resources_ImageSource__Sort(List__Fuse_Resources_ImageSource* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Resources_ImageSource__ToArray(List__Fuse_Resources_ImageSource* __this);

struct List__Fuse_Resources_ImageSource : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Resources_ImageSource__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Resources_ImageSource___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Resources_ImageSource___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Resources::ImageSource* item) { List__Fuse_Resources_ImageSource__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Resources_ImageSource__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Resources_ImageSource__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Resources_ImageSource__Clear(this); }
    bool Contains(::app::Fuse::Resources::ImageSource* item) { return List__Fuse_Resources_ImageSource__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Resources_ImageSource__EnsureCapacity(this); }
    int Count() { return List__Fuse_Resources_ImageSource__get_Count(this); }
    ::app::Fuse::Resources::ImageSource* Item(int index) { return List__Fuse_Resources_ImageSource__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource GetEnumerator();
    int IndexOf(::app::Fuse::Resources::ImageSource* item) { return List__Fuse_Resources_ImageSource__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Resources::ImageSource* item) { List__Fuse_Resources_ImageSource__Insert(this, index, item); }
    bool Remove(::app::Fuse::Resources::ImageSource* item) { return List__Fuse_Resources_ImageSource__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Resources_ImageSource__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Resources::ImageSource* value) { List__Fuse_Resources_ImageSource__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Resources_ImageSource__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Resources_ImageSource__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ImageSource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource List__Fuse_Resources_ImageSource::GetEnumerator() { return List__Fuse_Resources_ImageSource__GetEnumerator(this); }

}}}


#endif
