// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_I_DISPATCHER_H__
#define __APP_UNO_THREADING_I_DISPATCHER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

::uInterfaceType* IDispatcher__typeof();

struct IDispatcher
{
    void(*__fp_Invoke)(void*, ::uDelegate*);

    static void Invoke(::uObject* __this, ::uDelegate* action) { ((IDispatcher*)uGetInterfacePtr(__this, IDispatcher__typeof()))->__fp_Invoke((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), action); }
};

}}}


#endif
