// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_MOVE_TO_H__
#define __APP_FUSE_DRAWING_MOVE_TO_H__

#include <app/Fuse.Drawing.ContourTerminator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct MoveTo;

struct MoveTo__uType : ::app::Fuse::Drawing::ContourTerminator__uType
{
};

MoveTo__uType* MoveTo__typeof();

void MoveTo___ObjInit_3(MoveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position);
MoveTo* MoveTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position);
::uString* MoveTo__Serialize(MoveTo* __this);

struct MoveTo : ::app::Fuse::Drawing::ContourTerminator
{
    void _ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void MoveTo::_ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position) { MoveTo___ObjInit_3(this, prev, position); }

}}}


#endif
