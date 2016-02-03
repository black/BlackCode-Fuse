// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_FRUSTUM_H__
#define __APP_FUSE_I_FRUSTUM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

::uInterfaceType* IFrustum__typeof();

struct IFrustum
{
    ::app::Uno::Float2(*__fp_GetDepthRange)(void*, ::uObject*);
    ::app::Uno::Float4x4(*__fp_GetProjectionTransform)(void*, ::uObject*);
    ::app::Uno::Float4x4(*__fp_GetProjectionTransformInverse)(void*, ::uObject*);
    ::app::Uno::Float4x4(*__fp_GetViewTransform)(void*, ::uObject*);
    ::app::Uno::Float4x4(*__fp_GetViewTransformInverse)(void*, ::uObject*);
    ::app::Uno::Float3(*__fp_GetWorldPosition)(void*, ::uObject*);

    static ::app::Uno::Float2 GetDepthRange(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float4x4 GetProjectionTransform(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float4x4 GetProjectionTransformInverse(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float4x4 GetViewTransform(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float4x4 GetViewTransformInverse(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float3 GetWorldPosition(::uObject* __this, ::uObject* viewport);
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 IFrustum::GetDepthRange(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetDepthRange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float4x4 IFrustum::GetProjectionTransform(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetProjectionTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float4x4 IFrustum::GetProjectionTransformInverse(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetProjectionTransformInverse((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float4x4 IFrustum::GetViewTransform(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetViewTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float4x4 IFrustum::GetViewTransformInverse(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetViewTransformInverse((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float3 IFrustum::GetWorldPosition(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetWorldPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }

}}


#endif
