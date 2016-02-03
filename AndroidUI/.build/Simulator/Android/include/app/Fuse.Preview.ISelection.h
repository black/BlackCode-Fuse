// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PREVIEW_I_SELECTION_H__
#define __APP_FUSE_PREVIEW_I_SELECTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Preview {

::uInterfaceType* ISelection__typeof();

struct ISelection
{
    bool(*__fp_IsSelected)(void*, ::uObject*);

    static bool IsSelected(::uObject* __this, ::uObject* obj) { return ((ISelection*)uGetInterfacePtr(__this, ISelection__typeof()))->__fp_IsSelected((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), obj); }
};

}}}


#endif
