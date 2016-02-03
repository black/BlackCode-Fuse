// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_MITER_JOIN_H__
#define __APP_FUSE_DRAWING_MITER_JOIN_H__

#include <app/Fuse.Drawing.LineJoinImpl.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct MiterJoin;

struct MiterJoin__uType : ::app::Fuse::Drawing::LineJoinImpl__uType
{
};

MiterJoin__uType* MiterJoin__typeof();

void MiterJoin___ObjInit_1(MiterJoin* __this);
void MiterJoin__Create(MiterJoin* __this, ::app::Uno::Float2 leftInner, ::app::Uno::Float2 leftOuter, ::app::Uno::Float2 rightInner, ::app::Uno::Float2 rightOuter, ::uObject* outer, ::uObject* inner);
MiterJoin* MiterJoin__New_1(::uStatic* __this);

struct MiterJoin : ::app::Fuse::Drawing::LineJoinImpl
{
    void _ObjInit_1() { MiterJoin___ObjInit_1(this); }
};

}}}


#endif
