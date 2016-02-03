// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__OUTRACKS_SIMULATOR_TASK_OUTRACKS_SIMULATO_AE93148C_H__
#define __APP_UNO_COLLECTIONS_LIST__OUTRACKS_SIMULATOR_TASK_OUTRACKS_SIMULATO_AE93148C_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Outracks_S-7e052b05.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_;

struct List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ __interface_0;
};

List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof();

::uObject* List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator_boxed(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit_1(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, int capacity);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Add(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___AddRange(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::uObject* items);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___BoundsCheck(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, int index);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Clear(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
bool List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Contains(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___EnsureCapacity(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
int List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Count(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Item(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
int List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___IndexOf(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Insert(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, int index, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item);
List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this);
List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_2(::uStatic* __this, int capacity);
bool List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Remove(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___RemoveAt(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, int index);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___set_Item(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, int index, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* value);
void List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Sort(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::uDelegate* comparer);
::uArray* List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___ToArray(List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);

struct List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator_boxed(this); }
    void _ObjInit() { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit_1(this, capacity); }
    void Add(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Add(this, item); }
    void AddRange(::uObject* items) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___AddRange(this, items); }
    void BoundsCheck(int index) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___BoundsCheck(this, index); }
    void Clear() { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Clear(this); }
    bool Contains(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item) { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Contains(this, item); }
    void EnsureCapacity() { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___EnsureCapacity(this); }
    int Count() { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Count(this); }
    ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Item(int index) { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ GetEnumerator();
    int IndexOf(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item) { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___IndexOf(this, item); }
    void Insert(int index, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Insert(this, index, item); }
    bool Remove(::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* item) { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Remove(this, item); }
    void RemoveAt(int index) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___RemoveAt(this, index); }
    void Item(int index, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* value) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Sort(this, comparer); }
    ::uArray* ToArray() { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Outracks_Simulator_Task_Outra-13953f66.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_::GetEnumerator() { return List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator(this); }

}}}


#endif
