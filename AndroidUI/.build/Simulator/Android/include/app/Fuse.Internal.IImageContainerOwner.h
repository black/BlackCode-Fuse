// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_I_IMAGE_CONTAINER_OWNER_H__
#define __APP_FUSE_INTERNAL_I_IMAGE_CONTAINER_OWNER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

::uInterfaceType* IImageContainerOwner__typeof();

struct IImageContainerOwner
{
    void(*__fp_OnParamChanged)(void*);
    void(*__fp_OnSizingChanged)(void*);
    void(*__fp_OnSourceChanged)(void*);

    static void OnParamChanged(::uObject* __this) { ((IImageContainerOwner*)uGetInterfacePtr(__this, IImageContainerOwner__typeof()))->__fp_OnParamChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void OnSizingChanged(::uObject* __this) { ((IImageContainerOwner*)uGetInterfacePtr(__this, IImageContainerOwner__typeof()))->__fp_OnSizingChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void OnSourceChanged(::uObject* __this) { ((IImageContainerOwner*)uGetInterfacePtr(__this, IImageContainerOwner__typeof()))->__fp_OnSourceChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
