// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_I_VALUE__BOOL_H__
#define __APP_FUSE_TRIGGERS_I_VALUE__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

::uInterfaceType* IValue__bool__typeof();

struct IValue__bool
{
    void(*__fp_add_ValueChanged)(void*, ::uDelegate*);
    bool(*__fp_get_Value)(void*);
    void(*__fp_remove_ValueChanged)(void*, ::uDelegate*);
    void(*__fp_set_Value)(void*, bool);

    static void add_ValueChanged(::uObject* __this, ::uDelegate* value) { ((IValue__bool*)uGetInterfacePtr(__this, IValue__bool__typeof()))->__fp_add_ValueChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static bool Value(::uObject* __this) { return ((IValue__bool*)uGetInterfacePtr(__this, IValue__bool__typeof()))->__fp_get_Value((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void remove_ValueChanged(::uObject* __this, ::uDelegate* value) { ((IValue__bool*)uGetInterfacePtr(__this, IValue__bool__typeof()))->__fp_remove_ValueChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void Value(::uObject* __this, bool value) { ((IValue__bool*)uGetInterfacePtr(__this, IValue__bool__typeof()))->__fp_set_Value((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}


#endif
