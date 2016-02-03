// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_I_VALUE__FLOAT_H__
#define __APP_FUSE_TRIGGERS_I_VALUE__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

::uInterfaceType* IValue__float__typeof();

struct IValue__float
{
    void(*__fp_add_ValueChanged)(void*, ::uDelegate*);
    float(*__fp_get_Value)(void*);
    void(*__fp_remove_ValueChanged)(void*, ::uDelegate*);
    void(*__fp_set_Value)(void*, float);

    static void add_ValueChanged(::uObject* __this, ::uDelegate* value) { ((IValue__float*)uGetInterfacePtr(__this, IValue__float__typeof()))->__fp_add_ValueChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static float Value(::uObject* __this) { return ((IValue__float*)uGetInterfacePtr(__this, IValue__float__typeof()))->__fp_get_Value((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void remove_ValueChanged(::uObject* __this, ::uDelegate* value) { ((IValue__float*)uGetInterfacePtr(__this, IValue__float__typeof()))->__fp_remove_ValueChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void Value(::uObject* __this, float value) { ((IValue__float*)uGetInterfacePtr(__this, IValue__float__typeof()))->__fp_set_Value((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}


#endif
