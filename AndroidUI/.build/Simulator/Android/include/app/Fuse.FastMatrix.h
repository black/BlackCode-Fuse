// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FAST_MATRIX_H__
#define __APP_FUSE_FAST_MATRIX_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {

struct FastMatrix;

struct FastMatrix__uType : ::uClassType
{
};

FastMatrix__uType* FastMatrix__typeof();

void FastMatrix___ObjInit(FastMatrix* __this);
void FastMatrix___ObjInit_1(FastMatrix* __this, FastMatrix* orig);
void FastMatrix__AppendFastMatrix(FastMatrix* __this, FastMatrix* fm);
void FastMatrix__AppendRotation(FastMatrix* __this, float zRadians);
void FastMatrix__AppendRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q);
void FastMatrix__AppendScale(FastMatrix* __this, float factor);
void FastMatrix__AppendScale_1(FastMatrix* __this, ::app::Uno::Float3 scale);
void FastMatrix__AppendShear(FastMatrix* __this, float xRadians, float yRadians);
void FastMatrix__AppendTranslation(FastMatrix* __this, float x, float y, float z);
void FastMatrix__AppendTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset);
FastMatrix* FastMatrix__Copy(FastMatrix* __this);
FastMatrix* FastMatrix__FromFloat4x4(::uStatic* __this, ::app::Uno::Float4x4 m);
::app::Uno::Float4x4 FastMatrix__get_Matrix(FastMatrix* __this);
FastMatrix* FastMatrix__Identity(::uStatic* __this);
void FastMatrix__Invert(FastMatrix* __this);
FastMatrix* FastMatrix__Mul(FastMatrix* __this, FastMatrix* m);
FastMatrix* FastMatrix__New_1(::uStatic* __this);
FastMatrix* FastMatrix__New_2(::uStatic* __this, FastMatrix* orig);
void FastMatrix__PrependFastMatrix(FastMatrix* __this, FastMatrix* fm);
void FastMatrix__PrependRotation(FastMatrix* __this, float zRadians);
void FastMatrix__PrependRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q);
void FastMatrix__PrependScale(FastMatrix* __this, float factor);
void FastMatrix__PrependScale_1(FastMatrix* __this, ::app::Uno::Float3 scale);
void FastMatrix__PrependShear(FastMatrix* __this, float xRadians, float yRadians);
void FastMatrix__PrependTranslation(FastMatrix* __this, float x, float y, float z);
void FastMatrix__PrependTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset);
void FastMatrix__ResetIdentity(FastMatrix* __this);
void FastMatrix__SimpleTranslation(FastMatrix* __this, float x, float y, float z);

struct FastMatrix : ::uObject
{
    ::app::Uno::Float4x4 _matrix;
    bool _hasNonTranslation;

    void _ObjInit() { FastMatrix___ObjInit(this); }
    void _ObjInit_1(FastMatrix* orig) { FastMatrix___ObjInit_1(this, orig); }
    void AppendFastMatrix(FastMatrix* fm) { FastMatrix__AppendFastMatrix(this, fm); }
    void AppendRotation(float zRadians) { FastMatrix__AppendRotation(this, zRadians); }
    void AppendRotationQuaternion(::app::Uno::Float4 q);
    void AppendScale(float factor) { FastMatrix__AppendScale(this, factor); }
    void AppendScale_1(::app::Uno::Float3 scale);
    void AppendShear(float xRadians, float yRadians) { FastMatrix__AppendShear(this, xRadians, yRadians); }
    void AppendTranslation(float x, float y, float z) { FastMatrix__AppendTranslation(this, x, y, z); }
    void AppendTranslation_1(::app::Uno::Float3 offset);
    FastMatrix* Copy() { return FastMatrix__Copy(this); }
    ::app::Uno::Float4x4 Matrix();
    void Invert() { FastMatrix__Invert(this); }
    FastMatrix* Mul(FastMatrix* m) { return FastMatrix__Mul(this, m); }
    void PrependFastMatrix(FastMatrix* fm) { FastMatrix__PrependFastMatrix(this, fm); }
    void PrependRotation(float zRadians) { FastMatrix__PrependRotation(this, zRadians); }
    void PrependRotationQuaternion(::app::Uno::Float4 q);
    void PrependScale(float factor) { FastMatrix__PrependScale(this, factor); }
    void PrependScale_1(::app::Uno::Float3 scale);
    void PrependShear(float xRadians, float yRadians) { FastMatrix__PrependShear(this, xRadians, yRadians); }
    void PrependTranslation(float x, float y, float z) { FastMatrix__PrependTranslation(this, x, y, z); }
    void PrependTranslation_1(::app::Uno::Float3 offset);
    void ResetIdentity() { FastMatrix__ResetIdentity(this); }
    void SimpleTranslation(float x, float y, float z) { FastMatrix__SimpleTranslation(this, x, y, z); }
};

}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {

inline void FastMatrix::AppendRotationQuaternion(::app::Uno::Float4 q) { FastMatrix__AppendRotationQuaternion(this, q); }
inline void FastMatrix::AppendScale_1(::app::Uno::Float3 scale) { FastMatrix__AppendScale_1(this, scale); }
inline void FastMatrix::AppendTranslation_1(::app::Uno::Float3 offset) { FastMatrix__AppendTranslation_1(this, offset); }
inline ::app::Uno::Float4x4 FastMatrix::Matrix() { return FastMatrix__get_Matrix(this); }
inline void FastMatrix::PrependRotationQuaternion(::app::Uno::Float4 q) { FastMatrix__PrependRotationQuaternion(this, q); }
inline void FastMatrix::PrependScale_1(::app::Uno::Float3 scale) { FastMatrix__PrependScale_1(this, scale); }
inline void FastMatrix::PrependTranslation_1(::app::Uno::Float3 offset) { FastMatrix__PrependTranslation_1(this, offset); }

}}


#endif
