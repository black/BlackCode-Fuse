// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_I_COLLAPSE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_I_COLLAPSE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

::uInterfaceType* ICollapse__typeof();

struct ICollapse
{
    void(*__fp_Collapse)(void*);

    static void Collapse(::uObject* __this) { ((ICollapse*)uGetInterfacePtr(__this, ICollapse__typeof()))->__fp_Collapse((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif
