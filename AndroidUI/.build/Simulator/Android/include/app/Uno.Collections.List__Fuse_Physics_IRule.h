// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_I_RULE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_I_RULE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Physics_IRule.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Physics_IRule; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Physics_IRule;

struct List__Fuse_Physics_IRule__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Physics_IRule __interface_0;
};

List__Fuse_Physics_IRule__uType* List__Fuse_Physics_IRule__typeof();

::uObject* List__Fuse_Physics_IRule__GetEnumerator_boxed(List__Fuse_Physics_IRule* __this);
void List__Fuse_Physics_IRule___ObjInit(List__Fuse_Physics_IRule* __this);
void List__Fuse_Physics_IRule___ObjInit_1(List__Fuse_Physics_IRule* __this, int capacity);
void List__Fuse_Physics_IRule__Add(List__Fuse_Physics_IRule* __this, ::uObject* item);
void List__Fuse_Physics_IRule__AddRange(List__Fuse_Physics_IRule* __this, ::uObject* items);
void List__Fuse_Physics_IRule__BoundsCheck(List__Fuse_Physics_IRule* __this, int index);
void List__Fuse_Physics_IRule__Clear(List__Fuse_Physics_IRule* __this);
bool List__Fuse_Physics_IRule__Contains(List__Fuse_Physics_IRule* __this, ::uObject* item);
void List__Fuse_Physics_IRule__EnsureCapacity(List__Fuse_Physics_IRule* __this);
int List__Fuse_Physics_IRule__get_Count(List__Fuse_Physics_IRule* __this);
::uObject* List__Fuse_Physics_IRule__get_Item(List__Fuse_Physics_IRule* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule List__Fuse_Physics_IRule__GetEnumerator(List__Fuse_Physics_IRule* __this);
int List__Fuse_Physics_IRule__IndexOf(List__Fuse_Physics_IRule* __this, ::uObject* item);
void List__Fuse_Physics_IRule__Insert(List__Fuse_Physics_IRule* __this, int index, ::uObject* item);
List__Fuse_Physics_IRule* List__Fuse_Physics_IRule__New_1(::uStatic* __this);
List__Fuse_Physics_IRule* List__Fuse_Physics_IRule__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Physics_IRule__Remove(List__Fuse_Physics_IRule* __this, ::uObject* item);
void List__Fuse_Physics_IRule__RemoveAt(List__Fuse_Physics_IRule* __this, int index);
void List__Fuse_Physics_IRule__set_Item(List__Fuse_Physics_IRule* __this, int index, ::uObject* value);
void List__Fuse_Physics_IRule__Sort(List__Fuse_Physics_IRule* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Physics_IRule__ToArray(List__Fuse_Physics_IRule* __this);

struct List__Fuse_Physics_IRule : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Physics_IRule__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Physics_IRule___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Physics_IRule___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Physics_IRule__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Physics_IRule__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Physics_IRule__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Physics_IRule__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Physics_IRule__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Physics_IRule__EnsureCapacity(this); }
    int Count() { return List__Fuse_Physics_IRule__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Physics_IRule__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule GetEnumerator();
    int IndexOf(::uObject* item) { return List__Fuse_Physics_IRule__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Fuse_Physics_IRule__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Fuse_Physics_IRule__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Physics_IRule__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Physics_IRule__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Physics_IRule__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Physics_IRule__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_IRule.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule List__Fuse_Physics_IRule::GetEnumerator() { return List__Fuse_Physics_IRule__GetEnumerator(this); }

}}}


#endif
