// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__OUTRACKS_SIMULATOR_TASK_UNO_NET_I_P_END_POINT____H__
#define __APP_UNO_COLLECTIONS_LIST__OUTRACKS_SIMULATOR_TASK_UNO_NET_I_P_END_POINT____H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Uno_Net_IP-6362cf5f.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___;

struct List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ __interface_0;
};

List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof();

::uObject* List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator_boxed(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit_1(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, int capacity);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Add(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____AddRange(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::uObject* items);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____BoundsCheck(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, int index);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Clear(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
bool List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Contains(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____EnsureCapacity(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
int List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Count(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Item(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, int index);
::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
int List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____IndexOf(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Insert(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, int index, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item);
List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this);
List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_2(::uStatic* __this, int capacity);
bool List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Remove(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____RemoveAt(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, int index);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____set_Item(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, int index, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* value);
void List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Sort(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::uDelegate* comparer);
::uArray* List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____ToArray(List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);

struct List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator_boxed(this); }
    void _ObjInit() { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit_1(this, capacity); }
    void Add(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Add(this, item); }
    void AddRange(::uObject* items) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____AddRange(this, items); }
    void BoundsCheck(int index) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____BoundsCheck(this, index); }
    void Clear() { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Clear(this); }
    bool Contains(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item) { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Contains(this, item); }
    void EnsureCapacity() { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____EnsureCapacity(this); }
    int Count() { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Count(this); }
    ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* Item(int index) { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ GetEnumerator();
    int IndexOf(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item) { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____IndexOf(this, item); }
    void Insert(int index, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Insert(this, index, item); }
    bool Remove(::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* item) { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Remove(this, item); }
    void RemoveAt(int index) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____RemoveAt(this, index); }
    void Item(int index, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* value) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Sort(this, comparer); }
    ::uArray* ToArray() { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Outracks_Simulator_Task_Uno_N-e8fe7034.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___::GetEnumerator() { return List__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____GetEnumerator(this); }

}}}


#endif
