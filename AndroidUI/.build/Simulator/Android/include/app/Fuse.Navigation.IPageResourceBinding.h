// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__
#define __APP_FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* IPageResourceBinding__typeof();

struct IPageResourceBinding
{
    void(*__fp_UpdateSource)(void*);

    static void UpdateSource(::uObject* __this) { ((IPageResourceBinding*)uGetInterfacePtr(__this, IPageResourceBinding__typeof()))->__fp_UpdateSource((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
