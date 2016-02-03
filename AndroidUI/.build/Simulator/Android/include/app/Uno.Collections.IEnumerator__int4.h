// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__INT4_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__INT4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__int4__typeof();

struct IEnumerator__int4
{
    ::app::Uno::Int4(*__fp_get_Current)(void*);

    static ::app::Uno::Int4 Current(::uObject* __this);
};

}}}

#include <app/Uno.Int4.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Int4 IEnumerator__int4::Current(::uObject* __this) { return ((IEnumerator__int4*)uGetInterfacePtr(__this, IEnumerator__int4__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
