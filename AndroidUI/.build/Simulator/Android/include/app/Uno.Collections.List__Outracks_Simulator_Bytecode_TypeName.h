// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__
#define __APP_UNO_COLLECTIONS_LIST__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Outracks_Simulator_Bytecode_TypeName; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Outracks_Simulator_Bytecode_TypeName;

struct List__Outracks_Simulator_Bytecode_TypeName__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName __interface_0;
};

List__Outracks_Simulator_Bytecode_TypeName__uType* List__Outracks_Simulator_Bytecode_TypeName__typeof();

::uObject* List__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed(List__Outracks_Simulator_Bytecode_TypeName* __this);
void List__Outracks_Simulator_Bytecode_TypeName___ObjInit(List__Outracks_Simulator_Bytecode_TypeName* __this);
void List__Outracks_Simulator_Bytecode_TypeName___ObjInit_1(List__Outracks_Simulator_Bytecode_TypeName* __this, int capacity);
void List__Outracks_Simulator_Bytecode_TypeName__Add(List__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item);
void List__Outracks_Simulator_Bytecode_TypeName__AddRange(List__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* items);
void List__Outracks_Simulator_Bytecode_TypeName__BoundsCheck(List__Outracks_Simulator_Bytecode_TypeName* __this, int index);
void List__Outracks_Simulator_Bytecode_TypeName__Clear(List__Outracks_Simulator_Bytecode_TypeName* __this);
bool List__Outracks_Simulator_Bytecode_TypeName__Contains(List__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item);
void List__Outracks_Simulator_Bytecode_TypeName__EnsureCapacity(List__Outracks_Simulator_Bytecode_TypeName* __this);
int List__Outracks_Simulator_Bytecode_TypeName__get_Count(List__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* List__Outracks_Simulator_Bytecode_TypeName__get_Item(List__Outracks_Simulator_Bytecode_TypeName* __this, int index);
::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Bytecode_TypeName List__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(List__Outracks_Simulator_Bytecode_TypeName* __this);
int List__Outracks_Simulator_Bytecode_TypeName__IndexOf(List__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item);
void List__Outracks_Simulator_Bytecode_TypeName__Insert(List__Outracks_Simulator_Bytecode_TypeName* __this, int index, ::app::Outracks::Simulator::Bytecode::TypeName* item);
List__Outracks_Simulator_Bytecode_TypeName* List__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this);
List__Outracks_Simulator_Bytecode_TypeName* List__Outracks_Simulator_Bytecode_TypeName__New_2(::uStatic* __this, int capacity);
bool List__Outracks_Simulator_Bytecode_TypeName__Remove(List__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item);
void List__Outracks_Simulator_Bytecode_TypeName__RemoveAt(List__Outracks_Simulator_Bytecode_TypeName* __this, int index);
void List__Outracks_Simulator_Bytecode_TypeName__set_Item(List__Outracks_Simulator_Bytecode_TypeName* __this, int index, ::app::Outracks::Simulator::Bytecode::TypeName* value);
void List__Outracks_Simulator_Bytecode_TypeName__Sort(List__Outracks_Simulator_Bytecode_TypeName* __this, ::uDelegate* comparer);
::uArray* List__Outracks_Simulator_Bytecode_TypeName__ToArray(List__Outracks_Simulator_Bytecode_TypeName* __this);

struct List__Outracks_Simulator_Bytecode_TypeName : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Outracks_Simulator_Bytecode_TypeName___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Outracks_Simulator_Bytecode_TypeName___ObjInit_1(this, capacity); }
    void Add(::app::Outracks::Simulator::Bytecode::TypeName* item) { List__Outracks_Simulator_Bytecode_TypeName__Add(this, item); }
    void AddRange(::uObject* items) { List__Outracks_Simulator_Bytecode_TypeName__AddRange(this, items); }
    void BoundsCheck(int index) { List__Outracks_Simulator_Bytecode_TypeName__BoundsCheck(this, index); }
    void Clear() { List__Outracks_Simulator_Bytecode_TypeName__Clear(this); }
    bool Contains(::app::Outracks::Simulator::Bytecode::TypeName* item) { return List__Outracks_Simulator_Bytecode_TypeName__Contains(this, item); }
    void EnsureCapacity() { List__Outracks_Simulator_Bytecode_TypeName__EnsureCapacity(this); }
    int Count() { return List__Outracks_Simulator_Bytecode_TypeName__get_Count(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Item(int index) { return List__Outracks_Simulator_Bytecode_TypeName__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Bytecode_TypeName GetEnumerator();
    int IndexOf(::app::Outracks::Simulator::Bytecode::TypeName* item) { return List__Outracks_Simulator_Bytecode_TypeName__IndexOf(this, item); }
    void Insert(int index, ::app::Outracks::Simulator::Bytecode::TypeName* item) { List__Outracks_Simulator_Bytecode_TypeName__Insert(this, index, item); }
    bool Remove(::app::Outracks::Simulator::Bytecode::TypeName* item) { return List__Outracks_Simulator_Bytecode_TypeName__Remove(this, item); }
    void RemoveAt(int index) { List__Outracks_Simulator_Bytecode_TypeName__RemoveAt(this, index); }
    void Item(int index, ::app::Outracks::Simulator::Bytecode::TypeName* value) { List__Outracks_Simulator_Bytecode_TypeName__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Outracks_Simulator_Bytecode_TypeName__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Outracks_Simulator_Bytecode_TypeName__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Outracks_Simulator_Bytecode_TypeName.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Bytecode_TypeName List__Outracks_Simulator_Bytecode_TypeName::GetEnumerator() { return List__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(this); }

}}}


#endif
