// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CONTOUR_TERMINATOR_H__
#define __APP_FUSE_DRAWING_CONTOUR_TERMINATOR_H__

#include <app/Fuse.Drawing.PathGeometry.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct ContourTerminator;

struct ContourTerminator__uType : ::app::Fuse::Drawing::PathGeometry__uType
{
};

ContourTerminator__uType* ContourTerminator__typeof();

void ContourTerminator___ObjInit_1(ContourTerminator* __this);
void ContourTerminator___ObjInit_2(ContourTerminator* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position);
void ContourTerminator__ContourTerminatorCtor(ContourTerminator* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position);
::uObject* ContourTerminator__EvaluateLast(ContourTerminator* __this);
::app::Uno::Float2 ContourTerminator__FindStartOfLastContour(ContourTerminator* __this);
bool ContourTerminator__get_EndsContour(ContourTerminator* __this);

struct ContourTerminator : ::app::Fuse::Drawing::PathGeometry
{
    void _ObjInit_1() { ContourTerminator___ObjInit_1(this); }
    void _ObjInit_2(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position);
    void ContourTerminatorCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void ContourTerminator::_ObjInit_2(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position) { ContourTerminator___ObjInit_2(this, prev, position); }
inline void ContourTerminator::ContourTerminatorCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position) { ContourTerminator__ContourTerminatorCtor(this, prev, position); }

}}}


#endif
