// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_HORIZONTAL_LINE_TO_H__
#define __APP_FUSE_DRAWING_HORIZONTAL_LINE_TO_H__

#include <app/Fuse.Drawing.LineTo.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct HorizontalLineTo;

struct HorizontalLineTo__uType : ::app::Fuse::Drawing::LineTo__uType
{
};

HorizontalLineTo__uType* HorizontalLineTo__typeof();

void HorizontalLineTo___ObjInit_3(HorizontalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x);
HorizontalLineTo* HorizontalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x);
::uString* HorizontalLineTo__Serialize(HorizontalLineTo* __this);

struct HorizontalLineTo : ::app::Fuse::Drawing::LineTo
{
    float _x;

    void _ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void HorizontalLineTo::_ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x) { HorizontalLineTo___ObjInit_3(this, prev, lastPosition, x); }

}}}


#endif
