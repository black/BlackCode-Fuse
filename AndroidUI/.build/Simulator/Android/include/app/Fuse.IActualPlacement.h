// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_ACTUAL_PLACEMENT_H__
#define __APP_FUSE_I_ACTUAL_PLACEMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

::uInterfaceType* IActualPlacement__typeof();

struct IActualPlacement
{
    void(*__fp_add_Placed)(void*, ::uDelegate*);
    ::app::Uno::Float3(*__fp_get_ActualSize)(void*);
    void(*__fp_remove_Placed)(void*, ::uDelegate*);

    static void add_Placed(::uObject* __this, ::uDelegate* value) { ((IActualPlacement*)uGetInterfacePtr(__this, IActualPlacement__typeof()))->__fp_add_Placed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static ::app::Uno::Float3 ActualSize(::uObject* __this);
    static void remove_Placed(::uObject* __this, ::uDelegate* value) { ((IActualPlacement*)uGetInterfacePtr(__this, IActualPlacement__typeof()))->__fp_remove_Placed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float3 IActualPlacement::ActualSize(::uObject* __this) { return ((IActualPlacement*)uGetInterfacePtr(__this, IActualPlacement__typeof()))->__fp_get_ActualSize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}


#endif
