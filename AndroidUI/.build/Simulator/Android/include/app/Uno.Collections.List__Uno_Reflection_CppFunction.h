// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_REFLECTION_CPP_FUNCTION_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_REFLECTION_CPP_FUNCTION_H__

#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppFunction.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Reflection_CppFunction; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Reflection_CppFunction;

struct List__Uno_Reflection_CppFunction__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Reflection_CppFunction __interface_0;
};

List__Uno_Reflection_CppFunction__uType* List__Uno_Reflection_CppFunction__typeof();

::uObject* List__Uno_Reflection_CppFunction__GetEnumerator_boxed(List__Uno_Reflection_CppFunction* __this);
void List__Uno_Reflection_CppFunction___ObjInit(List__Uno_Reflection_CppFunction* __this);
void List__Uno_Reflection_CppFunction___ObjInit_1(List__Uno_Reflection_CppFunction* __this, int capacity);
void List__Uno_Reflection_CppFunction__Add(List__Uno_Reflection_CppFunction* __this, ::uFunction* item);
void List__Uno_Reflection_CppFunction__AddRange(List__Uno_Reflection_CppFunction* __this, ::uObject* items);
void List__Uno_Reflection_CppFunction__BoundsCheck(List__Uno_Reflection_CppFunction* __this, int index);
void List__Uno_Reflection_CppFunction__Clear(List__Uno_Reflection_CppFunction* __this);
bool List__Uno_Reflection_CppFunction__Contains(List__Uno_Reflection_CppFunction* __this, ::uFunction* item);
void List__Uno_Reflection_CppFunction__EnsureCapacity(List__Uno_Reflection_CppFunction* __this);
int List__Uno_Reflection_CppFunction__get_Count(List__Uno_Reflection_CppFunction* __this);
::uFunction* List__Uno_Reflection_CppFunction__get_Item(List__Uno_Reflection_CppFunction* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Reflection_CppFunction List__Uno_Reflection_CppFunction__GetEnumerator(List__Uno_Reflection_CppFunction* __this);
int List__Uno_Reflection_CppFunction__IndexOf(List__Uno_Reflection_CppFunction* __this, ::uFunction* item);
void List__Uno_Reflection_CppFunction__Insert(List__Uno_Reflection_CppFunction* __this, int index, ::uFunction* item);
List__Uno_Reflection_CppFunction* List__Uno_Reflection_CppFunction__New_1(::uStatic* __this);
List__Uno_Reflection_CppFunction* List__Uno_Reflection_CppFunction__New_2(::uStatic* __this, int capacity);
bool List__Uno_Reflection_CppFunction__Remove(List__Uno_Reflection_CppFunction* __this, ::uFunction* item);
void List__Uno_Reflection_CppFunction__RemoveAt(List__Uno_Reflection_CppFunction* __this, int index);
void List__Uno_Reflection_CppFunction__set_Item(List__Uno_Reflection_CppFunction* __this, int index, ::uFunction* value);
void List__Uno_Reflection_CppFunction__Sort(List__Uno_Reflection_CppFunction* __this, ::uDelegate* comparer);
::uArray* List__Uno_Reflection_CppFunction__ToArray(List__Uno_Reflection_CppFunction* __this);

struct List__Uno_Reflection_CppFunction : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Reflection_CppFunction__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Reflection_CppFunction___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Reflection_CppFunction___ObjInit_1(this, capacity); }
    void Add(::uFunction* item) { List__Uno_Reflection_CppFunction__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Reflection_CppFunction__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Reflection_CppFunction__BoundsCheck(this, index); }
    void Clear() { List__Uno_Reflection_CppFunction__Clear(this); }
    bool Contains(::uFunction* item) { return List__Uno_Reflection_CppFunction__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Reflection_CppFunction__EnsureCapacity(this); }
    int Count() { return List__Uno_Reflection_CppFunction__get_Count(this); }
    ::uFunction* Item(int index) { return List__Uno_Reflection_CppFunction__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Reflection_CppFunction GetEnumerator();
    int IndexOf(::uFunction* item) { return List__Uno_Reflection_CppFunction__IndexOf(this, item); }
    void Insert(int index, ::uFunction* item) { List__Uno_Reflection_CppFunction__Insert(this, index, item); }
    bool Remove(::uFunction* item) { return List__Uno_Reflection_CppFunction__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Reflection_CppFunction__RemoveAt(this, index); }
    void Item(int index, ::uFunction* value) { List__Uno_Reflection_CppFunction__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Reflection_CppFunction__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Reflection_CppFunction__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Reflection_CppFunction.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Reflection_CppFunction List__Uno_Reflection_CppFunction::GetEnumerator() { return List__Uno_Reflection_CppFunction__GetEnumerator(this); }

}}}


#endif
