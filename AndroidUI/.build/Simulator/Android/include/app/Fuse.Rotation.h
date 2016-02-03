// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ROTATION_H__
#define __APP_FUSE_ROTATION_H__

#include <app/Fuse.Transform.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }

namespace app {
namespace Fuse {

struct Rotation;

struct Rotation__uType : ::app::Fuse::Transform__uType
{
};

Rotation__uType* Rotation__typeof();

void Rotation___ObjInit_1(Rotation* __this);
void Rotation__AppendTo(Rotation* __this, ::app::Fuse::FastMatrix* m, float weight);
float Rotation__get_Degrees(Rotation* __this);
float Rotation__get_DegreesX(Rotation* __this);
float Rotation__get_DegreesY(Rotation* __this);
float Rotation__get_DegreesZ(Rotation* __this);
::app::Uno::Float3 Rotation__get_EulerAngle(Rotation* __this);
::app::Uno::Float3 Rotation__get_EulerAngleDegrees(Rotation* __this);
bool Rotation__get_HasRotation(Rotation* __this);
bool Rotation__get_IsFlat(Rotation* __this);
Rotation* Rotation__New_1(::uStatic* __this);
void Rotation__PrependTo(Rotation* __this, ::app::Fuse::FastMatrix* m);
void Rotation__set_Degrees(Rotation* __this, float value);
void Rotation__set_DegreesX(Rotation* __this, float value);
void Rotation__set_DegreesY(Rotation* __this, float value);
void Rotation__set_DegreesZ(Rotation* __this, float value);
void Rotation__set_EulerAngle(Rotation* __this, ::app::Uno::Float3 value);
void Rotation__set_EulerAngleDegrees(Rotation* __this, ::app::Uno::Float3 value);

struct Rotation : ::app::Fuse::Transform
{
    ::app::Uno::Float3 _euler;

    void _ObjInit_1() { Rotation___ObjInit_1(this); }
    float Degrees() { return Rotation__get_Degrees(this); }
    float DegreesX() { return Rotation__get_DegreesX(this); }
    float DegreesY() { return Rotation__get_DegreesY(this); }
    float DegreesZ() { return Rotation__get_DegreesZ(this); }
    ::app::Uno::Float3 EulerAngle() { return Rotation__get_EulerAngle(this); }
    ::app::Uno::Float3 EulerAngleDegrees() { return Rotation__get_EulerAngleDegrees(this); }
    bool HasRotation() { return Rotation__get_HasRotation(this); }
    void Degrees(float value) { Rotation__set_Degrees(this, value); }
    void DegreesX(float value) { Rotation__set_DegreesX(this, value); }
    void DegreesY(float value) { Rotation__set_DegreesY(this, value); }
    void DegreesZ(float value) { Rotation__set_DegreesZ(this, value); }
    void EulerAngle(::app::Uno::Float3 value) { Rotation__set_EulerAngle(this, value); }
    void EulerAngleDegrees(::app::Uno::Float3 value) { Rotation__set_EulerAngleDegrees(this, value); }
};

}}


#endif
