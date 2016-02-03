// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_ROTATE_H__
#define __APP_FUSE_ANIMATIONS_ROTATE_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Rotation.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Rotation; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Rotate;

struct Rotate__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation__uType
{
};

Rotate__uType* Rotate__typeof();

void Rotate___ObjInit_3(Rotate* __this);
float Rotate__get_Degrees(Rotate* __this);
float Rotate__get_DegreesX(Rotate* __this);
float Rotate__get_DegreesY(Rotate* __this);
float Rotate__get_DegreesZ(Rotate* __this);
Rotate* Rotate__New_1(::uStatic* __this);
void Rotate__set_Degrees(Rotate* __this, float value);
void Rotate__set_DegreesX(Rotate* __this, float value);
void Rotate__set_DegreesY(Rotate* __this, float value);
void Rotate__set_DegreesZ(Rotate* __this, float value);
void Rotate__Update(Rotate* __this, ::app::Fuse::Node* elm, ::app::Fuse::Rotation* t, ::app::Uno::Float4 value);

struct Rotate : ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation
{
    void _ObjInit_3() { Rotate___ObjInit_3(this); }
    float Degrees() { return Rotate__get_Degrees(this); }
    float DegreesX() { return Rotate__get_DegreesX(this); }
    float DegreesY() { return Rotate__get_DegreesY(this); }
    float DegreesZ() { return Rotate__get_DegreesZ(this); }
    void Degrees(float value) { Rotate__set_Degrees(this, value); }
    void DegreesX(float value) { Rotate__set_DegreesX(this, value); }
    void DegreesY(float value) { Rotate__set_DegreesY(this, value); }
    void DegreesZ(float value) { Rotate__set_DegreesZ(this, value); }
};

}}}


#endif
