// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_I_HIDE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_I_HIDE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

::uInterfaceType* IHide__typeof();

struct IHide
{
    void(*__fp_Hide)(void*);

    static void Hide(::uObject* __this) { ((IHide*)uGetInterfacePtr(__this, IHide__typeof()))->__fp_Hide((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif
