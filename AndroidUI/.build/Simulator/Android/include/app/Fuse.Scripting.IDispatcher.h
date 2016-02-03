// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_I_DISPATCHER_H__
#define __APP_FUSE_SCRIPTING_I_DISPATCHER_H__

#include <app/Uno.Object.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

::uInterfaceType* IDispatcher__typeof();

struct IDispatcher
{
    void(*__fp_Dispatch)(void*, int, ::uDelegate*);

    static void Dispatch(::uObject* __this, int priority, ::uDelegate* action) { ((IDispatcher*)uGetInterfacePtr(__this, IDispatcher__typeof()))->__fp_Dispatch((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), priority, action); }
};

}}}


#endif
