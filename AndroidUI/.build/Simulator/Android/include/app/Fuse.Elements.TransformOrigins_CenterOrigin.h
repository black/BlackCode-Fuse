// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_CENTER_ORIGIN_H__
#define __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_CENTER_ORIGIN_H__

#include <app/Fuse.Elements.ITransformOrigin.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Elements {

struct TransformOrigins_CenterOrigin;

struct TransformOrigins_CenterOrigin__uType : ::uClassType
{
    ::app::Fuse::Elements::ITransformOrigin __interface_0;
};

TransformOrigins_CenterOrigin__uType* TransformOrigins_CenterOrigin__typeof();

void TransformOrigins_CenterOrigin___ObjInit(TransformOrigins_CenterOrigin* __this);
::app::Uno::Float3 TransformOrigins_CenterOrigin__GetOffset(TransformOrigins_CenterOrigin* __this, ::app::Fuse::Elements::Element* elm);
TransformOrigins_CenterOrigin* TransformOrigins_CenterOrigin__New_1(::uStatic* __this);

struct TransformOrigins_CenterOrigin : ::uObject
{
    void _ObjInit() { TransformOrigins_CenterOrigin___ObjInit(this); }
    ::app::Uno::Float3 GetOffset(::app::Fuse::Elements::Element* elm);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float3 TransformOrigins_CenterOrigin::GetOffset(::app::Fuse::Elements::Element* elm) { return TransformOrigins_CenterOrigin__GetOffset(this, elm); }

}}}


#endif
