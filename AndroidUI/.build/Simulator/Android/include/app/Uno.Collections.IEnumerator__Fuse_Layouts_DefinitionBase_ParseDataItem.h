// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_LAYOUTS_DEFINITION_BASE_PARSE_DATA_ITEM_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_LAYOUTS_DEFINITION_BASE_PARSE_DATA_ITEM_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct DefinitionBase_ParseDataItem; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof();

struct IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem
{
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem(*__fp_get_Current)(void*);

    static ::app::Fuse::Layouts::DefinitionBase_ParseDataItem Current(::uObject* __this);
};

}}}

#include <app/Fuse.Layouts.DefinitionBase_ParseDataItem.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Fuse::Layouts::DefinitionBase_ParseDataItem IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem::Current(::uObject* __this) { return ((IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem*)uGetInterfacePtr(__this, IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
