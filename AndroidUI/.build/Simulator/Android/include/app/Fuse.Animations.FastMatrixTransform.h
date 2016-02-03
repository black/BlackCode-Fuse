// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_FAST_MATRIX_TRANSFORM_H__
#define __APP_FUSE_ANIMATIONS_FAST_MATRIX_TRANSFORM_H__

#include <app/Fuse.Transform.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }

namespace app {
namespace Fuse {
namespace Animations {

struct FastMatrixTransform;

struct FastMatrixTransform__uType : ::app::Fuse::Transform__uType
{
};

FastMatrixTransform__uType* FastMatrixTransform__typeof();

void FastMatrixTransform___ObjInit_1(FastMatrixTransform* __this);
void FastMatrixTransform__AppendTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m, float weight);
void FastMatrixTransform__Changed(FastMatrixTransform* __this);
bool FastMatrixTransform__get_IsFlat(FastMatrixTransform* __this);
FastMatrixTransform* FastMatrixTransform__New_1(::uStatic* __this);
void FastMatrixTransform__PrependTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m);

struct FastMatrixTransform : ::app::Fuse::Transform
{
    ::uStrong< ::app::Fuse::FastMatrix*> Matrix;

    void _ObjInit_1() { FastMatrixTransform___ObjInit_1(this); }
    void Changed() { FastMatrixTransform__Changed(this); }
};

}}}


#endif
