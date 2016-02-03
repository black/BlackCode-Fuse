// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_BOX_CENTER_H__
#define __APP_FUSE_ELEMENTS_TRANSFORM_ORIGINS_BOX_CENTER_H__

#include <app/Fuse.Elements.ITransformOrigin.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Elements {

struct TransformOrigins_BoxCenter;

struct TransformOrigins_BoxCenter__uType : ::uClassType
{
    ::app::Fuse::Elements::ITransformOrigin __interface_0;
};

TransformOrigins_BoxCenter__uType* TransformOrigins_BoxCenter__typeof();

void TransformOrigins_BoxCenter___ObjInit(TransformOrigins_BoxCenter* __this);
::app::Uno::Float3 TransformOrigins_BoxCenter__GetOffset(TransformOrigins_BoxCenter* __this, ::app::Fuse::Elements::Element* elm);
TransformOrigins_BoxCenter* TransformOrigins_BoxCenter__New_1(::uStatic* __this);

struct TransformOrigins_BoxCenter : ::uObject
{
    ::app::Uno::Float2 Depth;

    void _ObjInit() { TransformOrigins_BoxCenter___ObjInit(this); }
    ::app::Uno::Float3 GetOffset(::app::Fuse::Elements::Element* elm);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float3 TransformOrigins_BoxCenter::GetOffset(::app::Fuse::Elements::Element* elm) { return TransformOrigins_BoxCenter__GetOffset(this, elm); }

}}}


#endif
