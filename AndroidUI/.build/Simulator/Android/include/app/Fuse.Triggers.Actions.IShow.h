// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_I_SHOW_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_I_SHOW_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

::uInterfaceType* IShow__typeof();

struct IShow
{
    void(*__fp_Show)(void*);

    static void Show(::uObject* __this) { ((IShow*)uGetInterfacePtr(__this, IShow__typeof()))->__fp_Show((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif
