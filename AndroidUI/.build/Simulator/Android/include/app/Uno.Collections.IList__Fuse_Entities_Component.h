// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_ENTITIES_COMPONENT_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_ENTITIES_COMPONENT_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Entities_Component.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Entities_Component__typeof();

struct IList__Fuse_Entities_Component
{
    ::app::Fuse::Entities::Component*(*__fp_get_Item)(void*, int);

    static ::app::Fuse::Entities::Component* Item(::uObject* __this, int index) { return ((IList__Fuse_Entities_Component*)uGetInterfacePtr(__this, IList__Fuse_Entities_Component__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
