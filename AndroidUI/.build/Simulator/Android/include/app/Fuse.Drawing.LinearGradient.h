// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LinearGradient;

extern int LinearGradient___gradientSize;

struct LinearGradient__uType : ::app::Fuse::Drawing::DynamicBrush__uType
{
};

LinearGradient__uType* LinearGradient__typeof();

void LinearGradient___ObjInit_2(LinearGradient* __this);
void LinearGradient___ObjInit_3(LinearGradient* __this, ::uArray* stops);
void LinearGradient___TypeInit(::uStatic* __this);
float LinearGradient__get_Angle(LinearGradient* __this);
float LinearGradient__get_AngleDegrees(LinearGradient* __this);
::app::Uno::Float2 LinearGradient__get_EndPoint(LinearGradient* __this);
bool LinearGradient__get_HasAngle(LinearGradient* __this);
::uArray* LinearGradient__get_SortedStops(LinearGradient* __this);
::app::Uno::Float2 LinearGradient__get_StartPoint(LinearGradient* __this);
::uObject* LinearGradient__get_Stops(LinearGradient* __this);
void LinearGradient__InitList(LinearGradient* __this);
LinearGradient* LinearGradient__New_1(::uStatic* __this);
LinearGradient* LinearGradient__New_2(::uStatic* __this, ::uArray* stops);
void LinearGradient__OnAdded(LinearGradient* __this, ::app::Fuse::Drawing::GradientStop* gs);
void LinearGradient__OnChanged(LinearGradient* __this);
void LinearGradient__OnPrepare(LinearGradient* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
void LinearGradient__OnRemoved(LinearGradient* __this, ::app::Fuse::Drawing::GradientStop* gs);
void LinearGradient__OnUnpinned(LinearGradient* __this);
int LinearGradient__SelectOffset(::uStatic* __this, ::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b);
void LinearGradient__set_Angle(LinearGradient* __this, float value);
void LinearGradient__set_AngleDegrees(LinearGradient* __this, float value);
void LinearGradient__set_EndPoint(LinearGradient* __this, ::app::Uno::Float2 value);
void LinearGradient__set_StartPoint(LinearGradient* __this, ::app::Uno::Float2 value);
void LinearGradient__SortStops(LinearGradient* __this);

struct LinearGradient : ::app::Fuse::Drawing::DynamicBrush
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_GradientStop*> _stops;
    ::uStrong< ::uArray*> _sortedStops;
    ::app::Uno::Float2 _startPoint;
    ::app::Uno::Float2 _endPoint;
    float _angle;
    bool _hasAngle;
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _gradientBuffer;
    ::app::Uno::Float2 _gradientStart;

    void _ObjInit_2() { LinearGradient___ObjInit_2(this); }
    void _ObjInit_3(::uArray* stops) { LinearGradient___ObjInit_3(this, stops); }
    float Angle() { return LinearGradient__get_Angle(this); }
    float AngleDegrees() { return LinearGradient__get_AngleDegrees(this); }
    ::app::Uno::Float2 EndPoint() { return LinearGradient__get_EndPoint(this); }
    bool HasAngle() { return LinearGradient__get_HasAngle(this); }
    ::uArray* SortedStops() { return LinearGradient__get_SortedStops(this); }
    ::app::Uno::Float2 StartPoint() { return LinearGradient__get_StartPoint(this); }
    ::uObject* Stops() { return LinearGradient__get_Stops(this); }
    void InitList() { LinearGradient__InitList(this); }
    void OnAdded(::app::Fuse::Drawing::GradientStop* gs) { LinearGradient__OnAdded(this, gs); }
    void OnChanged() { LinearGradient__OnChanged(this); }
    void OnRemoved(::app::Fuse::Drawing::GradientStop* gs) { LinearGradient__OnRemoved(this, gs); }
    void Angle(float value) { LinearGradient__set_Angle(this, value); }
    void AngleDegrees(float value) { LinearGradient__set_AngleDegrees(this, value); }
    void EndPoint(::app::Uno::Float2 value) { LinearGradient__set_EndPoint(this, value); }
    void StartPoint(::app::Uno::Float2 value) { LinearGradient__set_StartPoint(this, value); }
    void SortStops() { LinearGradient__SortStops(this); }
};

}}}


#endif
