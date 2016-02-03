// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OUTRACKS_SIMULATOR_TASK_UNO_N_E8FE7034_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OUTRACKS_SIMULATOR_TASK_UNO_N_E8FE7034_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Uno_Net_IP-51d80b77.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }
namespace app { namespace Uno { namespace Collections { struct List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___;

struct List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____uType* List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____typeof();

void List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* source);
void List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
bool List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);
List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___ List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____New_1(::uStatic* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* source);
void List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Uno_Collections_IEnumerator_Reset(List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* __this);

struct List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint___
{
    ::uStrong< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*> _current;

    void _ObjInit(::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* source) { List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint______ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____Dispose(this); }
    ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* Current() { return List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Outracks_Simulator_Task_Uno_Net_IPEndPoint_____MoveNext(this); }
};

}}}


#endif
