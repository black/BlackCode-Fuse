// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_FileSource;

struct List__Uno_UX_FileSource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_FileSource __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_FileSource __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_UX_FileSource __interface_2;
};

List__Uno_UX_FileSource__uType* List__Uno_UX_FileSource__typeof();

::uObject* List__Uno_UX_FileSource__GetEnumerator_boxed(List__Uno_UX_FileSource* __this);
void List__Uno_UX_FileSource___ObjInit(List__Uno_UX_FileSource* __this);
void List__Uno_UX_FileSource___ObjInit_1(List__Uno_UX_FileSource* __this, int capacity);
void List__Uno_UX_FileSource__Add(List__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
void List__Uno_UX_FileSource__AddRange(List__Uno_UX_FileSource* __this, ::uObject* items);
void List__Uno_UX_FileSource__BoundsCheck(List__Uno_UX_FileSource* __this, int index);
void List__Uno_UX_FileSource__Clear(List__Uno_UX_FileSource* __this);
bool List__Uno_UX_FileSource__Contains(List__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
void List__Uno_UX_FileSource__EnsureCapacity(List__Uno_UX_FileSource* __this);
int List__Uno_UX_FileSource__get_Count(List__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* List__Uno_UX_FileSource__get_Item(List__Uno_UX_FileSource* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource List__Uno_UX_FileSource__GetEnumerator(List__Uno_UX_FileSource* __this);
int List__Uno_UX_FileSource__IndexOf(List__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
void List__Uno_UX_FileSource__Insert(List__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* item);
List__Uno_UX_FileSource* List__Uno_UX_FileSource__New_1(::uStatic* __this);
List__Uno_UX_FileSource* List__Uno_UX_FileSource__New_2(::uStatic* __this, int capacity);
bool List__Uno_UX_FileSource__Remove(List__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
void List__Uno_UX_FileSource__RemoveAt(List__Uno_UX_FileSource* __this, int index);
void List__Uno_UX_FileSource__set_Item(List__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* value);
void List__Uno_UX_FileSource__Sort(List__Uno_UX_FileSource* __this, ::uDelegate* comparer);
::uArray* List__Uno_UX_FileSource__ToArray(List__Uno_UX_FileSource* __this);

struct List__Uno_UX_FileSource : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_UX_FileSource__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_UX_FileSource___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_UX_FileSource___ObjInit_1(this, capacity); }
    void Add(::app::Uno::UX::FileSource* item) { List__Uno_UX_FileSource__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_UX_FileSource__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_UX_FileSource__BoundsCheck(this, index); }
    void Clear() { List__Uno_UX_FileSource__Clear(this); }
    bool Contains(::app::Uno::UX::FileSource* item) { return List__Uno_UX_FileSource__Contains(this, item); }
    void EnsureCapacity() { List__Uno_UX_FileSource__EnsureCapacity(this); }
    int Count() { return List__Uno_UX_FileSource__get_Count(this); }
    ::app::Uno::UX::FileSource* Item(int index) { return List__Uno_UX_FileSource__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource GetEnumerator();
    int IndexOf(::app::Uno::UX::FileSource* item) { return List__Uno_UX_FileSource__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::UX::FileSource* item) { List__Uno_UX_FileSource__Insert(this, index, item); }
    bool Remove(::app::Uno::UX::FileSource* item) { return List__Uno_UX_FileSource__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_UX_FileSource__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::UX::FileSource* value) { List__Uno_UX_FileSource__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_UX_FileSource__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_UX_FileSource__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_UX_FileSource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource List__Uno_UX_FileSource::GetEnumerator() { return List__Uno_UX_FileSource__GetEnumerator(this); }

}}}


#endif
