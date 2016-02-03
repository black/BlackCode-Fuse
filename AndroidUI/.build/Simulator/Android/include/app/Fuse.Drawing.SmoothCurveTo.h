// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_SMOOTH_CURVE_TO_H__
#define __APP_FUSE_DRAWING_SMOOTH_CURVE_TO_H__

#include <app/Fuse.Drawing.CurveTo.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct SmoothCurveTo;

struct SmoothCurveTo__uType : ::app::Fuse::Drawing::CurveTo__uType
{
};

SmoothCurveTo__uType* SmoothCurveTo__typeof();

void SmoothCurveTo___ObjInit_3(SmoothCurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
SmoothCurveTo* SmoothCurveTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
::uString* SmoothCurveTo__Serialize(SmoothCurveTo* __this);

struct SmoothCurveTo : ::app::Fuse::Drawing::CurveTo
{
    void _ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void SmoothCurveTo::_ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position) { SmoothCurveTo___ObjInit_3(this, prev, lastPosition, lastTangent, controlPointEnd, position); }

}}}


#endif
