// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_REFLECTION_CPP_FIELD_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_REFLECTION_CPP_FIELD_H__

#include <app/Uno.Collections.IEnumerable__Uno_Reflection_CppField.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Reflection_CppField; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Reflection_CppField;

struct List__Uno_Reflection_CppField__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Reflection_CppField __interface_0;
};

List__Uno_Reflection_CppField__uType* List__Uno_Reflection_CppField__typeof();

::uObject* List__Uno_Reflection_CppField__GetEnumerator_boxed(List__Uno_Reflection_CppField* __this);
void List__Uno_Reflection_CppField___ObjInit(List__Uno_Reflection_CppField* __this);
void List__Uno_Reflection_CppField___ObjInit_1(List__Uno_Reflection_CppField* __this, int capacity);
void List__Uno_Reflection_CppField__Add(List__Uno_Reflection_CppField* __this, ::uField* item);
void List__Uno_Reflection_CppField__AddRange(List__Uno_Reflection_CppField* __this, ::uObject* items);
void List__Uno_Reflection_CppField__BoundsCheck(List__Uno_Reflection_CppField* __this, int index);
void List__Uno_Reflection_CppField__Clear(List__Uno_Reflection_CppField* __this);
bool List__Uno_Reflection_CppField__Contains(List__Uno_Reflection_CppField* __this, ::uField* item);
void List__Uno_Reflection_CppField__EnsureCapacity(List__Uno_Reflection_CppField* __this);
int List__Uno_Reflection_CppField__get_Count(List__Uno_Reflection_CppField* __this);
::uField* List__Uno_Reflection_CppField__get_Item(List__Uno_Reflection_CppField* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Reflection_CppField List__Uno_Reflection_CppField__GetEnumerator(List__Uno_Reflection_CppField* __this);
int List__Uno_Reflection_CppField__IndexOf(List__Uno_Reflection_CppField* __this, ::uField* item);
void List__Uno_Reflection_CppField__Insert(List__Uno_Reflection_CppField* __this, int index, ::uField* item);
List__Uno_Reflection_CppField* List__Uno_Reflection_CppField__New_1(::uStatic* __this);
List__Uno_Reflection_CppField* List__Uno_Reflection_CppField__New_2(::uStatic* __this, int capacity);
bool List__Uno_Reflection_CppField__Remove(List__Uno_Reflection_CppField* __this, ::uField* item);
void List__Uno_Reflection_CppField__RemoveAt(List__Uno_Reflection_CppField* __this, int index);
void List__Uno_Reflection_CppField__set_Item(List__Uno_Reflection_CppField* __this, int index, ::uField* value);
void List__Uno_Reflection_CppField__Sort(List__Uno_Reflection_CppField* __this, ::uDelegate* comparer);
::uArray* List__Uno_Reflection_CppField__ToArray(List__Uno_Reflection_CppField* __this);

struct List__Uno_Reflection_CppField : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Reflection_CppField__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Reflection_CppField___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Reflection_CppField___ObjInit_1(this, capacity); }
    void Add(::uField* item) { List__Uno_Reflection_CppField__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Reflection_CppField__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Reflection_CppField__BoundsCheck(this, index); }
    void Clear() { List__Uno_Reflection_CppField__Clear(this); }
    bool Contains(::uField* item) { return List__Uno_Reflection_CppField__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Reflection_CppField__EnsureCapacity(this); }
    int Count() { return List__Uno_Reflection_CppField__get_Count(this); }
    ::uField* Item(int index) { return List__Uno_Reflection_CppField__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Reflection_CppField GetEnumerator();
    int IndexOf(::uField* item) { return List__Uno_Reflection_CppField__IndexOf(this, item); }
    void Insert(int index, ::uField* item) { List__Uno_Reflection_CppField__Insert(this, index, item); }
    bool Remove(::uField* item) { return List__Uno_Reflection_CppField__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Reflection_CppField__RemoveAt(this, index); }
    void Item(int index, ::uField* value) { List__Uno_Reflection_CppField__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Reflection_CppField__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Reflection_CppField__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Reflection_CppField.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Reflection_CppField List__Uno_Reflection_CppField::GetEnumerator() { return List__Uno_Reflection_CppField__GetEnumerator(this); }

}}}


#endif
