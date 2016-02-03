// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_I_FACTORY_H__
#define __APP_UNO_U_X_I_FACTORY_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

::uInterfaceType* IFactory__typeof();

struct IFactory
{
    ::uObject*(*__fp_New_1)(void*);

    static ::uObject* New_1(::uObject* __this) { return ((IFactory*)uGetInterfacePtr(__this, IFactory__typeof()))->__fp_New_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
