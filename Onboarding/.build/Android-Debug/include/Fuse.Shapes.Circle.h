// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Shapes.Shape.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Shapes{struct Circle;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Shapes{

// public sealed class Circle :17
// {
::g::Fuse::Shapes::Shape_type* Circle_typeof();
void Circle__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval);
void Circle__get_Center_fn(Circle* __this, ::g::Uno::Float2* __retval);
void Circle__DrawFill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void Circle__DrawStroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void Circle__get_EffectiveEndAngle_fn(Circle* __this, float* __retval);
void Circle__OnHitTestLocalVisual_fn(Circle* __this, ::g::Fuse::HitTestContext* htc);
void Circle__get_Radius_fn(Circle* __this, float* __retval);
void Circle__get_StartAngle_fn(Circle* __this, float* __retval);
void Circle__set_StartAngle_fn(Circle* __this, float* value);
void Circle__get_UseAngle_fn(Circle* __this, bool* __retval);

struct Circle : ::g::Fuse::Shapes::Shape
{
    float _endAngle;
    bool _hasAngle;
    bool _hasLengthAngle;
    float _lengthAngle;
    float _startAngle;

    ::g::Uno::Float2 Center();
    float EffectiveEndAngle();
    float Radius();
    float StartAngle();
    void StartAngle(float value);
    bool UseAngle();
    static bool AngleInRange(float angle, float start, float end);
};
// }

}}} // ::g::Fuse::Shapes
