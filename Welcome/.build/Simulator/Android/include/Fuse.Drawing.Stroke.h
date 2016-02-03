// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class Stroke :297
// {
uType* Stroke_typeof();
void Stroke__ctor__fn(Stroke* __this);
void Stroke__ctor_1_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* brush, float* width, int* lineCap, int* lineJoin);
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval);
void Stroke__get_Adjustment_fn(Stroke* __this, int* __retval);
void Stroke__set_Adjustment_fn(Stroke* __this, int* value);
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval);
void Stroke__get_Alignment_fn(Stroke* __this, int* __retval);
void Stroke__set_Alignment_fn(Stroke* __this, int* value);
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval);
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value);
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* ppi, ::g::Uno::Float2* __retval);
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval);
void Stroke__get_LineCap_fn(Stroke* __this, int* __retval);
void Stroke__set_LineCap_fn(Stroke* __this, int* value);
void Stroke__get_LineJoin_fn(Stroke* __this, int* __retval);
void Stroke__set_LineJoin_fn(Stroke* __this, int* value);
void Stroke__New1_fn(Stroke** __retval);
void Stroke__New2_fn(::g::Fuse::Drawing::Brush* brush, float* width, int* lineCap, int* lineJoin, Stroke** __retval);
void Stroke__get_Offset_fn(Stroke* __this, float* __retval);
void Stroke__set_Offset_fn(Stroke* __this, float* value);
void Stroke__OnPinned_fn(Stroke* __this);
void Stroke__OnShadingChanged_fn(Stroke* __this);
void Stroke__OnStrokeChanged_fn(Stroke* __this);
void Stroke__OnUnpinned_fn(Stroke* __this);
void Stroke__Pin_fn(Stroke* __this);
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Stroke__add_ShadingChanged_fn(Stroke* __this, uDelegate* value);
void Stroke__remove_ShadingChanged_fn(Stroke* __this, uDelegate* value);
void Stroke__add_StrokeChanged_fn(Stroke* __this, uDelegate* value);
void Stroke__remove_StrokeChanged_fn(Stroke* __this, uDelegate* value);
void Stroke__Unpin_fn(Stroke* __this);
void Stroke__get_Width_fn(Stroke* __this, float* __retval);
void Stroke__set_Width_fn(Stroke* __this, float* value);

struct Stroke : uObject
{
    int _adjustment;
    int _alignment;
    uStrong< ::g::Fuse::Drawing::Brush*> _brush;
    int _lineCap;
    int _lineJoin;
    float _offset;
    int _pinCount;
    float _width;
    uStrong<uDelegate*> ShadingChanged1;
    uStrong<uDelegate*> StrokeChanged1;

    void ctor_();
    void ctor_1(::g::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin);
    float Adjust(float w, float ppi);
    int Adjustment();
    void Adjustment(int value);
    float AdjustPosition(float w, float ppi);
    int Alignment();
    void Alignment(int value);
    ::g::Fuse::Drawing::Brush* Brush();
    void Brush(::g::Fuse::Drawing::Brush* value);
    ::g::Uno::Float2 GetDeviceAdjusted(float ppi);
    bool IsPinned();
    int LineCap();
    void LineCap(int value);
    int LineJoin();
    void LineJoin(int value);
    float Offset();
    void Offset(float value);
    void OnPinned();
    void OnShadingChanged();
    void OnStrokeChanged();
    void OnUnpinned();
    void Pin();
    void Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void add_ShadingChanged(uDelegate* value);
    void remove_ShadingChanged(uDelegate* value);
    void add_StrokeChanged(uDelegate* value);
    void remove_StrokeChanged(uDelegate* value);
    void Unpin();
    float Width();
    void Width(float value);
    static Stroke* New1();
    static Stroke* New2(::g::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin);
};
// }

}}} // ::g::Fuse::Drawing
