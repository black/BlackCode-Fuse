// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_VERTICAL_LINE_TO_H__
#define __APP_FUSE_DRAWING_VERTICAL_LINE_TO_H__

#include <app/Fuse.Drawing.LineTo.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct VerticalLineTo;

struct VerticalLineTo__uType : ::app::Fuse::Drawing::LineTo__uType
{
};

VerticalLineTo__uType* VerticalLineTo__typeof();

void VerticalLineTo___ObjInit_3(VerticalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y);
VerticalLineTo* VerticalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y);
::uString* VerticalLineTo__Serialize(VerticalLineTo* __this);

struct VerticalLineTo : ::app::Fuse::Drawing::LineTo
{
    float _y;

    void _ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void VerticalLineTo::_ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y) { VerticalLineTo___ObjInit_3(this, prev, lastPosition, y); }

}}}


#endif
