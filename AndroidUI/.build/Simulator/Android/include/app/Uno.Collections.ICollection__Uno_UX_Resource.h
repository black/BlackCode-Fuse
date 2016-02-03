// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_RESOURCE_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_UX_Resource__typeof();

struct ICollection__Uno_UX_Resource
{
    void(*__fp_Add)(void*, ::app::Uno::UX::Resource*);
    void(*__fp_Clear)(void*);
    int(*__fp_get_Count)(void*);

    static void Add(::uObject* __this, ::app::Uno::UX::Resource* item) { ((ICollection__Uno_UX_Resource*)uGetInterfacePtr(__this, ICollection__Uno_UX_Resource__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static void Clear(::uObject* __this) { ((ICollection__Uno_UX_Resource*)uGetInterfacePtr(__this, ICollection__Uno_UX_Resource__typeof()))->__fp_Clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int Count(::uObject* __this) { return ((ICollection__Uno_UX_Resource*)uGetInterfacePtr(__this, ICollection__Uno_UX_Resource__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
