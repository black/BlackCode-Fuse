// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_FACTORY_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_FACTORY_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_IFactory; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_IFactory;

struct List__Uno_UX_IFactory__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_IFactory __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory __interface_1;
};

List__Uno_UX_IFactory__uType* List__Uno_UX_IFactory__typeof();

::uObject* List__Uno_UX_IFactory__GetEnumerator_boxed(List__Uno_UX_IFactory* __this);
void List__Uno_UX_IFactory___ObjInit(List__Uno_UX_IFactory* __this);
void List__Uno_UX_IFactory___ObjInit_1(List__Uno_UX_IFactory* __this, int capacity);
void List__Uno_UX_IFactory__Add(List__Uno_UX_IFactory* __this, ::uObject* item);
void List__Uno_UX_IFactory__AddRange(List__Uno_UX_IFactory* __this, ::uObject* items);
void List__Uno_UX_IFactory__BoundsCheck(List__Uno_UX_IFactory* __this, int index);
void List__Uno_UX_IFactory__Clear(List__Uno_UX_IFactory* __this);
bool List__Uno_UX_IFactory__Contains(List__Uno_UX_IFactory* __this, ::uObject* item);
void List__Uno_UX_IFactory__EnsureCapacity(List__Uno_UX_IFactory* __this);
int List__Uno_UX_IFactory__get_Count(List__Uno_UX_IFactory* __this);
::uObject* List__Uno_UX_IFactory__get_Item(List__Uno_UX_IFactory* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory List__Uno_UX_IFactory__GetEnumerator(List__Uno_UX_IFactory* __this);
int List__Uno_UX_IFactory__IndexOf(List__Uno_UX_IFactory* __this, ::uObject* item);
void List__Uno_UX_IFactory__Insert(List__Uno_UX_IFactory* __this, int index, ::uObject* item);
List__Uno_UX_IFactory* List__Uno_UX_IFactory__New_1(::uStatic* __this);
List__Uno_UX_IFactory* List__Uno_UX_IFactory__New_2(::uStatic* __this, int capacity);
bool List__Uno_UX_IFactory__Remove(List__Uno_UX_IFactory* __this, ::uObject* item);
void List__Uno_UX_IFactory__RemoveAt(List__Uno_UX_IFactory* __this, int index);
void List__Uno_UX_IFactory__set_Item(List__Uno_UX_IFactory* __this, int index, ::uObject* value);
void List__Uno_UX_IFactory__Sort(List__Uno_UX_IFactory* __this, ::uDelegate* comparer);
::uArray* List__Uno_UX_IFactory__ToArray(List__Uno_UX_IFactory* __this);

struct List__Uno_UX_IFactory : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_UX_IFactory__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_UX_IFactory___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_UX_IFactory___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Uno_UX_IFactory__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_UX_IFactory__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_UX_IFactory__BoundsCheck(this, index); }
    void Clear() { List__Uno_UX_IFactory__Clear(this); }
    bool Contains(::uObject* item) { return List__Uno_UX_IFactory__Contains(this, item); }
    void EnsureCapacity() { List__Uno_UX_IFactory__EnsureCapacity(this); }
    int Count() { return List__Uno_UX_IFactory__get_Count(this); }
    ::uObject* Item(int index) { return List__Uno_UX_IFactory__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory GetEnumerator();
    int IndexOf(::uObject* item) { return List__Uno_UX_IFactory__IndexOf(this, item); }
    void Insert(int index, ::uObject* item) { List__Uno_UX_IFactory__Insert(this, index, item); }
    bool Remove(::uObject* item) { return List__Uno_UX_IFactory__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_UX_IFactory__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Uno_UX_IFactory__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_UX_IFactory__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_UX_IFactory__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_UX_IFactory.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory List__Uno_UX_IFactory::GetEnumerator() { return List__Uno_UX_IFactory__GetEnumerator(this); }

}}}


#endif
