// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINE_TO_H__
#define __APP_FUSE_DRAWING_LINE_TO_H__

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LineTo;

struct LineTo__uType : ::app::Fuse::Drawing::PathGeometry__uType
{
};

LineTo__uType* LineTo__typeof();

void LineTo___ObjInit_1(LineTo* __this);
void LineTo___ObjInit_2(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
::uObject* LineTo__EvaluateLast(LineTo* __this);
bool LineTo__get_HasLastBounds(LineTo* __this);
::app::Uno::Rect LineTo__get_LastBounds(LineTo* __this);
void LineTo__LineToCtor(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
LineTo* LineTo__New_2(::uStatic* __this);
LineTo* LineTo__New_3(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
::uString* LineTo__Serialize(LineTo* __this);

struct LineTo : ::app::Fuse::Drawing::PathGeometry
{
    ::app::Uno::Float2 _lastPosition;

    void _ObjInit_1() { LineTo___ObjInit_1(this); }
    void _ObjInit_2(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
    void LineToCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position);
};

}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline void LineTo::_ObjInit_2(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position) { LineTo___ObjInit_2(this, prev, lastPosition, position); }
inline void LineTo::LineToCtor(::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position) { LineTo__LineToCtor(this, prev, lastPosition, position); }

}}}


#endif
