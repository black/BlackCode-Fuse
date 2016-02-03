// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Resources_ImageSource__typeof();

struct ICollection__Fuse_Resources_ImageSource
{
    void(*__fp_Add)(void*, ::app::Fuse::Resources::ImageSource*);

    static void Add(::uObject* __this, ::app::Fuse::Resources::ImageSource* item) { ((ICollection__Fuse_Resources_ImageSource*)uGetInterfacePtr(__this, ICollection__Fuse_Resources_ImageSource__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
