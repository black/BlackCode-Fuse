// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class LinearGradient :60
// {
::g::Fuse::Drawing::Brush_type* LinearGradient_typeof();
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval);
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value);
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval);
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value);
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval);
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void LinearGradient__OnUnpinned_fn(LinearGradient* __this);
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval);
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval);
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value);

struct LinearGradient : ::g::Fuse::Drawing::DynamicBrush
{
    float _angle;
    ::g::Uno::Float2 _endPoint;
    uStrong< ::g::Uno::Graphics::Framebuffer*> _gradientBuffer;
    static int _gradientSize_;
    static int& _gradientSize() { return LinearGradient_typeof()->Init(), _gradientSize_; }
    ::g::Uno::Float2 _gradientStart;
    bool _hasAngle;
    bool _invalid;
    uStrong<uArray*> _sortedStops;
    ::g::Uno::Float2 _startPoint;

    float Angle();
    void Angle(float value);
    ::g::Uno::Float2 EndPoint();
    void EndPoint(::g::Uno::Float2 value);
    bool HasAngle();
    uArray* SortedStops();
    ::g::Uno::Float2 StartPoint();
    void StartPoint(::g::Uno::Float2 value);
};
// }

}}} // ::g::Fuse::Drawing
