// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_I_LIST__UNO_EXCEPTION_H__

#include <app/Uno.Collections.ICollection__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Uno_Exception__typeof();

struct IList__Uno_Exception
{
    ::app::Uno::Exception*(*__fp_get_Item)(void*, int);

    static ::app::Uno::Exception* Item(::uObject* __this, int index) { return ((IList__Uno_Exception*)uGetInterfacePtr(__this, IList__Uno_Exception__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
