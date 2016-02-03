// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_TOP_LEFT_ORIGIN_H__
#define __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_TOP_LEFT_ORIGIN_H__

#include <app/Fuse.Elements.ITransformOrigin.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Elements {

struct TransformOrigins_TopLeftOrigin;

struct TransformOrigins_TopLeftOrigin__uType : ::uClassType
{
    ::app::Fuse::Elements::ITransformOrigin __interface_0;
};

TransformOrigins_TopLeftOrigin__uType* TransformOrigins_TopLeftOrigin__typeof();

void TransformOrigins_TopLeftOrigin___ObjInit(TransformOrigins_TopLeftOrigin* __this);
::app::Uno::Float3 TransformOrigins_TopLeftOrigin__GetOffset(TransformOrigins_TopLeftOrigin* __this, ::app::Fuse::Elements::Element* elm);
TransformOrigins_TopLeftOrigin* TransformOrigins_TopLeftOrigin__New_1(::uStatic* __this);

struct TransformOrigins_TopLeftOrigin : ::uObject
{
    void _ObjInit() { TransformOrigins_TopLeftOrigin___ObjInit(this); }
    ::app::Uno::Float3 GetOffset(::app::Fuse::Elements::Element* elm);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float3 TransformOrigins_TopLeftOrigin::GetOffset(::app::Fuse::Elements::Element* elm) { return TransformOrigins_TopLeftOrigin__GetOffset(this, elm); }

}}}


#endif
