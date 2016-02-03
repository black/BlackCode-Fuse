// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__OUTRACKS_SIMULATOR_TASK_OUTRACKS_S_51BC72A7_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__OUTRACKS_SIMULATOR_TASK_OUTRACKS_S_51BC72A7_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof();

struct IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_
{
    ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*(*__fp_get_Current)(void*);

    static ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Current(::uObject* __this) { return ((IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*)uGetInterfacePtr(__this, IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
