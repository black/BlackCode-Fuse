// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMA_9A8AC0F6_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMA_9A8AC0F6_H__

#include <app/Uno.Collections.IEnumerable__Uno_Runtime_Implementation_Interna-39c12577.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken; } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringToken; } } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Runtime_Implementation_Internal_FormatStringToken;

struct List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Runtime_Implementation_Internal_FormatStringToken __interface_0;
};

List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof();

::uObject* List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator_boxed(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit_1(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, int capacity);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__Add(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__AddRange(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::uObject* items);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__BoundsCheck(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, int index);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__Clear(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
bool List__Uno_Runtime_Implementation_Internal_FormatStringToken__Contains(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__EnsureCapacity(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
int List__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Count(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
::app::Uno::Runtime::Implementation::Internal::FormatStringToken* List__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Item(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
int List__Uno_Runtime_Implementation_Internal_FormatStringToken__IndexOf(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__Insert(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, int index, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item);
List__Uno_Runtime_Implementation_Internal_FormatStringToken* List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this);
List__Uno_Runtime_Implementation_Internal_FormatStringToken* List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_2(::uStatic* __this, int capacity);
bool List__Uno_Runtime_Implementation_Internal_FormatStringToken__Remove(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__RemoveAt(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, int index);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__set_Item(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, int index, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* value);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__Sort(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::uDelegate* comparer);
::uArray* List__Uno_Runtime_Implementation_Internal_FormatStringToken__ToArray(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);

struct List__Uno_Runtime_Implementation_Internal_FormatStringToken : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__BoundsCheck(this, index); }
    void Clear() { List__Uno_Runtime_Implementation_Internal_FormatStringToken__Clear(this); }
    bool Contains(::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item) { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Runtime_Implementation_Internal_FormatStringToken__EnsureCapacity(this); }
    int Count() { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Count(this); }
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* Item(int index) { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken GetEnumerator();
    int IndexOf(::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item) { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__Insert(this, index, item); }
    bool Remove(::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item) { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* value) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Runtime_Implementation_In-270f5481.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List__Uno_Runtime_Implementation_Internal_FormatStringToken::GetEnumerator() { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator(this); }

}}}


#endif
