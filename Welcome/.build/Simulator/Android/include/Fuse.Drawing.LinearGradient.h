// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class LinearGradient :60
// {
::g::Fuse::Drawing::Brush_type* LinearGradient_typeof();
void LinearGradient__ctor_2_fn(LinearGradient* __this);
void LinearGradient__ctor_3_fn(LinearGradient* __this, uArray* stops);
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval);
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value);
void LinearGradient__get_AngleDegrees_fn(LinearGradient* __this, float* __retval);
void LinearGradient__set_AngleDegrees_fn(LinearGradient* __this, float* value);
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval);
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value);
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval);
void LinearGradient__InitList_fn(LinearGradient* __this);
void LinearGradient__New1_fn(LinearGradient** __retval);
void LinearGradient__New2_fn(uArray* stops, LinearGradient** __retval);
void LinearGradient__OnAdded_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs);
void LinearGradient__OnChanged_fn(LinearGradient* __this);
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void LinearGradient__OnRemoved_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs);
void LinearGradient__OnUnpinned_fn(LinearGradient* __this);
void LinearGradient__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval);
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval);
void LinearGradient__SortStops_fn(LinearGradient* __this);
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval);
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value);
void LinearGradient__get_Stops_fn(LinearGradient* __this, uObject** __retval);

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
    uStrong< ::g::Uno::Collections::ObservableList*> _stops;

    void ctor_2();
    void ctor_3(uArray* stops);
    float Angle();
    void Angle(float value);
    float AngleDegrees();
    void AngleDegrees(float value);
    ::g::Uno::Float2 EndPoint();
    void EndPoint(::g::Uno::Float2 value);
    bool HasAngle();
    void InitList();
    void OnAdded(::g::Fuse::Drawing::GradientStop* gs);
    void OnChanged();
    void OnRemoved(::g::Fuse::Drawing::GradientStop* gs);
    uArray* SortedStops();
    void SortStops();
    ::g::Uno::Float2 StartPoint();
    void StartPoint(::g::Uno::Float2 value);
    uObject* Stops();
    static LinearGradient* New1();
    static LinearGradient* New2(uArray* stops);
    static int SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b);
};
// }

}}} // ::g::Fuse::Drawing
