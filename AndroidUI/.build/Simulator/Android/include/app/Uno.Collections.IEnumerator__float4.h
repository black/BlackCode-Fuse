// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FLOAT4_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FLOAT4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__float4__typeof();

struct IEnumerator__float4
{
    ::app::Uno::Float4(*__fp_get_Current)(void*);

    static ::app::Uno::Float4 Current(::uObject* __this);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Float4 IEnumerator__float4::Current(::uObject* __this) { return ((IEnumerator__float4*)uGetInterfacePtr(__this, IEnumerator__float4__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
