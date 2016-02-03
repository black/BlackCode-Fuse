// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_COLLECTIONS_I_LIST__UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_ITemplate.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Uno_UX_ITemplate__typeof();

struct IList__Uno_UX_ITemplate
{
    ::uObject*(*__fp_get_Item)(void*, int);

    static ::uObject* Item(::uObject* __this, int index) { return ((IList__Uno_UX_ITemplate*)uGetInterfacePtr(__this, IList__Uno_UX_ITemplate__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
