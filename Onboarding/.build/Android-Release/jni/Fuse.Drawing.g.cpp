// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fuse_Drawing_bundle.h>
#include <_root.Fuse_Drawing_Polygons_bundle.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Antialiasing.h>
#include <Fuse.Drawing.BezierOp.h>
#include <Fuse.Drawing.BlendMode.h>
#include <Fuse.Drawing.BlendModeHelpers.h>
#include <Fuse.Drawing.Border.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ButtCap.h>
#include <Fuse.Drawing.Cache-1.h>
#include <Fuse.Drawing.ClosePath.h>
#include <Fuse.Drawing.Contour.h>
#include <Fuse.Drawing.ContourEnumerable.h>
#include <Fuse.Drawing.ContourEnumerator.h>
#include <Fuse.Drawing.ContourTerminator.h>
#include <Fuse.Drawing.CurveTo.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.EllipseFactory.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.HorizontalLineTo.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.LinearGradientDrawable.h>
#include <Fuse.Drawing.LineCap.h>
#include <Fuse.Drawing.LineCapImpl.h>
#include <Fuse.Drawing.LineTo.h>
#include <Fuse.Drawing.MoveTo.h>
#include <Fuse.Drawing.NonConsecutiveEnumerable.h>
#include <Fuse.Drawing.NonConsecutiveEnumerator.h>
#include <Fuse.Drawing.NonConsecutiveExtension.h>
#include <Fuse.Drawing.PathGeometry.h>
#include <Fuse.Drawing.PathGeometryExtensions.h>
#include <Fuse.Drawing.PathGeometryParser.h>
#include <Fuse.Drawing.PathGeometryRenderer.h>
#include <Fuse.Drawing.Polygon.h>
#include <Fuse.Drawing.PolygonDrawable.h>
#include <Fuse.Drawing.PolygonFiller.h>
#include <Fuse.Drawing.RegularPolygonFactory.h>
#include <Fuse.Drawing.RendererContext.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.RoundCap.h>
#include <Fuse.Drawing.SmoothCurveTo.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StarFactory.h>
#include <Fuse.Drawing.StaticBrush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAdjustment.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Drawing.Tesselation.Face.h>
#include <Fuse.Drawing.Tesselation.HalfEdge.h>
#include <Fuse.Drawing.Tesselation.Mesh.h>
#include <Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <Fuse.Drawing.Tesselation.Vertex.h>
#include <Fuse.Drawing.Token.h>
#include <Fuse.Drawing.Util.h>
#include <Fuse.Drawing.VerticalLineTo.h>
#include <Fuse.Drawing.WindingRules.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Resources.ImageSource.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EmptyEnumerable-1.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Collision2D.h>
#include <Uno.Geometry.CubicBezier.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PolygonWinding.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[22];
static uType* TYPES[95];

namespace g{
namespace Fuse{
namespace Drawing{

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(262)
// ----------------------------------------------------------

// public enum Antialiasing :262
uEnumType* Antialiasing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.Antialiasing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Gradient", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1274)
// -----------------------------------------------------------------

// public static class BezierOp :1274
// {
uClassType* BezierOp_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.BezierOp", options);
    ::TYPES[0] = ::g::Uno::Double_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    return type;
}

// private static double _Solve(double a_, double b_, double c_, bool s) :1328
void BezierOp___Solve_fn(double* a_, double* b_, double* c_, bool* s, double* __retval)
{
    *__retval = BezierOp::_Solve(*a_, *b_, *c_, *s);
}

// private static double A(double p0, double p1, double p2, double p3) :1306
void BezierOp__A_fn(double* p0, double* p1, double* p2, double* p3, double* __retval)
{
    *__retval = BezierOp::A(*p0, *p1, *p2, *p3);
}

// private static double B(double p0, double p1, double p2) :1312
void BezierOp__B_fn(double* p0, double* p1, double* p2, double* __retval)
{
    *__retval = BezierOp::B(*p0, *p1, *p2);
}

// private static double bezierSpline(double p0, double p1, double p2, double p3, double t) :1283
void BezierOp__bezierSpline_fn(double* p0, double* p1, double* p2, double* p3, double* t, double* __retval)
{
    *__retval = BezierOp::bezierSpline(*p0, *p1, *p2, *p3, *t);
}

// private static double C(double p0, double p1) :1317
void BezierOp__C_fn(double* p0, double* p1, double* __retval)
{
    *__retval = BezierOp::C(*p0, *p1);
}

// private static double Determinant(double a, double b, double c) :1323
void BezierOp__Determinant_fn(double* a, double* b, double* c, double* __retval)
{
    *__retval = BezierOp::Determinant(*a, *b, *c);
}

// public static Uno.Rect GetRect(float2 p1, float2 c1, float2 c2, float2 p2) :1363
void BezierOp__GetRect_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* c1, ::g::Uno::Float2* c2, ::g::Uno::Float2* p2, ::g::Uno::Rect* __retval)
{
    *__retval = BezierOp::GetRect(*p1, *c1, *c2, *p2);
}

// private static double[] Solve(double a, double b, double c) :1335
void BezierOp__Solve_fn(double* a, double* b, double* c, uArray** __retval)
{
    *__retval = BezierOp::Solve(*a, *b, *c);
}

// private static double _Solve(double a_, double b_, double c_, bool s) [static] :1328
double BezierOp::_Solve(double a_, double b_, double c_, bool s)
{
    return (-b_ + (::g::Uno::Math::Sqrt((b_ * b_) - ((4.0 * a_) * c_)) * (double)(s ? 1 : -1))) / (2.0 * a_);
}

// private static double A(double p0, double p1, double p2, double p3) [static] :1306
double BezierOp::A(double p0, double p1, double p2, double p3)
{
    return (((3.0 * p3) - (9.0 * p2)) + (9.0 * p1)) - (3.0 * p0);
}

// private static double B(double p0, double p1, double p2) [static] :1312
double BezierOp::B(double p0, double p1, double p2)
{
    return ((6.0 * p2) - (12.0 * p1)) + (6.0 * p0);
}

// private static double bezierSpline(double p0, double p1, double p2, double p3, double t) [static] :1283
double BezierOp::bezierSpline(double p0, double p1, double p2, double p3, double t)
{
    return ((((((p3 - (3.0 * p2)) + (3.0 * p1)) - p0) * ::g::Uno::Math::Pow(t, 3.0)) + ((((3.0 * p2) - (6.0 * p1)) + (3.0 * p0)) * ::g::Uno::Math::Pow(t, 2.0))) + (((3.0 * p1) - (3.0 * p0)) * t)) + p0;
}

// private static double C(double p0, double p1) [static] :1317
double BezierOp::C(double p0, double p1)
{
    return (3.0 * p1) - (3.0 * p0);
}

// private static double Determinant(double a, double b, double c) [static] :1323
double BezierOp::Determinant(double a, double b, double c)
{
    return ::g::Uno::Math::Pow(b, 2.0) - ((4.0 * a) * c);
}

// public static Uno.Rect GetRect(float2 p1, float2 c1, float2 c2, float2 p2) [static] :1363
::g::Uno::Rect BezierOp::GetRect(::g::Uno::Float2 p1, ::g::Uno::Float2 c1, ::g::Uno::Float2 c2, ::g::Uno::Float2 p2)
{
    double aX = BezierOp::A((double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X);
    double bX = BezierOp::B((double)p1.X, (double)c1.X, (double)c2.X);
    double cX = BezierOp::C((double)p1.X, (double)c1.X);
    double aY = BezierOp::A((double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y);
    double bY = BezierOp::B((double)p1.Y, (double)c1.Y, (double)c2.Y);
    double cY = BezierOp::C((double)p1.Y, (double)c1.Y);
    uArray* resX = BezierOp::Solve(aX, bX, cX);
    uArray* resY = BezierOp::Solve(aY, bY, cY);
    ::g::Uno::Float2 min = ::g::Uno::Math::Min3(p1, p2);
    ::g::Uno::Float2 max = ::g::Uno::Math::Max3(p1, p2);

    for (int index2 = 0, length3 = uPtr(resX)->Length(); index2 < length3; ++index2)
    {
        double e = uPtr(resX)->Item<double>(index2);

        if ((e < 0.0) || (e > 1.0))
            continue;

        double x = BezierOp::bezierSpline((double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X, e);
        min.X = ::g::Uno::Math::Min1(min.X, (float)x);
        max.X = ::g::Uno::Math::Max1(max.X, (float)x);
    }

    for (int index5 = 0, length6 = uPtr(resY)->Length(); index5 < length6; ++index5)
    {
        double e1 = uPtr(resY)->Item<double>(index5);

        if ((e1 < 0.0) || (e1 > 1.0))
            continue;

        double y = BezierOp::bezierSpline((double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y, e1);
        min.Y = ::g::Uno::Math::Min1(min.Y, (float)y);
        max.Y = ::g::Uno::Math::Max1(max.Y, (float)y);
    }

    return ::g::Uno::Rect__New1(min.X, min.Y, max.X, max.Y);
}

// private static double[] Solve(double a, double b, double c) [static] :1335
uArray* BezierOp::Solve(double a, double b, double c)
{
    double d = BezierOp::Determinant(a, b, c);

    if (d < 0.0)
        return uArray::Init<double>(::TYPES[2/*double[]*/], 0);

    if (::g::Uno::Math::Abs(a) < 9.9999997473787516e-06)
    {
        if (::g::Uno::Math::Abs(b) < 9.9999997473787516e-06)
            return uArray::Init<double>(::TYPES[2/*double[]*/], 0);

        return uArray::Init<double>(::TYPES[2/*double[]*/], 1, -c / b);
    }

    if (d == 0.0)
        return uArray::Init<double>(::TYPES[2/*double[]*/], 1, BezierOp::_Solve(a, b, c, true));
    else
        return uArray::Init<double>(::TYPES[2/*double[]*/], 2, BezierOp::_Solve(a, b, c, true), BezierOp::_Solve(a, b, c, false));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(8)
// --------------------------------------------------------

// public enum BlendMode :8
uEnumType* BlendMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.BlendMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Normal", 0LL,
        "Add", 1LL,
        "Screen", 2LL,
        "Multiply", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(17)
// ---------------------------------------------------------

// public static class BlendModeHelpers :17
// {
// static BlendModeHelpers() :17
static void BlendModeHelpers__cctor__fn(uType* __type)
{
    BlendModeHelpers::_invalidBlendMode_ = ::STRINGS[0/*"Invalid ble...*/];
}

uClassType* BlendModeHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.BlendModeHelpers", options);
    type->fp_cctor_ = BlendModeHelpers__cctor__fn;
    ::STRINGS[0] = uString::Const("Invalid blend mode");
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Drawing::BlendModeHelpers::_invalidBlendMode_, uFieldFlagsStatic);
    return type;
}

// public static Uno.Graphics.BlendOperand GetDstAlpha(Fuse.Drawing.BlendMode mode) :60
void BlendModeHelpers__GetDstAlpha_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetDstAlpha(*mode);
}

// public static Uno.Graphics.BlendOperand GetDstRgb(Fuse.Drawing.BlendMode mode) :34
void BlendModeHelpers__GetDstRgb_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetDstRgb(*mode);
}

// public static Uno.Graphics.BlendOperand GetSrcAlpha(Fuse.Drawing.BlendMode mode) :47
void BlendModeHelpers__GetSrcAlpha_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetSrcAlpha(*mode);
}

// public static Uno.Graphics.BlendOperand GetSrcRgb(Fuse.Drawing.BlendMode mode) :21
void BlendModeHelpers__GetSrcRgb_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetSrcRgb(*mode);
}

uSStrong<uString*> BlendModeHelpers::_invalidBlendMode_;

// public static Uno.Graphics.BlendOperand GetDstAlpha(Fuse.Drawing.BlendMode mode) [static] :60
int BlendModeHelpers::GetDstAlpha(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 3;
        case 1:
            return 3;
        case 2:
            return 3;
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetDstRgb(Fuse.Drawing.BlendMode mode) [static] :34
int BlendModeHelpers::GetDstRgb(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 3;
        case 1:
            return 1;
        case 2:
            return 5;
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetSrcAlpha(Fuse.Drawing.BlendMode mode) [static] :47
int BlendModeHelpers::GetSrcAlpha(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 1;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 1;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetSrcRgb(Fuse.Drawing.BlendMode mode) [static] :21
int BlendModeHelpers::GetSrcRgb(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 1;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 8;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Rendering\$.uno(14)
// ----------------------------------------------------------------------------

// internal sealed class Border :14
// {
uType* Border_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(Border);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Border", options);
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[6] = ::g::Uno::Float4_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[8] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::RendererContext_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::ImageFill__DrawParams_typeof();
    ::TYPES[13] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[14] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[15] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[16] = ::g::Fuse_Drawing_Polygons_bundle_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Contour_typeof(), offsetof(::g::Fuse::Drawing::Border, _contour), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6ce6a1c0), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6d07a1c0), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6d49a1c0), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Border, _draw_6daca1c0), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Border, _offset), 0,
        ::g::Uno::Float4_typeof()->Array(), offsetof(::g::Fuse::Drawing::Border, _strokeVertices), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Border, _vbo), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Drawing::Border, _vertices), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Border, _width), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendDstAlpha_6daca1c0_6_7_10), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendDstRgb_6daca1c0_6_5_9), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendSrcAlpha_6daca1c0_6_6_8), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Border, Draw_BlendSrcRgb_6daca1c0_6_4_7), 0);
    return type;
}

// public Border(float2[] vertices, float offset, float width) :21
void Border__ctor__fn(Border* __this, uArray* vertices, float* offset, float* width)
{
    __this->ctor_(vertices, *offset, *width);
}

// private void CalculateStrokeVertices() :78
void Border__CalculateStrokeVertices_fn(Border* __this)
{
    __this->CalculateStrokeVertices();
}

// public Fuse.Drawing.Contour get_Contour() :60
void Border__get_Contour_fn(Border* __this, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->Contour();
}

// public void Dispose() :51
void Border__Dispose_fn(Border* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Drawing.Brush s, Fuse.Drawing.RendererContext ctx) :28
void Border__Draw_fn(Border* __this, ::g::Fuse::Drawing::Brush* s, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw(s, ctx);
}

// private generated void free_DrawCalls() :14
void Border__free_DrawCalls_fn(Border* __this)
{
    __this->free_DrawCalls();
}

// private float2 GetVertex(int indexWrap) :158
void Border__GetVertex_fn(Border* __this, int* indexWrap, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetVertex(*indexWrap);
}

// private generated void init_DrawCalls() :14
void Border__init_DrawCalls_fn(Border* __this)
{
    __this->init_DrawCalls();
}

// public Border New(float2[] vertices, float offset, float width) :21
void Border__New1_fn(uArray* vertices, float* offset, float* width, Border** __retval)
{
    *__retval = Border::New1(vertices, *offset, *width);
}

// public float4[] get_StrokeVertices() :71
void Border__get_StrokeVertices_fn(Border* __this, uArray** __retval)
{
    *__retval = __this->StrokeVertices();
}

// private int get_VertexCount() :156
void Border__get_VertexCount_fn(Border* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public Border(float2[] vertices, float offset, float width) [instance] :21
void Border::ctor_(uArray* vertices, float offset, float width)
{
    _vertices = vertices;
    _offset = offset;
    _width = width;
    init_DrawCalls();
}

// private void CalculateStrokeVertices() [instance] :78
void Border::CalculateStrokeVertices()
{
    if (_strokeVertices != NULL)
        return;

    if (uPtr(_vertices)->Length() < 2)
    {
        _strokeVertices = uArray::New(::TYPES[5/*float4[]*/], 0);
        _contour = ::g::Fuse::Drawing::Contour::New1(true, uArray::New(::TYPES[4/*float2[]*/], 0));
        return;
    }

    uArray* vertices = uArray::New(::TYPES[5/*float4[]*/], VertexCount() * 2);
    uArray* shrinkedContour = uArray::New(::TYPES[4/*float2[]*/], VertexCount());
    int v = 0;
    int s = 0;
    float dist = 0.0f;

    for (int i = 0; i < VertexCount(); i++)
    {
        ::g::Uno::Float2 last = GetVertex(i - 1);
        ::g::Uno::Float2 current = GetVertex(i);
        ::g::Uno::Float2 next = GetVertex(i + 1);
        float len = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(last, current));

        if (i > 0)
            dist = dist + len;

        if (len < 1e-05f)
            continue;

        ::g::Uno::Float2 lv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(current, last));
        ::g::Uno::Float2 rv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(next, current));
        ::g::Uno::Float2 lvn = ::g::Uno::Float2__New2(-lv.Y, lv.X);
        ::g::Uno::Float2 rvn = ::g::Uno::Float2__New2(-rv.Y, rv.X);
        ::g::Uno::Float2 bn0 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(rvn, lvn), 2.0f);
        ::g::Uno::Float2 bisectNormal = ((::g::Uno::Math::Abs1(bn0.X) + ::g::Uno::Math::Abs1(bn0.Y)) < 1e-05f) ? lvn : ::g::Uno::Vector::Normalize(bn0);
        ::g::Uno::Float4 outer;
        ::g::Uno::Float4 inner;
        float angle = ::g::Uno::Geometry::Collision2D::AngleBetween(lv, bisectNormal);

        if (((angle < 0.2f) || (angle > 2.94159269f)) || (len < 1.0f))
        {
            ::g::Uno::Float2 lvo = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _width + _offset));
            ::g::Uno::Float2 lvi = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _offset));
            outer = ::g::Uno::Float4__New6(lvo, 0.0f, dist);
            inner = ::g::Uno::Float4__New6(lvi, 1.0f, dist);
        }
        else
        {
            ::g::Uno::Float2 lvo1 = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _width + _offset));
            ::g::Uno::Float2 lvi1 = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _offset));
            outer = ::g::Uno::Float4__New6(::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvo1, lv, current, bisectNormal), 0.0f, dist);
            inner = ::g::Uno::Float4__New6(::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvi1, lv, current, bisectNormal), 1.0f, dist);
        }

        uPtr(vertices)->Item< ::g::Uno::Float4>(v++) = outer;
        vertices->Item< ::g::Uno::Float4>(v++) = inner;
        uPtr(shrinkedContour)->Item< ::g::Uno::Float2>(s++) = ::g::Uno::Float2__New2(inner.X, inner.Y);
    }

    _strokeVertices = vertices;
    _vbo = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer5(vertices), 0);
    _contour = ::g::Fuse::Drawing::Contour::New1(true, shrinkedContour);
}

// public Fuse.Drawing.Contour get_Contour() [instance] :60
::g::Fuse::Drawing::Contour* Border::Contour()
{
    CalculateStrokeVertices();
    return _contour;
}

// public void Dispose() [instance] :51
void Border::Dispose()
{
    free_DrawCalls();
    uPtr(_vbo)->Dispose();
}

// public void Draw(Fuse.Drawing.Brush s, Fuse.Drawing.RendererContext ctx) [instance] :28
void Border::Draw(::g::Fuse::Drawing::Brush* s, ::g::Fuse::Drawing::RendererContext* ctx)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;

    if (uPtr(_vertices)->Length() < 2)
        return;

    if (uPtr(StrokeVertices())->Length() < 4)
        return;

    if (uIs(s, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
    {
        _draw_6d49a1c0.BlendEnabled(true);
        _draw_6d49a1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6d49a1c0.PrimitiveType(4);
        _draw_6d49a1c0.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6d49a1c0.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6d49a1c0.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6d49a1c0.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_6d49a1c0.Use();
        _draw_6d49a1c0.Attrib1(0, 4, _vbo, 16, 0);
        _draw_6d49a1c0.Uniform12(1, ctx->Transform());
        _draw_6d49a1c0.Uniform10(2, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color());
        _draw_6d49a1c0.Uniform(3, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(s, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity());
        _draw_6d49a1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
    else if (uIs(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Graphics::Texture2D* Texture_6ce6a1c0_8_6_1 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->GetTexture();
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_6ce6a1c0_8_5_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(NULL, uPtr(ctx)->CanvasSize());
        _draw_6ce6a1c0.BlendEnabled(true);
        _draw_6ce6a1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6ce6a1c0.PrimitiveType(4);
        _draw_6ce6a1c0.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6ce6a1c0.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6ce6a1c0.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6ce6a1c0.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_6ce6a1c0.Const(0, Texture_6ce6a1c0_8_6_1 == NULL);
        _draw_6ce6a1c0.Use();
        _draw_6ce6a1c0.Attrib1(1, 4, _vbo, 16, 0);
        _draw_6ce6a1c0.Uniform12(2, ctx->Transform());
        _draw_6ce6a1c0.Uniform2(3, ctx->CanvasSize());
        _draw_6ce6a1c0.Uniform2(4, DP_6ce6a1c0_8_5_4.Origin);
        _draw_6ce6a1c0.Uniform2(5, DP_6ce6a1c0_8_5_4.Size);
        _draw_6ce6a1c0.Uniform2(6, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_6ce6a1c0_8_5_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_6ce6a1c0_8_5_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
        _draw_6ce6a1c0.Uniform2(7, (ind3 = DP_6ce6a1c0_8_5_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
        _draw_6ce6a1c0.Uniform10(8, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_6ce6a1c0.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(s, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_6ce6a1c0.Sampler2(10, Texture_6ce6a1c0_8_6_1);
        _draw_6ce6a1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
    else if (uIs(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float2 angleSlope_6d07a1c0_8_18_3 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        float angleLen_6d07a1c0_8_17_4 = ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        _draw_6d07a1c0.BlendEnabled(true);
        _draw_6d07a1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6d07a1c0.PrimitiveType(4);
        _draw_6d07a1c0.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_6d07a1c0.Use();
        _draw_6d07a1c0.Attrib1(0, 4, _vbo, 16, 0);
        _draw_6d07a1c0.Uniform12(1, ctx->Transform());
        _draw_6d07a1c0.Uniform2(2, ctx->CanvasSize());
        _draw_6d07a1c0.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(ctx->CanvasSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_6d07a1c0_8_18_3, angleLen_6d07a1c0_8_17_4), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), ctx->CanvasSize()));
        _draw_6d07a1c0.Uniform2(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_6d07a1c0.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_6d07a1c0.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_6d07a1c0_8_18_3 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_6d07a1c0.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_6d07a1c0_8_17_4 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_6d07a1c0.Sampler2(8, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(s, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
        _draw_6d07a1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
    else if (uIs(s, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]))
    {
        _draw_6daca1c0.BlendEnabled(true);
        _draw_6daca1c0.CullFace(uPtr(ctx)->CullFace());
        _draw_6daca1c0.PrimitiveType(4);
        _draw_6daca1c0.BlendSrcRgb(Draw_BlendSrcRgb_6daca1c0_6_4_7);
        _draw_6daca1c0.BlendSrcAlpha(Draw_BlendSrcAlpha_6daca1c0_6_6_8);
        _draw_6daca1c0.BlendDstRgb(Draw_BlendDstRgb_6daca1c0_6_5_9);
        _draw_6daca1c0.BlendDstAlpha(Draw_BlendDstAlpha_6daca1c0_6_7_10);
        _draw_6daca1c0.Use();
        _draw_6daca1c0.Attrib1(0, 4, _vbo, 16, 0);
        _draw_6daca1c0.Uniform12(1, ctx->Transform());
        _draw_6daca1c0.Uniform10(2, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(s, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]))->Color());
        _draw_6daca1c0.DrawArrays(uPtr(StrokeVertices())->Length());
    }
}

// private generated void free_DrawCalls() [instance] :14
void Border::free_DrawCalls()
{
}

// private float2 GetVertex(int indexWrap) [instance] :158
::g::Uno::Float2 Border::GetVertex(int indexWrap)
{
    while (indexWrap < 0)
        indexWrap = indexWrap + uPtr(_vertices)->Length();

    while (indexWrap >= uPtr(_vertices)->Length())
        indexWrap = indexWrap - uPtr(_vertices)->Length();

    return uPtr(_vertices)->Item< ::g::Uno::Float2>(indexWrap);
}

// private generated void init_DrawCalls() [instance] :14
void Border::init_DrawCalls()
{
    Draw_BlendSrcRgb_6daca1c0_6_4_7 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_6daca1c0_6_6_8 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_6daca1c0_6_5_9 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_6daca1c0_6_7_10 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_6d49a1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_Polygons_bundle::Border102f669d());
    _draw_6ce6a1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_Polygons_bundle::Border102c669d());
    _draw_6d07a1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_Polygons_bundle::Border102d669d());
    _draw_6daca1c0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_Polygons_bundle::Border1032669d());
}

// public float4[] get_StrokeVertices() [instance] :71
uArray* Border::StrokeVertices()
{
    CalculateStrokeVertices();
    return _strokeVertices;
}

// private int get_VertexCount() [instance] :156
int Border::VertexCount()
{
    return uPtr(_vertices)->Length() + 1;
}

// public Border New(float2[] vertices, float offset, float width) [static] :21
Border* Border::New1(uArray* vertices, float offset, float width)
{
    Border* obj4 = (Border*)uNew(Border_typeof());
    obj4->ctor_(vertices, offset, width);
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(85)
// ---------------------------------------------------------

// public abstract class Brush :85
// {
Brush_type* Brush_typeof()
{
    static uSStrong<Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Brush);
    options.TypeSize = sizeof(Brush_type);
    type = (Brush_type*)uClassType::New("Fuse.Drawing.Brush", options);
    type->fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent_fn;
    type->fp_OnPinned = Brush__OnPinned_fn;
    type->fp_OnPrepare = Brush__OnPrepare_fn;
    type->fp_OnUnpinned = Brush__OnUnpinned_fn;
    ::STRINGS[1] = uString::Const("Brush is not pinned, preparation invalid");
    ::STRINGS[2] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Drawing\\0.19.3\\$.uno");
    ::STRINGS[3] = uString::Const("Prepare");
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Brush, _pinCount), 0);
    return type;
}

// internal Brush() :112
void Brush__ctor__fn(Brush* __this)
{
    __this->ctor_();
}

// public virtual bool get_IsCompletelyTransparent() :90
void Brush__get_IsCompletelyTransparent_fn(Brush* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public bool get_IsPinned() :129
void Brush__get_IsPinned_fn(Brush* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected virtual void OnPinned() :140
void Brush__OnPinned_fn(Brush* __this)
{
}

// protected virtual void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :138
void Brush__OnPrepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
}

// protected virtual void OnUnpinned() :141
void Brush__OnUnpinned_fn(Brush* __this)
{
}

// public void Pin() :115
void Brush__Pin_fn(Brush* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :131
void Brush__Prepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void Unpin() :122
void Brush__Unpin_fn(Brush* __this)
{
    __this->Unpin();
}

// internal Brush() [instance] :112
void Brush::ctor_()
{
}

// public bool get_IsPinned() [instance] :129
bool Brush::IsPinned()
{
    return _pinCount > 0;
}

// public void Pin() [instance] :115
void Brush::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :131
void Brush::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    if (!IsPinned())
        ::g::Fuse::Diagnostics::Error(::STRINGS[1/*"Brush is no...*/], this, ::STRINGS[2/*"C:\\Program...*/], 134, ::STRINGS[3/*"Prepare"*/]);

    OnPrepare(dc, canvasSize);
}

// public void Unpin() [instance] :122
void Brush::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno(83)
// ------------------------------------------------------------------

// internal sealed class ButtCap :83
// {
::g::Fuse::Drawing::LineCapImpl_type* ButtCap_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::LineCapImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ButtCap);
    options.TypeSize = sizeof(::g::Fuse::Drawing::LineCapImpl_type);
    type = (::g::Fuse::Drawing::LineCapImpl_type*)uClassType::New("Fuse.Drawing.ButtCap", options);
    type->SetBase(::g::Fuse::Drawing::LineCapImpl_typeof());
    type->fp_ctor_ = (void*)ButtCap__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::Drawing::LineCapImpl*, ::g::Uno::Float2*, ::g::Uno::Float2*, uObject**))ButtCap__Create_fn;
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[20] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    return type;
}

// public generated ButtCap() :83
void ButtCap__ctor_1_fn(ButtCap* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Collections.IEnumerable<float2> Create(float2 from, float2 to) :85
void ButtCap__Create_fn(ButtCap* __this, ::g::Uno::Float2* from, ::g::Uno::Float2* to, uObject** __retval)
{
    return *__retval = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[20/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], uArray::New(::TYPES[4/*float2[]*/], 0))), void();
}

// public generated ButtCap New() :83
void ButtCap__New1_fn(ButtCap** __retval)
{
    *__retval = ButtCap::New1();
}

// public generated ButtCap() [instance] :83
void ButtCap::ctor_1()
{
    ctor_();
}

// public generated ButtCap New() [static] :83
ButtCap* ButtCap::New1()
{
    ButtCap* obj1 = (ButtCap*)uNew(ButtCap_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(8)
// -----------------------------------------------------------------------------

// internal sealed class Cache<T> :8
// {
uType* Cache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Cache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Cache`1", options);
    ::TYPES[21] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[22] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[23] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[24] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[21/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(1, type->T(0)),
        ::TYPES[22/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0)),
        ::TYPES[23/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->T(0)),
        type->T(0)->Array());
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Fuse::Drawing::Cache, _cache), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Cache, _source), 0);
    return type;
}

// public Cache(Uno.Collections.IEnumerable<T> source) :18
void Cache__ctor_1_fn(Cache* __this, uObject* source)
{
    __this->ctor_1(source);
}

// private void Evaluate() :50
void Cache__Evaluate_fn(Cache* __this)
{
    __this->Evaluate();
}

// public T get_Item(int index) :43
void Cache__get_Item_fn(Cache* __this, int* index, uTRef __retval)
{
    int index_ = *index;
    __this->Evaluate();
    return __retval.Store(uPtr(__this->_cache)->TItem(index_)), void();
}

// public Uno.Collections.IEnumerable<T> get_Items() :25
void Cache__get_Items_fn(Cache* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public int get_Length() :34
void Cache__get_Length_fn(Cache* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public Cache New(Uno.Collections.IEnumerable<T> source) :18
void Cache__New2_fn(uType* __type, uObject* source, Cache** __retval)
{
    *__retval = Cache::New2(__type, source);
}

// public Cache(Uno.Collections.IEnumerable<T> source) [instance] :18
void Cache::ctor_1(uObject* source)
{
    _source = source;
}

// private void Evaluate() [instance] :50
void Cache::Evaluate()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.ToArray<T>*/),
        __type->T(0),
    };

    if (_cache == NULL)
    {
        _cache = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[0], _source));
        _source = NULL;
    }
}

// public Uno.Collections.IEnumerable<T> get_Items() [instance] :25
uObject* Cache::Items()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
        __type->T(0),
        __type->Precalced(2/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    Evaluate();
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[2], _cache));
}

// public int get_Length() [instance] :34
int Cache::Length()
{
    uType* __types[] = {
        __type->Precalced(3/*T[]*/),
    };
    Evaluate();
    return uPtr(_cache)->Length();
}

// public Cache New(Uno.Collections.IEnumerable<T> source) [static] :18
Cache* Cache::New2(uType* __type, uObject* source)
{
    Cache* obj2 = (Cache*)uNew(__type);
    obj2->ctor_1(source);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1086)
// -----------------------------------------------------------------

// internal sealed class ClosePath :1086
// {
::g::Fuse::Drawing::PathGeometry_type* ClosePath_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClosePath);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.ClosePath", options);
    type->SetBase(::g::Fuse::Drawing::ContourTerminator_typeof());
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))ClosePath__Serialize_fn;
    ::STRINGS[4] = uString::Const("Z");
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ClosePath, _lastPosition), 0);
    return type;
}

// public ClosePath(Fuse.Drawing.PathGeometry prev, float2 lastPosition) :1092
void ClosePath__ctor_3_fn(ClosePath* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition)
{
    __this->ctor_3(prev, *lastPosition);
}

// public ClosePath New(Fuse.Drawing.PathGeometry prev, float2 lastPosition) :1092
void ClosePath__New2_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ClosePath** __retval)
{
    *__retval = ClosePath::New2(prev, *lastPosition);
}

// protected internal override sealed string Serialize() :1099
void ClosePath__Serialize_fn(ClosePath* __this, uString** __retval)
{
    return *__retval = ::STRINGS[4/*"Z"*/], void();
}

// public ClosePath(Fuse.Drawing.PathGeometry prev, float2 lastPosition) [instance] :1092
void ClosePath::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition)
{
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ContourTerminatorCtor(prev, uPtr(prev)->FindStartOfLastContour());
    _lastPosition = lastPosition;
}

// public ClosePath New(Fuse.Drawing.PathGeometry prev, float2 lastPosition) [static] :1092
ClosePath* ClosePath::New2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition)
{
    ClosePath* obj1 = (ClosePath*)uNew(ClosePath_typeof());
    obj1->ctor_3(prev, lastPosition);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno(9)
// -----------------------------------------------------------------

// public sealed class Contour :9
// {
uType* Contour_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Contour);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Contour", options);
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[20] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[25] = ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Contour, _count), 0,
        ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Drawing::Contour, _vertices), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Contour, _IsClosed), 0);
    return type;
}

// public Contour(bool isClosed, float2[] vertices) :45
void Contour__ctor__fn(Contour* __this, bool* isClosed, uArray* vertices)
{
    __this->ctor_(*isClosed, vertices);
}

// public Contour(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) :49
void Contour__ctor_1_fn(Contour* __this, bool* isClosed, uObject* vertices)
{
    __this->ctor_1(*isClosed, vertices);
}

// public generated bool get_IsClosed() :43
void Contour__get_IsClosed_fn(Contour* __this, bool* __retval)
{
    *__retval = __this->IsClosed();
}

// private generated void set_IsClosed(bool value) :43
void Contour__set_IsClosed_fn(Contour* __this, bool* value)
{
    __this->IsClosed(*value);
}

// public float2 get_Item(int vertexIndex) :26
void Contour__get_Item_fn(Contour* __this, int* vertexIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Item(*vertexIndex);
}

// public Contour New(bool isClosed, float2[] vertices) :45
void Contour__New1_fn(bool* isClosed, uArray* vertices, Contour** __retval)
{
    *__retval = Contour::New1(*isClosed, vertices);
}

// public Contour New(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) :49
void Contour__New2_fn(bool* isClosed, uObject* vertices, Contour** __retval)
{
    *__retval = Contour::New2(*isClosed, vertices);
}

// public int get_VertexCount() :16
void Contour__get_VertexCount_fn(Contour* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public Uno.Collections.IEnumerable<float2> get_Vertices() :21
void Contour__get_Vertices_fn(Contour* __this, uObject** __retval)
{
    *__retval = __this->Vertices();
}

// public Contour(bool isClosed, float2[] vertices) [instance] :45
void Contour::ctor_(bool isClosed, uArray* vertices)
{
    ctor_1(isClosed, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[20/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], vertices)));
}

// public Contour(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) [instance] :49
void Contour::ctor_1(bool isClosed, uObject* vertices)
{
    ::g::Uno::Float2 ret3;
    ::g::Uno::Float2 ret4;
    _vertices = ((::g::Fuse::Drawing::Cache*)::g::Fuse::Drawing::Cache::New2(::TYPES[25/*Fuse.Drawing.Cache<float2>*/], ::g::Fuse::Drawing::NonConsecutiveExtension::NonConsecutive(vertices)));
    IsClosed(isClosed);
    _count = ((isClosed && ::g::Uno::Float2::op_Equality((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(0), &ret3), ret3), (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 1), &ret4), ret4))) ? uPtr(_vertices)->Length() - 1 : uPtr(_vertices)->Length());
}

// public generated bool get_IsClosed() [instance] :43
bool Contour::IsClosed()
{
    return _IsClosed;
}

// private generated void set_IsClosed(bool value) [instance] :43
void Contour::IsClosed(bool value)
{
    _IsClosed = value;
}

// public float2 get_Item(int vertexIndex) [instance] :26
::g::Uno::Float2 Contour::Item(int vertexIndex)
{
    ::g::Uno::Float2 ret5;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;
    ::g::Uno::Float2 ret8;
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;

    if (IsClosed())
    {
        while (vertexIndex < 0)
            vertexIndex = vertexIndex + VertexCount();

        while (vertexIndex >= VertexCount())
            vertexIndex = vertexIndex - VertexCount();

        return (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(vertexIndex), &ret5), ret5);
    }
    else
    {
        if (vertexIndex < 0)
            return ::g::Uno::Float2__op_Addition2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(0), &ret6), ret6), ::g::Uno::Float2__op_Subtraction2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(0), &ret7), ret7), (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(1), &ret8), ret8)));

        if (vertexIndex >= uPtr(_vertices)->Length())
            return ::g::Uno::Float2__op_Addition2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 1), &ret9), ret9), ::g::Uno::Float2__op_Subtraction2((::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 1), &ret10), ret10), (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(uPtr(_vertices)->Length() - 2), &ret11), ret11)));

        return (::g::Fuse::Drawing::Cache__get_Item_fn(uPtr(_vertices), uCRef<int>(vertexIndex), &ret12), ret12);
    }
}

// public int get_VertexCount() [instance] :16
int Contour::VertexCount()
{
    return _count;
}

// public Uno.Collections.IEnumerable<float2> get_Vertices() [instance] :21
uObject* Contour::Vertices()
{
    return (uObject*)uPtr(_vertices)->Items();
}

// public Contour New(bool isClosed, float2[] vertices) [static] :45
Contour* Contour::New1(bool isClosed, uArray* vertices)
{
    Contour* obj1 = (Contour*)uNew(Contour_typeof());
    obj1->ctor_(isClosed, vertices);
    return obj1;
}

// public Contour New(bool isClosed, Uno.Collections.IEnumerable<float2> vertices) [static] :49
Contour* Contour::New2(bool isClosed, uObject* vertices)
{
    Contour* obj2 = (Contour*)uNew(Contour_typeof());
    obj2->ctor_1(isClosed, vertices);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(13)
// ---------------------------------------------------------------

// internal sealed class ContourEnumerable :13
// {
ContourEnumerable_type* ContourEnumerable_typeof()
{
    static uSStrong<ContourEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ContourEnumerable);
    options.TypeSize = sizeof(ContourEnumerable_type);
    type = (ContourEnumerable_type*)uClassType::New("Fuse.Drawing.ContourEnumerable", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ContourEnumerable__GetEnumerator_fn;
    ::TYPES[26] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), offsetof(ContourEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerable, _head), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerable, _scale), 0);
    return type;
}

// public ContourEnumerable(Fuse.Drawing.PathGeometry head, float2 scale) :18
void ContourEnumerable__ctor__fn(ContourEnumerable* __this, ::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale)
{
    __this->ctor_(head, *scale);
}

// public Uno.Collections.IEnumerator<Fuse.Drawing.Contour> GetEnumerator() :24
void ContourEnumerable__GetEnumerator_fn(ContourEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public ContourEnumerable New(Fuse.Drawing.PathGeometry head, float2 scale) :18
void ContourEnumerable__New1_fn(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale, ContourEnumerable** __retval)
{
    *__retval = ContourEnumerable::New1(head, *scale);
}

// public ContourEnumerable(Fuse.Drawing.PathGeometry head, float2 scale) [instance] :18
void ContourEnumerable::ctor_(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    _head = head;
    _scale = scale;
}

// public Uno.Collections.IEnumerator<Fuse.Drawing.Contour> GetEnumerator() [instance] :24
uObject* ContourEnumerable::GetEnumerator()
{
    return (uObject*)::g::Fuse::Drawing::ContourEnumerator::New1(_head, _scale);
}

// public ContourEnumerable New(Fuse.Drawing.PathGeometry head, float2 scale) [static] :18
ContourEnumerable* ContourEnumerable::New1(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    ContourEnumerable* obj1 = (ContourEnumerable*)uNew(ContourEnumerable_typeof());
    obj1->ctor_(head, scale);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(30)
// ---------------------------------------------------------------

// internal sealed class ContourEnumerator :30
// {
ContourEnumerator_type* ContourEnumerator_typeof()
{
    static uSStrong<ContourEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ContourEnumerator);
    options.TypeSize = sizeof(ContourEnumerator_type);
    type = (ContourEnumerator_type*)uClassType::New("Fuse.Drawing.ContourEnumerator", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))ContourEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ContourEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))ContourEnumerator__MoveNext_fn;
    ::TYPES[27] = ::g::Fuse::Drawing::ClosePath_typeof();
    ::TYPES[28] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::PathGeometry_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[31] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), offsetof(ContourEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ContourEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(ContourEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Drawing::Contour_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerator, _current), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerator, _currentHead), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ContourEnumerator, _scale), 0);
    return type;
}

// public ContourEnumerator(Fuse.Drawing.PathGeometry head, float2 scale) :36
void ContourEnumerator__ctor__fn(ContourEnumerator* __this, ::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale)
{
    __this->ctor_(head, *scale);
}

// public Fuse.Drawing.Contour get_Current() :69
void ContourEnumerator__get_Current_fn(ContourEnumerator* __this, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :74
void ContourEnumerator__Dispose_fn(ContourEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :42
void ContourEnumerator__MoveNext_fn(ContourEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public ContourEnumerator New(Fuse.Drawing.PathGeometry head, float2 scale) :36
void ContourEnumerator__New1_fn(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale, ContourEnumerator** __retval)
{
    *__retval = ContourEnumerator::New1(head, *scale);
}

// public ContourEnumerator(Fuse.Drawing.PathGeometry head, float2 scale) [instance] :36
void ContourEnumerator::ctor_(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    _currentHead = head;
    _scale = scale;
}

// public Fuse.Drawing.Contour get_Current() [instance] :69
::g::Fuse::Drawing::Contour* ContourEnumerator::Current()
{
    return _current;
}

// public void Dispose() [instance] :74
void ContourEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :42
bool ContourEnumerator::MoveNext()
{
    ::g::Fuse::Drawing::PathGeometry* ret3;
    ::g::Uno::Float2 ret4;

    if (_currentHead == NULL)
        return false;

    bool isClosed = uIs(_currentHead, ::TYPES[27/*Fuse.Drawing.ClosePath*/]);
    ::g::Uno::Collections::List* revPath = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[28/*Uno.Collections.List<Fuse.Drawing.PathGeometry>*/]);

    do
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(revPath), _currentHead);
        _currentHead = uPtr(_currentHead)->RemoveLast();
    }
    while ((_currentHead != NULL) && !uPtr(_currentHead)->EndsContour());

    ::g::Uno::Collections::List* vertices = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<float2>*/]);

    for (int i = revPath->Count() - 1; i >= 0; --i)
    {
        uObject* headVertices = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(revPath), uCRef<int>(i), &ret3), ret3))->EvaluateLast();

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(headVertices), ::TYPES[19/*Uno.Collections.IEnumerable<float2>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Uno::Float2 v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[31/*Uno.Collections.IEnumerator<float2>*/]), &ret4), ret4);
            ::g::Uno::Collections::List__Add_fn(uPtr(vertices), uCRef(::g::Uno::Float2__op_Multiply2(v, _scale)));
        }
    }

    _current = ::g::Fuse::Drawing::Contour::New2(isClosed, (uObject*)vertices);
    return true;
}

// public ContourEnumerator New(Fuse.Drawing.PathGeometry head, float2 scale) [static] :36
ContourEnumerator* ContourEnumerator::New1(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale)
{
    ContourEnumerator* obj2 = (ContourEnumerator*)uNew(ContourEnumerator_typeof());
    obj2->ctor_(head, scale);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1026)
// -----------------------------------------------------------------

// internal abstract class ContourTerminator :1026
// {
::g::Fuse::Drawing::PathGeometry_type* ContourTerminator_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ContourTerminator);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.ContourTerminator", options);
    type->SetBase(::g::Fuse::Drawing::PathGeometry_typeof());
    type->fp_get_EndsContour = (void(*)(::g::Fuse::Drawing::PathGeometry*, bool*))ContourTerminator__get_EndsContour_fn;
    type->fp_EvaluateLast = (void(*)(::g::Fuse::Drawing::PathGeometry*, uObject**))ContourTerminator__EvaluateLast_fn;
    type->fp_FindStartOfLastContour = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Float2*))ContourTerminator__FindStartOfLastContour_fn;
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[32] = ::g::Uno::Collections::EmptyEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    type->SetFields(4);
    return type;
}

// protected ContourTerminator() :1035
void ContourTerminator__ctor_1_fn(ContourTerminator* __this)
{
    __this->ctor_1();
}

// protected void ContourTerminatorCtor(Fuse.Drawing.PathGeometry prev, float2 position) :1037
void ContourTerminator__ContourTerminatorCtor_fn(ContourTerminator* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position)
{
    __this->ContourTerminatorCtor(prev, *position);
}

// internal override sealed bool get_EndsContour() :1028
void ContourTerminator__get_EndsContour_fn(ContourTerminator* __this, bool* __retval)
{
    return *__retval = true, void();
}

// internal override sealed Uno.Collections.IEnumerable<float2> EvaluateLast() :1047
void ContourTerminator__EvaluateLast_fn(ContourTerminator* __this, uObject** __retval)
{
    return *__retval = (uObject*)((::g::Uno::Collections::EmptyEnumerable*)::g::Uno::Collections::EmptyEnumerable::New1(::TYPES[32/*Uno.Collections.EmptyEnumerable<float2>*/])), void();
}

// internal override sealed float2 FindStartOfLastContour() :1042
void ContourTerminator__FindStartOfLastContour_fn(ContourTerminator* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = __this->EndPosition(), void();
}

// protected ContourTerminator() [instance] :1035
void ContourTerminator::ctor_1()
{
    ctor_();
}

// protected void ContourTerminatorCtor(Fuse.Drawing.PathGeometry prev, float2 position) [instance] :1037
void ContourTerminator::ContourTerminatorCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position)
{
    PathGeometryCtor(prev, position);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1103)
// -----------------------------------------------------------------

// internal class CurveTo :1103
// {
::g::Fuse::Drawing::PathGeometry_type* CurveTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(CurveTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.CurveTo", options);
    type->SetBase(::g::Fuse::Drawing::PathGeometry_typeof());
    type->fp_get_EndTangent = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Float2*))CurveTo__get_EndTangent_fn;
    type->fp_EvaluateLast = (void(*)(::g::Fuse::Drawing::PathGeometry*, uObject**))CurveTo__EvaluateLast_fn;
    type->fp_get_HasLastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, bool*))CurveTo__get_HasLastBounds_fn;
    type->fp_get_LastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Rect*))CurveTo__get_LastBounds_fn;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))CurveTo__Serialize_fn;
    ::STRINGS[5] = uString::Const("C ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[7] = uString::Const("C");
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::CurveTo, _controlPointEnd), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::CurveTo, _controlPointStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::CurveTo, _lastPosition), 0);
    return type;
}

// protected CurveTo() :1121
void CurveTo__ctor_1_fn(CurveTo* __this)
{
    __this->ctor_1();
}

// public CurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) :1111
void CurveTo__ctor_2_fn(CurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position)
{
    __this->ctor_2(prev, *lastPosition, *controlPointStart, *controlPointEnd, *position);
}

// protected internal float2 get_ControlPointEnd() :1158
void CurveTo__get_ControlPointEnd_fn(CurveTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ControlPointEnd();
}

// protected void CurveToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) :1123
void CurveTo__CurveToCtor_fn(CurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position)
{
    __this->CurveToCtor(prev, *lastPosition, *controlPointStart, *controlPointEnd, *position);
}

// public override sealed float2 get_EndTangent() :1139
void CurveTo__get_EndTangent_fn(CurveTo* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__op_Subtraction2(__this->EndPosition(), __this->ControlPointEnd()), void();
}

// internal override sealed Uno.Collections.IEnumerable<float2> EvaluateLast() :1131
void CurveTo__EvaluateLast_fn(CurveTo* __this, uObject** __retval)
{
    float maxError = 0.5f;
    return *__retval = ::g::Uno::Geometry::CubicBezier::Subdivide(__this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition(), maxError), void();
}

// protected internal override sealed bool get_HasLastBounds() :1144
void CurveTo__get_HasLastBounds_fn(CurveTo* __this, bool* __retval)
{
    return *__retval = true, void();
}

// protected internal override sealed Uno.Rect get_LastBounds() :1149
void CurveTo__get_LastBounds_fn(CurveTo* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Fuse::Drawing::BezierOp::GetRect(__this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition()), void();
}

// public CurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) :1111
void CurveTo__New3_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, CurveTo** __retval)
{
    *__retval = CurveTo::New3(prev, *lastPosition, *controlPointStart, *controlPointEnd, *position);
}

// protected internal override string Serialize() :1161
void CurveTo__Serialize_fn(CurveTo* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"C "*/], uBox(::TYPES[3/*float*/], __this->_controlPointStart.X)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->_controlPointStart.Y)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->_controlPointEnd.X)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->_controlPointEnd.Y)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->EndPosition().Y)), void();
}

// protected CurveTo() [instance] :1121
void CurveTo::ctor_1()
{
    ctor_();
}

// public CurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) [instance] :1111
void CurveTo::ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    ctor_();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat2(controlPointStart);
    ::g::Fuse::Drawing::Util::ValidateFloat2(controlPointEnd);
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    CurveToCtor(prev, lastPosition, controlPointStart, controlPointEnd, position);
}

// protected internal float2 get_ControlPointEnd() [instance] :1158
::g::Uno::Float2 CurveTo::ControlPointEnd()
{
    return _controlPointEnd;
}

// protected void CurveToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) [instance] :1123
void CurveTo::CurveToCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    PathGeometryCtor(prev, position);
    _lastPosition = lastPosition;
    _controlPointStart = controlPointStart;
    _controlPointEnd = controlPointEnd;
}

// public CurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 controlPointStart, float2 controlPointEnd, float2 position) [static] :1111
CurveTo* CurveTo::New3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    CurveTo* obj1 = (CurveTo*)uNew(CurveTo_typeof());
    obj1->ctor_2(prev, lastPosition, controlPointStart, controlPointEnd, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Drawing\$.uno(60)
// ------------------------------------------------------------------

// public struct ImageFill.DrawParams :60
// {
uStructType* ImageFill__DrawParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(ImageFill__DrawParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.ImageFill.DrawParams", options);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Size), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, UVClip), 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(146)
// ----------------------------------------------------------

// public abstract class DynamicBrush :146
// {
::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DynamicBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.DynamicBrush", options);
    type->SetBase(::g::Fuse::Drawing::Brush_typeof());
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DynamicBrush__get_IsCompletelyTransparent_fn;
    ::TYPES[33] = ::g::Uno::Delegate_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    type->SetFields(1,
        ::g::Fuse::Drawing::BlendMode_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, _blendMode), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, _opacity), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, ShadingChanged1), 0);
    return type;
}

// protected generated DynamicBrush() :146
void DynamicBrush__ctor_1_fn(DynamicBrush* __this)
{
    __this->ctor_1();
}

// public Fuse.Drawing.BlendMode get_BlendMode() :175
void DynamicBrush__get_BlendMode_fn(DynamicBrush* __this, int* __retval)
{
    *__retval = __this->BlendMode();
}

// public void set_BlendMode(Fuse.Drawing.BlendMode value) :176
void DynamicBrush__set_BlendMode_fn(DynamicBrush* __this, int* value)
{
    __this->BlendMode(*value);
}

// public override bool get_IsCompletelyTransparent() :156
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval)
{
    return *__retval = __this->Opacity() == 0.0f, void();
}

// protected void OnShadingChanged() :151
void DynamicBrush__OnShadingChanged_fn(DynamicBrush* __this)
{
    __this->OnShadingChanged();
}

// public float get_Opacity() :162
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :163
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value)
{
    __this->Opacity(*value);
}

// public generated void add_ShadingChanged(Uno.Action value) :149
void DynamicBrush__add_ShadingChanged_fn(DynamicBrush* __this, uDelegate* value)
{
    __this->add_ShadingChanged(value);
}

// public generated void remove_ShadingChanged(Uno.Action value) :149
void DynamicBrush__remove_ShadingChanged_fn(DynamicBrush* __this, uDelegate* value)
{
    __this->remove_ShadingChanged(value);
}

// protected generated DynamicBrush() [instance] :146
void DynamicBrush::ctor_1()
{
    _opacity = 1.0f;
    ctor_();
}

// public Fuse.Drawing.BlendMode get_BlendMode() [instance] :175
int DynamicBrush::BlendMode()
{
    return _blendMode;
}

// public void set_BlendMode(Fuse.Drawing.BlendMode value) [instance] :176
void DynamicBrush::BlendMode(int value)
{
    if (value == _blendMode)
        return;

    _blendMode = value;
    OnShadingChanged();
}

// protected void OnShadingChanged() [instance] :151
void DynamicBrush::OnShadingChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ShadingChanged1, NULL))
        uPtr(ShadingChanged1)->InvokeVoid();
}

// public float get_Opacity() [instance] :162
float DynamicBrush::Opacity()
{
    return _opacity;
}

// public void set_Opacity(float value) [instance] :163
void DynamicBrush::Opacity(float value)
{
    if (value == _opacity)
        return;

    _opacity = value;
    OnShadingChanged();
}

// public generated void add_ShadingChanged(Uno.Action value) [instance] :149
void DynamicBrush::add_ShadingChanged(uDelegate* value)
{
    ShadingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ShadingChanged1, value), ::TYPES[34/*Uno.Action*/]);
}

// public generated void remove_ShadingChanged(Uno.Action value) [instance] :149
void DynamicBrush::remove_ShadingChanged(uDelegate* value)
{
    ShadingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ShadingChanged1, value), ::TYPES[34/*Uno.Action*/]);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(92)
// ---------------------------------------------------------------

// internal static class EllipseFactory :92
// {
uClassType* EllipseFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.EllipseFactory", options);
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    return type;
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, float2 Radius) :94
void EllipseFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = EllipseFactory::AppendTo(self, *Radius);
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, float2 Radius) [static] :94
::g::Fuse::Drawing::PathGeometry* EllipseFactory::AppendTo(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Radius)
{
    ::g::Uno::Float2 o = uPtr(self)->EndPosition();
    ::g::Uno::Float2 n = ::g::Uno::Float2__New2(0.0f, -Radius.Y);
    ::g::Uno::Float2 s = ::g::Uno::Float2__New2(0.0f, Radius.Y);
    ::g::Uno::Float2 w = ::g::Uno::Float2__New2(-Radius.X, 0.0f);
    ::g::Uno::Float2 e = ::g::Uno::Float2__New2(Radius.X, 0.0f);
    float p = 0.55f;
    return uPtr(uPtr(uPtr(uPtr(uPtr(uPtr(self->MoveTo1(::g::Uno::Float2__op_Addition2(o, w)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, w), ::g::Uno::Float2__op_Multiply1(s, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, s), ::g::Uno::Float2__op_Multiply1(w, p)), ::g::Uno::Float2__op_Addition2(o, s)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, s), ::g::Uno::Float2__op_Multiply1(e, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, e), ::g::Uno::Float2__op_Multiply1(s, p)), ::g::Uno::Float2__op_Addition2(o, e)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, e), ::g::Uno::Float2__op_Multiply1(n, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, n), ::g::Uno::Float2__op_Multiply1(e, p)), ::g::Uno::Float2__op_Addition2(o, n)))->CurveTo(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, n), ::g::Uno::Float2__op_Multiply1(w, p)), ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(o, w), ::g::Uno::Float2__op_Multiply1(n, p)), ::g::Uno::Float2__op_Addition2(o, w)))->ClosePath())->MoveTo1(o);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno(13)
// -----------------------------------------------------------------

// public sealed class GradientStop :13
// {
uType* GradientStop_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GradientStop);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.GradientStop", options);
    ::TYPES[33] = ::g::Uno::Delegate_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _offset), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, Changed1), 0);
    return type;
}

// internal generated void add_Changed(Uno.Action value) :15
void GradientStop__add_Changed_fn(GradientStop* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// internal generated void remove_Changed(Uno.Action value) :15
void GradientStop__remove_Changed_fn(GradientStop* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public float4 get_Color() :40
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :41
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_Offset() :25
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :26
void GradientStop__set_Offset_fn(GradientStop* __this, float* value)
{
    __this->Offset(*value);
}

// private void OnChanged() :16
void GradientStop__OnChanged_fn(GradientStop* __this)
{
    __this->OnChanged();
}

// internal generated void add_Changed(Uno.Action value) [instance] :15
void GradientStop::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[34/*Uno.Action*/]);
}

// internal generated void remove_Changed(Uno.Action value) [instance] :15
void GradientStop::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[34/*Uno.Action*/]);
}

// public float4 get_Color() [instance] :40
::g::Uno::Float4 GradientStop::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :41
void GradientStop::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4::op_Inequality(_color, value))
    {
        _color = value;
        OnChanged();
    }
}

// public float get_Offset() [instance] :25
float GradientStop::Offset()
{
    return _offset;
}

// public void set_Offset(float value) [instance] :26
void GradientStop::Offset(float value)
{
    if (_offset != value)
    {
        _offset = value;
        OnChanged();
    }
}

// private void OnChanged() [instance] :16
void GradientStop::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1231)
// -----------------------------------------------------------------

// internal sealed class HorizontalLineTo :1231
// {
::g::Fuse::Drawing::PathGeometry_type* HorizontalLineTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HorizontalLineTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.HorizontalLineTo", options);
    type->SetBase(::g::Fuse::Drawing::LineTo_typeof());
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))HorizontalLineTo__Serialize_fn;
    ::STRINGS[8] = uString::Const("H ");
    ::STRINGS[9] = uString::Const("H");
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::HorizontalLineTo, _x), 0);
    return type;
}

// public HorizontalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) :1237
void HorizontalLineTo__ctor_3_fn(HorizontalLineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* x)
{
    __this->ctor_3(prev, *lastPosition, *x);
}

// public HorizontalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) :1237
void HorizontalLineTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* x, HorizontalLineTo** __retval)
{
    *__retval = HorizontalLineTo::New4(prev, *lastPosition, *x);
}

// protected internal override sealed string Serialize() :1246
void HorizontalLineTo__Serialize_fn(HorizontalLineTo* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[8/*"H "*/], uBox(::TYPES[3/*float*/], __this->_x)), void();
}

// public HorizontalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) [instance] :1237
void HorizontalLineTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float x)
{
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat(x);
    LineToCtor(prev, lastPosition, ::g::Uno::Float2__New2(x, lastPosition.Y));
    _x = x;
}

// public HorizontalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float x) [static] :1237
HorizontalLineTo* HorizontalLineTo::New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float x)
{
    HorizontalLineTo* obj1 = (HorizontalLineTo*)uNew(HorizontalLineTo_typeof());
    obj1->ctor_3(prev, lastPosition, x);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Drawing\$.uno(14)
// ------------------------------------------------------------------

// public sealed class ImageFill :14
// {
ImageFill_type* ImageFill_typeof()
{
    static uSStrong<ImageFill_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageFill);
    options.TypeSize = sizeof(ImageFill_type);
    type = (ImageFill_type*)uClassType::New("Fuse.Drawing.ImageFill", options);
    type->SetBase(::g::Fuse::Drawing::DynamicBrush_typeof());
    type->fp_OnPinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnPinned_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnUnpinned_fn;
    type->interface0.fp_OnSourceChanged = (void(*)(uObject*))ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged_fn;
    type->interface0.fp_OnParamChanged = (void(*)(uObject*))ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged_fn;
    type->interface0.fp_OnSizingChanged = (void(*)(uObject*))ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged_fn;
    ::TYPES[36] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[37] = ::g::Fuse::Internal::ImageContainer_typeof();
    ::TYPES[38] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[12] = ImageFill__DrawParams_typeof();
    ::TYPES[39] = ::g::Fuse::Resources::ImageSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(ImageFill_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _color), 0,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _container), 0);
    return type;
}

// public float4 get_Color() :42
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :43
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged() :143
void ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged_fn(ImageFill* __this)
{
    __this->OnShadingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged() :154
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged_fn(ImageFill* __this)
{
    __this->OnShadingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged() :33
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged_fn(ImageFill* __this)
{
    __this->OnShadingChanged();
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) :66
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval)
{
    *__retval = __this->GetDrawParams(dc, *size);
}

// private float2 GetSize() :53
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public texture2D GetTexture() :82
void ImageFill__GetTexture_fn(ImageFill* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// protected override sealed void OnPinned() :21
void ImageFill__OnPinned_fn(ImageFill* __this)
{
    ::g::Fuse::Drawing::Brush__OnPinned_fn(__this);
    uPtr(__this->_container)->IsRooted(true);
}

// protected override sealed void OnUnpinned() :27
void ImageFill__OnUnpinned_fn(ImageFill* __this)
{
    uPtr(__this->_container)->IsRooted(false);
    ::g::Fuse::Drawing::Brush__OnUnpinned_fn(__this);
}

// public Fuse.Resources.ImageSource get_Source() :133
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :134
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public float4 get_Color() [instance] :42
::g::Uno::Float4 ImageFill::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :43
void ImageFill::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4::op_Inequality(_color, value))
    {
        _color = value;
        OnShadingChanged();
    }
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) [instance] :66
ImageFill__DrawParams ImageFill::GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size)
{
    uPtr(uPtr(_container)->Sizing)->absoluteZoom = ((dc == NULL) ? 1.0f : uPtr(dc)->ViewportPointDensity());
    ::g::Uno::Float2 contentDesiredSize = GetSize();
    ::g::Uno::Float2 scale = uPtr(uPtr(_container)->Sizing)->CalcScale(size, contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(uPtr(_container)->Sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ImageFill__DrawParams dp = uDefault<ImageFill__DrawParams>();
    dp.Origin = origin;
    dp.Size = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    dp.UVClip = uPtr(uPtr(_container)->Sizing)->CalcClip(size, &dp.Origin, &dp.Size);
    return dp;
}

// private float2 GetSize() [instance] :53
::g::Uno::Float2 ImageFill::GetSize()
{
    if (Source() != NULL)
        return uPtr(uPtr(_container)->Sizing)->CalcContentSize(uPtr(Source())->Size(), uPtr(Source())->PixelSize());

    return ::g::Uno::Float2__New1(0.0f);
}

// public texture2D GetTexture() [instance] :82
::g::Uno::Graphics::Texture2D* ImageFill::GetTexture()
{
    return uPtr(_container)->GetTexture();
}

// public Fuse.Resources.ImageSource get_Source() [instance] :133
::g::Fuse::Resources::ImageSource* ImageFill::Source()
{
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :134
void ImageFill::Source(::g::Fuse::Resources::ImageSource* value)
{
    uPtr(_container)->Source(value);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno(60)
// -----------------------------------------------------------------

// public sealed class LinearGradient :60
// {
// static LinearGradient() :171
static void LinearGradient__cctor__fn(uType* __type)
{
    LinearGradient::_gradientSize_ = 256;
    LinearGradient::_gradientSize_ = ::g::Uno::Math::Min8(1028, ::g::Uno::Graphics::Texture2D::MaxSize());
}

::g::Fuse::Drawing::Brush_type* LinearGradient_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(LinearGradient);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.LinearGradient", options);
    type->SetBase(::g::Fuse::Drawing::DynamicBrush_typeof());
    type->fp_cctor_ = LinearGradient__cctor__fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))LinearGradient__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))LinearGradient__OnUnpinned_fn;
    ::TYPES[40] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[41] = ::g::Fuse::Drawing::LinearGradientDrawable_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _angle), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _endPoint), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientBuffer), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientStart), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _hasAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _invalid), 0,
        ::g::Fuse::Drawing::GradientStop_typeof()->Array(), offsetof(::g::Fuse::Drawing::LinearGradient, _sortedStops), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _startPoint), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_gradientSize_, uFieldFlagsStatic);
    return type;
}

// public float get_Angle() :104
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value) :105
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value)
{
    __this->Angle(*value);
}

// public float2 get_EndPoint() :89
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EndPoint();
}

// public void set_EndPoint(float2 value) :90
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->EndPoint(*value);
}

// public bool get_HasAngle() :122
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval)
{
    *__retval = __this->HasAngle();
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :182
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    if (__this->_gradientBuffer == NULL)
    {
        __this->_gradientBuffer = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2(LinearGradient::_gradientSize(), 1), 3, false);
        __this->_invalid = true;
    }

    if (__this->_invalid)
    {
        __this->_gradientStart = uPtr(::g::Fuse::Drawing::LinearGradientDrawable::Singleton())->FillBuffer(dc, __this, __this->_gradientBuffer);
        __this->_invalid = false;
    }
}

// protected override sealed void OnUnpinned() :197
void LinearGradient__OnUnpinned_fn(LinearGradient* __this)
{
    if (__this->_gradientBuffer != NULL)
    {
        ::g::Fuse::FramebufferPool::Release(__this->_gradientBuffer);
        __this->_gradientBuffer = NULL;
        __this->_invalid = true;
    }
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() :65
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval)
{
    *__retval = __this->SortedStops();
}

// public float2 get_StartPoint() :74
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->StartPoint();
}

// public void set_StartPoint(float2 value) :75
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->StartPoint(*value);
}

int LinearGradient::_gradientSize_;

// public float get_Angle() [instance] :104
float LinearGradient::Angle()
{
    return _angle;
}

// public void set_Angle(float value) [instance] :105
void LinearGradient::Angle(float value)
{
    if ((_angle != value) || !_hasAngle)
    {
        _angle = value;
        _hasAngle = true;
        OnShadingChanged();
    }
}

// public float2 get_EndPoint() [instance] :89
::g::Uno::Float2 LinearGradient::EndPoint()
{
    return _endPoint;
}

// public void set_EndPoint(float2 value) [instance] :90
void LinearGradient::EndPoint(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2::op_Inequality(_endPoint, value))
    {
        _endPoint = value;
        OnShadingChanged();
    }
}

// public bool get_HasAngle() [instance] :122
bool LinearGradient::HasAngle()
{
    return _hasAngle;
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() [instance] :65
uArray* LinearGradient::SortedStops()
{
    return _sortedStops;
}

// public float2 get_StartPoint() [instance] :74
::g::Uno::Float2 LinearGradient::StartPoint()
{
    return _startPoint;
}

// public void set_StartPoint(float2 value) [instance] :75
void LinearGradient::StartPoint(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2::op_Inequality(_startPoint, value))
    {
        _startPoint = value;
        OnShadingChanged();
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno(230)
// ------------------------------------------------------------------

// internal sealed class LinearGradientDrawable :230
// {
// static LinearGradientDrawable() :230
static void LinearGradientDrawable__cctor__fn(uType* __type)
{
    LinearGradientDrawable::Singleton_ = LinearGradientDrawable::New1();
}

uType* LinearGradientDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LinearGradientDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LinearGradientDrawable", options);
    type->fp_ctor_ = (void*)LinearGradientDrawable__New1_fn;
    type->fp_cctor_ = LinearGradientDrawable__cctor__fn;
    ::TYPES[13] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[42] = ::g::Fuse::Drawing::GradientStop_typeof()->Array();
    ::TYPES[43] = ::g::Fuse::Drawing::GradientStop_typeof();
    ::TYPES[8] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[44] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[45] = ::g::Fuse_Drawing_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, _draw_3cb3c708), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_TexCoord_3cb3c708_1_1_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_Vertices_3cb3c708_1_0_9), 0,
        LinearGradientDrawable_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradientDrawable::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated LinearGradientDrawable() :230
void LinearGradientDrawable__ctor__fn(LinearGradientDrawable* __this)
{
    __this->ctor_();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) :234
void LinearGradientDrawable__FillBuffer_fn(LinearGradientDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FillBuffer(dc, lg, fb);
}

// private static generated float4[] FillBuffer_Colors_3cb3c708_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) :263
void LinearGradientDrawable__FillBuffer_Colors_3cb3c708_1_6_6_fn(int* Colors_1_6_4, uArray* Colors_1_6_5, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Colors_3cb3c708_1_6_6(*Colors_1_6_4, Colors_1_6_5);
}

// private static generated float[] FillBuffer_Offsets_3cb3c708_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) :256
void LinearGradientDrawable__FillBuffer_Offsets_3cb3c708_1_5_4_fn(int* Offsets_1_5_1, uArray* Offsets_1_5_2, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Offsets_3cb3c708_1_5_4(*Offsets_1_5_1, Offsets_1_5_2);
}

// private generated void init_DrawCalls() :230
void LinearGradientDrawable__init_DrawCalls_fn(LinearGradientDrawable* __this)
{
    __this->init_DrawCalls();
}

// public generated LinearGradientDrawable New() :230
void LinearGradientDrawable__New1_fn(LinearGradientDrawable** __retval)
{
    *__retval = LinearGradientDrawable::New1();
}

uSStrong<LinearGradientDrawable*> LinearGradientDrawable::Singleton_;

// public generated LinearGradientDrawable() [instance] :230
void LinearGradientDrawable::ctor_()
{
    init_DrawCalls();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) [instance] :234
::g::Uno::Float2 LinearGradientDrawable::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb)
{
    uArray* stops = uPtr(lg)->SortedStops();

    if (uPtr(stops)->Length() < 2)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float length = uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(uPtr(stops)->Length() - 1))->Offset() - uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset();
    uPtr(dc)->PushRenderTarget(fb);
    uArray* Offsets_3cb3c708_1_5_5 = LinearGradientDrawable::FillBuffer_Offsets_3cb3c708_1_5_4(stops->Length(), stops);
    uArray* Colors_3cb3c708_1_6_7 = LinearGradientDrawable::FillBuffer_Colors_3cb3c708_1_6_6(stops->Length(), stops);
    _draw_3cb3c708.DepthTestEnabled(false);
    _draw_3cb3c708.Const1(0, uPtr(Offsets_3cb3c708_1_5_5)->Length());
    _draw_3cb3c708.Const1(1, uPtr(Colors_3cb3c708_1_6_7)->Length());
    _draw_3cb3c708.Use();
    _draw_3cb3c708.Attrib1(2, 2, FillBuffer_TexCoord_3cb3c708_1_1_1, 8, 0);
    _draw_3cb3c708.Uniform1(3, Offsets_3cb3c708_1_5_5);
    _draw_3cb3c708.Uniform(4, length);
    _draw_3cb3c708.Uniform11(5, Colors_3cb3c708_1_6_7);
    _draw_3cb3c708.DrawArrays(uPtr(FillBuffer_Vertices_3cb3c708_1_0_9)->Length());
    dc->PopRenderTarget();
    return ::g::Uno::Float2__New2(uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset(), length);
}

// private generated void init_DrawCalls() [instance] :230
void LinearGradientDrawable::init_DrawCalls()
{
    uArray* Vertices_3cb3c708_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[4/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_TexCoord_3cb3c708_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_3cb3c708_1_0_0), 0);
    FillBuffer_Vertices_3cb3c708_1_0_9 = Vertices_3cb3c708_1_0_0;
    _draw_3cb3c708 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_bundle::LinearGradientDrawableccd93376());
}

// private static generated float4[] FillBuffer_Colors_3cb3c708_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) [static] :263
uArray* LinearGradientDrawable::FillBuffer_Colors_3cb3c708_1_6_6(int Colors_1_6_4, uArray* Colors_1_6_5)
{
    LinearGradientDrawable_typeof()->Init();
    uArray* cols = uArray::New(::TYPES[5/*float4[]*/], ::g::Uno::Math::Max8(Colors_1_6_4, 1));

    for (int i = 0; i < Colors_1_6_4; i++)
        cols->Item< ::g::Uno::Float4>(i) = uPtr(uPtr(Colors_1_6_5)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color();

    return cols;
}

// private static generated float[] FillBuffer_Offsets_3cb3c708_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) [static] :256
uArray* LinearGradientDrawable::FillBuffer_Offsets_3cb3c708_1_5_4(int Offsets_1_5_1, uArray* Offsets_1_5_2)
{
    LinearGradientDrawable_typeof()->Init();
    uArray* ofs = uArray::New(::TYPES[44/*float[]*/], ::g::Uno::Math::Max8(Offsets_1_5_1, 1));

    for (int i = 0; i < Offsets_1_5_1; i++)
        ofs->Item<float>(i) = uPtr(uPtr(Offsets_1_5_2)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Offset();

    return ofs;
}

// public generated LinearGradientDrawable New() [static] :230
LinearGradientDrawable* LinearGradientDrawable::New1()
{
    LinearGradientDrawable* obj1 = (LinearGradientDrawable*)uNew(LinearGradientDrawable_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(251)
// ----------------------------------------------------------

// public enum LineCap :251
uEnumType* LineCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LineCap", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Butt", 0LL,
        "Round", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno(68)
// ------------------------------------------------------------------

// internal abstract class LineCapImpl :68
// {
LineCapImpl_type* LineCapImpl_typeof()
{
    static uSStrong<LineCapImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LineCapImpl);
    options.TypeSize = sizeof(LineCapImpl_type);
    type = (LineCapImpl_type*)uClassType::New("Fuse.Drawing.LineCapImpl", options);
    return type;
}

// protected generated LineCapImpl() :68
void LineCapImpl__ctor__fn(LineCapImpl* __this)
{
    __this->ctor_();
}

// public static Fuse.Drawing.LineCapImpl Create(Fuse.Drawing.LineCap lineCap) :72
void LineCapImpl__Create1_fn(int* lineCap, LineCapImpl** __retval)
{
    *__retval = LineCapImpl::Create1(*lineCap);
}

// protected generated LineCapImpl() [instance] :68
void LineCapImpl::ctor_()
{
}

// public static Fuse.Drawing.LineCapImpl Create(Fuse.Drawing.LineCap lineCap) [static] :72
LineCapImpl* LineCapImpl::Create1(int lineCap)
{
    switch (lineCap)
    {
        case 0:
            return ::g::Fuse::Drawing::ButtCap::New1();
        case 1:
            return ::g::Fuse::Drawing::RoundCap::New1();
    }

    U_THROW(::g::Uno::NotImplementedException::New4());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1187)
// -----------------------------------------------------------------

// internal class LineTo :1187
// {
::g::Fuse::Drawing::PathGeometry_type* LineTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LineTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.LineTo", options);
    type->SetBase(::g::Fuse::Drawing::PathGeometry_typeof());
    type->fp_EvaluateLast = (void(*)(::g::Fuse::Drawing::PathGeometry*, uObject**))LineTo__EvaluateLast_fn;
    type->fp_get_HasLastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, bool*))LineTo__get_HasLastBounds_fn;
    type->fp_get_LastBounds = (void(*)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Rect*))LineTo__get_LastBounds_fn;
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))LineTo__Serialize_fn;
    ::STRINGS[10] = uString::Const("L ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[11] = uString::Const("L");
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[20] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LineTo, _lastPosition), 0);
    return type;
}

// protected LineTo() :1201
void LineTo__ctor_1_fn(LineTo* __this)
{
    __this->ctor_1();
}

// public LineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) :1193
void LineTo__ctor_2_fn(LineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position)
{
    __this->ctor_2(prev, *lastPosition, *position);
}

// internal override sealed Uno.Collections.IEnumerable<float2> EvaluateLast() :1209
void LineTo__EvaluateLast_fn(LineTo* __this, uObject** __retval)
{
    return *__retval = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[20/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], uArray::Init< ::g::Uno::Float2>(::TYPES[4/*float2[]*/], 2, __this->_lastPosition, __this->EndPosition()))), void();
}

// protected internal override sealed bool get_HasLastBounds() :1216
void LineTo__get_HasLastBounds_fn(LineTo* __this, bool* __retval)
{
    return *__retval = true, void();
}

// protected internal override sealed Uno.Rect get_LastBounds() :1221
void LineTo__get_LastBounds_fn(LineTo* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__ContainingPoints(__this->_lastPosition, __this->EndPosition()), void();
}

// protected void LineToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) :1203
void LineTo__LineToCtor_fn(LineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position)
{
    __this->LineToCtor(prev, *lastPosition, *position);
}

// public LineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) :1193
void LineTo__New3_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* position, LineTo** __retval)
{
    *__retval = LineTo::New3(prev, *lastPosition, *position);
}

// protected internal override string Serialize() :1224
void LineTo__Serialize_fn(LineTo* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[10/*"L "*/], uBox(::TYPES[3/*float*/], __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->EndPosition().Y)), void();
}

// protected LineTo() [instance] :1201
void LineTo::ctor_1()
{
    ctor_();
}

// public LineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) [instance] :1193
void LineTo::ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position)
{
    ctor_();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    LineToCtor(prev, lastPosition, position);
}

// protected void LineToCtor(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) [instance] :1203
void LineTo::LineToCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position)
{
    PathGeometryCtor(prev, position);
    _lastPosition = lastPosition;
}

// public LineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 position) [static] :1193
LineTo* LineTo::New3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 position)
{
    LineTo* obj1 = (LineTo*)uNew(LineTo_typeof());
    obj1->ctor_2(prev, lastPosition, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1070)
// -----------------------------------------------------------------

// internal sealed class MoveTo :1070
// {
::g::Fuse::Drawing::PathGeometry_type* MoveTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MoveTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.MoveTo", options);
    type->SetBase(::g::Fuse::Drawing::ContourTerminator_typeof());
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))MoveTo__Serialize_fn;
    ::STRINGS[12] = uString::Const("M ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[13] = uString::Const("M");
    ::TYPES[18] = uObject_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    type->SetFields(4);
    return type;
}

// public MoveTo(Fuse.Drawing.PathGeometry prev, float2 position) :1074
void MoveTo__ctor_3_fn(MoveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position)
{
    __this->ctor_3(prev, *position);
}

// public MoveTo New(Fuse.Drawing.PathGeometry prev, float2 position) :1074
void MoveTo__New2_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position, MoveTo** __retval)
{
    *__retval = MoveTo::New2(prev, *position);
}

// protected internal override sealed string Serialize() :1080
void MoveTo__Serialize_fn(MoveTo* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[12/*"M "*/], uBox(::TYPES[3/*float*/], __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->EndPosition().Y)), void();
}

// public MoveTo(Fuse.Drawing.PathGeometry prev, float2 position) [instance] :1074
void MoveTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position)
{
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    ContourTerminatorCtor(prev, position);
}

// public MoveTo New(Fuse.Drawing.PathGeometry prev, float2 position) [static] :1074
MoveTo* MoveTo::New2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position)
{
    MoveTo* obj1 = (MoveTo*)uNew(MoveTo_typeof());
    obj1->ctor_3(prev, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(392)
// -------------------------------------------------------------------------------

// internal sealed class NonConsecutiveEnumerable :392
// {
NonConsecutiveEnumerable_type* NonConsecutiveEnumerable_typeof()
{
    static uSStrong<NonConsecutiveEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NonConsecutiveEnumerable);
    options.TypeSize = sizeof(NonConsecutiveEnumerable_type);
    type = (NonConsecutiveEnumerable_type*)uClassType::New("Fuse.Drawing.NonConsecutiveEnumerable", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))NonConsecutiveEnumerable__GetEnumerator_fn;
    ::TYPES[31] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(NonConsecutiveEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerable, _source), 0);
    return type;
}

// public NonConsecutiveEnumerable(Uno.Collections.IEnumerable<float2> source) :396
void NonConsecutiveEnumerable__ctor__fn(NonConsecutiveEnumerable* __this, uObject* source)
{
    __this->ctor_(source);
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() :401
void NonConsecutiveEnumerable__GetEnumerator_fn(NonConsecutiveEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public NonConsecutiveEnumerable New(Uno.Collections.IEnumerable<float2> source) :396
void NonConsecutiveEnumerable__New1_fn(uObject* source, NonConsecutiveEnumerable** __retval)
{
    *__retval = NonConsecutiveEnumerable::New1(source);
}

// public NonConsecutiveEnumerable(Uno.Collections.IEnumerable<float2> source) [instance] :396
void NonConsecutiveEnumerable::ctor_(uObject* source)
{
    _source = source;
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() [instance] :401
uObject* NonConsecutiveEnumerable::GetEnumerator()
{
    return (uObject*)::g::Fuse::Drawing::NonConsecutiveEnumerator::New1((uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), ::TYPES[19/*Uno.Collections.IEnumerable<float2>*/])));
}

// public NonConsecutiveEnumerable New(Uno.Collections.IEnumerable<float2> source) [static] :396
NonConsecutiveEnumerable* NonConsecutiveEnumerable::New1(uObject* source)
{
    NonConsecutiveEnumerable* obj1 = (NonConsecutiveEnumerable*)uNew(NonConsecutiveEnumerable_typeof());
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(407)
// -------------------------------------------------------------------------------

// internal sealed class NonConsecutiveEnumerator :407
// {
NonConsecutiveEnumerator_type* NonConsecutiveEnumerator_typeof()
{
    static uSStrong<NonConsecutiveEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(NonConsecutiveEnumerator);
    options.TypeSize = sizeof(NonConsecutiveEnumerator_type);
    type = (NonConsecutiveEnumerator_type*)uClassType::New("Fuse.Drawing.NonConsecutiveEnumerator", options);
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))NonConsecutiveEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NonConsecutiveEnumerator__Dispose_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))NonConsecutiveEnumerator__MoveNext_fn;
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[31] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(NonConsecutiveEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(NonConsecutiveEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(NonConsecutiveEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _current), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _first), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _hasCurrent), 0,
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Drawing::NonConsecutiveEnumerator, _source), 0);
    return type;
}

// public NonConsecutiveEnumerator(Uno.Collections.IEnumerator<float2> source) :414
void NonConsecutiveEnumerator__ctor__fn(NonConsecutiveEnumerator* __this, uObject* source)
{
    __this->ctor_(source);
}

// public float2 get_Current() :454
void NonConsecutiveEnumerator__get_Current_fn(NonConsecutiveEnumerator* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :448
void NonConsecutiveEnumerator__Dispose_fn(NonConsecutiveEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :419
void NonConsecutiveEnumerator__MoveNext_fn(NonConsecutiveEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public NonConsecutiveEnumerator New(Uno.Collections.IEnumerator<float2> source) :414
void NonConsecutiveEnumerator__New1_fn(uObject* source, NonConsecutiveEnumerator** __retval)
{
    *__retval = NonConsecutiveEnumerator::New1(source);
}

// public NonConsecutiveEnumerator(Uno.Collections.IEnumerator<float2> source) [instance] :414
void NonConsecutiveEnumerator::ctor_(uObject* source)
{
    _source = source;
}

// public float2 get_Current() [instance] :454
::g::Uno::Float2 NonConsecutiveEnumerator::Current()
{
    return ::g::Uno::Float2__New2(_current.X, _current.Y);
}

// public void Dispose() [instance] :448
void NonConsecutiveEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :419
bool NonConsecutiveEnumerator::MoveNext()
{
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    ::g::Uno::Float2 ret4;

    if (!_hasCurrent)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::g::Uno::Collections::IEnumerator_typeof())))
            return false;

        _first = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), ::TYPES[31/*Uno.Collections.IEnumerator<float2>*/]), &ret2), ret2);
        _current = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), ::TYPES[31/*Uno.Collections.IEnumerator<float2>*/]), &ret3), ret3);
        _hasCurrent = true;
        return true;
    }

    while (true)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::g::Uno::Collections::IEnumerator_typeof())))
            return false;

        ::g::Uno::Float2 next = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), ::TYPES[31/*Uno.Collections.IEnumerator<float2>*/]), &ret4), ret4);

        if ((::g::Uno::Math::Abs1(next.X - _current.X) > 1e-05f) || (::g::Uno::Math::Abs1(next.Y - _current.Y) > 1e-05f))
        {
            _current = next;
            return true;
        }
    }

    return false;
}

// public NonConsecutiveEnumerator New(Uno.Collections.IEnumerator<float2> source) [static] :414
NonConsecutiveEnumerator* NonConsecutiveEnumerator::New1(uObject* source)
{
    NonConsecutiveEnumerator* obj1 = (NonConsecutiveEnumerator*)uNew(NonConsecutiveEnumerator_typeof());
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Collections\$.uno(384)
// -------------------------------------------------------------------------------

// internal static class NonConsecutiveExtension :384
// {
uClassType* NonConsecutiveExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.NonConsecutiveExtension", options);
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    return type;
}

// public static Uno.Collections.IEnumerable<float2> NonConsecutive(Uno.Collections.IEnumerable<float2> self) :386
void NonConsecutiveExtension__NonConsecutive_fn(uObject* self, uObject** __retval)
{
    *__retval = NonConsecutiveExtension::NonConsecutive(self);
}

// public static Uno.Collections.IEnumerable<float2> NonConsecutive(Uno.Collections.IEnumerable<float2> self) [static] :386
uObject* NonConsecutiveExtension::NonConsecutive(uObject* self)
{
    return (uObject*)::g::Fuse::Drawing::NonConsecutiveEnumerable::New1(self);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(128)
// ----------------------------------------------------------------

// public class PathGeometry :128
// {
PathGeometry_type* PathGeometry_typeof()
{
    static uSStrong<PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(PathGeometry);
    options.TypeSize = sizeof(PathGeometry_type);
    type = (PathGeometry_type*)uClassType::New("Fuse.Drawing.PathGeometry", options);
    type->fp_ctor_ = (void*)PathGeometry__New1_fn;
    type->fp_get_EndsContour = PathGeometry__get_EndsContour_fn;
    type->fp_get_EndTangent = PathGeometry__get_EndTangent_fn;
    type->fp_EvaluateLast = PathGeometry__EvaluateLast_fn;
    type->fp_FindStartOfLastContour = PathGeometry__FindStartOfLastContour_fn;
    type->fp_get_HasLastBounds = PathGeometry__get_HasLastBounds_fn;
    type->fp_get_LastBounds = PathGeometry__get_LastBounds_fn;
    type->fp_Serialize = PathGeometry__Serialize_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))PathGeometry__ToString_fn;
    ::STRINGS[14] = uString::Const("");
    ::STRINGS[6] = uString::Const(" ");
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[32] = ::g::Uno::Collections::EmptyEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _boundsCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _hasBoundsCache), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _position), 0,
        PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::PathGeometry, _previous), 0);
    return type;
}

// public PathGeometry() :138
void PathGeometry__ctor__fn(PathGeometry* __this)
{
    __this->ctor_();
}

// public Uno.Rect get_Bounds() :183
void PathGeometry__get_Bounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Bounds();
}

// private Uno.Rect CalculateBounds() :194
void PathGeometry__CalculateBounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalculateBounds();
}

// public Fuse.Drawing.PathGeometry ClosePath() :166
void PathGeometry__ClosePath_fn(PathGeometry* __this, PathGeometry** __retval)
{
    *__retval = __this->ClosePath();
}

// public Fuse.Drawing.PathGeometry CurveTo(float2 controlPointStart, float2 controlPointEnd, float2 position) :162
void PathGeometry__CurveTo_fn(PathGeometry* __this, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->CurveTo(*controlPointStart, *controlPointEnd, *position);
}

// public float2 get_EndPosition() :244
void PathGeometry__get_EndPosition_fn(PathGeometry* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EndPosition();
}

// internal virtual bool get_EndsContour() :232
void PathGeometry__get_EndsContour_fn(PathGeometry* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual float2 get_EndTangent() :249
void PathGeometry__get_EndTangent_fn(PathGeometry* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// internal virtual Uno.Collections.IEnumerable<float2> EvaluateLast() :225
void PathGeometry__EvaluateLast_fn(PathGeometry* __this, uObject** __retval)
{
    return *__retval = (uObject*)((::g::Uno::Collections::EmptyEnumerable*)::g::Uno::Collections::EmptyEnumerable::New1(::TYPES[32/*Uno.Collections.EmptyEnumerable<float2>*/])), void();
}

// internal virtual float2 FindStartOfLastContour() :235
void PathGeometry__FindStartOfLastContour_fn(PathGeometry* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = (__this->_previous != NULL) ? uPtr(__this->_previous)->FindStartOfLastContour() : ::g::Uno::Float2__New2(0.0f, 0.0f), void();
}

// protected internal virtual bool get_HasLastBounds() :217
void PathGeometry__get_HasLastBounds_fn(PathGeometry* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public Fuse.Drawing.PathGeometry HorizontalLineTo(float x) :158
void PathGeometry__HorizontalLineTo_fn(PathGeometry* __this, float* x, PathGeometry** __retval)
{
    *__retval = __this->HorizontalLineTo(*x);
}

// protected internal virtual Uno.Rect get_LastBounds() :222
void PathGeometry__get_LastBounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public Fuse.Drawing.PathGeometry LineTo(float x, float y) :154
void PathGeometry__LineTo_fn(PathGeometry* __this, float* x, float* y, PathGeometry** __retval)
{
    *__retval = __this->LineTo(*x, *y);
}

// public Fuse.Drawing.PathGeometry LineTo(float2 position) :156
void PathGeometry__LineTo1_fn(PathGeometry* __this, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->LineTo1(*position);
}

// public Fuse.Drawing.PathGeometry MoveTo(float x, float y) :150
void PathGeometry__MoveTo_fn(PathGeometry* __this, float* x, float* y, PathGeometry** __retval)
{
    *__retval = __this->MoveTo(*x, *y);
}

// public Fuse.Drawing.PathGeometry MoveTo(float2 position) :152
void PathGeometry__MoveTo1_fn(PathGeometry* __this, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->MoveTo1(*position);
}

// public PathGeometry New() :138
void PathGeometry__New1_fn(PathGeometry** __retval)
{
    *__retval = PathGeometry::New1();
}

// public static Fuse.Drawing.PathGeometry Parse(string pathDescription) :133
void PathGeometry__Parse_fn(uString* pathDescription, PathGeometry** __retval)
{
    *__retval = PathGeometry::Parse(pathDescription);
}

// protected internal void PathGeometryCtor(Fuse.Drawing.PathGeometry previous, float2 position) :144
void PathGeometry__PathGeometryCtor_fn(PathGeometry* __this, PathGeometry* previous, ::g::Uno::Float2* position)
{
    __this->PathGeometryCtor(previous, *position);
}

// public Fuse.Drawing.PathGeometry RemoveLast() :173
void PathGeometry__RemoveLast_fn(PathGeometry* __this, PathGeometry** __retval)
{
    *__retval = __this->RemoveLast();
}

// protected internal virtual string Serialize() :257
void PathGeometry__Serialize_fn(PathGeometry* __this, uString** __retval)
{
    return *__retval = ::STRINGS[14/*""*/], void();
}

// public Fuse.Drawing.PathGeometry SmoothCurveTo(float2 controlPointEnd, float2 position) :164
void PathGeometry__SmoothCurveTo_fn(PathGeometry* __this, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, PathGeometry** __retval)
{
    *__retval = __this->SmoothCurveTo(*controlPointEnd, *position);
}

// public Fuse.Drawing.Polygon ToPolygon([Uno.Predicate<int> WindingRule], [float2 scale]) :168
void PathGeometry__ToPolygon_fn(PathGeometry* __this, uDelegate* WindingRule, ::g::Uno::Float2* scale, ::g::Fuse::Drawing::Polygon** __retval)
{
    *__retval = __this->ToPolygon(WindingRule, *scale);
}

// public override sealed string ToString() :252
void PathGeometry__ToString_fn(PathGeometry* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((__this->_previous == NULL) ? ::STRINGS[14/*""*/] : (uString*)uPtr(__this->_previous)->ToString(), ::STRINGS[6/*" "*/]), __this->Serialize()), void();
}

// public Fuse.Drawing.PathGeometry VerticalLineTo(float y) :160
void PathGeometry__VerticalLineTo_fn(PathGeometry* __this, float* y, PathGeometry** __retval)
{
    *__retval = __this->VerticalLineTo(*y);
}

// public PathGeometry() [instance] :138
void PathGeometry::ctor_()
{
    _previous = NULL;
    _position = ::g::Uno::Float2__New2(0.0f, 0.0f);
}

// public Uno.Rect get_Bounds() [instance] :183
::g::Uno::Rect PathGeometry::Bounds()
{
    if (!_hasBoundsCache)
    {
        _hasBoundsCache = true;
        _boundsCache = CalculateBounds();
    }

    return _boundsCache;
}

// private Uno.Rect CalculateBounds() [instance] :194
::g::Uno::Rect PathGeometry::CalculateBounds()
{
    PathGeometry* pg = this;

    while ((pg != NULL) && !pg->HasLastBounds())
        pg = uPtr(pg)->_previous;

    if (pg == NULL)
        return ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    ::g::Uno::Rect rectUnion = pg->LastBounds();
    pg = uPtr(pg)->_previous;

    while (pg != NULL)
    {
        if (uPtr(pg)->HasLastBounds())
            rectUnion = ::g::Uno::Rect__Union(rectUnion, uPtr(pg)->LastBounds());

        pg = uPtr(pg)->_previous;
    }

    return rectUnion;
}

// public Fuse.Drawing.PathGeometry ClosePath() [instance] :166
PathGeometry* PathGeometry::ClosePath()
{
    return ::g::Fuse::Drawing::ClosePath::New2(this, EndPosition());
}

// public Fuse.Drawing.PathGeometry CurveTo(float2 controlPointStart, float2 controlPointEnd, float2 position) [instance] :162
PathGeometry* PathGeometry::CurveTo(::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    return ::g::Fuse::Drawing::CurveTo::New3(this, EndPosition(), controlPointStart, controlPointEnd, position);
}

// public float2 get_EndPosition() [instance] :244
::g::Uno::Float2 PathGeometry::EndPosition()
{
    return _position;
}

// public Fuse.Drawing.PathGeometry HorizontalLineTo(float x) [instance] :158
PathGeometry* PathGeometry::HorizontalLineTo(float x)
{
    return ::g::Fuse::Drawing::HorizontalLineTo::New4(this, EndPosition(), x);
}

// public Fuse.Drawing.PathGeometry LineTo(float x, float y) [instance] :154
PathGeometry* PathGeometry::LineTo(float x, float y)
{
    return ::g::Fuse::Drawing::LineTo::New3(this, EndPosition(), ::g::Uno::Float2__New2(x, y));
}

// public Fuse.Drawing.PathGeometry LineTo(float2 position) [instance] :156
PathGeometry* PathGeometry::LineTo1(::g::Uno::Float2 position)
{
    return ::g::Fuse::Drawing::LineTo::New3(this, EndPosition(), position);
}

// public Fuse.Drawing.PathGeometry MoveTo(float x, float y) [instance] :150
PathGeometry* PathGeometry::MoveTo(float x, float y)
{
    return ::g::Fuse::Drawing::MoveTo::New2(this, ::g::Uno::Float2__New2(x, y));
}

// public Fuse.Drawing.PathGeometry MoveTo(float2 position) [instance] :152
PathGeometry* PathGeometry::MoveTo1(::g::Uno::Float2 position)
{
    return ::g::Fuse::Drawing::MoveTo::New2(this, position);
}

// protected internal void PathGeometryCtor(Fuse.Drawing.PathGeometry previous, float2 position) [instance] :144
void PathGeometry::PathGeometryCtor(PathGeometry* previous, ::g::Uno::Float2 position)
{
    _previous = previous;
    _position = position;
}

// public Fuse.Drawing.PathGeometry RemoveLast() [instance] :173
PathGeometry* PathGeometry::RemoveLast()
{
    return _previous;
}

// public Fuse.Drawing.PathGeometry SmoothCurveTo(float2 controlPointEnd, float2 position) [instance] :164
PathGeometry* PathGeometry::SmoothCurveTo(::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    return ::g::Fuse::Drawing::SmoothCurveTo::New4(this, EndPosition(), EndTangent(), controlPointEnd, position);
}

// public Fuse.Drawing.Polygon ToPolygon([Uno.Predicate<int> WindingRule], [float2 scale]) [instance] :168
::g::Fuse::Drawing::Polygon* PathGeometry::ToPolygon(uDelegate* WindingRule, ::g::Uno::Float2 scale)
{
    return ::g::Fuse::Drawing::Polygon::New4(WindingRule, (uObject*)::g::Fuse::Drawing::ContourEnumerable::New1(this, scale));
}

// public Fuse.Drawing.PathGeometry VerticalLineTo(float y) [instance] :160
PathGeometry* PathGeometry::VerticalLineTo(float y)
{
    return ::g::Fuse::Drawing::VerticalLineTo::New4(this, EndPosition(), y);
}

// public PathGeometry New() [static] :138
PathGeometry* PathGeometry::New1()
{
    PathGeometry* obj1 = (PathGeometry*)uNew(PathGeometry_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Fuse.Drawing.PathGeometry Parse(string pathDescription) [static] :133
PathGeometry* PathGeometry::Parse(uString* pathDescription)
{
    return ::g::Fuse::Drawing::PathGeometryParser::Deserialize(pathDescription);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(278)
// ----------------------------------------------------------------

// public static class PathGeometryExtensions :278
// {
uClassType* PathGeometryExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.PathGeometryExtensions", options);
    return type;
}

// public static Fuse.Drawing.PathGeometry Ellipse(Fuse.Drawing.PathGeometry self, float2 Radius) :297
void PathGeometryExtensions__Ellipse_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::Ellipse(self, *Radius);
}

// public static Fuse.Drawing.PathGeometry RegularPolygon(Fuse.Drawing.PathGeometry self, int Sides, float Radius) :280
void PathGeometryExtensions__RegularPolygon_fn(::g::Fuse::Drawing::PathGeometry* self, int* Sides, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::RegularPolygon(self, *Sides, *Radius);
}

// public static Fuse.Drawing.PathGeometry Star(Fuse.Drawing.PathGeometry self, int Corners, float Radius, float SpokeRadius, [float CornerRatio], [float rotation]) :285
void PathGeometryExtensions__Star_fn(::g::Fuse::Drawing::PathGeometry* self, int* Corners, float* Radius, float* SpokeRadius, float* CornerRatio, float* rotation, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryExtensions::Star(self, *Corners, *Radius, *SpokeRadius, *CornerRatio, *rotation);
}

// public static Fuse.Drawing.PathGeometry Ellipse(Fuse.Drawing.PathGeometry self, float2 Radius) [static] :297
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::Ellipse(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Radius)
{
    return ::g::Fuse::Drawing::EllipseFactory::AppendTo(self, Radius);
}

// public static Fuse.Drawing.PathGeometry RegularPolygon(Fuse.Drawing.PathGeometry self, int Sides, float Radius) [static] :280
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::RegularPolygon(::g::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    return ::g::Fuse::Drawing::RegularPolygonFactory::AppendTo(self, Sides, Radius);
}

// public static Fuse.Drawing.PathGeometry Star(Fuse.Drawing.PathGeometry self, int Corners, float Radius, float SpokeRadius, [float CornerRatio], [float rotation]) [static] :285
::g::Fuse::Drawing::PathGeometry* PathGeometryExtensions::Star(::g::Fuse::Drawing::PathGeometry* self, int Corners, float Radius, float SpokeRadius, float CornerRatio, float rotation)
{
    return ::g::Fuse::Drawing::StarFactory::AppendTo(self, Corners, Radius, SpokeRadius, CornerRatio, rotation);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(320)
// ----------------------------------------------------------------

// internal sealed class PathGeometryParser :320
// {
uType* PathGeometryParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(PathGeometryParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.PathGeometryParser", options);
    ::TYPES[47] = ::g::Fuse::Drawing::Token_typeof();
    ::TYPES[48] = ::g::Uno::String_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _data), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _head), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _headToken), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _prevToken), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _token), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryParser, _y), 0);
    return type;
}

// private PathGeometryParser(string data) :345
void PathGeometryParser__ctor__fn(PathGeometryParser* __this, uString* data)
{
    __this->ctor_(data);
}

// private void ClosePath() :496
void PathGeometryParser__ClosePath_fn(PathGeometryParser* __this)
{
    __this->ClosePath();
}

// private void CurveTo(float offsetX, float offsetY) :450
void PathGeometryParser__CurveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->CurveTo(*offsetX, *offsetY);
}

// public static Fuse.Drawing.PathGeometry Deserialize(string data) :324
void PathGeometryParser__Deserialize_fn(uString* data, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = PathGeometryParser::Deserialize(data);
}

// private void Execute(char c) :419
void PathGeometryParser__Execute_fn(PathGeometryParser* __this, uChar* c)
{
    __this->Execute(*c);
}

// private void HLineTo(float offsetX, float offsetY) :484
void PathGeometryParser__HLineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->HLineTo(*offsetX, *offsetY);
}

// private void LineTo(float offsetX, float offsetY) :477
void PathGeometryParser__LineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->LineTo(*offsetX, *offsetY);
}

// private void MoveTo(float offsetX, float offsetY) :470
void PathGeometryParser__MoveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->MoveTo(*offsetX, *offsetY);
}

// private PathGeometryParser New(string data) :345
void PathGeometryParser__New1_fn(uString* data, PathGeometryParser** __retval)
{
    *__retval = PathGeometryParser::New1(data);
}

// private float ReadFloat() :501
void PathGeometryParser__ReadFloat_fn(PathGeometryParser* __this, float* __retval)
{
    *__retval = __this->ReadFloat();
}

// private void SmoothCurveTo(float offsetX, float offsetY) :461
void PathGeometryParser__SmoothCurveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->SmoothCurveTo(*offsetX, *offsetY);
}

// private void StartNewToken(int prevLastChar, int nextFirstChar, [bool hasAction]) :441
void PathGeometryParser__StartNewToken_fn(PathGeometryParser* __this, int* prevLastChar, int* nextFirstChar, bool* hasAction)
{
    __this->StartNewToken(*prevLastChar, *nextFirstChar, *hasAction);
}

// private void VLineTo(float offsetX, float offsetY) :490
void PathGeometryParser__VLineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY)
{
    __this->VLineTo(*offsetX, *offsetY);
}

// private PathGeometryParser(string data) [instance] :345
void PathGeometryParser::ctor_(uString* data)
{
    _data = data;
    _headToken = ::g::Fuse::Drawing::Token::New1(-1, false);
    _prevToken = (uPtr(_headToken)->Next = ::g::Fuse::Drawing::Token::New1(0, false));
    bool wasExponent = false;

    for (int i = 0; i < uPtr(data)->Length(); i++)
    {
        uChar c = uPtr(data)->Item(i);

        switch (c)
        {
            case 0:
            case ' ':
            case ',':
            {
                StartNewToken(i - 1, i + 1, false);
                break;
            }
            case '-':
            {
                if (!wasExponent)
                    StartNewToken(i - 1, i, false);

                break;
            }
            case 'M':
            case 'C':
            case 'S':
            case 'Z':
            case 'L':
            case 'H':
            case 'V':
            case 'm':
            case 'c':
            case 's':
            case 'z':
            case 'l':
            case 'h':
            case 'v':
            {
                StartNewToken(i - 1, i, true);
                StartNewToken(i, i + 1, false);
                break;
            }
        }

        wasExponent = (c == 'e') || (c == 'E');
    }

    uPtr(_prevToken)->Last = (uPtr(data)->Length() - 1);

    for (::g::Fuse::Drawing::Token* token = uPtr(_headToken)->Next; token != NULL; )
    {
        ::g::Fuse::Drawing::Token* next = uPtr(token)->Next;

        while ((next != NULL) && ((uPtr(next)->Last - uPtr(next)->First) < 0))
            next = uPtr(next)->Next;

        token = uPtr(token)->Next = next;
    }

    _head = ::g::Fuse::Drawing::PathGeometry::New1();
    _token = uPtr(_headToken)->Next;

    while (_token != NULL)
    {
        if (!uPtr(_token)->HasAction)
        {
            _token = uPtr(_token)->Next;
            continue;
        }

        uChar currentCommand = uPtr(_data)->Item(uPtr(_token)->First);
        _token = uPtr(_token)->Next;

        do
            Execute(currentCommand);
        while ((_token != NULL) && !uPtr(_token)->HasAction);
    }
}

// private void ClosePath() [instance] :496
void PathGeometryParser::ClosePath()
{
    _head = uPtr(_head)->ClosePath();
}

// private void CurveTo(float offsetX, float offsetY) [instance] :450
void PathGeometryParser::CurveTo(float offsetX, float offsetY)
{
    float x1 = offsetX + ReadFloat();
    float y1 = offsetY + ReadFloat();
    float x2 = offsetX + ReadFloat();
    float y2 = offsetY + ReadFloat();
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->CurveTo(::g::Uno::Float2__New2(x1, y1), ::g::Uno::Float2__New2(x2, y2), ::g::Uno::Float2__New2(x, y));
}

// private void Execute(char c) [instance] :419
void PathGeometryParser::Execute(uChar c)
{
    switch (c)
    {
        case 'M':
        {
            MoveTo(0.0f, 0.0f);
            break;
        }
        case 'C':
        {
            CurveTo(0.0f, 0.0f);
            break;
        }
        case 'S':
        {
            SmoothCurveTo(0.0f, 0.0f);
            break;
        }
        case 'Z':
        {
            ClosePath();
            break;
        }
        case 'L':
        {
            LineTo(0.0f, 0.0f);
            break;
        }
        case 'H':
        {
            HLineTo(0.0f, 0.0f);
            break;
        }
        case 'V':
        {
            VLineTo(0.0f, 0.0f);
            break;
        }
        case 'm':
        {
            MoveTo(_x, _y);
            break;
        }
        case 'c':
        {
            CurveTo(_x, _y);
            break;
        }
        case 's':
        {
            SmoothCurveTo(_x, _y);
            break;
        }
        case 'z':
        {
            ClosePath();
            break;
        }
        case 'l':
        {
            LineTo(_x, _y);
            break;
        }
        case 'h':
        {
            HLineTo(_x, _y);
            break;
        }
        case 'v':
        {
            VLineTo(_x, _y);
            break;
        }
    }
}

// private void HLineTo(float offsetX, float offsetY) [instance] :484
void PathGeometryParser::HLineTo(float offsetX, float offsetY)
{
    float x = _x = (offsetX + ReadFloat());
    _head = uPtr(_head)->HorizontalLineTo(x);
}

// private void LineTo(float offsetX, float offsetY) [instance] :477
void PathGeometryParser::LineTo(float offsetX, float offsetY)
{
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->LineTo(x, y);
}

// private void MoveTo(float offsetX, float offsetY) [instance] :470
void PathGeometryParser::MoveTo(float offsetX, float offsetY)
{
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->MoveTo(x, y);
}

// private float ReadFloat() [instance] :501
float PathGeometryParser::ReadFloat()
{
    uString* str = ::g::Uno::String::Substring1(uPtr(_data), uPtr(_token)->First, (uPtr(_token)->Last - uPtr(_token)->First) + 1);
    float res = ::g::Uno::Float::Parse(str);
    _token = uPtr(_token)->Next;
    return res;
}

// private void SmoothCurveTo(float offsetX, float offsetY) [instance] :461
void PathGeometryParser::SmoothCurveTo(float offsetX, float offsetY)
{
    float x2 = offsetX + ReadFloat();
    float y2 = offsetY + ReadFloat();
    float x = _x = (offsetX + ReadFloat());
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->SmoothCurveTo(::g::Uno::Float2__New2(x2, y2), ::g::Uno::Float2__New2(x, y));
}

// private void StartNewToken(int prevLastChar, int nextFirstChar, [bool hasAction]) [instance] :441
void PathGeometryParser::StartNewToken(int prevLastChar, int nextFirstChar, bool hasAction)
{
    uPtr(_prevToken)->Last = prevLastChar;
    _prevToken = (uPtr(_prevToken)->Next = ::g::Fuse::Drawing::Token::New1(nextFirstChar, hasAction));
}

// private void VLineTo(float offsetX, float offsetY) [instance] :490
void PathGeometryParser::VLineTo(float offsetX, float offsetY)
{
    float y = _y = (offsetY + ReadFloat());
    _head = uPtr(_head)->VerticalLineTo(y);
}

// public static Fuse.Drawing.PathGeometry Deserialize(string data) [static] :324
::g::Fuse::Drawing::PathGeometry* PathGeometryParser::Deserialize(uString* data)
{
    if (::g::Uno::String::op_Equality(data, NULL) || (uPtr(data)->Length() == 0))
        return ::g::Fuse::Drawing::PathGeometry::New1();

    return PathGeometryParser::New1(data)->_head;
}

// private PathGeometryParser New(string data) [static] :345
PathGeometryParser* PathGeometryParser::New1(uString* data)
{
    PathGeometryParser* obj1 = (PathGeometryParser*)uNew(PathGeometryParser_typeof());
    obj1->ctor_(data);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(537)
// ----------------------------------------------------------------

// public partial sealed class PathGeometryRenderer :537
// {
uType* PathGeometryRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(PathGeometryRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.PathGeometryRenderer", options);
    type->fp_ctor_ = (void*)PathGeometryRenderer__New1_fn;
    ::STRINGS[15] = uString::Const("value");
    ::TYPES[49] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    ::TYPES[50] = ::g::Uno::Rect_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[51] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[52] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[53] = ::g::Fuse::Drawing::PolygonFiller_typeof();
    ::TYPES[54] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[9] = ::g::Fuse::Drawing::RendererContext_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[55] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[56] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[57] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[58] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[38] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[59] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[60] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[61] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[62] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof());
    ::TYPES[33] = ::g::Uno::Delegate_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[63] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[64] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[65] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Antialiasing_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _antialiasing), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _bounds), 0,
        ::g::Fuse::Drawing::Antialiasing_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _cachedAntialiasing), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _density), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fillDensity), 0,
        ::g::Fuse::Drawing::PolygonFiller_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fillRenderer), 0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fillRule), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _fills), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _geometry), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _hasBoundsCache), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _innerBounds), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _preScale), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokeDensity), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokePadding), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), ::g::Fuse::Drawing::PolygonFiller_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokeRenderers), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, _strokes), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Drawing::PathGeometryRenderer, VisualInvalidated1), 0);
    return type;
}

// public PathGeometryRenderer() :887
void PathGeometryRenderer__ctor__fn(PathGeometryRenderer* __this)
{
    __this->ctor_();
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() :852
void PathGeometryRenderer__get_Antialiasing_fn(PathGeometryRenderer* __this, int* __retval)
{
    *__retval = __this->Antialiasing();
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) :853
void PathGeometryRenderer__set_Antialiasing_fn(PathGeometryRenderer* __this, int* value)
{
    __this->Antialiasing(*value);
}

// public Uno.Rect get_Bounds() :769
void PathGeometryRenderer__get_Bounds_fn(PathGeometryRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Bounds();
}

// private void CalcBounds() :808
void PathGeometryRenderer__CalcBounds_fn(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
}

// private void CompleteStrokeRenderers(float density) :698
void PathGeometryRenderer__CompleteStrokeRenderers_fn(PathGeometryRenderer* __this, float* density)
{
    __this->CompleteStrokeRenderers(*density);
}

// public float get_Density() :797
void PathGeometryRenderer__get_Density_fn(PathGeometryRenderer* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :798
void PathGeometryRenderer__set_Density_fn(PathGeometryRenderer* __this, float* value)
{
    __this->Density(*value);
}

// public void Draw(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) :968
void PathGeometryRenderer__Draw_fn(PathGeometryRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize)
{
    __this->Draw(dc, *transform, *elementSize);
}

// public void Draw(Fuse.Drawing.RendererContext ctx) :982
void PathGeometryRenderer__Draw1_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw1(ctx);
}

// internal void DrawFill(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Brush fill) :594
void PathGeometryRenderer__DrawFill_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Brush* fill)
{
    __this->DrawFill(ctx, fill);
}

// private void DrawFills(Fuse.Drawing.RendererContext ctx) :585
void PathGeometryRenderer__DrawFills_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->DrawFills(ctx);
}

// internal void DrawStroke(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Stroke s) :723
void PathGeometryRenderer__DrawStroke_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Stroke* s)
{
    __this->DrawStroke(ctx, s);
}

// private void DrawStrokes(Fuse.Drawing.RendererContext ctx) :689
void PathGeometryRenderer__DrawStrokes_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->DrawStrokes(ctx);
}

// private void EnsureFillRenderer(float density) :602
void PathGeometryRenderer__EnsureFillRenderer_fn(PathGeometryRenderer* __this, float* density)
{
    __this->EnsureFillRenderer(*density);
}

// private void EnsureStrokeRenderers() :669
void PathGeometryRenderer__EnsureStrokeRenderers_fn(PathGeometryRenderer* __this)
{
    __this->EnsureStrokeRenderers();
}

// public Uno.Predicate<int> get_FillRule() :864
void PathGeometryRenderer__get_FillRule_fn(PathGeometryRenderer* __this, uDelegate** __retval)
{
    *__retval = __this->FillRule();
}

// public void set_FillRule(Uno.Predicate<int> value) :865
void PathGeometryRenderer__set_FillRule_fn(PathGeometryRenderer* __this, uDelegate* value)
{
    __this->FillRule(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :559
void PathGeometryRenderer__get_Fills_fn(PathGeometryRenderer* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// public Fuse.Drawing.PathGeometry get_Geometry() :753
void PathGeometryRenderer__get_Geometry_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) :754
void PathGeometryRenderer__set_Geometry_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* value)
{
    __this->Geometry(value);
}

// private void GeometryChanged(Fuse.Drawing.PathGeometry geom) :843
void PathGeometryRenderer__GeometryChanged_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* geom)
{
    __this->GeometryChanged(geom);
}

// public object GetHitPart(float2 p) :938
void PathGeometryRenderer__GetHitPart_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* p, uObject** __retval)
{
    *__retval = __this->GetHitPart(*p);
}

// internal object GetHitPart(float2 p, Uno.Collections.IList<Fuse.Drawing.Brush> fills, Uno.Collections.IList<Fuse.Drawing.Stroke> strokes) :949
void PathGeometryRenderer__GetHitPart1_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* p, uObject* fills, uObject* strokes, uObject** __retval)
{
    *__retval = __this->GetHitPart1(*p, fills, strokes);
}

// internal Fuse.Drawing.RendererContext GetRendererContext(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) :973
void PathGeometryRenderer__GetRendererContext_fn(PathGeometryRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize, ::g::Fuse::Drawing::RendererContext** __retval)
{
    *__retval = __this->GetRendererContext(dc, *transform, *elementSize);
}

// private Fuse.Drawing.PolygonFiller GetStrokeRenderer(Fuse.Drawing.Stroke s, float density) :705
void PathGeometryRenderer__GetStrokeRenderer_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s, float* density, ::g::Fuse::Drawing::PolygonFiller** __retval)
{
    *__retval = __this->GetStrokeRenderer(s, *density);
}

// public bool get_HasFills() :564
void PathGeometryRenderer__get_HasFills_fn(PathGeometryRenderer* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :650
void PathGeometryRenderer__get_HasStrokes_fn(PathGeometryRenderer* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// internal Uno.Rect get_InnerBounds() :778
void PathGeometryRenderer__get_InnerBounds_fn(PathGeometryRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->InnerBounds();
}

// private void InvalidateStrokeAndFill() :909
void PathGeometryRenderer__InvalidateStrokeAndFill_fn(PathGeometryRenderer* __this)
{
    __this->InvalidateStrokeAndFill();
}

// private void InvalidateVisual() :933
void PathGeometryRenderer__InvalidateVisual_fn(PathGeometryRenderer* __this)
{
    __this->InvalidateVisual();
}

// public PathGeometryRenderer New() :887
void PathGeometryRenderer__New1_fn(PathGeometryRenderer** __retval)
{
    *__retval = PathGeometryRenderer::New1();
}

// private void OnFillAdded(Fuse.Drawing.Brush f) :567
void PathGeometryRenderer__OnFillAdded_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillAdded(f);
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) :576
void PathGeometryRenderer__OnFillRemoved_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillRemoved(f);
}

// private void OnShadingChanged() :894
void PathGeometryRenderer__OnShadingChanged_fn(PathGeometryRenderer* __this)
{
    __this->OnShadingChanged();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) :653
void PathGeometryRenderer__OnStrokeAdded_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeAdded(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) :674
void PathGeometryRenderer__OnStrokeChanged_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeChanged(s);
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) :661
void PathGeometryRenderer__OnStrokeRemoved_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeRemoved(s);
}

// public float2 get_PreScale() :876
void PathGeometryRenderer__get_PreScale_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PreScale();
}

// public void set_PreScale(float2 value) :877
void PathGeometryRenderer__set_PreScale_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* value)
{
    __this->PreScale(*value);
}

// public void SoftDispose() :990
void PathGeometryRenderer__SoftDispose_fn(PathGeometryRenderer* __this)
{
    __this->SoftDispose();
}

// internal float4 get_StrokePadding() :787
void PathGeometryRenderer__get_StrokePadding_fn(PathGeometryRenderer* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->StrokePadding();
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :645
void PathGeometryRenderer__get_Strokes_fn(PathGeometryRenderer* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

// private void UpdateAa() :899
void PathGeometryRenderer__UpdateAa_fn(PathGeometryRenderer* __this)
{
    __this->UpdateAa();
}

// public generated void add_VisualInvalidated(Uno.Action value) :845
void PathGeometryRenderer__add_VisualInvalidated_fn(PathGeometryRenderer* __this, uDelegate* value)
{
    __this->add_VisualInvalidated(value);
}

// public generated void remove_VisualInvalidated(Uno.Action value) :845
void PathGeometryRenderer__remove_VisualInvalidated_fn(PathGeometryRenderer* __this, uDelegate* value)
{
    __this->remove_VisualInvalidated(value);
}

// public PathGeometryRenderer() [instance] :887
void PathGeometryRenderer::ctor_()
{
    _geometry = ::g::Fuse::Drawing::PathGeometry::New1();
    _density = 1.0f;
    _antialiasing = 1;
    _fillRule = uDelegate::New(::TYPES[49/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn);
    _preScale = ::g::Uno::Float2__New1(1.0f);
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() [instance] :852
int PathGeometryRenderer::Antialiasing()
{
    return _antialiasing;
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) [instance] :853
void PathGeometryRenderer::Antialiasing(int value)
{
    if (value == _antialiasing)
        return;

    _antialiasing = value;
    InvalidateVisual();
}

// public Uno.Rect get_Bounds() [instance] :769
::g::Uno::Rect PathGeometryRenderer::Bounds()
{
    CalcBounds();
    return _bounds;
}

// private void CalcBounds() [instance] :808
void PathGeometryRenderer::CalcBounds()
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Drawing::PolygonFiller*> > ret15;

    if (_hasBoundsCache)
        return;

    _innerBounds = uPtr(_geometry)->Bounds();
    ::g::Uno::Rect scaled = _innerBounds;
    scaled.Left = (scaled.Left * _preScale.X);
    scaled.Top = (scaled.Top * _preScale.Y);
    scaled.Right = (scaled.Right * _preScale.X);
    scaled.Bottom = (scaled.Bottom * _preScale.Y);
    _bounds = scaled;
    _strokePadding = ::g::Uno::Float4__New1(0.0f);

    if (HasStrokes())
    {
        UpdateAa();
        CompleteStrokeRenderers(Density());
        ::g::Uno::Rect r = scaled;

        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Drawing::PolygonFiller*> > enum3 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_strokeRenderers)->Values()), &ret15), ret15); enum3.MoveNext(::TYPES[52/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.ValueCollection.Enumerator*/]); )
        {
            ::g::Fuse::Drawing::PolygonFiller* s = enum3.Current(::TYPES[52/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.ValueCollection.Enumerator*/]);
            ::g::Uno::Rect c = uPtr(s)->Bounds();
            r = ::g::Uno::Rect__Union(r, c);
        }

        ::g::Uno::Float2 diffMin = ::g::Uno::Float2__op_Subtraction2(_bounds.Minimum(), r.Minimum());
        ::g::Uno::Float2 diffMax = ::g::Uno::Float2__op_Subtraction2(r.Maximum(), _bounds.Maximum());
        _strokePadding = ::g::Uno::Float4__New2(diffMin.X, diffMin.Y, diffMax.X, diffMax.Y);
        _strokePadding = ::g::Uno::Math::Max7(_strokePadding, ::g::Uno::Float4__New1(0.0f));
        _bounds = r;
    }

    _hasBoundsCache = true;
}

// private void CompleteStrokeRenderers(float density) [instance] :698
void PathGeometryRenderer::CompleteStrokeRenderers(float density)
{
    ::g::Fuse::Drawing::Stroke* ret16;
    EnsureStrokeRenderers();

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Strokes()), ::TYPES[22/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[57/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Drawing::Stroke* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret16), ret16);
        GetStrokeRenderer(s, density);
    }
}

// public float get_Density() [instance] :797
float PathGeometryRenderer::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :798
void PathGeometryRenderer::Density(float value)
{
    if (_density != value)
    {
        _density = value;
        InvalidateStrokeAndFill();
    }
}

// public void Draw(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) [instance] :968
void PathGeometryRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize)
{
    Draw1(GetRendererContext(dc, transform, elementSize));
}

// public void Draw(Fuse.Drawing.RendererContext ctx) [instance] :982
void PathGeometryRenderer::Draw1(::g::Fuse::Drawing::RendererContext* ctx)
{
    UpdateAa();
    DrawFills(ctx);
    DrawStrokes(ctx);
}

// internal void DrawFill(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Brush fill) [instance] :594
void PathGeometryRenderer::DrawFill(::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Brush* fill)
{
    EnsureFillRenderer(uPtr(ctx)->Density());

    if (!uPtr(fill)->IsCompletelyTransparent())
        uPtr(_fillRenderer)->Draw1(fill, ctx);
}

// private void DrawFills(Fuse.Drawing.RendererContext ctx) [instance] :585
void PathGeometryRenderer::DrawFills(::g::Fuse::Drawing::RendererContext* ctx)
{
    ::g::Fuse::Drawing::Brush* ret17;

    if (HasFills())

        for (int i = 0; i < uPtr(_fills)->Count(); i++)
            DrawFill(ctx, (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_fills), uCRef<int>(i), &ret17), ret17));
}

// internal void DrawStroke(Fuse.Drawing.RendererContext ctx, Fuse.Drawing.Stroke s) [instance] :723
void PathGeometryRenderer::DrawStroke(::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Stroke* s)
{
    EnsureStrokeRenderers();

    if (_strokeDensity != uPtr(ctx)->Density())
    {
        uPtr(_strokeRenderers)->Clear();
        _strokeDensity = uPtr(ctx)->Density();
    }

    if ((uPtr(s)->Brush() != NULL) && !uPtr(uPtr(s)->Brush())->IsCompletelyTransparent())
    {
        ::g::Fuse::Drawing::PolygonFiller* sr = GetStrokeRenderer(s, uPtr(ctx)->Density());
        uPtr(sr)->Draw1(uPtr(s)->Brush(), ctx);
    }
}

// private void DrawStrokes(Fuse.Drawing.RendererContext ctx) [instance] :689
void PathGeometryRenderer::DrawStrokes(::g::Fuse::Drawing::RendererContext* ctx)
{
    ::g::Fuse::Drawing::Stroke* ret18;

    if (HasStrokes())

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Strokes()), ::TYPES[22/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[57/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret18), ret18);
            DrawStroke(ctx, s);
        }
}

// private void EnsureFillRenderer(float density) [instance] :602
void PathGeometryRenderer::EnsureFillRenderer(float density)
{
    ::g::Fuse::Drawing::PolygonFiller* ind8;

    if ((_fillDensity != density) || (_fillRenderer == NULL))
    {
        _fillRenderer = (ind8 = _fillRenderer, ((ind8 != NULL) ? ind8 : (::g::Fuse::Drawing::PolygonFiller*)::g::Fuse::Drawing::PolygonFiller::New1(uPtr(_geometry)->ToPolygon(_fillRule, _preScale), _antialiasing, density)));
        _fillDensity = density;
    }
}

// private void EnsureStrokeRenderers() [instance] :669
void PathGeometryRenderer::EnsureStrokeRenderers()
{
    if (_strokeRenderers == NULL)
        _strokeRenderers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[51/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>*/]));
}

// public Uno.Predicate<int> get_FillRule() [instance] :864
uDelegate* PathGeometryRenderer::FillRule()
{
    return _fillRule;
}

// public void set_FillRule(Uno.Predicate<int> value) [instance] :865
void PathGeometryRenderer::FillRule(uDelegate* value)
{
    if (::g::Uno::Delegate::op_Equality(value, _fillRule))
        return;

    _fillRule = value;
    InvalidateStrokeAndFill();
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :559
uObject* PathGeometryRenderer::Fills()
{
    ::g::Uno::Collections::ObservableList* ind11;
    return (uObject*)(ind11 = _fills, ((ind11 != NULL) ? ind11 : (::g::Uno::Collections::ObservableList*)(_fills = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[56/*Uno.Collections.ObservableList<Fuse.Drawing.Brush>*/], uDelegate::New(::TYPES[64/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)PathGeometryRenderer__OnFillAdded_fn, this), uDelegate::New(::TYPES[64/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)PathGeometryRenderer__OnFillRemoved_fn, this))))));
}

// public Fuse.Drawing.PathGeometry get_Geometry() [instance] :753
::g::Fuse::Drawing::PathGeometry* PathGeometryRenderer::Geometry()
{
    return _geometry;
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) [instance] :754
void PathGeometryRenderer::Geometry(::g::Fuse::Drawing::PathGeometry* value)
{
    if (value == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[15/*"value"*/]));

    if (value == _geometry)
        return;

    _geometry = value;
    GeometryChanged(_geometry);
}

// private void GeometryChanged(Fuse.Drawing.PathGeometry geom) [instance] :843
void PathGeometryRenderer::GeometryChanged(::g::Fuse::Drawing::PathGeometry* geom)
{
    InvalidateStrokeAndFill();
}

// public object GetHitPart(float2 p) [instance] :938
uObject* PathGeometryRenderer::GetHitPart(::g::Uno::Float2 p)
{
    UpdateAa();

    if (HasStrokes())
        CompleteStrokeRenderers(Density());

    GetHitPart1(p, HasFills() ? (uObject*)Fills() : NULL, HasStrokes() ? (uObject*)Strokes() : NULL);
    return NULL;
}

// internal object GetHitPart(float2 p, Uno.Collections.IList<Fuse.Drawing.Brush> fills, Uno.Collections.IList<Fuse.Drawing.Stroke> strokes) [instance] :949
uObject* PathGeometryRenderer::GetHitPart1(::g::Uno::Float2 p, uObject* fills, uObject* strokes)
{
    ::g::Fuse::Drawing::Stroke* ret19;
    ::g::Fuse::Drawing::Brush* ret20;

    if (strokes != NULL)

        for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(strokes), ::TYPES[22/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[57/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret19), ret19);

            if (uPtr(GetStrokeRenderer(stroke, Density()))->Intersects(p))
                return stroke;
        }

    if (fills != NULL)
    {
        EnsureFillRenderer(Density());

        if (uPtr(_fillRenderer)->Intersects(p))
            return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(fills), ::TYPES[58/*Uno.Collections.IList<Fuse.Drawing.Brush>*/]), uCRef<int>(0), &ret20), ret20);
    }

    return NULL;
}

// internal Fuse.Drawing.RendererContext GetRendererContext(Fuse.DrawContext dc, float4x4 transform, float2 elementSize) [instance] :973
::g::Fuse::Drawing::RendererContext* PathGeometryRenderer::GetRendererContext(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize)
{
    ::g::Fuse::Drawing::RendererContext* collection6;
    collection6 = ::g::Fuse::Drawing::RendererContext::New1();
    uPtr(collection6)->Transform(transform);
    transform;
    uPtr(collection6)->CanvasSize(elementSize);
    elementSize;
    float ind9 = Density();
    uPtr(collection6)->Density(ind9);
    ;
    int ind10 = uPtr(dc)->CullFace();
    uPtr(collection6)->CullFace(ind10);
    ;
    return collection6;
}

// private Fuse.Drawing.PolygonFiller GetStrokeRenderer(Fuse.Drawing.Stroke s, float density) [instance] :705
::g::Fuse::Drawing::PolygonFiller* PathGeometryRenderer::GetStrokeRenderer(::g::Fuse::Drawing::Stroke* s, float density)
{
    bool ret21;
    ::g::Fuse::Drawing::PolygonFiller* strokeRenderer;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_strokeRenderers), s, (void**)(&strokeRenderer), &ret21), ret21))
    {
        ::g::Uno::Float2 widthOffset = uPtr(s)->GetDeviceAdjusted(density);
        ::g::Fuse::Drawing::Polygon* strokePolygon = uPtr(uPtr(_geometry)->ToPolygon(_fillRule, _preScale))->Stroke(::g::Uno::Math::Max1(0.0f, widthOffset.Item(0)), widthOffset.Item(1), s->LineCap(), s->LineCap());
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_strokeRenderers), s, strokeRenderer = ::g::Fuse::Drawing::PolygonFiller::New1(strokePolygon, _antialiasing, density));
    }

    return strokeRenderer;
}

// public bool get_HasFills() [instance] :564
bool PathGeometryRenderer::HasFills()
{
    return (_fills != NULL) && (uPtr(_fills)->Count() > 0);
}

// public bool get_HasStrokes() [instance] :650
bool PathGeometryRenderer::HasStrokes()
{
    return (_strokes != NULL) && (uPtr(_strokes)->Count() > 0);
}

// internal Uno.Rect get_InnerBounds() [instance] :778
::g::Uno::Rect PathGeometryRenderer::InnerBounds()
{
    CalcBounds();
    return _innerBounds;
}

// private void InvalidateStrokeAndFill() [instance] :909
void PathGeometryRenderer::InvalidateStrokeAndFill()
{
    ::g::Fuse::Drawing::Stroke* ret22;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Stroke*>, uStrong< ::g::Fuse::Drawing::PolygonFiller*> > ret23;
    _hasBoundsCache = false;

    if (HasStrokes())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Strokes()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/])); i++)
            OnStrokeChanged((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Strokes()), ::TYPES[60/*Uno.Collections.IList<Fuse.Drawing.Stroke>*/]), uCRef<int>(i), &ret22), ret22));

    if (_strokeRenderers != NULL)
    {
        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Stroke*>, uStrong< ::g::Fuse::Drawing::PolygonFiller*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_strokeRenderers), &ret23), ret23); enum4.MoveNext(::TYPES[61/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Drawing::Stroke*>, uStrong< ::g::Fuse::Drawing::PolygonFiller*> > p = enum4.Current(::TYPES[61/*Uno.Collections.Dictionary<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>.Enumerator*/]);
            uPtr(p.Value(::TYPES[62/*Uno.Collections.KeyValuePair<Fuse.Drawing.Stroke, Fuse.Drawing.PolygonFiller>*/]))->Dispose();
        }

        _strokeRenderers = NULL;
    }

    if (_fillRenderer != NULL)
    {
        uPtr(_fillRenderer)->Dispose();
        _fillRenderer = NULL;
    }

    InvalidateVisual();
}

// private void InvalidateVisual() [instance] :933
void PathGeometryRenderer::InvalidateVisual()
{
    if (::g::Uno::Delegate::op_Inequality(VisualInvalidated1, NULL))
        uPtr(VisualInvalidated1)->InvokeVoid();
}

// private void OnFillAdded(Fuse.Drawing.Brush f) [instance] :567
void PathGeometryRenderer::OnFillAdded(::g::Fuse::Drawing::Brush* f)
{
    if (uIs(f, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))->add_ShadingChanged(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)PathGeometryRenderer__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) [instance] :576
void PathGeometryRenderer::OnFillRemoved(::g::Fuse::Drawing::Brush* f)
{
    if (uIs(f, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))->remove_ShadingChanged(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)PathGeometryRenderer__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnShadingChanged() [instance] :894
void PathGeometryRenderer::OnShadingChanged()
{
    InvalidateVisual();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) [instance] :653
void PathGeometryRenderer::OnStrokeAdded(::g::Fuse::Drawing::Stroke* s)
{
    uPtr(s)->add_ShadingChanged(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)PathGeometryRenderer__OnShadingChanged_fn, this));
    s->add_StrokeChanged(uDelegate::New(::TYPES[63/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)PathGeometryRenderer__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) [instance] :674
void PathGeometryRenderer::OnStrokeChanged(::g::Fuse::Drawing::Stroke* s)
{
    bool ret24;
    bool ret25;

    if (_strokeRenderers != NULL)
    {
        ::g::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_strokeRenderers), s, (void**)(&strokeRenderer), &ret24), ret24))
        {
            uPtr(strokeRenderer)->Dispose();
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_strokeRenderers), s, &ret25);
        }
    }

    InvalidateVisual();
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) [instance] :661
void PathGeometryRenderer::OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s)
{
    uPtr(s)->remove_ShadingChanged(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)PathGeometryRenderer__OnShadingChanged_fn, this));
    s->remove_StrokeChanged(uDelegate::New(::TYPES[63/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)PathGeometryRenderer__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// public float2 get_PreScale() [instance] :876
::g::Uno::Float2 PathGeometryRenderer::PreScale()
{
    return _preScale;
}

// public void set_PreScale(float2 value) [instance] :877
void PathGeometryRenderer::PreScale(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2::op_Inequality(_preScale, value))
    {
        _preScale = value;
        InvalidateStrokeAndFill();
    }
}

// public void SoftDispose() [instance] :990
void PathGeometryRenderer::SoftDispose()
{
    ::g::Fuse::Drawing::Stroke* ret26;
    bool ret27;

    if (_fillRenderer != NULL)
    {
        uPtr(_fillRenderer)->Dispose();
        _fillRenderer = NULL;
    }

    if (_strokeRenderers != NULL)
    {
        for (uObject* enum7 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Strokes()), ::TYPES[22/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[57/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum7), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum7), ::TYPES[54/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret26), ret26);
            ::g::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_strokeRenderers), s, (void**)(&strokeRenderer), &ret27), ret27))
                uPtr(strokeRenderer)->Dispose();
        }

        uPtr(_strokeRenderers)->Clear();
        _strokeRenderers = NULL;
    }
}

// internal float4 get_StrokePadding() [instance] :787
::g::Uno::Float4 PathGeometryRenderer::StrokePadding()
{
    CalcBounds();
    return _strokePadding;
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :645
uObject* PathGeometryRenderer::Strokes()
{
    ::g::Uno::Collections::ObservableList* ind12;
    return (uObject*)(ind12 = _strokes, ((ind12 != NULL) ? ind12 : (::g::Uno::Collections::ObservableList*)(_strokes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[65/*Uno.Collections.ObservableList<Fuse.Drawing.Stroke>*/], uDelegate::New(::TYPES[63/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)PathGeometryRenderer__OnStrokeAdded_fn, this), uDelegate::New(::TYPES[63/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)PathGeometryRenderer__OnStrokeRemoved_fn, this))))));
}

// private void UpdateAa() [instance] :899
void PathGeometryRenderer::UpdateAa()
{
    if (_cachedAntialiasing == Antialiasing())
        return;

    _cachedAntialiasing = Antialiasing();
    InvalidateStrokeAndFill();
}

// public generated void add_VisualInvalidated(Uno.Action value) [instance] :845
void PathGeometryRenderer::add_VisualInvalidated(uDelegate* value)
{
    VisualInvalidated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(VisualInvalidated1, value), ::TYPES[34/*Uno.Action*/]);
}

// public generated void remove_VisualInvalidated(Uno.Action value) [instance] :845
void PathGeometryRenderer::remove_VisualInvalidated(uDelegate* value)
{
    VisualInvalidated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(VisualInvalidated1, value), ::TYPES[34/*Uno.Action*/]);
}

// public PathGeometryRenderer New() [static] :887
PathGeometryRenderer* PathGeometryRenderer::New1()
{
    PathGeometryRenderer* obj13 = (PathGeometryRenderer*)uNew(PathGeometryRenderer_typeof());
    obj13->ctor_();
    return obj13;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno(158)
// -------------------------------------------------------------------

// public partial sealed class Polygon :158
// {
uType* Polygon_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Polygon);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Polygon", options);
    ::TYPES[49] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[66] = ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[67] = ::g::Fuse::Drawing::Contour_typeof()->Array();
    ::TYPES[68] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[69] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[70] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Tesselation::Face_typeof());
    ::TYPES[71] = ::g::Fuse::Drawing::Tesselation::Mesh_typeof();
    ::TYPES[72] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof());
    ::TYPES[73] = ::g::Fuse::Drawing::Tesselation::Face_typeof();
    ::TYPES[74] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof());
    ::TYPES[75] = ::g::Fuse::Drawing::Tesselation::Vertex_typeof();
    ::TYPES[76] = ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof();
    ::TYPES[77] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[26] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[78] = ::g::Fuse::Drawing::Contour_typeof();
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[79] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Float2_typeof());
    ::TYPES[20] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[80] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::PolygonDrawable_typeof());
    ::TYPES[81] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::PolygonDrawable_typeof());
    ::TYPES[82] = ::g::Fuse::Drawing::PolygonDrawable_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Drawing::Contour_typeof()->Array(), offsetof(::g::Fuse::Drawing::Polygon, _boundaryContours), 0,
        ::g::Fuse::Drawing::Cache_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof()), offsetof(::g::Fuse::Drawing::Polygon, _contours), 0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Drawing::Polygon, _windingRule), 0);
    return type;
}

// public Polygon(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :494
void Polygon__ctor_1_fn(Polygon* __this, uObject* contours)
{
    __this->ctor_1(contours);
}

// public Polygon(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :498
void Polygon__ctor_3_fn(Polygon* __this, uDelegate* windingRule, uObject* contours)
{
    __this->ctor_3(windingRule, contours);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> get_Contours() :491
void Polygon__get_Contours_fn(Polygon* __this, uObject** __retval)
{
    *__retval = __this->Contours();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> GetBoundaryContours() :558
void Polygon__GetBoundaryContours_fn(Polygon* __this, uObject** __retval)
{
    *__retval = __this->GetBoundaryContours();
}

// internal float2[] GetTriangleVertices() :386
void Polygon__GetTriangleVertices_fn(Polygon* __this, uArray** __retval)
{
    *__retval = __this->GetTriangleVertices();
}

// public bool get_IsDegenerate() :577
void Polygon__get_IsDegenerate_fn(Polygon* __this, bool* __retval)
{
    *__retval = __this->IsDegenerate();
}

// public Polygon New(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :494
void Polygon__New2_fn(uObject* contours, Polygon** __retval)
{
    *__retval = Polygon::New2(contours);
}

// public Polygon New(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :498
void Polygon__New4_fn(uDelegate* windingRule, uObject* contours, Polygon** __retval)
{
    *__retval = Polygon::New4(windingRule, contours);
}

// public Fuse.Drawing.Polygon Stroke(float Width, [float Offset], [Fuse.Drawing.LineCap StartCap], [Fuse.Drawing.LineCap EndCap]) :256
void Polygon__Stroke_fn(Polygon* __this, float* Width, float* Offset, int* StartCap, int* EndCap, Polygon** __retval)
{
    *__retval = __this->Stroke(*Width, *Offset, *StartCap, *EndCap);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.PolygonDrawable> Triangulate() :369
void Polygon__Triangulate_fn(Polygon* __this, uObject** __retval)
{
    *__retval = __this->Triangulate();
}

// public Polygon(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [instance] :494
void Polygon::ctor_1(uObject* contours)
{
    ctor_3(uDelegate::New(::TYPES[49/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn), contours);
}

// public Polygon(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [instance] :498
void Polygon::ctor_3(uDelegate* windingRule, uObject* contours)
{
    _windingRule = windingRule;
    _contours = ((::g::Fuse::Drawing::Cache*)::g::Fuse::Drawing::Cache::New2(::TYPES[66/*Fuse.Drawing.Cache<Fuse.Drawing.Contour>*/], contours));
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> get_Contours() [instance] :491
uObject* Polygon::Contours()
{
    return (uObject*)uPtr(_contours)->Items();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> GetBoundaryContours() [instance] :558
uObject* Polygon::GetBoundaryContours()
{
    if (IsDegenerate())
        _boundaryContours = uArray::New(::TYPES[67/*Fuse.Drawing.Contour[]*/], 0);

    if (_boundaryContours == NULL)
    {
        ::g::Fuse::Drawing::Tesselation::Mesh* mesh = ::g::Fuse::Drawing::Tesselation::MeshBuilder::CreateFromContours(Contours());
        uPtr(mesh)->ComputeInterior(_windingRule);
        mesh->SetWindingNumber(1);
        mesh->DeleteInternalEdges();
        _boundaryContours = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[68/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.Contour>*/], mesh->GetContours()));
        mesh->Dispose();
    }

    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[69/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Contour>*/], _boundaryContours));
}

// internal float2[] GetTriangleVertices() [instance] :386
uArray* Polygon::GetTriangleVertices()
{
    ::g::Fuse::Drawing::Tesselation::Face* ret12;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret13;
    ::g::Fuse::Drawing::Tesselation::Mesh* mesh = ::g::Fuse::Drawing::Tesselation::MeshBuilder::CreateFromContours(Contours());
    uPtr(mesh)->ComputeInterior(_windingRule);
    mesh->TessellateInterior();
    uArray* vertices = uArray::New(::TYPES[4/*float2[]*/], ::g::Uno::Collections::EnumerableExtensions::Count(::TYPES[70/*Uno.Collections.EnumerableExtensions.Count<Fuse.Drawing.Tesselation.Face>*/], mesh->InteriorFaces()) * 3);
    int v = 0;

    for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(mesh->InteriorFaces()), ::TYPES[22/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[73/*Fuse.Drawing.Tesselation.Face*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Drawing::Tesselation::Face* face = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[72/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Face>*/]), &ret12), ret12);

        for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(face)->EdgeLoop()), ::TYPES[22/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[76/*Fuse.Drawing.Tesselation.HalfEdge*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Tesselation::HalfEdge* vert = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[74/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret13), ret13);
            uPtr(vertices)->Item< ::g::Uno::Float2>(v++) = uPtr(uPtr(vert)->Origin())->Coords();
        }
    }

    mesh->Dispose();
    return vertices;
}

// public bool get_IsDegenerate() [instance] :577
bool Polygon::IsDegenerate()
{
    return uPtr(_contours)->Length() < 1;
}

// public Fuse.Drawing.Polygon Stroke(float Width, [float Offset], [Fuse.Drawing.LineCap StartCap], [Fuse.Drawing.LineCap EndCap]) [instance] :256
Polygon* Polygon::Stroke(float Width, float Offset, int StartCap, int EndCap)
{
    ::g::Fuse::Drawing::Contour* ret14;
    ::g::Uno::Float2 ret15;
    float _width = Width;
    float _offset = Offset - (Width * 0.5f);
    ::g::Uno::Collections::List* strokeContours = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[77/*Uno.Collections.List<Fuse.Drawing.Contour>*/]);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Contours()), ::TYPES[46/*Uno.Collections.IEnumerable<Fuse.Drawing.Contour>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Drawing::Contour* contour = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[26/*Uno.Collections.IEnumerator<Fuse.Drawing.Contour>*/]), &ret14), ret14);
        int vertexCount = uPtr(contour)->VertexCount();

        if (vertexCount < 2)
            continue;

        ::g::Uno::Collections::List* outer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<float2>*/]);
        ::g::Uno::Collections::List* inner = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<float2>*/]);
        float dist = 0.0f;
        ::g::Uno::Float2 startInner = ::g::Uno::Float2__New1(0.0f);
        ::g::Uno::Float2 startOuter = ::g::Uno::Float2__New1(0.0f);
        ::g::Uno::Float2 endInner = ::g::Uno::Float2__New1(0.0f);
        ::g::Uno::Float2 endOuter = ::g::Uno::Float2__New1(0.0f);

        for (int i = 0; i < vertexCount; i++)
        {
            ::g::Uno::Float2 last = uPtr(contour)->Item(i - 1);
            ::g::Uno::Float2 current = contour->Item(i);
            ::g::Uno::Float2 next = contour->Item(i + 1);
            ::g::Uno::Float2 lv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(current, last));
            ::g::Uno::Float2 lvn = ::g::Uno::Float2__New2(-lv.Y, lv.X);
            ::g::Uno::Float2 rv = ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(next, current));
            ::g::Uno::Float2 rvn = ::g::Uno::Float2__New2(-rv.Y, rv.X);
            float len = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(last, current));

            if (i > 0)
                dist = dist + len;

            ::g::Uno::Float2 outerV;
            ::g::Uno::Float2 innerV;

            if (!contour->IsClosed() && (i == 0))
            {
                startInner = innerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(rvn, _offset));
                startOuter = outerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(rvn, _width + _offset));
            }
            else if (!contour->IsClosed() && (i == (vertexCount - 1)))
            {
                endInner = innerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(lvn, _offset));
                endOuter = outerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(lvn, _width + _offset));
            }
            else
            {
                ::g::Uno::Float2 bn0 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(rvn, lvn), 2.0f);
                ::g::Uno::Float2 bisectNormal = ((::g::Uno::Math::Abs1(bn0.X) + ::g::Uno::Math::Abs1(bn0.Y)) < 1e-05f) ? lvn : ::g::Uno::Vector::Normalize(bn0);
                float angle = ::g::Uno::Geometry::Collision2D::AngleBetween(lv, bisectNormal);

                if (((angle < 0.1f) || (angle > 3.04159284f)) || (len < 1.0f))
                {
                    outerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _width + _offset));
                    innerV = ::g::Uno::Float2__op_Addition2(current, ::g::Uno::Float2__op_Multiply1(bisectNormal, _offset));
                }
                else
                {
                    ::g::Uno::Float2 lvo = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _width + _offset));
                    ::g::Uno::Float2 lvi = ::g::Uno::Float2__op_Addition2(last, ::g::Uno::Float2__op_Multiply1(lvn, _offset));
                    outerV = ::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvo, lv, current, bisectNormal);
                    innerV = ::g::Uno::Geometry::Collision2D::LineIntersectionPointVector(lvi, lv, current, bisectNormal);
                }
            }

            ::g::Uno::Collections::List__Add_fn(uPtr(outer), uCRef(outerV));
            ::g::Uno::Collections::List__Add_fn(uPtr(inner), uCRef(innerV));
        }

        uArray* innerRev = uArray::New(::TYPES[4/*float2[]*/], inner->Count());

        for (int i1 = 0; i1 < inner->Count(); ++i1)
            innerRev->Item< ::g::Uno::Float2>(i1) = (::g::Uno::Collections::List__get_Item_fn(inner, uCRef<int>((inner->Count() - i1) - 1), &ret15), ret15);

        if (contour->IsClosed())
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(strokeContours), ::g::Fuse::Drawing::Contour::New2(true, (uObject*)outer));
            ::g::Uno::Collections::List__Add_fn(strokeContours, ::g::Fuse::Drawing::Contour::New1(true, innerRev));
        }
        else
        {
            uObject* start = uPtr(::g::Fuse::Drawing::LineCapImpl::Create1(StartCap))->Create(startInner, startOuter);
            uObject* end = uPtr(::g::Fuse::Drawing::LineCapImpl::Create1(EndCap))->Create(endOuter, endInner);
            ::g::Uno::Collections::List__Add_fn(uPtr(strokeContours), ::g::Fuse::Drawing::Contour::New2(true, (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[79/*Uno.Collections.EnumerableExtensions.Union<float2>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[79/*Uno.Collections.EnumerableExtensions.Union<float2>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[79/*Uno.Collections.EnumerableExtensions.Union<float2>*/], start, (uObject*)outer), end), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[20/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], innerRev)))));
        }
    }

    return Polygon::New2((uObject*)strokeContours);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.PolygonDrawable> Triangulate() [instance] :369
uObject* Polygon::Triangulate()
{
    uArray* verts = GetTriangleVertices();

    if (uPtr(verts)->Length() < 3)
        return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[81/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.PolygonDrawable>*/], uArray::New(::TYPES[82/*Fuse.Drawing.PolygonDrawable[]*/], 0)));

    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[81/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.PolygonDrawable>*/], uArray::Init< ::g::Fuse::Drawing::PolygonDrawable*>(::TYPES[82/*Fuse.Drawing.PolygonDrawable[]*/], 1, (::g::Fuse::Drawing::PolygonDrawable*)::g::Fuse::Drawing::PolygonDrawable::New1(verts))));
}

// public Polygon New(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [static] :494
Polygon* Polygon::New2(uObject* contours)
{
    Polygon* obj6 = (Polygon*)uNew(Polygon_typeof());
    obj6->ctor_1(contours);
    return obj6;
}

// public Polygon New(Uno.Predicate<int> windingRule, Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [static] :498
Polygon* Polygon::New4(uDelegate* windingRule, uObject* contours)
{
    Polygon* obj7 = (Polygon*)uNew(Polygon_typeof());
    obj7->ctor_3(windingRule, contours);
    return obj7;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno(401)
// -------------------------------------------------------------------

// public sealed class PolygonDrawable :401
// {
uType* PolygonDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PolygonDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.PolygonDrawable", options);
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[8] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::RendererContext_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[6] = ::g::Uno::Float4_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::ImageFill__DrawParams_typeof();
    ::TYPES[13] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[14] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[15] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[16] = ::g::Fuse_Drawing_Polygons_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _draw_1834ada4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _draw_2b0b75), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _draw_5d8396da), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _vbo), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Drawing::PolygonDrawable, _vertices), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendDstAlpha_303e4fd3_6_7_8), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendDstRgb_303e4fd3_6_5_7), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendSrcAlpha_303e4fd3_6_6_6), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::PolygonDrawable, Draw_BlendSrcRgb_303e4fd3_6_4_5), 0);
    return type;
}

// internal PolygonDrawable(float2[] vertices) :406
void PolygonDrawable__ctor__fn(PolygonDrawable* __this, uArray* vertices)
{
    __this->ctor_(vertices);
}

// public Uno.Rect CalcBounds() :446
void PolygonDrawable__CalcBounds_fn(PolygonDrawable* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcBounds();
}

// public void Dispose() :440
void PolygonDrawable__Dispose_fn(PolygonDrawable* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) :424
void PolygonDrawable__Draw_fn(PolygonDrawable* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw(f, ctx);
}

// private generated void free_DrawCalls() :401
void PolygonDrawable__free_DrawCalls_fn(PolygonDrawable* __this)
{
    __this->free_DrawCalls();
}

// private generated void init_DrawCalls() :401
void PolygonDrawable__init_DrawCalls_fn(PolygonDrawable* __this)
{
    __this->init_DrawCalls();
}

// internal bool Intersects(float2 p) :414
void PolygonDrawable__Intersects_fn(PolygonDrawable* __this, ::g::Uno::Float2* p, bool* __retval)
{
    *__retval = __this->Intersects(*p);
}

// internal PolygonDrawable New(float2[] vertices) :406
void PolygonDrawable__New1_fn(uArray* vertices, PolygonDrawable** __retval)
{
    *__retval = PolygonDrawable::New1(vertices);
}

// internal PolygonDrawable(float2[] vertices) [instance] :406
void PolygonDrawable::ctor_(uArray* vertices)
{
    _vertices = vertices;
    _vbo = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(vertices), 0);
    init_DrawCalls();
}

// public Uno.Rect CalcBounds() [instance] :446
::g::Uno::Rect PolygonDrawable::CalcBounds()
{
    uArray* array1;
    int index2;
    int length3;

    if (uPtr(_vertices)->Length() == 0)
        return ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    ::g::Uno::Float2 min = uPtr(_vertices)->Item< ::g::Uno::Float2>(0);
    ::g::Uno::Float2 max = uPtr(_vertices)->Item< ::g::Uno::Float2>(0);

    for (array1 = _vertices, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Uno::Float2 v = uPtr(array1)->Item< ::g::Uno::Float2>(index2);
        min = ::g::Uno::Math::Min3(min, v);
        max = ::g::Uno::Math::Max3(max, v);
    }

    return ::g::Uno::Rect__New1(min.X, min.Y, max.X, max.Y);
}

// public void Dispose() [instance] :440
void PolygonDrawable::Dispose()
{
    free_DrawCalls();
    uPtr(_vbo)->Dispose();
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) [instance] :424
void PolygonDrawable::Draw(::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;

    if (uIs(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))
    {
        _draw_1834ada4.BlendEnabled(true);
        _draw_1834ada4.DepthTestEnabled(false);
        _draw_1834ada4.CullFace(uPtr(ctx)->CullFace());
        _draw_1834ada4.PolygonWinding(0);
        _draw_1834ada4.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_1834ada4.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_1834ada4.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_1834ada4.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_1834ada4.Use();
        _draw_1834ada4.Attrib1(0, 2, _vbo, 8, 0);
        _draw_1834ada4.Uniform12(1, ctx->Transform());
        _draw_1834ada4.Uniform10(2, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1((ind4 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity()), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color().W * uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(f, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Opacity()));
        _draw_1834ada4.DrawArrays(uPtr(_vertices)->Length());
    }
    else if (uIs(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Graphics::Texture2D* Texture_2b0b75_8_6_1 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->GetTexture();
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_2b0b75_8_5_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(NULL, uPtr(ctx)->CanvasSize());
        _draw_2b0b75.BlendEnabled(true);
        _draw_2b0b75.DepthTestEnabled(false);
        _draw_2b0b75.CullFace(uPtr(ctx)->CullFace());
        _draw_2b0b75.PolygonWinding(0);
        _draw_2b0b75.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_2b0b75.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_2b0b75.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_2b0b75.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_2b0b75.Const(0, Texture_2b0b75_8_6_1 == NULL);
        _draw_2b0b75.Use();
        _draw_2b0b75.Attrib1(1, 2, _vbo, 8, 0);
        _draw_2b0b75.Uniform12(2, ctx->Transform());
        _draw_2b0b75.Uniform2(3, ctx->CanvasSize());
        _draw_2b0b75.Uniform2(4, DP_2b0b75_8_5_4.Origin);
        _draw_2b0b75.Uniform2(5, DP_2b0b75_8_5_4.Size);
        _draw_2b0b75.Uniform2(6, ::g::Uno::Float2__op_Subtraction2((ind5 = DP_2b0b75_8_5_4.UVClip, ::g::Uno::Float2__New2(ind5.Z, ind5.W)), (ind6 = DP_2b0b75_8_5_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y))));
        _draw_2b0b75.Uniform2(7, (ind7 = DP_2b0b75_8_5_4.UVClip, ::g::Uno::Float2__New2(ind7.X, ind7.Y)));
        _draw_2b0b75.Uniform10(8, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_2b0b75.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(f, ::TYPES[11/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_2b0b75.Sampler2(10, Texture_2b0b75_8_6_1);
        _draw_2b0b75.DrawArrays(uPtr(_vertices)->Length());
    }
    else if (uIs(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float2 angleSlope_5d8396da_8_18_3 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        float angleLen_5d8396da_8_17_4 = ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(ctx)->CanvasSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        _draw_5d8396da.BlendEnabled(true);
        _draw_5d8396da.DepthTestEnabled(false);
        _draw_5d8396da.CullFace(uPtr(ctx)->CullFace());
        _draw_5d8396da.PolygonWinding(0);
        _draw_5d8396da.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_5d8396da.Use();
        _draw_5d8396da.Attrib1(0, 2, _vbo, 8, 0);
        _draw_5d8396da.Uniform12(1, ctx->Transform());
        _draw_5d8396da.Uniform2(2, ctx->CanvasSize());
        _draw_5d8396da.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(ctx->CanvasSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_5d8396da_8_18_3, angleLen_5d8396da_8_17_4), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), ctx->CanvasSize()));
        _draw_5d8396da.Uniform2(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_5d8396da.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_5d8396da.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_5d8396da_8_18_3 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_5d8396da.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_5d8396da_8_17_4 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), ctx->CanvasSize())));
        _draw_5d8396da.Sampler2(8, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(f, ::TYPES[13/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
        _draw_5d8396da.DrawArrays(uPtr(_vertices)->Length());
    }
    else if (uIs(f, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]))
    {
        _draw_1834ada4.BlendEnabled(true);
        _draw_1834ada4.DepthTestEnabled(false);
        _draw_1834ada4.CullFace(uPtr(ctx)->CullFace());
        _draw_1834ada4.PolygonWinding(0);
        _draw_1834ada4.BlendSrcRgb(Draw_BlendSrcRgb_303e4fd3_6_4_5);
        _draw_1834ada4.BlendSrcAlpha(Draw_BlendSrcAlpha_303e4fd3_6_6_6);
        _draw_1834ada4.BlendDstRgb(Draw_BlendDstRgb_303e4fd3_6_5_7);
        _draw_1834ada4.BlendDstAlpha(Draw_BlendDstAlpha_303e4fd3_6_7_8);
        _draw_1834ada4.Use();
        _draw_1834ada4.Attrib1(0, 2, _vbo, 8, 0);
        _draw_1834ada4.Uniform12(1, ctx->Transform());
        _draw_1834ada4.Uniform10(2, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind8 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(f, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(f, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(f, ::TYPES[15/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
        _draw_1834ada4.DrawArrays(uPtr(_vertices)->Length());
    }
}

// private generated void free_DrawCalls() [instance] :401
void PolygonDrawable::free_DrawCalls()
{
}

// private generated void init_DrawCalls() [instance] :401
void PolygonDrawable::init_DrawCalls()
{
    Draw_BlendSrcRgb_303e4fd3_6_4_5 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_303e4fd3_6_6_6 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_303e4fd3_6_5_7 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_303e4fd3_6_7_8 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_1834ada4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_Polygons_bundle::PolygonDrawablea9a9dafc());
    _draw_2b0b75 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_Polygons_bundle::PolygonDrawable91a038cd());
    _draw_5d8396da = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Drawing_Polygons_bundle::PolygonDrawableeef8c432());
}

// internal bool Intersects(float2 p) [instance] :414
bool PolygonDrawable::Intersects(::g::Uno::Float2 p)
{
    for (int i = 2; i < uPtr(_vertices)->Length(); i = i + 3)
        if (::g::Uno::Geometry::Collision2D::TriangleContainsPoint(uPtr(_vertices)->Item< ::g::Uno::Float2>(i - 2), uPtr(_vertices)->Item< ::g::Uno::Float2>(i - 1), uPtr(_vertices)->Item< ::g::Uno::Float2>(i), p))
            return true;

    return false;
}

// internal PolygonDrawable New(float2[] vertices) [static] :406
PolygonDrawable* PolygonDrawable::New1(uArray* vertices)
{
    PolygonDrawable* obj9 = (PolygonDrawable*)uNew(PolygonDrawable_typeof());
    obj9->ctor_(vertices);
    return obj9;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Rendering\$.uno(183)
// -----------------------------------------------------------------------------

// public sealed class PolygonFiller :183
// {
PolygonFiller_type* PolygonFiller_typeof()
{
    static uSStrong<PolygonFiller_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PolygonFiller);
    options.TypeSize = sizeof(PolygonFiller_type);
    type = (PolygonFiller_type*)uClassType::New("Fuse.Drawing.PolygonFiller", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))PolygonFiller__Dispose_fn;
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[83] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::Border_typeof());
    ::TYPES[84] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Fuse::Drawing::Contour_typeof(), ::g::Fuse::Drawing::Border_typeof());
    ::TYPES[85] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof(), ::g::Fuse::Drawing::Border_typeof());
    ::TYPES[86] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::PolygonDrawable_typeof());
    ::TYPES[87] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Fuse::Drawing::Border_typeof(), ::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[88] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Border_typeof());
    ::TYPES[89] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Border_typeof());
    ::TYPES[90] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Border_typeof(), ::g::Fuse::Drawing::Contour_typeof());
    ::TYPES[91] = ::g::Fuse::Drawing::Border_typeof()->Array();
    ::TYPES[82] = ::g::Fuse::Drawing::PolygonDrawable_typeof()->Array();
    ::TYPES[92] = ::g::Fuse::Drawing::Border_typeof();
    ::TYPES[93] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Float2_typeof());
    ::TYPES[78] = ::g::Fuse::Drawing::Contour_typeof();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PolygonFiller_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Drawing::Border_typeof()->Array(), offsetof(::g::Fuse::Drawing::PolygonFiller, _antialiasingBorders), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _bounds), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _density), 0,
        ::g::Fuse::Drawing::PolygonDrawable_typeof()->Array(), offsetof(::g::Fuse::Drawing::PolygonFiller, _fills), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _hasBounds), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::PolygonFiller, _px), 0);
    return type;
}

// public PolygonFiller(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) :190
void PolygonFiller__ctor__fn(PolygonFiller* __this, ::g::Fuse::Drawing::Polygon* polygon, int* antialiasing, float* density)
{
    __this->ctor_(polygon, *antialiasing, *density);
}

// public Uno.Rect get_Bounds() :219
void PolygonFiller__get_Bounds_fn(PolygonFiller* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Bounds();
}

// private Uno.Rect CalcBounds() :230
void PolygonFiller__CalcBounds_fn(PolygonFiller* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcBounds();
}

// private Fuse.Drawing.Contour Contour(Fuse.Drawing.Border border) :208
void PolygonFiller__Contour_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Border* border, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->Contour(border);
}

// private Fuse.Drawing.Border CreateBorder(Fuse.Drawing.Contour contour) :210
void PolygonFiller__CreateBorder_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Contour* contour, ::g::Fuse::Drawing::Border** __retval)
{
    *__retval = __this->CreateBorder(contour);
}

// public void Dispose() :262
void PolygonFiller__Dispose_fn(PolygonFiller* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) :251
void PolygonFiller__Draw1_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    __this->Draw1(f, ctx);
}

// public bool Intersects(float2 p) :280
void PolygonFiller__Intersects_fn(PolygonFiller* __this, ::g::Uno::Float2* p, bool* __retval)
{
    *__retval = __this->Intersects(*p);
}

// public PolygonFiller New(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) :190
void PolygonFiller__New1_fn(::g::Fuse::Drawing::Polygon* polygon, int* antialiasing, float* density, PolygonFiller** __retval)
{
    *__retval = PolygonFiller::New1(polygon, *antialiasing, *density);
}

// public PolygonFiller(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) [instance] :190
void PolygonFiller::ctor_(::g::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    _density = density;

    if (false && (antialiasing == 1))
    {
        _px = (1.0f / density);
        uObject* boundaries = uPtr(polygon)->GetBoundaryContours();
        _antialiasingBorders = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[83/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.Border>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[84/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Contour, Fuse.Drawing.Border>*/], boundaries, uDelegate::New(::TYPES[85/*Uno.Func<Fuse.Drawing.Contour, Fuse.Drawing.Border>*/], (void*)PolygonFiller__CreateBorder_fn, this))));
        _fills = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[86/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.PolygonDrawable>*/], ::g::Fuse::Drawing::Polygon::New2((uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[87/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Border, Fuse.Drawing.Contour>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[89/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Border>*/], _antialiasingBorders)), uDelegate::New(::TYPES[90/*Uno.Func<Fuse.Drawing.Border, Fuse.Drawing.Contour>*/], (void*)PolygonFiller__Contour_fn, this)))->Triangulate()));
    }
    else
    {
        _fills = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[86/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.PolygonDrawable>*/], uPtr(polygon)->Triangulate()));
        _antialiasingBorders = uArray::New(::TYPES[91/*Fuse.Drawing.Border[]*/], 0);
    }
}

// public Uno.Rect get_Bounds() [instance] :219
::g::Uno::Rect PolygonFiller::Bounds()
{
    if (_hasBounds)
        return _bounds;

    _bounds = CalcBounds();
    _hasBounds = true;
    return _bounds;
}

// private Uno.Rect CalcBounds() [instance] :230
::g::Uno::Rect PolygonFiller::CalcBounds()
{
    if (uPtr(_fills)->Length() == 0)
        return ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    ::g::Uno::Rect r = uPtr(uPtr(_fills)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(0))->CalcBounds();

    for (int i = 1; i < uPtr(_fills)->Length(); ++i)
        r = ::g::Uno::Rect__Union(r, uPtr(uPtr(_fills)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(i))->CalcBounds());

    return r;
}

// private Fuse.Drawing.Contour Contour(Fuse.Drawing.Border border) [instance] :208
::g::Fuse::Drawing::Contour* PolygonFiller::Contour(::g::Fuse::Drawing::Border* border)
{
    return uPtr(border)->Contour();
}

// private Fuse.Drawing.Border CreateBorder(Fuse.Drawing.Contour contour) [instance] :210
::g::Fuse::Drawing::Border* PolygonFiller::CreateBorder(::g::Fuse::Drawing::Contour* contour)
{
    return ::g::Fuse::Drawing::Border::New1((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[93/*Uno.Collections.EnumerableExtensions.ToArray<float2>*/], uPtr(contour)->Vertices()), _px * 0.5f, -_px);
}

// public void Dispose() [instance] :262
void PolygonFiller::Dispose()
{
    uArray* array8;
    int index9;
    int length10;
    uArray* array11;
    int index12;
    int length13;

    for (array8 = _antialiasingBorders, index9 = 0, length10 = uPtr(array8)->Length(); index9 < length10; ++index9)
    {
        ::g::Fuse::Drawing::Border* border = uPtr(array8)->Strong< ::g::Fuse::Drawing::Border*>(index9);
        uPtr(border)->Dispose();
    }

    for (array11 = _fills, index12 = 0, length13 = uPtr(array11)->Length(); index12 < length13; ++index12)
    {
        ::g::Fuse::Drawing::PolygonDrawable* fill = uPtr(array11)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(index12);
        uPtr(fill)->Dispose();
    }
}

// public void Draw(Fuse.Drawing.Brush f, Fuse.Drawing.RendererContext ctx) [instance] :251
void PolygonFiller::Draw1(::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx)
{
    uArray* array2;
    int index3;
    int length4;
    uArray* array5;
    int index6;
    int length7;

    for (array2 = _antialiasingBorders, index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
    {
        ::g::Fuse::Drawing::Border* aa = uPtr(array2)->Strong< ::g::Fuse::Drawing::Border*>(index3);
        uPtr(aa)->Draw(f, ctx);
    }

    for (array5 = _fills, index6 = 0, length7 = uPtr(array5)->Length(); index6 < length7; ++index6)
    {
        ::g::Fuse::Drawing::PolygonDrawable* fill = uPtr(array5)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(index6);
        uPtr(fill)->Draw(f, ctx);
    }
}

// public bool Intersects(float2 p) [instance] :280
bool PolygonFiller::Intersects(::g::Uno::Float2 p)
{
    uArray* array14;
    int index15;
    int length16;

    for (array14 = _fills, index15 = 0, length16 = uPtr(array14)->Length(); index15 < length16; ++index15)
    {
        ::g::Fuse::Drawing::PolygonDrawable* fill = uPtr(array14)->Strong< ::g::Fuse::Drawing::PolygonDrawable*>(index15);

        if (uPtr(fill)->Intersects(p))
            return true;
    }

    return false;
}

// public PolygonFiller New(Fuse.Drawing.Polygon polygon, Fuse.Drawing.Antialiasing antialiasing, float density) [static] :190
PolygonFiller* PolygonFiller::New1(::g::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    PolygonFiller* obj19 = (PolygonFiller*)uNew(PolygonFiller_typeof());
    obj19->ctor_(polygon, antialiasing, density);
    return obj19;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1418)
// -----------------------------------------------------------------

// internal static class RegularPolygonFactory :1418
// {
uClassType* RegularPolygonFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.RegularPolygonFactory", options);
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    return type;
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Sides, float Radius) :1420
void RegularPolygonFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, int* Sides, float* Radius, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = RegularPolygonFactory::AppendTo(self, *Sides, *Radius);
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Sides, float Radius) [static] :1420
::g::Fuse::Drawing::PathGeometry* RegularPolygonFactory::AppendTo(::g::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    float t = -6.28318548f / (float)Sides;
    ::g::Uno::Float2 c = uPtr(self)->EndPosition();
    ::g::Fuse::Drawing::PathGeometry* g = self->MoveTo(c.X, c.Y - Radius);

    for (int i = 1; i < Sides; i++)
        g = uPtr(g)->LineTo(c.X + (::g::Uno::Math::Sin1(t * (float)i) * Radius), c.Y - (::g::Uno::Math::Cos1(t * (float)i) * Radius));

    g = uPtr(g)->ClosePath();
    return g;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Rendering\$.uno(305)
// -----------------------------------------------------------------------------

// public sealed class RendererContext :305
// {
uType* RendererContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RendererContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.RendererContext", options);
    type->fp_ctor_ = (void*)RendererContext__New1_fn;
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _CanvasSize), 0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _CullFace), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _Density), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Drawing::RendererContext, _Transform), 0);
    return type;
}

// public generated RendererContext() :305
void RendererContext__ctor__fn(RendererContext* __this)
{
    __this->ctor_();
}

// public generated float2 get_CanvasSize() :309
void RendererContext__get_CanvasSize_fn(RendererContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CanvasSize();
}

// public generated void set_CanvasSize(float2 value) :309
void RendererContext__set_CanvasSize_fn(RendererContext* __this, ::g::Uno::Float2* value)
{
    __this->CanvasSize(*value);
}

// public generated Uno.Graphics.PolygonFace get_CullFace() :311
void RendererContext__get_CullFace_fn(RendererContext* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public generated void set_CullFace(Uno.Graphics.PolygonFace value) :311
void RendererContext__set_CullFace_fn(RendererContext* __this, int* value)
{
    __this->CullFace(*value);
}

// public generated float get_Density() :310
void RendererContext__get_Density_fn(RendererContext* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public generated void set_Density(float value) :310
void RendererContext__set_Density_fn(RendererContext* __this, float* value)
{
    __this->Density(*value);
}

// public generated RendererContext New() :305
void RendererContext__New1_fn(RendererContext** __retval)
{
    *__retval = RendererContext::New1();
}

// public generated float4x4 get_Transform() :308
void RendererContext__get_Transform_fn(RendererContext* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Transform();
}

// public generated void set_Transform(float4x4 value) :308
void RendererContext__set_Transform_fn(RendererContext* __this, ::g::Uno::Float4x4* value)
{
    __this->Transform(*value);
}

// public generated RendererContext() [instance] :305
void RendererContext::ctor_()
{
}

// public generated float2 get_CanvasSize() [instance] :309
::g::Uno::Float2 RendererContext::CanvasSize()
{
    return _CanvasSize;
}

// public generated void set_CanvasSize(float2 value) [instance] :309
void RendererContext::CanvasSize(::g::Uno::Float2 value)
{
    _CanvasSize = value;
}

// public generated Uno.Graphics.PolygonFace get_CullFace() [instance] :311
int RendererContext::CullFace()
{
    return _CullFace;
}

// public generated void set_CullFace(Uno.Graphics.PolygonFace value) [instance] :311
void RendererContext::CullFace(int value)
{
    _CullFace = value;
}

// public generated float get_Density() [instance] :310
float RendererContext::Density()
{
    return _Density;
}

// public generated void set_Density(float value) [instance] :310
void RendererContext::Density(float value)
{
    _Density = value;
}

// public generated float4x4 get_Transform() [instance] :308
::g::Uno::Float4x4 RendererContext::Transform()
{
    return _Transform;
}

// public generated void set_Transform(float4x4 value) [instance] :308
void RendererContext::Transform(::g::Uno::Float4x4 value)
{
    _Transform = value;
}

// public generated RendererContext New() [static] :305
RendererContext* RendererContext::New1()
{
    RendererContext* obj1 = (RendererContext*)uNew(RendererContext_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(267)
// ----------------------------------------------------------

// public enum ResampleMode :267
uEnumType* ResampleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.ResampleMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Nearest", 0LL,
        "Linear", 1LL,
        "Mipmap", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\$.uno(91)
// ------------------------------------------------------------------

// internal sealed class RoundCap :91
// {
::g::Fuse::Drawing::LineCapImpl_type* RoundCap_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::LineCapImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(RoundCap);
    options.TypeSize = sizeof(::g::Fuse::Drawing::LineCapImpl_type);
    type = (::g::Fuse::Drawing::LineCapImpl_type*)uClassType::New("Fuse.Drawing.RoundCap", options);
    type->SetBase(::g::Fuse::Drawing::LineCapImpl_typeof());
    type->fp_ctor_ = (void*)RoundCap__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::Drawing::LineCapImpl*, ::g::Uno::Float2*, ::g::Uno::Float2*, uObject**))RoundCap__Create_fn;
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[0] = ::g::Uno::Double_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[20] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof());
    return type;
}

// public generated RoundCap() :91
void RoundCap__ctor_1_fn(RoundCap* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Collections.IEnumerable<float2> Create(float2 from, float2 to) :93
void RoundCap__Create_fn(RoundCap* __this, ::g::Uno::Float2* from, ::g::Uno::Float2* to, uObject** __retval)
{
    ::g::Uno::Float2 from_ = *from;
    ::g::Uno::Float2 to_ = *to;
    int steps = 20;
    uArray* verts = uArray::New(::TYPES[4/*float2[]*/], 18);
    ::g::Uno::Float2 center = ::g::Uno::Math::Lerp2(from_, to_, 0.5f);
    ::g::Uno::Float2 u = ::g::Uno::Float2__op_Subtraction2(from_, center);
    ::g::Uno::Float2 v = ::g::Uno::Float2__New2(u.Y, -u.X);
    ::g::Uno::Float2x2 matrix = ::g::Uno::Float2x2__New2(u, v);

    for (int i = 1; i < 19; i++)
    {
        float f = (float)i / 20.0f;
        float r = (float)((double)f * 3.1415926535897931);
        ::g::Uno::Float2 rainbow = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(r), ::g::Uno::Math::Sin1(r));
        uPtr(verts)->Item< ::g::Uno::Float2>(i - 1) = ::g::Uno::Float2__op_Addition2(center, ::g::Uno::Vector::Transform(rainbow, matrix));
    }

    return *__retval = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[20/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>*/], verts)), void();
}

// public generated RoundCap New() :91
void RoundCap__New1_fn(RoundCap** __retval)
{
    *__retval = RoundCap::New1();
}

// public generated RoundCap() [instance] :91
void RoundCap::ctor_1()
{
    ctor_();
}

// public generated RoundCap New() [static] :91
RoundCap* RoundCap::New1()
{
    RoundCap* obj1 = (RoundCap*)uNew(RoundCap_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1167)
// -----------------------------------------------------------------

// internal sealed class SmoothCurveTo :1167
// {
::g::Fuse::Drawing::PathGeometry_type* SmoothCurveTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SmoothCurveTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.SmoothCurveTo", options);
    type->SetBase(::g::Fuse::Drawing::CurveTo_typeof());
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))SmoothCurveTo__Serialize_fn;
    ::STRINGS[16] = uString::Const("S ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[17] = uString::Const("S");
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[94] = ::g::Fuse::Drawing::CurveTo_typeof();
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    type->SetFields(7);
    return type;
}

// public SmoothCurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) :1171
void SmoothCurveTo__ctor_3_fn(SmoothCurveTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* lastTangent, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position)
{
    __this->ctor_3(prev, *lastPosition, *lastTangent, *controlPointEnd, *position);
}

// public SmoothCurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) :1171
void SmoothCurveTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ::g::Uno::Float2* lastTangent, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, SmoothCurveTo** __retval)
{
    *__retval = SmoothCurveTo::New4(prev, *lastPosition, *lastTangent, *controlPointEnd, *position);
}

// protected internal override sealed string Serialize() :1181
void SmoothCurveTo__Serialize_fn(SmoothCurveTo* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[16/*"S "*/], uBox(::TYPES[3/*float*/], __this->ControlPointEnd().X)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->ControlPointEnd().Y)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->EndPosition().X)), ::STRINGS[6/*" "*/]), uBox(::TYPES[3/*float*/], __this->EndPosition().Y)), void();
}

// public SmoothCurveTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) [instance] :1171
void SmoothCurveTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 lastTangent, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastTangent);
    ::g::Fuse::Drawing::Util::ValidateFloat2(controlPointEnd);
    ::g::Fuse::Drawing::Util::ValidateFloat2(position);
    CurveToCtor(prev, ::g::Uno::Float2__New2(lastPosition.X, lastPosition.Y), ::g::Uno::Float2__op_Addition2(lastPosition, lastTangent), ::g::Uno::Float2__New2(controlPointEnd.X, controlPointEnd.Y), ::g::Uno::Float2__New2(position.X, position.Y));
}

// public SmoothCurveTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float2 lastTangent, float2 controlPointEnd, float2 position) [static] :1171
SmoothCurveTo* SmoothCurveTo::New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, ::g::Uno::Float2 lastTangent, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position)
{
    SmoothCurveTo* obj1 = (SmoothCurveTo*)uNew(SmoothCurveTo_typeof());
    obj1->ctor_3(prev, lastPosition, lastTangent, controlPointEnd, position);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno(309)
// ------------------------------------------------------------------

// public sealed class SolidColor :309
// {
::g::Fuse::Drawing::Brush_type* SolidColor_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(SolidColor);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.SolidColor", options);
    type->SetBase(::g::Fuse::Drawing::DynamicBrush_typeof());
    type->fp_ctor_ = (void*)SolidColor__New1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))SolidColor__get_IsCompletelyTransparent_fn;
    ::TYPES[10] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[6] = ::g::Uno::Float4_typeof();
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::SolidColor, _color), 0);
    return type;
}

// public SolidColor() :336
void SolidColor__ctor_2_fn(SolidColor* __this)
{
    __this->ctor_2();
}

// public float4 get_Color() :315
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :316
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public override sealed bool get_IsCompletelyTransparent() :332
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public SolidColor New() :336
void SolidColor__New1_fn(SolidColor** __retval)
{
    *__retval = SolidColor::New1();
}

// public SolidColor() [instance] :336
void SolidColor::ctor_2()
{
    ctor_1();
    _color = ::g::Uno::Float4__New1(1.0f);
}

// public float4 get_Color() [instance] :315
::g::Uno::Float4 SolidColor::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :316
void SolidColor::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4::op_Inequality(_color, value))
    {
        _color = value;
        OnShadingChanged();
    }
}

// public SolidColor New() [static] :336
SolidColor* SolidColor::New1()
{
    SolidColor* obj1 = (SolidColor*)uNew(SolidColor_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1436)
// -----------------------------------------------------------------

// internal static class StarFactory :1436
// {
uClassType* StarFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.StarFactory", options);
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[29] = ::g::Fuse::Drawing::PathGeometry_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    return type;
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Points, float Radius, float spokeRadius, [float cornerRatio], [float rotation]) :1438
void StarFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, int* Points, float* Radius, float* spokeRadius, float* cornerRatio, float* rotation, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = StarFactory::AppendTo(self, *Points, *Radius, *spokeRadius, *cornerRatio, *rotation);
}

// public static Fuse.Drawing.PathGeometry AppendTo(Fuse.Drawing.PathGeometry self, int Points, float Radius, float spokeRadius, [float cornerRatio], [float rotation]) [static] :1438
::g::Fuse::Drawing::PathGeometry* StarFactory::AppendTo(::g::Fuse::Drawing::PathGeometry* self, int Points, float Radius, float spokeRadius, float cornerRatio, float rotation)
{
    float t = -6.28318548f / (float)(Points * 2);
    ::g::Uno::Float2 c = uPtr(self)->EndPosition();
    ::g::Fuse::Drawing::PathGeometry* g = self;
    int count = (Points * 2) - 1;

    for (int i = 0; i < count; i++)
    {
        ::g::Uno::Float2 radius = ((i % 2) == 0) ? ::g::Uno::Float2__New2(Radius, spokeRadius) : ::g::Uno::Float2__New2(spokeRadius, Radius);
        ::g::Uno::Float2 pa = ::g::Uno::Float2__New2(c.X + (::g::Uno::Math::Sin1((t * (float)i) + rotation) * radius.Item(0)), c.Y - (::g::Uno::Math::Cos1((t * (float)i) + rotation) * radius.Item(0)));
        ::g::Uno::Float2 pb = ::g::Uno::Float2__New2(c.X + (::g::Uno::Math::Sin1((t * (float)(i + 1)) + rotation) * radius.Item(1)), c.Y - (::g::Uno::Math::Cos1((t * (float)(i + 1)) + rotation) * radius.Item(1)));

        if (i == 0)
            g = uPtr(g)->MoveTo1(pa);

        if (cornerRatio > 1e-05f)
        {
            ::g::Uno::Float2 na = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1((t * (float)i) + rotation), ::g::Uno::Math::Sin1((t * (float)i) + rotation));
            ::g::Uno::Float2 nb = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1((t * (float)(i + 1)) + rotation), ::g::Uno::Math::Sin1((t * (float)(i + 1)) + rotation));
            g = uPtr(g)->CurveTo(::g::Uno::Float2__op_Subtraction2(pa, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply1(na, cornerRatio), radius.Item(0))), ::g::Uno::Float2__op_Addition2(pb, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply1(nb, cornerRatio), radius.Item(1))), pb);
        }
        else
            g = uPtr(g)->LineTo1(pb);
    }

    g = uPtr(g)->ClosePath();
    return g;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(144)
// ----------------------------------------------------------

// public abstract class StaticBrush :144
// {
::g::Fuse::Drawing::Brush_type* StaticBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StaticBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.StaticBrush", options);
    type->SetBase(::g::Fuse::Drawing::Brush_typeof());
    type->SetFields(1);
    return type;
}

// protected generated StaticBrush() :144
void StaticBrush__ctor_1_fn(StaticBrush* __this)
{
    __this->ctor_1();
}

// protected generated StaticBrush() [instance] :144
void StaticBrush::ctor_1()
{
    ctor_();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno(347)
// ------------------------------------------------------------------

// public sealed class StaticSolidColor :347
// {
::g::Fuse::Drawing::Brush_type* StaticSolidColor_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StaticSolidColor);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.StaticSolidColor", options);
    type->SetBase(::g::Fuse::Drawing::StaticBrush_typeof());
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))StaticSolidColor__get_IsCompletelyTransparent_fn;
    ::TYPES[55] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[6] = ::g::Uno::Float4_typeof();
    type->SetFields(1,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::StaticSolidColor, _color), 0);
    return type;
}

// public StaticSolidColor(float4 color) :360
void StaticSolidColor__ctor_2_fn(StaticSolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_2(*color);
}

// public float4 get_Color() :354
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public override sealed bool get_IsCompletelyTransparent() :349
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Fuse::Drawing::Brush__get_IsCompletelyTransparent_fn(__this, &ret2), ret2) || (__this->Color().W == 0.0f), void();
}

// public StaticSolidColor New(float4 color) :360
void StaticSolidColor__New1_fn(::g::Uno::Float4* color, StaticSolidColor** __retval)
{
    *__retval = StaticSolidColor::New1(*color);
}

// public StaticSolidColor(float4 color) [instance] :360
void StaticSolidColor::ctor_2(::g::Uno::Float4 color)
{
    ctor_1();
    _color = color;
}

// public float4 get_Color() [instance] :354
::g::Uno::Float4 StaticSolidColor::Color()
{
    return _color;
}

// public StaticSolidColor New(float4 color) [static] :360
StaticSolidColor* StaticSolidColor::New1(::g::Uno::Float4 color)
{
    StaticSolidColor* obj1 = (StaticSolidColor*)uNew(StaticSolidColor_typeof());
    obj1->ctor_2(color);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(297)
// ----------------------------------------------------------

// public sealed class Stroke :297
// {
uType* Stroke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Stroke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Stroke", options);
    type->fp_ctor_ = (void*)Stroke__New1_fn;
    ::TYPES[33] = ::g::Uno::Delegate_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    ::TYPES[63] = ::g::Uno::Action1_typeof()->MakeType(Stroke_typeof());
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::StrokeAdjustment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _adjustment), 0,
        ::g::Fuse::Drawing::StrokeAlignment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _alignment), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _brush), 0,
        ::g::Fuse::Drawing::LineCap_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _lineCap), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _pinCount), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _width), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Drawing::Stroke, ShadingChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(Stroke_typeof()), offsetof(::g::Fuse::Drawing::Stroke, StrokeChanged1), 0);
    return type;
}

// public Stroke() :473
void Stroke__ctor__fn(Stroke* __this)
{
    __this->ctor_();
}

// private float Adjust(float w, float ppi) :423
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->Adjust(*w, *ppi);
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() :348
void Stroke__get_Adjustment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Adjustment();
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) :349
void Stroke__set_Adjustment_fn(Stroke* __this, int* value)
{
    __this->Adjustment(*value);
}

// private float AdjustPosition(float w, float ppi) :400
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->AdjustPosition(*w, *ppi);
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() :363
void Stroke__get_Alignment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) :364
void Stroke__set_Alignment_fn(Stroke* __this, int* value)
{
    __this->Alignment(*value);
}

// public Fuse.Drawing.Brush get_Brush() :303
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Brush();
}

// public void set_Brush(Fuse.Drawing.Brush value) :304
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Brush(value);
}

// public float2 GetDeviceAdjusted(float ppi) :375
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* ppi, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDeviceAdjusted(*ppi);
}

// public bool get_IsPinned() :498
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public Fuse.Drawing.LineCap get_LineCap() :435
void Stroke__get_LineCap_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->LineCap();
}

// public void set_LineCap(Fuse.Drawing.LineCap value) :436
void Stroke__set_LineCap_fn(Stroke* __this, int* value)
{
    __this->LineCap(*value);
}

// public Stroke New() :473
void Stroke__New1_fn(Stroke** __retval)
{
    *__retval = Stroke::New1();
}

// public float get_Offset() :336
void Stroke__get_Offset_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :337
void Stroke__set_Offset_fn(Stroke* __this, float* value)
{
    __this->Offset(*value);
}

// protected void OnPinned() :500
void Stroke__OnPinned_fn(Stroke* __this)
{
    __this->OnPinned();
}

// private void OnShadingChanged() :468
void Stroke__OnShadingChanged_fn(Stroke* __this)
{
    __this->OnShadingChanged();
}

// private void OnStrokeChanged() :460
void Stroke__OnStrokeChanged_fn(Stroke* __this)
{
    __this->OnStrokeChanged();
}

// protected void OnUnpinned() :506
void Stroke__OnUnpinned_fn(Stroke* __this)
{
    __this->OnUnpinned();
}

// public void Pin() :484
void Stroke__Pin_fn(Stroke* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :512
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public generated void add_ShadingChanged(Uno.Action value) :466
void Stroke__add_ShadingChanged_fn(Stroke* __this, uDelegate* value)
{
    __this->add_ShadingChanged(value);
}

// public generated void remove_ShadingChanged(Uno.Action value) :466
void Stroke__remove_ShadingChanged_fn(Stroke* __this, uDelegate* value)
{
    __this->remove_ShadingChanged(value);
}

// public generated void add_StrokeChanged(Uno.Action<Fuse.Drawing.Stroke> value) :458
void Stroke__add_StrokeChanged_fn(Stroke* __this, uDelegate* value)
{
    __this->add_StrokeChanged(value);
}

// public generated void remove_StrokeChanged(Uno.Action<Fuse.Drawing.Stroke> value) :458
void Stroke__remove_StrokeChanged_fn(Stroke* __this, uDelegate* value)
{
    __this->remove_StrokeChanged(value);
}

// public void Unpin() :491
void Stroke__Unpin_fn(Stroke* __this)
{
    __this->Unpin();
}

// public float get_Width() :325
void Stroke__get_Width_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :326
void Stroke__set_Width_fn(Stroke* __this, float* value)
{
    __this->Width(*value);
}

// public Stroke() [instance] :473
void Stroke::ctor_()
{
    _width = 1.0f;
    _adjustment = 2;
    _alignment = 1;
}

// private float Adjust(float w, float ppi) [instance] :423
float Stroke::Adjust(float w, float ppi)
{
    w = AdjustPosition(w, ppi);
    w = ::g::Uno::Math::Max1(w, 1.0f / ppi);
    return w;
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() [instance] :348
int Stroke::Adjustment()
{
    return _adjustment;
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) [instance] :349
void Stroke::Adjustment(int value)
{
    if (_adjustment != value)
    {
        _adjustment = value;
        OnStrokeChanged();
    }
}

// private float AdjustPosition(float w, float ppi) [instance] :400
float Stroke::AdjustPosition(float w, float ppi)
{
    switch (Adjustment())
    {
        case 0:
            return w;
        case 1:
        {
            w = ::g::Uno::Math::Ceil1(w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::g::Uno::Math::Floor1((w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::g::Uno::Math::Floor1(w * ppi) / ppi;
            break;
        }
    }

    return w;
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() [instance] :363
int Stroke::Alignment()
{
    return _alignment;
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) [instance] :364
void Stroke::Alignment(int value)
{
    if (_alignment != value)
    {
        _alignment = value;
        OnStrokeChanged();
    }
}

// public Fuse.Drawing.Brush get_Brush() [instance] :303
::g::Fuse::Drawing::Brush* Stroke::Brush()
{
    return _brush;
}

// public void set_Brush(Fuse.Drawing.Brush value) [instance] :304
void Stroke::Brush(::g::Fuse::Drawing::Brush* value)
{
    if (value == _brush)
        return;

    if (IsPinned())
        uPtr(_brush)->Unpin();

    if (uIs(_brush, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))->remove_ShadingChanged(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)Stroke__OnShadingChanged_fn, this));

    _brush = value;

    if (uIs(_brush, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[10/*Fuse.Drawing.DynamicBrush*/]))->add_ShadingChanged(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)Stroke__OnShadingChanged_fn, this));

    if (IsPinned())
        uPtr(_brush)->Pin();

    OnShadingChanged();
}

// public float2 GetDeviceAdjusted(float ppi) [instance] :375
::g::Uno::Float2 Stroke::GetDeviceAdjusted(float ppi)
{
    float lo = 0.0f;
    float hi = 0.0f;

    switch (Alignment())
    {
        case 2:
        {
            lo = ::g::Uno::Math::Ceil1((_offset - 0.5f) * ppi) / ppi;
            hi = lo + Adjust(_width, ppi);
            break;
        }
        case 1:
        {
            hi = ::g::Uno::Math::Floor1((_offset + 0.5f) * ppi) / ppi;
            lo = hi - Adjust(_width, ppi);
            break;
        }
        case 0:
        {
            lo = AdjustPosition(_offset - (_width / 2.0f), ppi);
            hi = lo + Adjust(_width, ppi);
            break;
        }
    }

    ::g::Uno::Float2 r = ::g::Uno::Float2__New2(hi - lo, (hi + lo) / 2.0f);
    return r;
}

// public bool get_IsPinned() [instance] :498
bool Stroke::IsPinned()
{
    return _pinCount > 0;
}

// public Fuse.Drawing.LineCap get_LineCap() [instance] :435
int Stroke::LineCap()
{
    return _lineCap;
}

// public void set_LineCap(Fuse.Drawing.LineCap value) [instance] :436
void Stroke::LineCap(int value)
{
    if (value == _lineCap)
        return;

    _lineCap = value;
    OnStrokeChanged();
}

// public float get_Offset() [instance] :336
float Stroke::Offset()
{
    return _offset;
}

// public void set_Offset(float value) [instance] :337
void Stroke::Offset(float value)
{
    _offset = value;
    OnStrokeChanged();
}

// protected void OnPinned() [instance] :500
void Stroke::OnPinned()
{
    if (Brush() != NULL)
        uPtr(Brush())->Pin();
}

// private void OnShadingChanged() [instance] :468
void Stroke::OnShadingChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ShadingChanged1, NULL))
        uPtr(ShadingChanged1)->InvokeVoid();
}

// private void OnStrokeChanged() [instance] :460
void Stroke::OnStrokeChanged()
{
    if (::g::Uno::Delegate::op_Inequality(StrokeChanged1, NULL))
        uPtr(StrokeChanged1)->InvokeVoid(this);
}

// protected void OnUnpinned() [instance] :506
void Stroke::OnUnpinned()
{
    if (Brush() != NULL)
        uPtr(Brush())->Unpin();
}

// public void Pin() [instance] :484
void Stroke::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :512
void Stroke::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    if (Brush() != NULL)
        uPtr(Brush())->Prepare(dc, canvasSize);
}

// public generated void add_ShadingChanged(Uno.Action value) [instance] :466
void Stroke::add_ShadingChanged(uDelegate* value)
{
    ShadingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ShadingChanged1, value), ::TYPES[34/*Uno.Action*/]);
}

// public generated void remove_ShadingChanged(Uno.Action value) [instance] :466
void Stroke::remove_ShadingChanged(uDelegate* value)
{
    ShadingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ShadingChanged1, value), ::TYPES[34/*Uno.Action*/]);
}

// public generated void add_StrokeChanged(Uno.Action<Fuse.Drawing.Stroke> value) [instance] :458
void Stroke::add_StrokeChanged(uDelegate* value)
{
    StrokeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StrokeChanged1, value), ::TYPES[63/*Uno.Action<Fuse.Drawing.Stroke>*/]);
}

// public generated void remove_StrokeChanged(Uno.Action<Fuse.Drawing.Stroke> value) [instance] :458
void Stroke::remove_StrokeChanged(uDelegate* value)
{
    StrokeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StrokeChanged1, value), ::TYPES[63/*Uno.Action<Fuse.Drawing.Stroke>*/]);
}

// public void Unpin() [instance] :491
void Stroke::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}

// public float get_Width() [instance] :325
float Stroke::Width()
{
    return _width;
}

// public void set_Width(float value) [instance] :326
void Stroke::Width(float value)
{
    _width = value;
    OnStrokeChanged();
}

// public Stroke New() [static] :473
Stroke* Stroke::New1()
{
    Stroke* obj1 = (Stroke*)uNew(Stroke_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(282)
// ----------------------------------------------------------

// public enum StrokeAdjustment :282
uEnumType* StrokeAdjustment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAdjustment", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "PixelCeil", 1LL,
        "PixelNear", 2LL,
        "PixelFloor", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(290)
// ----------------------------------------------------------

// public enum StrokeAlignment :290
uEnumType* StrokeAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Inside", 1LL,
        "Outside", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(510)
// ----------------------------------------------------------------

// internal sealed class Token :510
// {
uType* Token_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Token);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Token", options);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Token, First), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Token, HasAction), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Token, Last), 0,
        Token_typeof(), offsetof(::g::Fuse::Drawing::Token, Next), 0);
    return type;
}

// public Token(int first, bool hasAction) :519
void Token__ctor__fn(Token* __this, int* first, bool* hasAction)
{
    __this->ctor_(*first, *hasAction);
}

// public Token New(int first, bool hasAction) :519
void Token__New1_fn(int* first, bool* hasAction, Token** __retval)
{
    *__retval = Token::New1(*first, *hasAction);
}

// public Token(int first, bool hasAction) [instance] :519
void Token::ctor_(int first, bool hasAction)
{
    First = first;
    HasAction = hasAction;
}

// public Token New(int first, bool hasAction) [static] :519
Token* Token::New1(int first, bool hasAction)
{
    Token* obj1 = (Token*)uNew(Token_typeof());
    obj1->ctor_(first, hasAction);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1053)
// -----------------------------------------------------------------

// internal sealed class Util :1053
// {
uType* Util_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Util);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Util", options);
    ::STRINGS[18] = uString::Const("NaN in path data!");
    ::STRINGS[19] = uString::Const("Too large path coordinate!");
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    return type;
}

// public static void ValidateFloat(float v) :1055
void Util__ValidateFloat_fn(float* v)
{
    Util::ValidateFloat(*v);
}

// public static void ValidateFloat2(float2 v) :1063
void Util__ValidateFloat2_fn(::g::Uno::Float2* v)
{
    Util::ValidateFloat2(*v);
}

// public static void ValidateFloat(float v) [static] :1055
void Util::ValidateFloat(float v)
{
    if (v != v)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"NaN in path...*/]));

    if (v >= 1e+18f)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Too large p...*/]));
}

// public static void ValidateFloat2(float2 v) [static] :1063
void Util::ValidateFloat2(::g::Uno::Float2 v)
{
    Util::ValidateFloat(v.X);
    Util::ValidateFloat(v.Y);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno(1252)
// -----------------------------------------------------------------

// internal sealed class VerticalLineTo :1252
// {
::g::Fuse::Drawing::PathGeometry_type* VerticalLineTo_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::PathGeometry_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(VerticalLineTo);
    options.TypeSize = sizeof(::g::Fuse::Drawing::PathGeometry_type);
    type = (::g::Fuse::Drawing::PathGeometry_type*)uClassType::New("Fuse.Drawing.VerticalLineTo", options);
    type->SetBase(::g::Fuse::Drawing::LineTo_typeof());
    type->fp_Serialize = (void(*)(::g::Fuse::Drawing::PathGeometry*, uString**))VerticalLineTo__Serialize_fn;
    ::STRINGS[20] = uString::Const("V ");
    ::STRINGS[21] = uString::Const("V");
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::VerticalLineTo, _y), 0);
    return type;
}

// public VerticalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) :1258
void VerticalLineTo__ctor_3_fn(VerticalLineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* y)
{
    __this->ctor_3(prev, *lastPosition, *y);
}

// public VerticalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) :1258
void VerticalLineTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* y, VerticalLineTo** __retval)
{
    *__retval = VerticalLineTo::New4(prev, *lastPosition, *y);
}

// protected internal override sealed string Serialize() :1267
void VerticalLineTo__Serialize_fn(VerticalLineTo* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[20/*"V "*/], uBox(::TYPES[3/*float*/], __this->_y)), void();
}

// public VerticalLineTo(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) [instance] :1258
void VerticalLineTo::ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float y)
{
    ctor_1();
    ::g::Fuse::Drawing::Util::ValidateFloat2(lastPosition);
    ::g::Fuse::Drawing::Util::ValidateFloat(y);
    LineToCtor(prev, lastPosition, ::g::Uno::Float2__New2(lastPosition.X, y));
    _y = y;
}

// public VerticalLineTo New(Fuse.Drawing.PathGeometry prev, float2 lastPosition, float y) [static] :1258
VerticalLineTo* VerticalLineTo::New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float y)
{
    VerticalLineTo* obj1 = (VerticalLineTo*)uNew(VerticalLineTo_typeof());
    obj1->ctor_3(prev, lastPosition, y);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\$.uno(524)
// ----------------------------------------------------------

// public static class WindingRules :524
// {
uClassType* WindingRules_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.WindingRules", options);
    return type;
}

// public static bool NonZero(int n) :530
void WindingRules__NonZero_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::NonZero(*n);
}

// public static bool Odd(int n) :526
void WindingRules__Odd_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::Odd(*n);
}

// public static bool NonZero(int n) [static] :530
bool WindingRules::NonZero(int n)
{
    return n != 0;
}

// public static bool Odd(int n) [static] :526
bool WindingRules::Odd(int n)
{
    return (n & 1) != 0;
}
// }

}}} // ::g::Fuse::Drawing
