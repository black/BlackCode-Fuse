// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Circle :160
// {
::g::Fuse::Controls::Panel_type* Circle_typeof();
void Circle__ctor_5_fn(Circle* __this);
void Circle__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval);
void Circle__get_Center_fn(Circle* __this, ::g::Uno::Float2* __retval);
void Circle__get_EffectiveEndAngle_fn(Circle* __this, float* __retval);
void Circle__get_EffectiveEndAngleDegrees_fn(Circle* __this, float* __retval);
void Circle__New2_fn(Circle** __retval);
void Circle__get_Radius_fn(Circle* __this, float* __retval);
void Circle__get_StartAngle_fn(Circle* __this, float* __retval);
void Circle__set_StartAngle_fn(Circle* __this, float* value);
void Circle__get_StartAngleDegrees_fn(Circle* __this, float* __retval);
void Circle__set_StartAngleDegrees_fn(Circle* __this, float* value);
void Circle__get_UseAngle_fn(Circle* __this, bool* __retval);

struct Circle : ::g::Fuse::Controls::Shape
{
    float _endAngle;
    bool _hasAngle;
    bool _hasLengthAngle;
    float _lengthAngle;
    float _startAngle;

    void ctor_5();
    ::g::Uno::Float2 Center();
    float EffectiveEndAngle();
    float EffectiveEndAngleDegrees();
    float Radius();
    float StartAngle();
    void StartAngle(float value);
    float StartAngleDegrees();
    void StartAngleDegrees(float value);
    bool UseAngle();
    static bool AngleInRange(float angle, float start, float end);
    static Circle* New2();
};
// }

}}} // ::g::Fuse::Controls
