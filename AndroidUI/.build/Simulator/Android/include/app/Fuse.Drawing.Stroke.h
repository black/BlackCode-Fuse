// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_STROKE_H__
#define __APP_FUSE_DRAWING_STROKE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Stroke;

struct Stroke__uType : ::uClassType
{
};

Stroke__uType* Stroke__typeof();

void Stroke___ObjInit(Stroke* __this);
void Stroke___ObjInit_1(Stroke* __this, ::app::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin);
void Stroke__add_ShadingChanged(Stroke* __this, ::uDelegate* value);
void Stroke__add_StrokeChanged(Stroke* __this, ::uDelegate* value);
float Stroke__Adjust(Stroke* __this, float w, float ppi);
float Stroke__AdjustPosition(Stroke* __this, float w, float ppi);
int Stroke__get_Adjustment(Stroke* __this);
int Stroke__get_Alignment(Stroke* __this);
::app::Fuse::Drawing::Brush* Stroke__get_Brush(Stroke* __this);
bool Stroke__get_IsPinned(Stroke* __this);
int Stroke__get_LineCap(Stroke* __this);
int Stroke__get_LineJoin(Stroke* __this);
float Stroke__get_Offset(Stroke* __this);
float Stroke__get_Width(Stroke* __this);
::app::Uno::Float2 Stroke__GetDeviceAdjusted(Stroke* __this, float ppi);
Stroke* Stroke__New_1(::uStatic* __this);
Stroke* Stroke__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin);
void Stroke__OnPinned(Stroke* __this);
void Stroke__OnShadingChanged(Stroke* __this);
void Stroke__OnStrokeChanged(Stroke* __this);
void Stroke__OnUnpinned(Stroke* __this);
void Stroke__Pin(Stroke* __this);
void Stroke__Prepare(Stroke* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
void Stroke__remove_ShadingChanged(Stroke* __this, ::uDelegate* value);
void Stroke__remove_StrokeChanged(Stroke* __this, ::uDelegate* value);
void Stroke__set_Adjustment(Stroke* __this, int value);
void Stroke__set_Alignment(Stroke* __this, int value);
void Stroke__set_Brush(Stroke* __this, ::app::Fuse::Drawing::Brush* value);
void Stroke__set_LineCap(Stroke* __this, int value);
void Stroke__set_LineJoin(Stroke* __this, int value);
void Stroke__set_Offset(Stroke* __this, float value);
void Stroke__set_Width(Stroke* __this, float value);
void Stroke__Unpin(Stroke* __this);

struct Stroke : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> _brush;
    float _width;
    float _offset;
    int _adjustment;
    int _alignment;
    int _lineCap;
    int _lineJoin;
    int _pinCount;
    ::uStrong< ::uDelegate*> StrokeChanged;
    ::uStrong< ::uDelegate*> ShadingChanged;

    void _ObjInit() { Stroke___ObjInit(this); }
    void _ObjInit_1(::app::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin) { Stroke___ObjInit_1(this, brush, width, lineCap, lineJoin); }
    void add_ShadingChanged(::uDelegate* value) { Stroke__add_ShadingChanged(this, value); }
    void add_StrokeChanged(::uDelegate* value) { Stroke__add_StrokeChanged(this, value); }
    float Adjust(float w, float ppi) { return Stroke__Adjust(this, w, ppi); }
    float AdjustPosition(float w, float ppi) { return Stroke__AdjustPosition(this, w, ppi); }
    int Adjustment() { return Stroke__get_Adjustment(this); }
    int Alignment() { return Stroke__get_Alignment(this); }
    ::app::Fuse::Drawing::Brush* Brush() { return Stroke__get_Brush(this); }
    bool IsPinned() { return Stroke__get_IsPinned(this); }
    int LineCap() { return Stroke__get_LineCap(this); }
    int LineJoin() { return Stroke__get_LineJoin(this); }
    float Offset() { return Stroke__get_Offset(this); }
    float Width() { return Stroke__get_Width(this); }
    ::app::Uno::Float2 GetDeviceAdjusted(float ppi);
    void OnPinned() { Stroke__OnPinned(this); }
    void OnShadingChanged() { Stroke__OnShadingChanged(this); }
    void OnStrokeChanged() { Stroke__OnStrokeChanged(this); }
    void OnUnpinned() { Stroke__OnUnpinned(this); }
    void Pin() { Stroke__Pin(this); }
    void Prepare(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
    void remove_ShadingChanged(::uDelegate* value) { Stroke__remove_ShadingChanged(this, value); }
    void remove_StrokeChanged(::uDelegate* value) { Stroke__remove_StrokeChanged(this, value); }
    void Adjustment(int value) { Stroke__set_Adjustment(this, value); }
    void Alignment(int value) { Stroke__set_Alignment(this, value); }
    void Brush(::app::Fuse::Drawing::Brush* value) { Stroke__set_Brush(this, value); }
    void LineCap(int value) { Stroke__set_LineCap(this, value); }
    void LineJoin(int value) { Stroke__set_LineJoin(this, value); }
    void Offset(float value) { Stroke__set_Offset(this, value); }
    void Width(float value) { Stroke__set_Width(this, value); }
    void Unpin() { Stroke__Unpin(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float2 Stroke::GetDeviceAdjusted(float ppi) { return Stroke__GetDeviceAdjusted(this, ppi); }
inline void Stroke::Prepare(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize) { Stroke__Prepare(this, dc, canvasSize); }

}}}


#endif
