// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_I_O_S_STATUS_BAR_CONFIG_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_I_O_S_STATUS_BAR_CONFIG_H__

#include <app/Uno.Collections.IEnumerable__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_iOS_StatusBarConfig; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_iOS_StatusBarConfig;

struct List__Fuse_iOS_StatusBarConfig__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_iOS_StatusBarConfig __interface_0;
};

List__Fuse_iOS_StatusBarConfig__uType* List__Fuse_iOS_StatusBarConfig__typeof();

::uObject* List__Fuse_iOS_StatusBarConfig__GetEnumerator_boxed(List__Fuse_iOS_StatusBarConfig* __this);
void List__Fuse_iOS_StatusBarConfig___ObjInit(List__Fuse_iOS_StatusBarConfig* __this);
void List__Fuse_iOS_StatusBarConfig___ObjInit_1(List__Fuse_iOS_StatusBarConfig* __this, int capacity);
void List__Fuse_iOS_StatusBarConfig__Add(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item);
void List__Fuse_iOS_StatusBarConfig__AddRange(List__Fuse_iOS_StatusBarConfig* __this, ::uObject* items);
void List__Fuse_iOS_StatusBarConfig__BoundsCheck(List__Fuse_iOS_StatusBarConfig* __this, int index);
void List__Fuse_iOS_StatusBarConfig__Clear(List__Fuse_iOS_StatusBarConfig* __this);
bool List__Fuse_iOS_StatusBarConfig__Contains(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item);
void List__Fuse_iOS_StatusBarConfig__EnsureCapacity(List__Fuse_iOS_StatusBarConfig* __this);
int List__Fuse_iOS_StatusBarConfig__get_Count(List__Fuse_iOS_StatusBarConfig* __this);
::app::Fuse::iOS::StatusBarConfig* List__Fuse_iOS_StatusBarConfig__get_Item(List__Fuse_iOS_StatusBarConfig* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_iOS_StatusBarConfig List__Fuse_iOS_StatusBarConfig__GetEnumerator(List__Fuse_iOS_StatusBarConfig* __this);
int List__Fuse_iOS_StatusBarConfig__IndexOf(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item);
void List__Fuse_iOS_StatusBarConfig__Insert(List__Fuse_iOS_StatusBarConfig* __this, int index, ::app::Fuse::iOS::StatusBarConfig* item);
List__Fuse_iOS_StatusBarConfig* List__Fuse_iOS_StatusBarConfig__New_1(::uStatic* __this);
List__Fuse_iOS_StatusBarConfig* List__Fuse_iOS_StatusBarConfig__New_2(::uStatic* __this, int capacity);
bool List__Fuse_iOS_StatusBarConfig__Remove(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item);
void List__Fuse_iOS_StatusBarConfig__RemoveAt(List__Fuse_iOS_StatusBarConfig* __this, int index);
void List__Fuse_iOS_StatusBarConfig__set_Item(List__Fuse_iOS_StatusBarConfig* __this, int index, ::app::Fuse::iOS::StatusBarConfig* value);
void List__Fuse_iOS_StatusBarConfig__Sort(List__Fuse_iOS_StatusBarConfig* __this, ::uDelegate* comparer);
::uArray* List__Fuse_iOS_StatusBarConfig__ToArray(List__Fuse_iOS_StatusBarConfig* __this);

struct List__Fuse_iOS_StatusBarConfig : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_iOS_StatusBarConfig__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_iOS_StatusBarConfig___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_iOS_StatusBarConfig___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::iOS::StatusBarConfig* item) { List__Fuse_iOS_StatusBarConfig__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_iOS_StatusBarConfig__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_iOS_StatusBarConfig__BoundsCheck(this, index); }
    void Clear() { List__Fuse_iOS_StatusBarConfig__Clear(this); }
    bool Contains(::app::Fuse::iOS::StatusBarConfig* item) { return List__Fuse_iOS_StatusBarConfig__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_iOS_StatusBarConfig__EnsureCapacity(this); }
    int Count() { return List__Fuse_iOS_StatusBarConfig__get_Count(this); }
    ::app::Fuse::iOS::StatusBarConfig* Item(int index) { return List__Fuse_iOS_StatusBarConfig__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_iOS_StatusBarConfig GetEnumerator();
    int IndexOf(::app::Fuse::iOS::StatusBarConfig* item) { return List__Fuse_iOS_StatusBarConfig__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::iOS::StatusBarConfig* item) { List__Fuse_iOS_StatusBarConfig__Insert(this, index, item); }
    bool Remove(::app::Fuse::iOS::StatusBarConfig* item) { return List__Fuse_iOS_StatusBarConfig__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_iOS_StatusBarConfig__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::iOS::StatusBarConfig* value) { List__Fuse_iOS_StatusBarConfig__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_iOS_StatusBarConfig__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_iOS_StatusBarConfig__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_iOS_StatusBarConfig.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_iOS_StatusBarConfig List__Fuse_iOS_StatusBarConfig::GetEnumerator() { return List__Fuse_iOS_StatusBarConfig__GetEnumerator(this); }

}}}


#endif
