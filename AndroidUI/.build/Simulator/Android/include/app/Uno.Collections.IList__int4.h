// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__INT4_H__
#define __APP_UNO_COLLECTIONS_I_LIST__INT4_H__

#include <app/Uno.Collections.ICollection__int4.h>
#include <app/Uno.Collections.IEnumerable__int4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__int4__typeof();

struct IList__int4
{
    ::app::Uno::Int4(*__fp_get_Item)(void*, int);
    void(*__fp_RemoveAt)(void*, int);

    static ::app::Uno::Int4 Item(::uObject* __this, int index);
    static void RemoveAt(::uObject* __this, int index) { ((IList__int4*)uGetInterfacePtr(__this, IList__int4__typeof()))->__fp_RemoveAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}

#include <app/Uno.Int4.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Int4 IList__int4::Item(::uObject* __this, int index) { return ((IList__int4*)uGetInterfacePtr(__this, IList__int4__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }

}}}


#endif
