// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SKEW_H__
#define __APP_FUSE_ANIMATIONS_SKEW_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Shear.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Shear; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Skew;

struct Skew__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Shear__uType
{
};

Skew__uType* Skew__typeof();

void Skew___ObjInit_3(Skew* __this);
float Skew__get_DegreesX(Skew* __this);
::app::Uno::Float2 Skew__get_DegreesXY(Skew* __this);
float Skew__get_DegreesY(Skew* __this);
::app::Uno::Float2 Skew__get_XY(Skew* __this);
Skew* Skew__New_1(::uStatic* __this);
void Skew__set_DegreesX(Skew* __this, float value);
void Skew__set_DegreesXY(Skew* __this, ::app::Uno::Float2 value);
void Skew__set_DegreesY(Skew* __this, float value);
void Skew__set_XY(Skew* __this, ::app::Uno::Float2 value);
void Skew__Update(Skew* __this, ::app::Fuse::Node* elm, ::app::Fuse::Shear* t, ::app::Uno::Float4 value);

struct Skew : ::app::Fuse::Animations::TransformAnimator__Fuse_Shear
{
    void _ObjInit_3() { Skew___ObjInit_3(this); }
    float DegreesX() { return Skew__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Skew__get_DegreesY(this); }
    ::app::Uno::Float2 XY();
    void DegreesX(float value) { Skew__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Skew__set_DegreesY(this, value); }
    void XY(::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Skew::DegreesXY() { return Skew__get_DegreesXY(this); }
inline ::app::Uno::Float2 Skew::XY() { return Skew__get_XY(this); }
inline void Skew::DegreesXY(::app::Uno::Float2 value) { Skew__set_DegreesXY(this, value); }
inline void Skew::XY(::app::Uno::Float2 value) { Skew__set_XY(this, value); }

}}}


#endif
