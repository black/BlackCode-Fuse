// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_RESIZE_H__
#define __APP_FUSE_ANIMATIONS_I_RESIZE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IResize__typeof();

struct IResize
{
    void(*__fp_SetSize)(void*, ::app::Uno::Float2);

    static void SetSize(::uObject* __this, ::app::Uno::Float2 size);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline void IResize::SetSize(::uObject* __this, ::app::Uno::Float2 size) { ((IResize*)uGetInterfacePtr(__this, IResize__typeof()))->__fp_SetSize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), size); }

}}}


#endif
