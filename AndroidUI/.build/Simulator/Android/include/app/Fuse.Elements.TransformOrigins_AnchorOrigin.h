// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_ANCHOR_ORIGIN_H__
#define __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_ANCHOR_ORIGIN_H__

#include <app/Fuse.Elements.ITransformOrigin.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Elements {

struct TransformOrigins_AnchorOrigin;

struct TransformOrigins_AnchorOrigin__uType : ::uClassType
{
    ::app::Fuse::Elements::ITransformOrigin __interface_0;
};

TransformOrigins_AnchorOrigin__uType* TransformOrigins_AnchorOrigin__typeof();

void TransformOrigins_AnchorOrigin___ObjInit(TransformOrigins_AnchorOrigin* __this);
::app::Uno::Float3 TransformOrigins_AnchorOrigin__GetOffset(TransformOrigins_AnchorOrigin* __this, ::app::Fuse::Elements::Element* elm);
TransformOrigins_AnchorOrigin* TransformOrigins_AnchorOrigin__New_1(::uStatic* __this);

struct TransformOrigins_AnchorOrigin : ::uObject
{
    void _ObjInit() { TransformOrigins_AnchorOrigin___ObjInit(this); }
    ::app::Uno::Float3 GetOffset(::app::Fuse::Elements::Element* elm);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float3 TransformOrigins_AnchorOrigin::GetOffset(::app::Fuse::Elements::Element* elm) { return TransformOrigins_AnchorOrigin__GetOffset(this, elm); }

}}}


#endif
