// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

::uInterfaceType* ITemplate__typeof();

struct ITemplate
{
    bool(*__fp_Apply)(void*, ::uObject*);

    static bool Apply(::uObject* __this, ::uObject* obj) { return ((ITemplate*)uGetInterfacePtr(__this, ITemplate__typeof()))->__fp_Apply((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), obj); }
};

}}}


#endif
