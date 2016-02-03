// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CLOSE_PATH_H__
#define __APP_FUSE_DRAWING_CLOSE_PATH_H__

#include <app/Fuse.Drawing.ContourTerminator.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct ClosePath;

struct ClosePath__uType : ::app::Fuse::Drawing::ContourTerminator__uType
{
};

ClosePath__uType* ClosePath__typeof();

void ClosePath___ObjInit_3(ClosePath* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition);
ClosePath* ClosePath__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition);
::uString* ClosePath__Serialize(ClosePath* __this);

struct ClosePath : ::app::Fuse::Drawing::ContourTerminator
{
    ::app::Uno::Float2 _lastPosition;

    void _ObjInit_3(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition) { ClosePath___ObjInit_3(this, prev, lastPosition); }
};

}}}


#endif
