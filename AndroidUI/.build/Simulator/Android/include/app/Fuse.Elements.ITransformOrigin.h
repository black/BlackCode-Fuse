// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_I_TRANSFORM_ORIGIN_H__
#define __APP_FUSE_ELEMENTS_I_TRANSFORM_ORIGIN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Elements {

::uInterfaceType* ITransformOrigin__typeof();

struct ITransformOrigin
{
    ::app::Uno::Float3(*__fp_GetOffset)(void*, ::app::Fuse::Elements::Element*);

    static ::app::Uno::Float3 GetOffset(::uObject* __this, ::app::Fuse::Elements::Element* elm);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float3 ITransformOrigin::GetOffset(::uObject* __this, ::app::Fuse::Elements::Element* elm) { return ((ITransformOrigin*)uGetInterfacePtr(__this, ITransformOrigin__typeof()))->__fp_GetOffset((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), elm); }

}}}


#endif
