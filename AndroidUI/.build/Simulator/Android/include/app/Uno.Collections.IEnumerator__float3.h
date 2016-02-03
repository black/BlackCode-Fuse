// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FLOAT3_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FLOAT3_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__float3__typeof();

struct IEnumerator__float3
{
    ::app::Uno::Float3(*__fp_get_Current)(void*);

    static ::app::Uno::Float3 Current(::uObject* __this);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Float3 IEnumerator__float3::Current(::uObject* __this) { return ((IEnumerator__float3*)uGetInterfacePtr(__this, IEnumerator__float3__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
