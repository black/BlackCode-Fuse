#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Antialiasing.h>
#include <app/Fuse.Drawing.BezierOp.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.ButtCap.h>
#include <app/Fuse.Drawing.Cache__float2.h>
#include <app/Fuse.Drawing.Cache__Fuse_Drawing_Contour.h>
#include <app/Fuse.Drawing.ClosePath.h>
#include <app/Fuse.Drawing.Colors.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.ContourEnumerable.h>
#include <app/Fuse.Drawing.ContourEnumerator.h>
#include <app/Fuse.Drawing.ContourTerminator.h>
#include <app/Fuse.Drawing.CurveTo.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.EllipseFactory.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.HorizontalLineTo.h>
#include <app/Fuse.Drawing.ImageFill.h>
#include <app/Fuse.Drawing.ImageFill_DrawParams.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.LinearGradientDrawable.h>
#include <app/Fuse.Drawing.LineCap.h>
#include <app/Fuse.Drawing.LineCapImpl.h>
#include <app/Fuse.Drawing.LineJoin.h>
#include <app/Fuse.Drawing.LineJoinImpl.h>
#include <app/Fuse.Drawing.LineTo.h>
#include <app/Fuse.Drawing.MiterJoin.h>
#include <app/Fuse.Drawing.MoveTo.h>
#include <app/Fuse.Drawing.NonConsecutiveEnumerable.h>
#include <app/Fuse.Drawing.NonConsecutiveEnumerator.h>
#include <app/Fuse.Drawing.NonConsecutiveExtension.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryParser.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.RectangleFactory.h>
#include <app/Fuse.Drawing.RegularPolygonFactory.h>
#include <app/Fuse.Drawing.RendererContext.h>
#include <app/Fuse.Drawing.ResampleMode.h>
#include <app/Fuse.Drawing.RoundCap.h>
#include <app/Fuse.Drawing.SmoothCurveTo.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StarFactory.h>
#include <app/Fuse.Drawing.StaticBrush.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Drawing.StrokeAdjustment.h>
#include <app/Fuse.Drawing.StrokeAlignment.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Drawing.Token.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Fuse.Drawing.VerticalLineTo.h>
#include <app/Fuse.Drawing.WindingRules.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLClearBufferMask.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_P-6de5e25e.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-1b8a56c1.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fu-c71ae2e8.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Drawing_Strok-d86a258a.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_Dr-20869336.h>
#include <app/Uno.Collections.EmptyEnumerable__float2.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__float3.h>
#include <app/Uno.Collections.IEnumerable__float4.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Collections.IList__float2.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing-1cd47656.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.Collections.List__float3.h>
#include <app/Uno.Collections.List__float4.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Color.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_GradientStop__Fuse_Drawing_GradientStop__int.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Geometry.CubicBezier.h>
#include <app/Uno.Geometry.Triangle2D.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.PolygonWinding.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Math.h>
#include <app/Uno.NotImplementedException.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-9a669574.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-d9fe5c2f.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Antialiasing__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.Antialiasing", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "None", 0LL,
        "Gradient", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BezierOp__uType* BezierOp__typeof()
{
    static ::uStaticStrong<BezierOp__uType*> type;
    if (type != NULL) return type;

    type = (BezierOp__uType*)::uAllocClassType(sizeof(BezierOp__uType), "Fuse.Drawing.BezierOp");

    type->SetFunctions(8,
        ::uNewFunction("_Solve", BezierOp___Solve, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("A", BezierOp__A, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("B", BezierOp__B, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("bezierSpline", BezierOp__bezierSpline, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("C", BezierOp__C, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Determinant", BezierOp__Determinant, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("GetRect", BezierOp__GetRect, 0, true, ::app::Uno::Rect__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("Solve", BezierOp__Solve, 0, true, ::uGetArrayType(::app::Uno::Double__typeof()), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

double BezierOp___Solve(::uStatic* __this, double a_, double b_, double c_, bool s)
{
    return (-b_ + (::app::Uno::Math__Sqrt(NULL, (b_ * b_) - ((4.0 * a_) * c_)) * (double)(s ? 1 : -1))) / (2.0 * a_);
}

double BezierOp__A(::uStatic* __this, double p0, double p1, double p2, double p3)
{
    return (((3.0 * p3) - (9.0 * p2)) + (9.0 * p1)) - (3.0 * p0);
}

double BezierOp__B(::uStatic* __this, double p0, double p1, double p2)
{
    return ((6.0 * p2) - (12.0 * p1)) + (6.0 * p0);
}

double BezierOp__bezierSpline(::uStatic* __this, double p0, double p1, double p2, double p3, double t)
{
    return ((((((p3 - (3.0 * p2)) + (3.0 * p1)) - p0) * ::app::Uno::Math__Pow(NULL, t, 3.0)) + ((((3.0 * p2) - (6.0 * p1)) + (3.0 * p0)) * ::app::Uno::Math__Pow(NULL, t, 2.0))) + (((3.0 * p1) - (3.0 * p0)) * t)) + p0;
}

double BezierOp__C(::uStatic* __this, double p0, double p1)
{
    return (3.0 * p1) - (3.0 * p0);
}

double BezierOp__Determinant(::uStatic* __this, double a, double b, double c)
{
    return ::app::Uno::Math__Pow(NULL, b, 2.0) - ((4.0 * a) * c);
}

::app::Uno::Rect BezierOp__GetRect(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 c1, ::app::Uno::Float2 c2, ::app::Uno::Float2 p2)
{
    double aX = BezierOp__A(NULL, (double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X);
    double bX = BezierOp__B(NULL, (double)p1.X, (double)c1.X, (double)c2.X);
    double cX = BezierOp__C(NULL, (double)p1.X, (double)c1.X);
    double aY = BezierOp__A(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y);
    double bY = BezierOp__B(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y);
    double cY = BezierOp__C(NULL, (double)p1.Y, (double)c1.Y);
    ::uArray* resX = BezierOp__Solve(NULL, aX, bX, cX);
    ::uArray* resY = BezierOp__Solve(NULL, aY, bY, cY);
    ::app::Uno::Float2 min = ::app::Uno::Math__Min_3(NULL, p1, p2);
    ::app::Uno::Float2 max = ::app::Uno::Math__Max_3(NULL, p1, p2);

    for (int index_124 = 0, length_125 = ::uPtr< ::uArray*>(resX)->Length(); index_124 < length_125; ++index_124)
    {
        double e = ::uPtr< ::uArray*>(resX)->Item< double>(index_124);

        if ((e < 0.0) || (e > 1.0))
        {
            continue;
        }

        double x = BezierOp__bezierSpline(NULL, (double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X, e);
        min.X = ::app::Uno::Math__Min_1(NULL, min.X, (float)x);
        max.X = ::app::Uno::Math__Max_1(NULL, max.X, (float)x);
    }

    for (int index_127 = 0, length_128 = ::uPtr< ::uArray*>(resY)->Length(); index_127 < length_128; ++index_127)
    {
        double e = ::uPtr< ::uArray*>(resY)->Item< double>(index_127);

        if ((e < 0.0) || (e > 1.0))
        {
            continue;
        }

        double y = BezierOp__bezierSpline(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y, e);
        min.Y = ::app::Uno::Math__Min_1(NULL, min.Y, (float)y);
        max.Y = ::app::Uno::Math__Max_1(NULL, max.Y, (float)y);
    }

    return ::app::Uno::Rect__New_1(NULL, min.X, min.Y, max.X, max.Y);
}

::uArray* BezierOp__Solve(::uStatic* __this, double a, double b, double c)
{
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    double d = BezierOp__Determinant(NULL, a, b, c);

    if (d < 0.0)
    {
        return (array_129 = ::uNewArray(::app::Uno::Double__typeof(), 0), array_129);
    }

    if (::app::Uno::Math__Abs(NULL, a) < 9.9999997473787516e-06)
    {
        if (::app::Uno::Math__Abs(NULL, b) < 9.9999997473787516e-06)
        {
            return (array_130 = ::uNewArray(::app::Uno::Double__typeof(), 0), array_130);
        }

        array_131 = ::uNewArray(::app::Uno::Double__typeof(), 1);
        ::uPtr< ::uArray*>(array_131)->Item< double>(0) = -c / b;
        return array_131;
    }

    if (d == 0.0)
    {
        array_132 = ::uNewArray(::app::Uno::Double__typeof(), 1);
        ::uPtr< ::uArray*>(array_132)->Item< double>(0) = BezierOp___Solve(NULL, a, b, c, true);
        return array_132;
    }
    else
    {
        return (array_133 = ::uNewArray(::app::Uno::Double__typeof(), 2), ::uPtr< ::uArray*>(array_133)->Item< double>(0) = BezierOp___Solve(NULL, a, b, c, true), ::uPtr< ::uArray*>(array_133)->Item< double>(1) = BezierOp___Solve(NULL, a, b, c, false), array_133);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BlendMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.BlendMode", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Normal", 0LL,
        "Add", 1LL,
        "Screen", 2LL,
        "Multiply", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uString*> BlendModeHelpers___invalidBlendMode;

BlendModeHelpers__uType* BlendModeHelpers__typeof()
{
    static ::uStaticStrong<BlendModeHelpers__uType*> type;
    if (type != NULL) return type;

    type = (BlendModeHelpers__uType*)::uAllocClassType(sizeof(BlendModeHelpers__uType), "Fuse.Drawing.BlendModeHelpers");

    type->SetFields(1,
        ::uNewField("_invalidBlendMode", &BlendModeHelpers___invalidBlendMode, 0, ::app::Uno::String__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("GetDstAlpha", BlendModeHelpers__GetDstAlpha, 0, true, ::app::Uno::Graphics::BlendOperand__typeof(), ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction("GetDstRgb", BlendModeHelpers__GetDstRgb, 0, true, ::app::Uno::Graphics::BlendOperand__typeof(), ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction("GetSrcAlpha", BlendModeHelpers__GetSrcAlpha, 0, true, ::app::Uno::Graphics::BlendOperand__typeof(), ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction("GetSrcRgb", BlendModeHelpers__GetSrcRgb, 0, true, ::app::Uno::Graphics::BlendOperand__typeof(), ::app::Fuse::Drawing::BlendMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void BlendModeHelpers___TypeInit(::uStatic* __this)
{
    BlendModeHelpers___invalidBlendMode = ::uGetConstString("Invalid blend mode");
}

int BlendModeHelpers__GetDstAlpha(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 3;
        }
        case 1:
        {
            return 3;
        }
        case 2:
        {
            return 3;
        }
        case 3:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetDstRgb(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 3;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 5;
        }
        case 3:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetSrcAlpha(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 1;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 1;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetSrcRgb(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 1;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 8;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Border__uType* Border__typeof()
{
    static ::uStaticStrong<Border__uType*> type;
    if (type != NULL) return type;

    type = (Border__uType*)::uAllocClassType(sizeof(Border__uType), "Fuse.Drawing.Border", false, 0, 16, 0);

    type->SetStrongRefs(
        "_contour", offsetof(Border, _contour),
        "_draw_6ce6a1c0._compiledProgram", offsetof(Border, _draw_6ce6a1c0._compiledProgram),
        "_draw_6ce6a1c0._constValues", offsetof(Border, _draw_6ce6a1c0._constValues),
        "_draw_6ce6a1c0._Program", offsetof(Border, _draw_6ce6a1c0._Program),
        "_draw_6d07a1c0._compiledProgram", offsetof(Border, _draw_6d07a1c0._compiledProgram),
        "_draw_6d07a1c0._constValues", offsetof(Border, _draw_6d07a1c0._constValues),
        "_draw_6d07a1c0._Program", offsetof(Border, _draw_6d07a1c0._Program),
        "_draw_6d49a1c0._compiledProgram", offsetof(Border, _draw_6d49a1c0._compiledProgram),
        "_draw_6d49a1c0._constValues", offsetof(Border, _draw_6d49a1c0._constValues),
        "_draw_6d49a1c0._Program", offsetof(Border, _draw_6d49a1c0._Program),
        "_draw_6daca1c0._compiledProgram", offsetof(Border, _draw_6daca1c0._compiledProgram),
        "_draw_6daca1c0._constValues", offsetof(Border, _draw_6daca1c0._constValues),
        "_draw_6daca1c0._Program", offsetof(Border, _draw_6daca1c0._Program),
        "_strokeVertices", offsetof(Border, _strokeVertices),
        "_vbo", offsetof(Border, _vbo),
        "_vertices", offsetof(Border, _vertices));

    type->SetFields(6,
        ::uNewField("_contour", NULL, offsetof(Border, _contour), ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewField("_offset", NULL, offsetof(Border, _offset), ::app::Uno::Float__typeof()),
        ::uNewField("_strokeVertices", NULL, offsetof(Border, _strokeVertices), ::uGetArrayType(::app::Uno::Float4__typeof())),
        ::uNewField("_vbo", NULL, offsetof(Border, _vbo), ::app::Uno::Graphics::VertexBuffer__typeof()),
        ::uNewField("_vertices", NULL, offsetof(Border, _vertices), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewField("_width", NULL, offsetof(Border, _width), ::app::Uno::Float__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("CalculateStrokeVertices", Border__CalculateStrokeVertices, 0, false),
        ::uNewFunctionVoid("Dispose", Border__Dispose, 0, false),
        ::uNewFunctionVoid("Draw", Border__Draw, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewFunction("get_Contour", Border__get_Contour, 0, false, ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewFunction("get_StrokeVertices", Border__get_StrokeVertices, 0, false, ::uGetArrayType(::app::Uno::Float4__typeof())),
        ::uNewFunction("get_VertexCount", Border__get_VertexCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetVertex", Border__GetVertex, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", Border__New_1, 0, true, Border__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof()), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Border___ObjInit(Border* __this, ::uArray* vertices, float offset, float width)
{
    __this->_vertices = vertices;
    __this->_offset = offset;
    __this->_width = width;
    __this->init_DrawCalls();
}

void Border__CalculateStrokeVertices(Border* __this)
{
    if (__this->_strokeVertices != NULL)
    {
        return;
    }

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() < 2)
    {
        __this->_strokeVertices = ::uNewArray(::app::Uno::Float4__typeof(), 0);
        __this->_contour = ::app::Fuse::Drawing::Contour__New_1(NULL, true, ::uNewArray(::app::Uno::Float2__typeof(), 0));
        return;
    }

    ::uArray* vertices = ::uNewArray(::app::Uno::Float4__typeof(), __this->VertexCount() * 2);
    ::uArray* shrinkedContour = ::uNewArray(::app::Uno::Float2__typeof(), __this->VertexCount());
    int v = 0;
    int s = 0;
    float dist = 0.0f;

    for (int i = 0; i < __this->VertexCount(); i++)
    {
        ::app::Uno::Float2 last = __this->GetVertex(i - 1);
        ::app::Uno::Float2 current = __this->GetVertex(i);
        ::app::Uno::Float2 next = __this->GetVertex(i + 1);
        float len = ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, last, current));

        if (i > 0)
        {
            dist = dist + len;
        }

        if (len < 1e-05f)
        {
            continue;
        }

        ::app::Uno::Float2 lv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, current, last));
        ::app::Uno::Float2 rv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, next, current));
        ::app::Uno::Float2 lvn = ::app::Uno::Float2__New_2(NULL, -lv.Y, lv.X);
        ::app::Uno::Float2 rvn = ::app::Uno::Float2__New_2(NULL, -rv.Y, rv.X);
        ::app::Uno::Float2 bn0 = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, rvn, lvn), 2.0f);
        ::app::Uno::Float2 bisectNormal = ((::app::Uno::Math__Abs_1(NULL, bn0.X) + ::app::Uno::Math__Abs_1(NULL, bn0.Y)) < 1e-05f) ? lvn : ::app::Uno::Vector__Normalize(NULL, bn0);
        ::app::Uno::Float4 outer = ::app::Uno::Float4();
        ::app::Uno::Float4 inner = ::app::Uno::Float4();
        float angle = ::app::Uno::Geometry::Collision2D__AngleBetween(NULL, lv, bisectNormal);

        if (((angle < 0.2f) || (angle > 2.94159269f)) || (len < 1.0f))
        {
            ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, bisectNormal, __this->_width + __this->_offset));
            ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, bisectNormal, __this->_offset));
            outer = ::app::Uno::Float4__New_6(NULL, lvo, 0.0f, dist);
            inner = ::app::Uno::Float4__New_6(NULL, lvi, 1.0f, dist);
        }
        else
        {
            ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_1(NULL, lvn, __this->_width + __this->_offset));
            ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_1(NULL, lvn, __this->_offset));
            outer = ::app::Uno::Float4__New_6(NULL, ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvo, lv, current, bisectNormal), 0.0f, dist);
            inner = ::app::Uno::Float4__New_6(NULL, ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvi, lv, current, bisectNormal), 1.0f, dist);
        }

        ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float4>(v++) = outer;
        vertices->Item< ::app::Uno::Float4>(v++) = inner;
        ::uPtr< ::uArray*>(shrinkedContour)->Item< ::app::Uno::Float2>(s++) = ::app::Uno::Float2__New_2(NULL, inner.X, inner.Y);
    }

    __this->_strokeVertices = vertices;
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_3(NULL, vertices), 0);
    __this->_contour = ::app::Fuse::Drawing::Contour__New_1(NULL, true, shrinkedContour);
}

void Border__Dispose(Border* __this)
{
    __this->free_DrawCalls();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Dispose();
}

void Border__Draw(Border* __this, ::app::Fuse::Drawing::Brush* s, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() < 2)
    {
        return;
    }

    if (::uPtr< ::uArray*>(__this->StrokeVertices())->Length() < 4)
    {
        return;
    }

    if (::uIs(s, ::app::Fuse::Drawing::ImageFill__typeof()))
    {
        ::app::Uno::Graphics::Texture2D* Texture_6d49a1c0_8_6_1 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
        ::app::Fuse::Drawing::ImageFill_DrawParams DP_6d49a1c0_8_5_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize());
        {
            __this->_draw_6d49a1c0.BlendEnabled(true);
            __this->_draw_6d49a1c0.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_6d49a1c0.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_6d49a1c0.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_6d49a1c0.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_6d49a1c0.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_6d49a1c0.PrimitiveType(4);
            __this->_draw_6d49a1c0.Const(0, Texture_6d49a1c0_8_6_1 == NULL);
            __this->_draw_6d49a1c0.Use();
            __this->_draw_6d49a1c0.Attrib_1(1, 4, __this->_vbo, 16, 0);
            __this->_draw_6d49a1c0.Uniform_17(2, ctx->Transform());
            __this->_draw_6d49a1c0.Uniform_12(3, ctx->CanvasSize());
            __this->_draw_6d49a1c0.Uniform_12(4, DP_6d49a1c0_8_5_4.Origin);
            __this->_draw_6d49a1c0.Uniform_12(5, DP_6d49a1c0_8_5_4.Size);
            __this->_draw_6d49a1c0.Uniform_12(6, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = DP_6d49a1c0_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_123.Z, ind_123.W)), (ind_124 = DP_6d49a1c0_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))));
            __this->_draw_6d49a1c0.Uniform_12(7, (ind_125 = DP_6d49a1c0_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)));
            __this->_draw_6d49a1c0.Uniform_16(8, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
            __this->_draw_6d49a1c0.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
            __this->_draw_6d49a1c0.Sampler_2(10, Texture_6d49a1c0_8_6_1);
            __this->_draw_6d49a1c0.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        {
            __this->_draw_6ce6a1c0.BlendEnabled(true);
            __this->_draw_6ce6a1c0.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_6ce6a1c0.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_6ce6a1c0.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_6ce6a1c0.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_6ce6a1c0.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_6ce6a1c0.PrimitiveType(4);
            __this->_draw_6ce6a1c0.Use();
            __this->_draw_6ce6a1c0.Attrib_1(0, 4, __this->_vbo, 16, 0);
            __this->_draw_6ce6a1c0.Uniform_17(1, ctx->Transform());
            __this->_draw_6ce6a1c0.Uniform_16(2, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->Color());
            __this->_draw_6ce6a1c0.Uniform_11(3, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
            __this->_draw_6ce6a1c0.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Uno::Float2 angleSlope_6d07a1c0_8_17_3 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        float angleLen_6d07a1c0_8_16_4 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        {
            __this->_draw_6d07a1c0.BlendEnabled(true);
            __this->_draw_6d07a1c0.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_6d07a1c0.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_6d07a1c0.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_6d07a1c0.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_6d07a1c0.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_6d07a1c0.PrimitiveType(4);
            __this->_draw_6d07a1c0.Use();
            __this->_draw_6d07a1c0.Attrib_1(0, 4, __this->_vbo, 16, 0);
            __this->_draw_6d07a1c0.Uniform_17(1, ctx->Transform());
            __this->_draw_6d07a1c0.Uniform_12(2, ctx->CanvasSize());
            __this->_draw_6d07a1c0.Uniform_12(3, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, ctx->CanvasSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_6d07a1c0_8_17_3, angleLen_6d07a1c0_8_16_4), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), ctx->CanvasSize()));
            __this->_draw_6d07a1c0.Uniform_12(4, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
            __this->_draw_6d07a1c0.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_6d07a1c0.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_6d07a1c0_8_17_3 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_6d07a1c0.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_6d07a1c0_8_16_4 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_6d07a1c0.Sampler_2(8, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
            __this->_draw_6d07a1c0.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        {
            __this->_draw_6daca1c0.BlendEnabled(true);
            __this->_draw_6daca1c0.BlendSrcRgb(__this->Draw_BlendSrcRgb_6daca1c0_6_4_7);
            __this->_draw_6daca1c0.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_6daca1c0_6_6_8);
            __this->_draw_6daca1c0.BlendDstRgb(__this->Draw_BlendDstRgb_6daca1c0_6_5_9);
            __this->_draw_6daca1c0.BlendDstAlpha(__this->Draw_BlendDstAlpha_6daca1c0_6_7_10);
            __this->_draw_6daca1c0.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_6daca1c0.PrimitiveType(4);
            __this->_draw_6daca1c0.Use();
            __this->_draw_6daca1c0.Attrib_1(0, 4, __this->_vbo, 16, 0);
            __this->_draw_6daca1c0.Uniform_17(1, ctx->Transform());
            __this->_draw_6daca1c0.Uniform_16(2, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(s, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color());
            __this->_draw_6daca1c0.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
}

void Border__free_DrawCalls(Border* __this)
{
}

::app::Fuse::Drawing::Contour* Border__get_Contour(Border* __this)
{
    __this->CalculateStrokeVertices();
    return __this->_contour;
}

::uArray* Border__get_StrokeVertices(Border* __this)
{
    __this->CalculateStrokeVertices();
    return __this->_strokeVertices;
}

int Border__get_VertexCount(Border* __this)
{
    return ::uPtr< ::uArray*>(__this->_vertices)->Length() + 1;
}

::app::Uno::Float2 Border__GetVertex(Border* __this, int indexWrap)
{
    while (indexWrap < 0)
    {
        indexWrap = indexWrap + ::uPtr< ::uArray*>(__this->_vertices)->Length();
    }

    while (indexWrap >= ::uPtr< ::uArray*>(__this->_vertices)->Length())
    {
        indexWrap = indexWrap - ::uPtr< ::uArray*>(__this->_vertices)->Length();
    }

    return ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(indexWrap);
}

void Border__init_DrawCalls(Border* __this)
{
    __this->Draw_BlendSrcRgb_6daca1c0_6_4_7 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_6daca1c0_6_6_8 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_6daca1c0_6_5_9 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_6daca1c0_6_7_10 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_6d49a1c0 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 76), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_6ce6a1c0 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 77), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_6d07a1c0 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 78), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_6daca1c0 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 79), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Border* Border__New_1(::uStatic* __this, ::uArray* vertices, float offset, float width)
{
    Border* inst = (Border*)::uAllocObject(sizeof(Border), Border__typeof());
    inst->_ObjInit(vertices, offset, width);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Brush__uType* Brush__typeof()
{
    static ::uStaticStrong<Brush__uType*> type;
    if (type != NULL) return type;

    type = (Brush__uType*)::uAllocClassType(sizeof(Brush__uType), "Fuse.Drawing.Brush", false, 0, 0, 0);

    type->__fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent;
    type->__fp_OnPinned = Brush__OnPinned;
    type->__fp_OnPrepare = Brush__OnPrepare;
    type->__fp_OnUnpinned = Brush__OnUnpinned;

    type->SetFields(1,
        ::uNewField("_pinCount", NULL, offsetof(Brush, _pinCount), ::app::Uno::Int__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_IsCompletelyTransparent", type->__fp_get_IsCompletelyTransparent, offsetof(Brush__uType, __fp_get_IsCompletelyTransparent), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsPinned", Brush__get_IsPinned, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnPinned", type->__fp_OnPinned, offsetof(Brush__uType, __fp_OnPinned), false),
        ::uNewFunctionVoid("OnPrepare", type->__fp_OnPrepare, offsetof(Brush__uType, __fp_OnPrepare), false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("OnUnpinned", type->__fp_OnUnpinned, offsetof(Brush__uType, __fp_OnUnpinned), false),
        ::uNewFunctionVoid("Pin", Brush__Pin, 0, false),
        ::uNewFunctionVoid("Prepare", Brush__Prepare, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Unpin", Brush__Unpin, 0, false));

    ::uRegisterType(type);
    return type;
}

void Brush___ObjInit(Brush* __this)
{
}

bool Brush__get_IsCompletelyTransparent(Brush* __this)
{
    return false;
}

bool Brush__get_IsPinned(Brush* __this)
{
    return __this->_pinCount > 0;
}

void Brush__OnPinned(Brush* __this)
{
}

void Brush__OnPrepare(Brush* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
}

void Brush__OnUnpinned(Brush* __this)
{
}

void Brush__Pin(Brush* __this)
{
    __this->_pinCount++;

    if (__this->_pinCount == 1)
    {
        __this->OnPinned();
    }
}

void Brush__Prepare(Brush* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (!__this->IsPinned())
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Warning: Brush is not pinned, preparation invalid"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Drawing\\0.11.3\\$.uno"), 134);
    }

    __this->OnPrepare(dc, canvasSize);
}

void Brush__Unpin(Brush* __this)
{
    __this->_pinCount--;

    if (__this->_pinCount == 0)
    {
        __this->OnUnpinned();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Aqua;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Black;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Blue;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Fuchsia;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Gray;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Green;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Lime;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Maroon;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Navy;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Olive;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Purple;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Red;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Silver;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Teal;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Transparent;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__White;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Yellow;

Brushes__uType* Brushes__typeof()
{
    static ::uStaticStrong<Brushes__uType*> type;
    if (type != NULL) return type;

    type = (Brushes__uType*)::uAllocClassType(sizeof(Brushes__uType), "Fuse.Drawing.Brushes");

    type->SetFields(17,
        ::uNewField("Aqua", &Brushes__Aqua, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Black", &Brushes__Black, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Blue", &Brushes__Blue, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Fuchsia", &Brushes__Fuchsia, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Gray", &Brushes__Gray, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Green", &Brushes__Green, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Lime", &Brushes__Lime, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Maroon", &Brushes__Maroon, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Navy", &Brushes__Navy, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Olive", &Brushes__Olive, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Purple", &Brushes__Purple, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Red", &Brushes__Red, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Silver", &Brushes__Silver, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Teal", &Brushes__Teal, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Transparent", &Brushes__Transparent, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("White", &Brushes__White, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()),
        ::uNewField("Yellow", &Brushes__Yellow, 0, ::app::Fuse::Drawing::StaticSolidColor__typeof()));

    ::uRegisterType(type);
    return type;
}

void Brushes___TypeInit(::uStatic* __this)
{
    Brushes__Transparent = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Black);
    Brushes__Black = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Black);
    Brushes__Silver = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Silver);
    Brushes__Gray = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Gray);
    Brushes__White = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__White);
    Brushes__Maroon = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Maroon);
    Brushes__Red = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Red);
    Brushes__Purple = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Purple);
    Brushes__Fuchsia = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Fuchsia);
    Brushes__Green = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Green);
    Brushes__Lime = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Lime);
    Brushes__Olive = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Olive);
    Brushes__Yellow = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Yellow);
    Brushes__Navy = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Navy);
    Brushes__Blue = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Blue);
    Brushes__Teal = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Teal);
    Brushes__Aqua = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Aqua);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ButtCap__uType* ButtCap__typeof()
{
    static ::uStaticStrong<ButtCap__uType*> type;
    if (type != NULL) return type;

    type = (ButtCap__uType*)::uAllocClassType(sizeof(ButtCap__uType), "Fuse.Drawing.ButtCap", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineCapImpl__typeof());
    type->__fp_Create = (::uObject*(*)(::app::Fuse::Drawing::LineCapImpl*, ::app::Uno::Float2, ::app::Uno::Float2))ButtCap__Create;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ButtCap__New_1, 0, true, ButtCap__typeof()));

    ::uRegisterType(type);
    return type;
}

void ButtCap___ObjInit_1(ButtCap* __this)
{
    ::app::Fuse::Drawing::LineCapImpl___ObjInit(__this);
}

::uObject* ButtCap__Create(ButtCap* __this, ::app::Uno::Float2 from, ::app::Uno::Float2 to)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, ::uNewArray(::app::Uno::Float2__typeof(), 0));
}

ButtCap* ButtCap__New_1(::uStatic* __this)
{
    ButtCap* inst = (ButtCap*)::uAllocObject(sizeof(ButtCap), ButtCap__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClosePath__uType* ClosePath__typeof()
{
    static ::uStaticStrong<ClosePath__uType*> type;
    if (type != NULL) return type;

    type = (ClosePath__uType*)::uAllocClassType(sizeof(ClosePath__uType), "Fuse.Drawing.ClosePath", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::ContourTerminator__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))ClosePath__Serialize;

    type->SetFields(1,
        ::uNewField("_lastPosition", NULL, offsetof(ClosePath, _lastPosition), ::app::Uno::Float2__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ClosePath__New_2, 0, true, ClosePath__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ClosePath___ObjInit_3(ClosePath* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition)
{
    ::app::Fuse::Drawing::ContourTerminator___ObjInit_1(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    __this->ContourTerminatorCtor(prev, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(prev)->FindStartOfLastContour());
    __this->_lastPosition = lastPosition;
}

ClosePath* ClosePath__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition)
{
    ClosePath* inst = (ClosePath*)::uAllocObject(sizeof(ClosePath), ClosePath__typeof());
    inst->_ObjInit_3(prev, lastPosition);
    return inst;
}

::uString* ClosePath__Serialize(ClosePath* __this)
{
    return ::uGetConstString("Z");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Float4 Colors__Aqua;
::app::Uno::Float4 Colors__Black;
::app::Uno::Float4 Colors__Blue;
::app::Uno::Float4 Colors__Fuchsia;
::app::Uno::Float4 Colors__Gray;
::app::Uno::Float4 Colors__Green;
::app::Uno::Float4 Colors__Lime;
::app::Uno::Float4 Colors__Maroon;
::app::Uno::Float4 Colors__Navy;
::app::Uno::Float4 Colors__Olive;
::app::Uno::Float4 Colors__Purple;
::app::Uno::Float4 Colors__Red;
::app::Uno::Float4 Colors__Silver;
::app::Uno::Float4 Colors__Teal;
::app::Uno::Float4 Colors__Transparent;
::app::Uno::Float4 Colors__White;
::app::Uno::Float4 Colors__Yellow;

Colors__uType* Colors__typeof()
{
    static ::uStaticStrong<Colors__uType*> type;
    if (type != NULL) return type;

    type = (Colors__uType*)::uAllocClassType(sizeof(Colors__uType), "Fuse.Drawing.Colors");

    type->SetFields(17,
        ::uNewField("Aqua", &Colors__Aqua, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Black", &Colors__Black, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Blue", &Colors__Blue, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Fuchsia", &Colors__Fuchsia, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Gray", &Colors__Gray, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Green", &Colors__Green, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Lime", &Colors__Lime, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Maroon", &Colors__Maroon, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Navy", &Colors__Navy, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Olive", &Colors__Olive, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Purple", &Colors__Purple, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Red", &Colors__Red, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Silver", &Colors__Silver, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Teal", &Colors__Teal, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Transparent", &Colors__Transparent, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("White", &Colors__White, 0, ::app::Uno::Float4__typeof()),
        ::uNewField("Yellow", &Colors__Yellow, 0, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Colors___TypeInit(::uStatic* __this)
{
    Colors__Transparent = ::app::Uno::Color__FromRgba32_1(NULL, 0u);
    Colors__Black = ::app::Uno::Color__FromRgba32_1(NULL, 255u);
    Colors__Silver = ::app::Uno::Color__FromRgba32_1(NULL, 3233857791u);
    Colors__Gray = ::app::Uno::Color__FromRgba32_1(NULL, 2155905279u);
    Colors__White = ::app::Uno::Color__FromRgba32_1(NULL, 4294967295u);
    Colors__Maroon = ::app::Uno::Color__FromRgba32_1(NULL, 2147483903u);
    Colors__Red = ::app::Uno::Color__FromRgba32_1(NULL, 4278190335u);
    Colors__Purple = ::app::Uno::Color__FromRgba32_1(NULL, 2147516671u);
    Colors__Fuchsia = ::app::Uno::Color__FromRgba32_1(NULL, 4278255615u);
    Colors__Green = ::app::Uno::Color__FromRgba32_1(NULL, 8388863u);
    Colors__Lime = ::app::Uno::Color__FromRgba32_1(NULL, 16711935u);
    Colors__Olive = ::app::Uno::Color__FromRgba32_1(NULL, 2155872511u);
    Colors__Yellow = ::app::Uno::Color__FromRgba32_1(NULL, 4294902015u);
    Colors__Navy = ::app::Uno::Color__FromRgba32_1(NULL, 33023u);
    Colors__Blue = ::app::Uno::Color__FromRgba32_1(NULL, 65535u);
    Colors__Teal = ::app::Uno::Color__FromRgba32_1(NULL, 8421631u);
    Colors__Aqua = ::app::Uno::Color__FromRgba32_1(NULL, 16777215u);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Contour__uType* Contour__typeof()
{
    static ::uStaticStrong<Contour__uType*> type;
    if (type != NULL) return type;

    type = (Contour__uType*)::uAllocClassType(sizeof(Contour__uType), "Fuse.Drawing.Contour", false, 0, 1, 0);

    type->SetStrongRefs(
        "_vertices", offsetof(Contour, _vertices));

    type->SetFields(2,
        ::uNewField("_count", NULL, offsetof(Contour, _count), ::app::Uno::Int__typeof()),
        ::uNewField("_vertices", NULL, offsetof(Contour, _vertices), ::app::Fuse::Drawing::Cache__float2__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("get_IsClosed", Contour__get_IsClosed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Item", Contour__get_Item, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_VertexCount", Contour__get_VertexCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Vertices", Contour__get_Vertices, 0, false, ::app::Uno::Collections::IEnumerable__float2__typeof()),
        ::uNewFunction(".ctor", Contour__New_1, 0, true, Contour__typeof(), ::app::Uno::Bool__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunction(".ctor", Contour__New_2, 0, true, Contour__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Collections::IEnumerable__float2__typeof()),
        ::uNewFunctionVoid("set_IsClosed", Contour__set_IsClosed, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Contour___ObjInit(Contour* __this, bool isClosed, ::uArray* vertices)
{
    __this->_ObjInit_1(isClosed, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, vertices));
}

void Contour___ObjInit_1(Contour* __this, bool isClosed, ::uObject* vertices)
{
    __this->_vertices = ::app::Fuse::Drawing::Cache__float2__New_2(NULL, ::app::Fuse::Drawing::NonConsecutiveExtension__NonConsecutive(NULL, vertices));
    __this->IsClosed(isClosed);
    __this->_count = (isClosed && ::app::Uno::Float2__op_Equality(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1))) ? (::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1) : ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length();
}

bool Contour__get_IsClosed(Contour* __this)
{
    return __this->_IsClosed;
}

::app::Uno::Float2 Contour__get_Item(Contour* __this, int vertexIndex)
{
    if (__this->IsClosed())
    {
        while (vertexIndex < 0)
        {
            vertexIndex = vertexIndex + __this->VertexCount();
        }

        while (vertexIndex >= __this->VertexCount())
        {
            vertexIndex = vertexIndex - __this->VertexCount();
        }

        return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(vertexIndex);
    }
    else
    {
        if (vertexIndex < 0)
        {
            return ::app::Uno::Float2__op_Addition_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(1)));
        }

        if (vertexIndex >= ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length())
        {
            return ::app::Uno::Float2__op_Addition_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1), ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 2)));
        }

        return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(vertexIndex);
    }
}

int Contour__get_VertexCount(Contour* __this)
{
    return __this->_count;
}

::uObject* Contour__get_Vertices(Contour* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Items();
}

Contour* Contour__New_1(::uStatic* __this, bool isClosed, ::uArray* vertices)
{
    Contour* inst = (Contour*)::uAllocObject(sizeof(Contour), Contour__typeof());
    inst->_ObjInit(isClosed, vertices);
    return inst;
}

Contour* Contour__New_2(::uStatic* __this, bool isClosed, ::uObject* vertices)
{
    Contour* inst = (Contour*)::uAllocObject(sizeof(Contour), Contour__typeof());
    inst->_ObjInit_1(isClosed, vertices);
    return inst;
}

void Contour__set_IsClosed(Contour* __this, bool value)
{
    __this->_IsClosed = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContourEnumerable__uType* ContourEnumerable__typeof()
{
    static ::uStaticStrong<ContourEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (ContourEnumerable__uType*)::uAllocClassType(sizeof(ContourEnumerable__uType), "Fuse.Drawing.ContourEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ContourEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(ContourEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_head", offsetof(ContourEnumerable, _head));

    type->SetFields(2,
        ::uNewField("_head", NULL, offsetof(ContourEnumerable, _head), ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewField("_scale", NULL, offsetof(ContourEnumerable, _scale), ::app::Uno::Float2__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", ContourEnumerable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction(".ctor", ContourEnumerable__New_1, 0, true, ContourEnumerable__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ContourEnumerable___ObjInit(ContourEnumerable* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    __this->_head = head;
    __this->_scale = scale;
}

::uObject* ContourEnumerable__GetEnumerator(ContourEnumerable* __this)
{
    return (::uObject*)::app::Fuse::Drawing::ContourEnumerator__New_1(NULL, __this->_head, __this->_scale);
}

ContourEnumerable* ContourEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    ContourEnumerable* inst = (ContourEnumerable*)::uAllocObject(sizeof(ContourEnumerable), ContourEnumerable__typeof());
    inst->_ObjInit(head, scale);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContourEnumerator__uType* ContourEnumerator__typeof()
{
    static ::uStaticStrong<ContourEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (ContourEnumerator__uType*)::uAllocClassType(sizeof(ContourEnumerator__uType), "Fuse.Drawing.ContourEnumerator", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))ContourEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ContourEnumerator__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))ContourEnumerator__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ContourEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(ContourEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ContourEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ContourEnumerator__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ContourEnumerator, _current),
        "_currentHead", offsetof(ContourEnumerator, _currentHead));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(ContourEnumerator, _current), ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewField("_currentHead", NULL, offsetof(ContourEnumerator, _currentHead), ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewField("_scale", NULL, offsetof(ContourEnumerator, _scale), ::app::Uno::Float2__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", ContourEnumerator__Dispose, 0, false),
        ::uNewFunction("get_Current", ContourEnumerator__get_Current, 0, false, ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewFunction("MoveNext", ContourEnumerator__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ContourEnumerator__New_1, 0, true, ContourEnumerator__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Reset", ContourEnumerator__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void ContourEnumerator___ObjInit(ContourEnumerator* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    __this->_currentHead = head;
    __this->_scale = scale;
}

void ContourEnumerator__Dispose(ContourEnumerator* __this)
{
}

::app::Fuse::Drawing::Contour* ContourEnumerator__get_Current(ContourEnumerator* __this)
{
    return __this->_current;
}

bool ContourEnumerator__MoveNext(ContourEnumerator* __this)
{
    if (__this->_currentHead == NULL)
    {
        return false;
    }

    bool isClosed = ::uIs(__this->_currentHead, ::app::Fuse::Drawing::ClosePath__typeof());
    ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* revPath = ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry__New_1(NULL);

    do
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Add(__this->_currentHead);
        __this->_currentHead = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_currentHead)->RemoveLast();
    }
    while ((__this->_currentHead != NULL) && !::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_currentHead)->EndsContour());

    ::app::Uno::Collections::List__float2* vertices = ::app::Uno::Collections::List__float2__New_1(NULL);

    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Count() - 1; i >= 0; --i)
    {
        ::uObject* headVertices = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Item(i))->EvaluateLast();

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(headVertices)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Uno::Float2 v = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_123));
            ::uPtr< ::app::Uno::Collections::List__float2*>(vertices)->Add(::app::Uno::Float2__op_Multiply_2(NULL, v, __this->_scale));
        }
    }

    __this->_current = ::app::Fuse::Drawing::Contour__New_2(NULL, isClosed, (::uObject*)vertices);
    return true;
}

ContourEnumerator* ContourEnumerator__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    ContourEnumerator* inst = (ContourEnumerator*)::uAllocObject(sizeof(ContourEnumerator), ContourEnumerator__typeof());
    inst->_ObjInit(head, scale);
    return inst;
}

void ContourEnumerator__Reset(ContourEnumerator* __this)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContourTerminator__uType* ContourTerminator__typeof()
{
    static ::uStaticStrong<ContourTerminator__uType*> type;
    if (type != NULL) return type;

    type = (ContourTerminator__uType*)::uAllocClassType(sizeof(ContourTerminator__uType), "Fuse.Drawing.ContourTerminator", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::PathGeometry__typeof());
    type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__EvaluateLast;
    type->__fp_FindStartOfLastContour = (::app::Uno::Float2(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__FindStartOfLastContour;
    type->__fp_get_EndsContour = (bool(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__get_EndsContour;

    type->SetFunctions(1,
        ::uNewFunctionVoid("ContourTerminatorCtor", ContourTerminator__ContourTerminatorCtor, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ContourTerminator___ObjInit_1(ContourTerminator* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

void ContourTerminator___ObjInit_2(ContourTerminator* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
    __this->ContourTerminatorCtor(prev, position);
}

void ContourTerminator__ContourTerminatorCtor(ContourTerminator* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
}

::uObject* ContourTerminator__EvaluateLast(ContourTerminator* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerable__float2__New_1(NULL);
}

::app::Uno::Float2 ContourTerminator__FindStartOfLastContour(ContourTerminator* __this)
{
    return __this->EndPosition();
}

bool ContourTerminator__get_EndsContour(ContourTerminator* __this)
{
    return true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CurveTo__uType* CurveTo__typeof()
{
    static ::uStaticStrong<CurveTo__uType*> type;
    if (type != NULL) return type;

    type = (CurveTo__uType*)::uAllocClassType(sizeof(CurveTo__uType), "Fuse.Drawing.CurveTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::PathGeometry__typeof());
    type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__EvaluateLast;
    type->__fp_get_EndTangent = (::app::Uno::Float2(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_EndTangent;
    type->__fp_get_HasLastBounds = (bool(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_HasLastBounds;
    type->__fp_get_LastBounds = (::app::Uno::Rect(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_LastBounds;
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__Serialize;

    type->SetFields(3,
        ::uNewField("_controlPointEnd", NULL, offsetof(CurveTo, _controlPointEnd), ::app::Uno::Float2__typeof()),
        ::uNewField("_controlPointStart", NULL, offsetof(CurveTo, _controlPointStart), ::app::Uno::Float2__typeof()),
        ::uNewField("_lastPosition", NULL, offsetof(CurveTo, _lastPosition), ::app::Uno::Float2__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("CurveToCtor", CurveTo__CurveToCtor, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ControlPointEnd", CurveTo__get_ControlPointEnd, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", CurveTo__New_3, 0, true, CurveTo__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void CurveTo___ObjInit_1(CurveTo* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

void CurveTo___ObjInit_2(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointStart);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointEnd);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->CurveToCtor(prev, lastPosition, controlPointStart, controlPointEnd, position);
}

void CurveTo__CurveToCtor(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
    __this->_lastPosition = lastPosition;
    __this->_controlPointStart = controlPointStart;
    __this->_controlPointEnd = controlPointEnd;
}

::uObject* CurveTo__EvaluateLast(CurveTo* __this)
{
    float maxError = 0.5f;
    return ::app::Uno::Geometry::CubicBezier__Subdivide(NULL, __this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition(), maxError);
}

::app::Uno::Float2 CurveTo__get_ControlPointEnd(CurveTo* __this)
{
    return __this->_controlPointEnd;
}

::app::Uno::Float2 CurveTo__get_EndTangent(CurveTo* __this)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, __this->EndPosition(), __this->ControlPointEnd());
}

bool CurveTo__get_HasLastBounds(CurveTo* __this)
{
    return true;
}

::app::Uno::Rect CurveTo__get_LastBounds(CurveTo* __this)
{
    return ::app::Fuse::Drawing::BezierOp__GetRect(NULL, __this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition());
}

CurveTo* CurveTo__New_2(::uStatic* __this)
{
    CurveTo* inst = (CurveTo*)::uAllocObject(sizeof(CurveTo), CurveTo__typeof());
    inst->_ObjInit_1();
    return inst;
}

CurveTo* CurveTo__New_3(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    CurveTo* inst = (CurveTo*)::uAllocObject(sizeof(CurveTo), CurveTo__typeof());
    inst->_ObjInit_2(prev, lastPosition, controlPointStart, controlPointEnd, position);
    return inst;
}

::uString* CurveTo__Serialize(CurveTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("C "), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointStart.X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointStart.Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointEnd.X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointEnd.Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DynamicBrush__uType* DynamicBrush__typeof()
{
    static ::uStaticStrong<DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (DynamicBrush__uType*)::uAllocClassType(sizeof(DynamicBrush__uType), "Fuse.Drawing.DynamicBrush", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::Brush__typeof());
    type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))DynamicBrush__get_IsCompletelyTransparent;

    type->SetStrongRefs(
        "ShadingChanged", offsetof(DynamicBrush, ShadingChanged));

    type->SetFields(2,
        ::uNewField("_blendMode", NULL, offsetof(DynamicBrush, _blendMode), ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewField("_opacity", NULL, offsetof(DynamicBrush, _opacity), ::app::Uno::Float__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("add_ShadingChanged", DynamicBrush__add_ShadingChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("get_BlendMode", DynamicBrush__get_BlendMode, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction("get_Opacity", DynamicBrush__get_Opacity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("OnShadingChanged", DynamicBrush__OnShadingChanged, 0, false),
        ::uNewFunctionVoid("remove_ShadingChanged", DynamicBrush__remove_ShadingChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_BlendMode", DynamicBrush__set_BlendMode, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunctionVoid("set_Opacity", DynamicBrush__set_Opacity, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void DynamicBrush___ObjInit_1(DynamicBrush* __this)
{
    __this->_opacity = 1.0f;
    ::app::Fuse::Drawing::Brush___ObjInit(__this);
}

void DynamicBrush__add_ShadingChanged(DynamicBrush* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

int DynamicBrush__get_BlendMode(DynamicBrush* __this)
{
    return __this->_blendMode;
}

bool DynamicBrush__get_IsCompletelyTransparent(DynamicBrush* __this)
{
    return __this->Opacity() == 0.0f;
}

float DynamicBrush__get_Opacity(DynamicBrush* __this)
{
    return __this->_opacity;
}

void DynamicBrush__OnShadingChanged(DynamicBrush* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShadingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShadingChanged)->InvokeVoid();
    }
}

void DynamicBrush__remove_ShadingChanged(DynamicBrush* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void DynamicBrush__set_BlendMode(DynamicBrush* __this, int value)
{
    if (value == __this->_blendMode)
    {
        return;
    }

    __this->_blendMode = value;
    __this->OnShadingChanged();
}

void DynamicBrush__set_Opacity(DynamicBrush* __this, float value)
{
    if (value == __this->_opacity)
    {
        return;
    }

    __this->_opacity = value;
    __this->OnShadingChanged();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EllipseFactory__uType* EllipseFactory__typeof()
{
    static ::uStaticStrong<EllipseFactory__uType*> type;
    if (type != NULL) return type;

    type = (EllipseFactory__uType*)::uAllocClassType(sizeof(EllipseFactory__uType), "Fuse.Drawing.EllipseFactory");

    type->SetFunctions(1,
        ::uNewFunction("AppendTo", EllipseFactory__AppendTo, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Drawing::PathGeometry* EllipseFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Radius)
{
    ::app::Uno::Float2 o = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Uno::Float2 n = ::app::Uno::Float2__New_2(NULL, 0.0f, -Radius.Y);
    ::app::Uno::Float2 s = ::app::Uno::Float2__New_2(NULL, 0.0f, Radius.Y);
    ::app::Uno::Float2 w = ::app::Uno::Float2__New_2(NULL, -Radius.X, 0.0f);
    ::app::Uno::Float2 e = ::app::Uno::Float2__New_2(NULL, Radius.X, 0.0f);
    float p = 0.55f;
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self->MoveTo_1(::app::Uno::Float2__op_Addition_2(NULL, o, w)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, w), ::app::Uno::Float2__op_Multiply_1(NULL, s, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, s), ::app::Uno::Float2__op_Multiply_1(NULL, w, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, s)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, s), ::app::Uno::Float2__op_Multiply_1(NULL, e, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, e), ::app::Uno::Float2__op_Multiply_1(NULL, s, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, e)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, e), ::app::Uno::Float2__op_Multiply_1(NULL, n, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, n), ::app::Uno::Float2__op_Multiply_1(NULL, e, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, n)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, n), ::app::Uno::Float2__op_Multiply_1(NULL, w, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, w), ::app::Uno::Float2__op_Multiply_1(NULL, n, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, w)))->ClosePath())->MoveTo_1(o);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GradientStop__uType* GradientStop__typeof()
{
    static ::uStaticStrong<GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (GradientStop__uType*)::uAllocClassType(sizeof(GradientStop__uType), "Fuse.Drawing.GradientStop", false, 0, 1, 0);

    type->SetStrongRefs(
        "Changed", offsetof(GradientStop, Changed));

    type->SetFields(2,
        ::uNewField("_color", NULL, offsetof(GradientStop, _color), ::app::Uno::Float4__typeof()),
        ::uNewField("_offset", NULL, offsetof(GradientStop, _offset), ::app::Uno::Float__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("add_Changed", GradientStop__add_Changed, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("get_Color", GradientStop__get_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Offset", GradientStop__get_Offset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", GradientStop__New_1, 0, true, GradientStop__typeof()),
        ::uNewFunction(".ctor", GradientStop__New_2, 0, true, GradientStop__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("OnChanged", GradientStop__OnChanged, 0, false),
        ::uNewFunctionVoid("remove_Changed", GradientStop__remove_Changed, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_Color", GradientStop__set_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Offset", GradientStop__set_Offset, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void GradientStop___ObjInit(GradientStop* __this)
{
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
}

void GradientStop___ObjInit_1(GradientStop* __this, ::app::Uno::Float4 color, float offset)
{
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
    __this->_color = color;
    __this->_offset = offset;
}

void GradientStop__add_Changed(GradientStop* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

::app::Uno::Float4 GradientStop__get_Color(GradientStop* __this)
{
    return __this->_color;
}

float GradientStop__get_Offset(GradientStop* __this)
{
    return __this->_offset;
}

GradientStop* GradientStop__New_1(::uStatic* __this)
{
    GradientStop* inst = (GradientStop*)::uAllocObject(sizeof(GradientStop), GradientStop__typeof());
    inst->_ObjInit();
    return inst;
}

GradientStop* GradientStop__New_2(::uStatic* __this, ::app::Uno::Float4 color, float offset)
{
    GradientStop* inst = (GradientStop*)::uAllocObject(sizeof(GradientStop), GradientStop__typeof());
    inst->_ObjInit_1(color, offset);
    return inst;
}

void GradientStop__OnChanged(GradientStop* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid();
    }
}

void GradientStop__remove_Changed(GradientStop* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void GradientStop__set_Color(GradientStop* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnChanged();
    }
}

void GradientStop__set_Offset(GradientStop* __this, float value)
{
    if (__this->_offset != value)
    {
        __this->_offset = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HorizontalLineTo__uType* HorizontalLineTo__typeof()
{
    static ::uStaticStrong<HorizontalLineTo__uType*> type;
    if (type != NULL) return type;

    type = (HorizontalLineTo__uType*)::uAllocClassType(sizeof(HorizontalLineTo__uType), "Fuse.Drawing.HorizontalLineTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineTo__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))HorizontalLineTo__Serialize;

    type->SetFields(1,
        ::uNewField("_x", NULL, offsetof(HorizontalLineTo, _x), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", HorizontalLineTo__New_4, 0, true, HorizontalLineTo__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void HorizontalLineTo___ObjInit_3(HorizontalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x)
{
    ::app::Fuse::Drawing::LineTo___ObjInit_1(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat(NULL, x);
    __this->LineToCtor(prev, lastPosition, ::app::Uno::Float2__New_2(NULL, x, lastPosition.Y));
    __this->_x = x;
}

HorizontalLineTo* HorizontalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x)
{
    HorizontalLineTo* inst = (HorizontalLineTo*)::uAllocObject(sizeof(HorizontalLineTo), HorizontalLineTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, x);
    return inst;
}

::uString* HorizontalLineTo__Serialize(HorizontalLineTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("H "), ::uBox(::app::Uno::Float__typeof(), __this->_x));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageFill__uType* ImageFill__typeof()
{
    static ::uStaticStrong<ImageFill__uType*> type;
    if (type != NULL) return type;

    type = (ImageFill__uType*)::uAllocClassType(sizeof(ImageFill__uType), "Fuse.Drawing.ImageFill", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::DynamicBrush__typeof());
    type->__fp_OnPinned = (void(*)(::app::Fuse::Drawing::Brush*))ImageFill__OnPinned;
    type->__fp_OnUnpinned = (void(*)(::app::Fuse::Drawing::Brush*))ImageFill__OnUnpinned;
    type->__interface_0.__fp_OnSourceChanged = (void(*)(void*))ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged;
    type->__interface_0.__fp_OnParamChanged = (void(*)(void*))ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged;
    type->__interface_0.__fp_OnSizingChanged = (void(*)(void*))ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged;

    type->SetInterfaces(
        ::app::Fuse::Internal::IImageContainerOwner__typeof(), offsetof(ImageFill__uType, __interface_0));

    type->SetStrongRefs(
        "_container", offsetof(ImageFill, _container));

    type->SetFields(2,
        ::uNewField("_color", NULL, offsetof(ImageFill, _color), ::app::Uno::Float4__typeof()),
        ::uNewField("_container", NULL, offsetof(ImageFill, _container), ::app::Fuse::Internal::ImageContainer__typeof()));

    type->SetFunctions(27,
        ::uNewFunctionVoid("Fuse.Internal.IImageContainerOwner.OnParamChanged", ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged, 0, false),
        ::uNewFunctionVoid("Fuse.Internal.IImageContainerOwner.OnSizingChanged", ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged, 0, false),
        ::uNewFunctionVoid("Fuse.Internal.IImageContainerOwner.OnSourceChanged", ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged, 0, false),
        ::uNewFunction("get_Color", ImageFill__get_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_ContentAlignment", ImageFill__get_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("get_Density", ImageFill__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_File", ImageFill__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_MemoryPolicy", ImageFill__get_MemoryPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("get_ResampleMode", ImageFill__get_ResampleMode, 0, false, ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewFunction("get_Source", ImageFill__get_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("get_StretchDirection", ImageFill__get_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("get_StretchMode", ImageFill__get_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("get_Url", ImageFill__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetDrawParams", ImageFill__GetDrawParams, 0, false, ::app::Fuse::Drawing::ImageFill_DrawParams__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("GetSize", ImageFill__GetSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("GetTexture", ImageFill__GetTexture, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction(".ctor", ImageFill__New_1, 0, true, ImageFill__typeof()),
        ::uNewFunctionVoid("set_Color", ImageFill__set_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_ContentAlignment", ImageFill__set_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("set_Density", ImageFill__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_File", ImageFill__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_MemoryPolicy", ImageFill__set_MemoryPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("set_ResampleMode", ImageFill__set_ResampleMode, 0, false, ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewFunctionVoid("set_Source", ImageFill__set_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("set_StretchDirection", ImageFill__set_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("set_StretchMode", ImageFill__set_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("set_Url", ImageFill__set_Url, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImageFill___ObjInit_2(ImageFill* __this)
{
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
    __this->_container = ::app::Fuse::Internal::ImageContainer__New_1(NULL, (::uObject*)__this);
}

void ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged(ImageFill* __this)
{
    __this->OnShadingChanged();
}

void ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged(ImageFill* __this)
{
    __this->OnShadingChanged();
}

void ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged(ImageFill* __this)
{
    __this->OnShadingChanged();
}

::app::Uno::Float4 ImageFill__get_Color(ImageFill* __this)
{
    return __this->_color;
}

int ImageFill__get_ContentAlignment(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ContentAlignment();
}

float ImageFill__get_Density(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Density();
}

::app::Uno::UX::FileSource* ImageFill__get_File(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File();
}

::app::Fuse::Resources::MemoryPolicy* ImageFill__get_MemoryPolicy(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->MemoryPolicy();
}

int ImageFill__get_ResampleMode(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ResampleMode();
}

::app::Fuse::Resources::ImageSource* ImageFill__get_Source(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source();
}

int ImageFill__get_StretchDirection(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->StretchDirection();
}

int ImageFill__get_StretchMode(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->StretchMode();
}

::uString* ImageFill__get_Url(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Url();
}

::app::Fuse::Drawing::ImageFill_DrawParams ImageFill__GetDrawParams(ImageFill* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->absoluteZoom = (dc == NULL) ? 1.0f : ::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity();
    ::app::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::app::Uno::Float2 scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcScale(size, contentDesiredSize);
    ::app::Uno::Float2 origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, scale));
    ::app::Fuse::Drawing::ImageFill_DrawParams dp = ::uDefault< ::app::Fuse::Drawing::ImageFill_DrawParams>();
    dp.Origin = origin;
    dp.Size = ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, scale);
    dp.UVClip = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcClip(size, &dp.Origin, &dp.Size);
    return dp;
}

::app::Uno::Float2 ImageFill__GetSize(ImageFill* __this)
{
    if (__this->Source() != NULL)
    {
        return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcContentSize(::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->Size(), ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->PixelSize());
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Graphics::Texture2D* ImageFill__GetTexture(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->GetTexture();
}

ImageFill* ImageFill__New_1(::uStatic* __this)
{
    ImageFill* inst = (ImageFill*)::uAllocObject(sizeof(ImageFill), ImageFill__typeof());
    inst->_ObjInit_2();
    return inst;
}

void ImageFill__OnPinned(ImageFill* __this)
{
    ::app::Fuse::Drawing::Brush__OnPinned(__this);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(true);
}

void ImageFill__OnUnpinned(ImageFill* __this)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(false);
    ::app::Fuse::Drawing::Brush__OnUnpinned(__this);
}

void ImageFill__set_Color(ImageFill* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnShadingChanged();
    }
}

void ImageFill__set_ContentAlignment(ImageFill* __this, int value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ContentAlignment(value);
}

void ImageFill__set_Density(ImageFill* __this, float value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Density(value);
}

void ImageFill__set_File(ImageFill* __this, ::app::Uno::UX::FileSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File(value);
}

void ImageFill__set_MemoryPolicy(ImageFill* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->MemoryPolicy(value);
}

void ImageFill__set_ResampleMode(ImageFill* __this, int value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ResampleMode(value);
}

void ImageFill__set_Source(ImageFill* __this, ::app::Fuse::Resources::ImageSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source(value);
}

void ImageFill__set_StretchDirection(ImageFill* __this, int value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->StretchDirection(value);
}

void ImageFill__set_StretchMode(ImageFill* __this, int value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->StretchMode(value);
}

void ImageFill__set_Url(ImageFill* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Url(value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageFill_DrawParams__uType* ImageFill_DrawParams__typeof()
{
    static ::uStaticStrong<ImageFill_DrawParams__uType*> type;
    if (type != NULL) return type;

    type = (ImageFill_DrawParams__uType*)::uAllocStructType(sizeof(ImageFill_DrawParams__uType), "Fuse.Drawing.ImageFill.DrawParams", sizeof(ImageFill_DrawParams), 0, 0, 0);

    type->SetFields(3,
        ::uNewField("Origin", NULL, offsetof(ImageFill_DrawParams, Origin), ::app::Uno::Float2__typeof()),
        ::uNewField("Size", NULL, offsetof(ImageFill_DrawParams, Size), ::app::Uno::Float2__typeof()),
        ::uNewField("UVClip", NULL, offsetof(ImageFill_DrawParams, UVClip), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int LinearGradient___gradientSize;

LinearGradient__uType* LinearGradient__typeof()
{
    static ::uStaticStrong<LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (LinearGradient__uType*)::uAllocClassType(sizeof(LinearGradient__uType), "Fuse.Drawing.LinearGradient", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Drawing::DynamicBrush__typeof());
    type->__fp_OnPrepare = (void(*)(::app::Fuse::Drawing::Brush*, ::app::Fuse::DrawContext*, ::app::Uno::Float2))LinearGradient__OnPrepare;
    type->__fp_OnUnpinned = (void(*)(::app::Fuse::Drawing::Brush*))LinearGradient__OnUnpinned;

    type->SetStrongRefs(
        "_gradientBuffer", offsetof(LinearGradient, _gradientBuffer),
        "_sortedStops", offsetof(LinearGradient, _sortedStops),
        "_stops", offsetof(LinearGradient, _stops));

    type->SetFields(9,
        ::uNewField("_angle", NULL, offsetof(LinearGradient, _angle), ::app::Uno::Float__typeof()),
        ::uNewField("_endPoint", NULL, offsetof(LinearGradient, _endPoint), ::app::Uno::Float2__typeof()),
        ::uNewField("_gradientBuffer", NULL, offsetof(LinearGradient, _gradientBuffer), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_gradientSize", &LinearGradient___gradientSize, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_gradientStart", NULL, offsetof(LinearGradient, _gradientStart), ::app::Uno::Float2__typeof()),
        ::uNewField("_hasAngle", NULL, offsetof(LinearGradient, _hasAngle), ::app::Uno::Bool__typeof()),
        ::uNewField("_sortedStops", NULL, offsetof(LinearGradient, _sortedStops), ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof())),
        ::uNewField("_startPoint", NULL, offsetof(LinearGradient, _startPoint), ::app::Uno::Float2__typeof()),
        ::uNewField("_stops", NULL, offsetof(LinearGradient, _stops), ::app::Uno::Collections::ObservableList__Fuse_Drawing_GradientStop__typeof()));

    type->SetFunctions(19,
        ::uNewFunction("get_Angle", LinearGradient__get_Angle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_AngleDegrees", LinearGradient__get_AngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_EndPoint", LinearGradient__get_EndPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_HasAngle", LinearGradient__get_HasAngle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_SortedStops", LinearGradient__get_SortedStops, 0, false, ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof())),
        ::uNewFunction("get_StartPoint", LinearGradient__get_StartPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Stops", LinearGradient__get_Stops, 0, false, ::app::Uno::Collections::IList__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("InitList", LinearGradient__InitList, 0, false),
        ::uNewFunction(".ctor", LinearGradient__New_1, 0, true, LinearGradient__typeof()),
        ::uNewFunction(".ctor", LinearGradient__New_2, 0, true, LinearGradient__typeof(), ::uGetArrayType(::app::Fuse::Drawing::GradientStop__typeof())),
        ::uNewFunctionVoid("OnAdded", LinearGradient__OnAdded, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunctionVoid("OnChanged", LinearGradient__OnChanged, 0, false),
        ::uNewFunctionVoid("OnRemoved", LinearGradient__OnRemoved, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction("SelectOffset", LinearGradient__SelectOffset, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::GradientStop__typeof(), ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunctionVoid("set_Angle", LinearGradient__set_Angle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_AngleDegrees", LinearGradient__set_AngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_EndPoint", LinearGradient__set_EndPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_StartPoint", LinearGradient__set_StartPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("SortStops", LinearGradient__SortStops, 0, false));

    ::uRegisterType(type);
    return type;
}

void LinearGradient___ObjInit_2(LinearGradient* __this)
{
    __this->_endPoint = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
    __this->InitList();
}

void LinearGradient___ObjInit_3(LinearGradient* __this, ::uArray* stops)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->_endPoint = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
    __this->InitList();

    for (array_123 = stops, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Drawing::GradientStop* s = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Drawing::GradientStop*>(index_124);
        ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_GradientStop*>(__this->_stops)->Add(s);
    }
}

void LinearGradient___TypeInit(::uStatic* __this)
{
    LinearGradient___gradientSize = 256;
    LinearGradient___gradientSize = ::app::Uno::Math__Min_8(NULL, 1028, ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL));
}

float LinearGradient__get_Angle(LinearGradient* __this)
{
    return __this->_angle;
}

float LinearGradient__get_AngleDegrees(LinearGradient* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_angle);
}

::app::Uno::Float2 LinearGradient__get_EndPoint(LinearGradient* __this)
{
    return __this->_endPoint;
}

bool LinearGradient__get_HasAngle(LinearGradient* __this)
{
    return __this->_hasAngle;
}

::uArray* LinearGradient__get_SortedStops(LinearGradient* __this)
{
    return __this->_sortedStops;
}

::app::Uno::Float2 LinearGradient__get_StartPoint(LinearGradient* __this)
{
    return __this->_startPoint;
}

::uObject* LinearGradient__get_Stops(LinearGradient* __this)
{
    return (::uObject*)__this->_stops;
}

void LinearGradient__InitList(LinearGradient* __this)
{
    __this->_stops = ::app::Uno::Collections::ObservableList__Fuse_Drawing_GradientStop__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_GradientStop__typeof(), (const void*)LinearGradient__OnAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_GradientStop__typeof(), (const void*)LinearGradient__OnRemoved, __this));
    __this->_sortedStops = ::uNewArray(::app::Fuse::Drawing::GradientStop__typeof(), 0);
}

LinearGradient* LinearGradient__New_1(::uStatic* __this)
{
    LinearGradient* inst = (LinearGradient*)::uAllocObject(sizeof(LinearGradient), LinearGradient__typeof());
    inst->_ObjInit_2();
    return inst;
}

LinearGradient* LinearGradient__New_2(::uStatic* __this, ::uArray* stops)
{
    LinearGradient* inst = (LinearGradient*)::uAllocObject(sizeof(LinearGradient), LinearGradient__typeof());
    inst->_ObjInit_3(stops);
    return inst;
}

void LinearGradient__OnAdded(LinearGradient* __this, ::app::Fuse::Drawing::GradientStop* gs)
{
    ::uPtr< ::app::Fuse::Drawing::GradientStop*>(gs)->add_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)LinearGradient__OnChanged, __this));
    __this->OnChanged();
}

void LinearGradient__OnChanged(LinearGradient* __this)
{
    __this->OnShadingChanged();
    __this->SortStops();
}

void LinearGradient__OnPrepare(LinearGradient* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (__this->_gradientBuffer != NULL)
    {
        return;
    }

    __this->_gradientBuffer = ::app::Fuse::FramebufferPool__Lock_1(NULL, ::app::Uno::Int2__New_2(NULL, LinearGradient___gradientSize, 1), 3, false);
    __this->_gradientStart = ::uPtr< ::app::Fuse::Drawing::LinearGradientDrawable*>(::app::Fuse::Drawing::LinearGradientDrawable__Singleton)->FillBuffer(dc, __this, __this->_gradientBuffer);
}

void LinearGradient__OnRemoved(LinearGradient* __this, ::app::Fuse::Drawing::GradientStop* gs)
{
    ::uPtr< ::app::Fuse::Drawing::GradientStop*>(gs)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)LinearGradient__OnChanged, __this));
    __this->OnChanged();
}

void LinearGradient__OnUnpinned(LinearGradient* __this)
{
    if (__this->_gradientBuffer != NULL)
    {
        ::app::Fuse::FramebufferPool__Release(NULL, __this->_gradientBuffer);
        __this->_gradientBuffer = NULL;
    }
}

int LinearGradient__SelectOffset(::uStatic* __this, ::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b)
{
    return (int)::app::Uno::Math__Sign_1(NULL, ::uPtr< ::app::Fuse::Drawing::GradientStop*>(a)->Offset() - ::uPtr< ::app::Fuse::Drawing::GradientStop*>(b)->Offset());
}

void LinearGradient__set_Angle(LinearGradient* __this, float value)
{
    if ((__this->_angle != value) || !__this->_hasAngle)
    {
        __this->_angle = value;
        __this->_hasAngle = true;
        __this->OnShadingChanged();
    }
}

void LinearGradient__set_AngleDegrees(LinearGradient* __this, float value)
{
    __this->Angle(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void LinearGradient__set_EndPoint(LinearGradient* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_endPoint, value))
    {
        __this->_endPoint = value;
        __this->OnShadingChanged();
    }
}

void LinearGradient__set_StartPoint(LinearGradient* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_startPoint, value))
    {
        __this->_startPoint = value;
        __this->OnShadingChanged();
    }
}

void LinearGradient__SortStops(LinearGradient* __this)
{
    ::uObject* order = ::app::Uno::Collections::EnumerableExtensions__OrderBy__Fuse_Drawing_GradientStop(NULL, (::uObject*)__this->_stops, ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_GradientStop__Fuse_Drawing_GradientStop__int__typeof(), (const void*)LinearGradient__SelectOffset));
    __this->_sortedStops = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_GradientStop(NULL, order);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< LinearGradientDrawable*> LinearGradientDrawable__Singleton;

LinearGradientDrawable__uType* LinearGradientDrawable__typeof()
{
    static ::uStaticStrong<LinearGradientDrawable__uType*> type;
    if (type != NULL) return type;

    type = (LinearGradientDrawable__uType*)::uAllocClassType(sizeof(LinearGradientDrawable__uType), "Fuse.Drawing.LinearGradientDrawable", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_3cb3c708._compiledProgram", offsetof(LinearGradientDrawable, _draw_3cb3c708._compiledProgram),
        "_draw_3cb3c708._constValues", offsetof(LinearGradientDrawable, _draw_3cb3c708._constValues),
        "_draw_3cb3c708._Program", offsetof(LinearGradientDrawable, _draw_3cb3c708._Program),
        "FillBuffer_TexCoord_3cb3c708_1_1_1", offsetof(LinearGradientDrawable, FillBuffer_TexCoord_3cb3c708_1_1_1),
        "FillBuffer_Vertices_3cb3c708_1_0_9", offsetof(LinearGradientDrawable, FillBuffer_Vertices_3cb3c708_1_0_9));

    type->SetFields(1,
        ::uNewField("Singleton", &LinearGradientDrawable__Singleton, 0, LinearGradientDrawable__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("FillBuffer", LinearGradientDrawable__FillBuffer, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Drawing::LinearGradient__typeof(), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction(".ctor", LinearGradientDrawable__New_1, 0, true, LinearGradientDrawable__typeof()));

    ::uRegisterType(type);
    return type;
}

void LinearGradientDrawable___ObjInit(LinearGradientDrawable* __this)
{
    __this->init_DrawCalls();
}

void LinearGradientDrawable___TypeInit(::uStatic* __this)
{
    LinearGradientDrawable__Singleton = LinearGradientDrawable__New_1(NULL);
}

::app::Uno::Float2 LinearGradientDrawable__FillBuffer(LinearGradientDrawable* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::LinearGradient* lg, ::app::Uno::Graphics::Framebuffer* fb)
{
    ::uArray* stops = ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(lg)->SortedStops();

    if (::uPtr< ::uArray*>(stops)->Length() < 2)
    {
        return ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    }

    float length = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(stops)->Item< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(stops)->Length() - 1))->Offset() - ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(stops)->Item< ::app::Fuse::Drawing::GradientStop*>(0))->Offset();
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    ::uArray* Offsets_3cb3c708_1_5_5 = LinearGradientDrawable__FillBuffer_Offsets_3cb3c708_1_5_4(NULL, stops->Length(), stops);
    ::uArray* Colors_3cb3c708_1_6_7 = LinearGradientDrawable__FillBuffer_Colors_3cb3c708_1_6_6(NULL, stops->Length(), stops);
    {
        __this->_draw_3cb3c708.DepthTestEnabled(false);
        __this->_draw_3cb3c708.Const_1(0, ::uPtr< ::uArray*>(Offsets_3cb3c708_1_5_5)->Length());
        __this->_draw_3cb3c708.Const_1(1, ::uPtr< ::uArray*>(Colors_3cb3c708_1_6_7)->Length());
        __this->_draw_3cb3c708.Use();
        __this->_draw_3cb3c708.Attrib_1(2, 2, __this->FillBuffer_TexCoord_3cb3c708_1_1_1, 8, 0);
        __this->_draw_3cb3c708.Uniform_6(3, Offsets_3cb3c708_1_5_5);
        __this->_draw_3cb3c708.Uniform_11(4, length);
        __this->_draw_3cb3c708.Uniform_3(5, Colors_3cb3c708_1_6_7);
        __this->_draw_3cb3c708.DrawArrays(::uPtr< ::uArray*>(__this->FillBuffer_Vertices_3cb3c708_1_0_9)->Length());
    }

    dc->PopRenderTarget();
    return ::app::Uno::Float2__New_2(NULL, ::uPtr< ::app::Fuse::Drawing::GradientStop*>(stops->Item< ::app::Fuse::Drawing::GradientStop*>(0))->Offset(), length);
}

::uArray* LinearGradientDrawable__FillBuffer_Colors_3cb3c708_1_6_6(::uStatic* __this, int Colors_1_6_4, ::uArray* Colors_1_6_5)
{
    ::uArray* cols = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Math__Max_8(NULL, Colors_1_6_4, 1));

    for (int i = 0; i < Colors_1_6_4; i++)
    {
        cols->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(Colors_1_6_5)->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Color();
    }

    return cols;
}

::uArray* LinearGradientDrawable__FillBuffer_Offsets_3cb3c708_1_5_4(::uStatic* __this, int Offsets_1_5_1, ::uArray* Offsets_1_5_2)
{
    ::uArray* ofs = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Math__Max_8(NULL, Offsets_1_5_1, 1));

    for (int i = 0; i < Offsets_1_5_1; i++)
    {
        ofs->Item< float>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(Offsets_1_5_2)->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    return ofs;
}

void LinearGradientDrawable__free_DrawCalls(LinearGradientDrawable* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->FillBuffer_TexCoord_3cb3c708_1_1_1)->Dispose();
}

void LinearGradientDrawable__init_DrawCalls(LinearGradientDrawable* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_3cb3c708_1_0_0 = array_123;
    __this->FillBuffer_TexCoord_3cb3c708_1_1_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_3cb3c708_1_0_0), 0);
    __this->FillBuffer_Vertices_3cb3c708_1_0_9 = Vertices_3cb3c708_1_0_0;
    __this->_draw_3cb3c708 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 72), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

LinearGradientDrawable* LinearGradientDrawable__New_1(::uStatic* __this)
{
    LinearGradientDrawable* inst = (LinearGradientDrawable*)::uAllocObject(sizeof(LinearGradientDrawable), LinearGradientDrawable__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* LineCap__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.LineCap", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Butt", 0LL,
        "Round", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineCapImpl__uType* LineCapImpl__typeof()
{
    static ::uStaticStrong<LineCapImpl__uType*> type;
    if (type != NULL) return type;

    type = (LineCapImpl__uType*)::uAllocClassType(sizeof(LineCapImpl__uType), "Fuse.Drawing.LineCapImpl", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction("Create", type->__fp_Create, offsetof(LineCapImpl__uType, __fp_Create), false, ::app::Uno::Collections::IEnumerable__float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("Create", LineCapImpl__Create_1, 0, true, LineCapImpl__typeof(), ::app::Fuse::Drawing::LineCap__typeof()));

    ::uRegisterType(type);
    return type;
}

void LineCapImpl___ObjInit(LineCapImpl* __this)
{
}

LineCapImpl* LineCapImpl__Create_1(::uStatic* __this, int lineCap)
{
    switch (lineCap)
    {
        case 0:
        {
            return (LineCapImpl*)::app::Fuse::Drawing::ButtCap__New_1(NULL);
        }
        case 1:
        {
            return (LineCapImpl*)::app::Fuse::Drawing::RoundCap__New_1(NULL);
        }
    }

    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* LineJoin__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.LineJoin", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "Miter", 0LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineJoinImpl__uType* LineJoinImpl__typeof()
{
    static ::uStaticStrong<LineJoinImpl__uType*> type;
    if (type != NULL) return type;

    type = (LineJoinImpl__uType*)::uAllocClassType(sizeof(LineJoinImpl__uType), "Fuse.Drawing.LineJoinImpl", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunctionVoid("Create", type->__fp_Create, offsetof(LineJoinImpl__uType, __fp_Create), false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Collections::IList__float2__typeof(), ::app::Uno::Collections::IList__float2__typeof()),
        ::uNewFunction("Create", LineJoinImpl__Create_1, 0, true, LineJoinImpl__typeof(), ::app::Fuse::Drawing::LineJoin__typeof()));

    ::uRegisterType(type);
    return type;
}

void LineJoinImpl___ObjInit(LineJoinImpl* __this)
{
}

LineJoinImpl* LineJoinImpl__Create_1(::uStatic* __this, int lineJoin)
{
    switch (lineJoin)
    {
        case 0:
        {
            return (LineJoinImpl*)::app::Fuse::Drawing::MiterJoin__New_1(NULL);
        }
    }

    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineTo__uType* LineTo__typeof()
{
    static ::uStaticStrong<LineTo__uType*> type;
    if (type != NULL) return type;

    type = (LineTo__uType*)::uAllocClassType(sizeof(LineTo__uType), "Fuse.Drawing.LineTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::PathGeometry__typeof());
    type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__EvaluateLast;
    type->__fp_get_HasLastBounds = (bool(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__get_HasLastBounds;
    type->__fp_get_LastBounds = (::app::Uno::Rect(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__get_LastBounds;
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__Serialize;

    type->SetFields(1,
        ::uNewField("_lastPosition", NULL, offsetof(LineTo, _lastPosition), ::app::Uno::Float2__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("LineToCtor", LineTo__LineToCtor, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", LineTo__New_3, 0, true, LineTo__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void LineTo___ObjInit_1(LineTo* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

void LineTo___ObjInit_2(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->LineToCtor(prev, lastPosition, position);
}

::uObject* LineTo__EvaluateLast(LineTo* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 2), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = __this->_lastPosition, ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = __this->EndPosition(), array_123));
}

bool LineTo__get_HasLastBounds(LineTo* __this)
{
    return true;
}

::app::Uno::Rect LineTo__get_LastBounds(LineTo* __this)
{
    return ::app::Uno::Rect__ContainingPoints(NULL, __this->_lastPosition, __this->EndPosition());
}

void LineTo__LineToCtor(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
    __this->_lastPosition = lastPosition;
}

LineTo* LineTo__New_2(::uStatic* __this)
{
    LineTo* inst = (LineTo*)::uAllocObject(sizeof(LineTo), LineTo__typeof());
    inst->_ObjInit_1();
    return inst;
}

LineTo* LineTo__New_3(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    LineTo* inst = (LineTo*)::uAllocObject(sizeof(LineTo), LineTo__typeof());
    inst->_ObjInit_2(prev, lastPosition, position);
    return inst;
}

::uString* LineTo__Serialize(LineTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("L "), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MiterJoin__uType* MiterJoin__typeof()
{
    static ::uStaticStrong<MiterJoin__uType*> type;
    if (type != NULL) return type;

    type = (MiterJoin__uType*)::uAllocClassType(sizeof(MiterJoin__uType), "Fuse.Drawing.MiterJoin", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineJoinImpl__typeof());
    type->__fp_Create = (void(*)(::app::Fuse::Drawing::LineJoinImpl*, ::app::Uno::Float2, ::app::Uno::Float2, ::app::Uno::Float2, ::app::Uno::Float2, ::uObject*, ::uObject*))MiterJoin__Create;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MiterJoin__New_1, 0, true, MiterJoin__typeof()));

    ::uRegisterType(type);
    return type;
}

void MiterJoin___ObjInit_1(MiterJoin* __this)
{
    ::app::Fuse::Drawing::LineJoinImpl___ObjInit(__this);
}

void MiterJoin__Create(MiterJoin* __this, ::app::Uno::Float2 leftInner, ::app::Uno::Float2 leftOuter, ::app::Uno::Float2 rightInner, ::app::Uno::Float2 rightOuter, ::uObject* outer, ::uObject* inner)
{
}

MiterJoin* MiterJoin__New_1(::uStatic* __this)
{
    MiterJoin* inst = (MiterJoin*)::uAllocObject(sizeof(MiterJoin), MiterJoin__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MoveTo__uType* MoveTo__typeof()
{
    static ::uStaticStrong<MoveTo__uType*> type;
    if (type != NULL) return type;

    type = (MoveTo__uType*)::uAllocClassType(sizeof(MoveTo__uType), "Fuse.Drawing.MoveTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::ContourTerminator__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))MoveTo__Serialize;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MoveTo__New_2, 0, true, MoveTo__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void MoveTo___ObjInit_3(MoveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::ContourTerminator___ObjInit_1(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->ContourTerminatorCtor(prev, position);
}

MoveTo* MoveTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    MoveTo* inst = (MoveTo*)::uAllocObject(sizeof(MoveTo), MoveTo__typeof());
    inst->_ObjInit_3(prev, position);
    return inst;
}

::uString* MoveTo__Serialize(MoveTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("M "), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NonConsecutiveEnumerable__uType* NonConsecutiveEnumerable__typeof()
{
    static ::uStaticStrong<NonConsecutiveEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (NonConsecutiveEnumerable__uType*)::uAllocClassType(sizeof(NonConsecutiveEnumerable__uType), "Fuse.Drawing.NonConsecutiveEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))NonConsecutiveEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(NonConsecutiveEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(NonConsecutiveEnumerable, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(NonConsecutiveEnumerable, _source), ::app::Uno::Collections::IEnumerable__float2__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", NonConsecutiveEnumerable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__float2__typeof()),
        ::uNewFunction(".ctor", NonConsecutiveEnumerable__New_1, 0, true, NonConsecutiveEnumerable__typeof(), ::app::Uno::Collections::IEnumerable__float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void NonConsecutiveEnumerable___ObjInit(NonConsecutiveEnumerable* __this, ::uObject* source)
{
    __this->_source = source;
}

::uObject* NonConsecutiveEnumerable__GetEnumerator(NonConsecutiveEnumerable* __this)
{
    return (::uObject*)::app::Fuse::Drawing::NonConsecutiveEnumerator__New_1(NULL, ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_source)));
}

NonConsecutiveEnumerable* NonConsecutiveEnumerable__New_1(::uStatic* __this, ::uObject* source)
{
    NonConsecutiveEnumerable* inst = (NonConsecutiveEnumerable*)::uAllocObject(sizeof(NonConsecutiveEnumerable), NonConsecutiveEnumerable__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NonConsecutiveEnumerator__uType* NonConsecutiveEnumerator__typeof()
{
    static ::uStaticStrong<NonConsecutiveEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (NonConsecutiveEnumerator__uType*)::uAllocClassType(sizeof(NonConsecutiveEnumerator__uType), "Fuse.Drawing.NonConsecutiveEnumerator", false, 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))NonConsecutiveEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))NonConsecutiveEnumerator__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))NonConsecutiveEnumerator__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))NonConsecutiveEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(NonConsecutiveEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(NonConsecutiveEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(NonConsecutiveEnumerator__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(NonConsecutiveEnumerator, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(NonConsecutiveEnumerator, _current), ::app::Uno::Float2__typeof()),
        ::uNewField("_first", NULL, offsetof(NonConsecutiveEnumerator, _first), ::app::Uno::Float2__typeof()),
        ::uNewField("_hasCurrent", NULL, offsetof(NonConsecutiveEnumerator, _hasCurrent), ::app::Uno::Bool__typeof()),
        ::uNewField("_source", NULL, offsetof(NonConsecutiveEnumerator, _source), ::app::Uno::Collections::IEnumerator__float2__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", NonConsecutiveEnumerator__Dispose, 0, false),
        ::uNewFunction("get_Current", NonConsecutiveEnumerator__get_Current, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("MoveNext", NonConsecutiveEnumerator__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", NonConsecutiveEnumerator__New_1, 0, true, NonConsecutiveEnumerator__typeof(), ::app::Uno::Collections::IEnumerator__float2__typeof()),
        ::uNewFunctionVoid("Reset", NonConsecutiveEnumerator__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void NonConsecutiveEnumerator___ObjInit(NonConsecutiveEnumerator* __this, ::uObject* source)
{
    __this->_source = source;
}

void NonConsecutiveEnumerator__Dispose(NonConsecutiveEnumerator* __this)
{
}

::app::Uno::Float2 NonConsecutiveEnumerator__get_Current(NonConsecutiveEnumerator* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->_current.X, __this->_current.Y);
}

bool NonConsecutiveEnumerator__MoveNext(NonConsecutiveEnumerator* __this)
{
    if (!__this->_hasCurrent)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        __this->_first = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));
        __this->_current = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));
        __this->_hasCurrent = true;
        return true;
    }

    while (true)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        ::app::Uno::Float2 next = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));

        if ((::app::Uno::Math__Abs_1(NULL, next.X - __this->_current.X) > 1e-05f) || (::app::Uno::Math__Abs_1(NULL, next.Y - __this->_current.Y) > 1e-05f))
        {
            __this->_current = next;
            return true;
        }
    }

    return false;
}

NonConsecutiveEnumerator* NonConsecutiveEnumerator__New_1(::uStatic* __this, ::uObject* source)
{
    NonConsecutiveEnumerator* inst = (NonConsecutiveEnumerator*)::uAllocObject(sizeof(NonConsecutiveEnumerator), NonConsecutiveEnumerator__typeof());
    inst->_ObjInit(source);
    return inst;
}

void NonConsecutiveEnumerator__Reset(NonConsecutiveEnumerator* __this)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NonConsecutiveExtension__uType* NonConsecutiveExtension__typeof()
{
    static ::uStaticStrong<NonConsecutiveExtension__uType*> type;
    if (type != NULL) return type;

    type = (NonConsecutiveExtension__uType*)::uAllocClassType(sizeof(NonConsecutiveExtension__uType), "Fuse.Drawing.NonConsecutiveExtension");

    type->SetFunctions(1,
        ::uNewFunction("NonConsecutive", NonConsecutiveExtension__NonConsecutive, 0, true, ::app::Uno::Collections::IEnumerable__float2__typeof(), ::app::Uno::Collections::IEnumerable__float2__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* NonConsecutiveExtension__NonConsecutive(::uStatic* __this, ::uObject* self)
{
    return (::uObject*)::app::Fuse::Drawing::NonConsecutiveEnumerable__New_1(NULL, self);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometry__uType* PathGeometry__typeof()
{
    static ::uStaticStrong<PathGeometry__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometry__uType*)::uAllocClassType(sizeof(PathGeometry__uType), "Fuse.Drawing.PathGeometry", false, 0, 1, 0);

    type->__fp_EvaluateLast = PathGeometry__EvaluateLast;
    type->__fp_FindStartOfLastContour = PathGeometry__FindStartOfLastContour;
    type->__fp_get_EndsContour = PathGeometry__get_EndsContour;
    type->__fp_get_EndTangent = PathGeometry__get_EndTangent;
    type->__fp_get_HasLastBounds = PathGeometry__get_HasLastBounds;
    type->__fp_get_LastBounds = PathGeometry__get_LastBounds;
    type->__fp_Serialize = PathGeometry__Serialize;
    type->__fp_ToString = (::uString*(*)(::uObject*))PathGeometry__ToString;

    type->SetStrongRefs(
        "_previous", offsetof(PathGeometry, _previous));

    type->SetFields(4,
        ::uNewField("_boundsCache", NULL, offsetof(PathGeometry, _boundsCache), ::app::Uno::Rect__typeof()),
        ::uNewField("_hasBoundsCache", NULL, offsetof(PathGeometry, _hasBoundsCache), ::app::Uno::Bool__typeof()),
        ::uNewField("_position", NULL, offsetof(PathGeometry, _position), ::app::Uno::Float2__typeof()),
        ::uNewField("_previous", NULL, offsetof(PathGeometry, _previous), PathGeometry__typeof()));

    type->SetFunctions(24,
        ::uNewFunction("CalculateBounds", PathGeometry__CalculateBounds, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("ClosePath", PathGeometry__ClosePath, 0, false, PathGeometry__typeof()),
        ::uNewFunction("CurveTo", PathGeometry__CurveTo, 0, false, PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("EvaluateLast", type->__fp_EvaluateLast, offsetof(PathGeometry__uType, __fp_EvaluateLast), false, ::app::Uno::Collections::IEnumerable__float2__typeof()),
        ::uNewFunction("FindStartOfLastContour", type->__fp_FindStartOfLastContour, offsetof(PathGeometry__uType, __fp_FindStartOfLastContour), false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Bounds", PathGeometry__get_Bounds, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("get_EndPosition", PathGeometry__get_EndPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_EndsContour", type->__fp_get_EndsContour, offsetof(PathGeometry__uType, __fp_get_EndsContour), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_EndTangent", type->__fp_get_EndTangent, offsetof(PathGeometry__uType, __fp_get_EndTangent), false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_HasLastBounds", type->__fp_get_HasLastBounds, offsetof(PathGeometry__uType, __fp_get_HasLastBounds), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_LastBounds", type->__fp_get_LastBounds, offsetof(PathGeometry__uType, __fp_get_LastBounds), false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("HorizontalLineTo", PathGeometry__HorizontalLineTo, 0, false, PathGeometry__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("LineTo", PathGeometry__LineTo, 0, false, PathGeometry__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("LineTo", PathGeometry__LineTo_1, 0, false, PathGeometry__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("MoveTo", PathGeometry__MoveTo, 0, false, PathGeometry__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("MoveTo", PathGeometry__MoveTo_1, 0, false, PathGeometry__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", PathGeometry__New_1, 0, true, PathGeometry__typeof()),
        ::uNewFunction("Parse", PathGeometry__Parse, 0, true, PathGeometry__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("PathGeometryCtor", PathGeometry__PathGeometryCtor, 0, false, PathGeometry__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("RemoveLast", PathGeometry__RemoveLast, 0, false, PathGeometry__typeof()),
        ::uNewFunction("Serialize", type->__fp_Serialize, offsetof(PathGeometry__uType, __fp_Serialize), false, ::app::Uno::String__typeof()),
        ::uNewFunction("SmoothCurveTo", PathGeometry__SmoothCurveTo, 0, false, PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("ToPolygon", PathGeometry__ToPolygon, 0, false, ::app::Fuse::Drawing::Polygon__typeof(), ::app::Uno::Predicate__int__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("VerticalLineTo", PathGeometry__VerticalLineTo, 0, false, PathGeometry__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void PathGeometry___ObjInit(PathGeometry* __this)
{
    __this->_previous = NULL;
    __this->_position = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

::app::Uno::Rect PathGeometry__CalculateBounds(PathGeometry* __this)
{
    PathGeometry* pg = __this;

    while ((pg != NULL) && !pg->HasLastBounds())
    {
        pg = ::uPtr< PathGeometry*>(pg)->_previous;
    }

    if (pg == NULL)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Rect rectUnion = pg->LastBounds();
    pg = ::uPtr< PathGeometry*>(pg)->_previous;

    while (pg != NULL)
    {
        if (::uPtr< PathGeometry*>(pg)->HasLastBounds())
        {
            rectUnion = ::app::Uno::Rect__Union(NULL, rectUnion, ::uPtr< PathGeometry*>(pg)->LastBounds());
        }

        pg = ::uPtr< PathGeometry*>(pg)->_previous;
    }

    return rectUnion;
}

PathGeometry* PathGeometry__ClosePath(PathGeometry* __this)
{
    return (PathGeometry*)::app::Fuse::Drawing::ClosePath__New_2(NULL, __this, __this->EndPosition());
}

PathGeometry* PathGeometry__CurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::CurveTo__New_3(NULL, __this, __this->EndPosition(), controlPointStart, controlPointEnd, position);
}

::uObject* PathGeometry__EvaluateLast(PathGeometry* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerable__float2__New_1(NULL);
}

::app::Uno::Float2 PathGeometry__FindStartOfLastContour(PathGeometry* __this)
{
    return (__this->_previous != NULL) ? ::uPtr< PathGeometry*>(__this->_previous)->FindStartOfLastContour() : ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

::app::Uno::Rect PathGeometry__get_Bounds(PathGeometry* __this)
{
    if (!__this->_hasBoundsCache)
    {
        __this->_hasBoundsCache = true;
        __this->_boundsCache = __this->CalculateBounds();
    }

    return __this->_boundsCache;
}

::app::Uno::Float2 PathGeometry__get_EndPosition(PathGeometry* __this)
{
    return __this->_position;
}

bool PathGeometry__get_EndsContour(PathGeometry* __this)
{
    return false;
}

::app::Uno::Float2 PathGeometry__get_EndTangent(PathGeometry* __this)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

bool PathGeometry__get_HasLastBounds(PathGeometry* __this)
{
    return false;
}

::app::Uno::Rect PathGeometry__get_LastBounds(PathGeometry* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

PathGeometry* PathGeometry__HorizontalLineTo(PathGeometry* __this, float x)
{
    return (PathGeometry*)::app::Fuse::Drawing::HorizontalLineTo__New_4(NULL, __this, __this->EndPosition(), x);
}

PathGeometry* PathGeometry__LineTo(PathGeometry* __this, float x, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::LineTo__New_3(NULL, __this, __this->EndPosition(), ::app::Uno::Float2__New_2(NULL, x, y));
}

PathGeometry* PathGeometry__LineTo_1(PathGeometry* __this, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::LineTo__New_3(NULL, __this, __this->EndPosition(), position);
}

PathGeometry* PathGeometry__MoveTo(PathGeometry* __this, float x, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::MoveTo__New_2(NULL, __this, ::app::Uno::Float2__New_2(NULL, x, y));
}

PathGeometry* PathGeometry__MoveTo_1(PathGeometry* __this, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::MoveTo__New_2(NULL, __this, position);
}

PathGeometry* PathGeometry__New_1(::uStatic* __this)
{
    PathGeometry* inst = (PathGeometry*)::uAllocObject(sizeof(PathGeometry), PathGeometry__typeof());
    inst->_ObjInit();
    return inst;
}

PathGeometry* PathGeometry__Parse(::uStatic* __this, ::uString* pathDescription)
{
    return ::app::Fuse::Drawing::PathGeometryParser__Deserialize(NULL, pathDescription);
}

void PathGeometry__PathGeometryCtor(PathGeometry* __this, PathGeometry* previous, ::app::Uno::Float2 position)
{
    __this->_previous = previous;
    __this->_position = position;
}

PathGeometry* PathGeometry__RemoveLast(PathGeometry* __this)
{
    return __this->_previous;
}

::uString* PathGeometry__Serialize(PathGeometry* __this)
{
    return ::uGetConstString("");
}

PathGeometry* PathGeometry__SmoothCurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::SmoothCurveTo__New_4(NULL, __this, __this->EndPosition(), __this->EndTangent(), controlPointEnd, position);
}

::app::Fuse::Drawing::Polygon* PathGeometry__ToPolygon(PathGeometry* __this, ::uDelegate* WindingRule, ::app::Uno::Float2 scale)
{
    return ::app::Fuse::Drawing::Polygon__New_4(NULL, WindingRule, (::uObject*)::app::Fuse::Drawing::ContourEnumerable__New_1(NULL, __this, scale));
}

::uString* PathGeometry__ToString(PathGeometry* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, (__this->_previous == NULL) ? ::uGetConstString("") : ::uPtr< PathGeometry*>(__this->_previous)->ToString(), ::uGetConstString(" ")), __this->Serialize());
}

PathGeometry* PathGeometry__VerticalLineTo(PathGeometry* __this, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::VerticalLineTo__New_4(NULL, __this, __this->EndPosition(), y);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometryExtensions__uType* PathGeometryExtensions__typeof()
{
    static ::uStaticStrong<PathGeometryExtensions__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometryExtensions__uType*)::uAllocClassType(sizeof(PathGeometryExtensions__uType), "Fuse.Drawing.PathGeometryExtensions");

    type->SetFunctions(5,
        ::uNewFunction("Circle", PathGeometryExtensions__Circle, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Ellipse", PathGeometryExtensions__Ellipse, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("Rectangle", PathGeometryExtensions__Rectangle, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunction("RegularPolygon", PathGeometryExtensions__RegularPolygon, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Star", PathGeometryExtensions__Star, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Circle(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, float Radius)
{
    return ::app::Fuse::Drawing::EllipseFactory__AppendTo(NULL, self, ::app::Uno::Float2__New_1(NULL, Radius));
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Ellipse(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Radius)
{
    return ::app::Fuse::Drawing::EllipseFactory__AppendTo(NULL, self, Radius);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Rectangle(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius)
{
    return ::app::Fuse::Drawing::RectangleFactory__AppendTo(NULL, self, Size, CornerRadius);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__RegularPolygon(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    return ::app::Fuse::Drawing::RegularPolygonFactory__AppendTo(NULL, self, Sides, Radius);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Star(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Corners, float Radius, float SpokeRadius, float CornerRatio, float rotation)
{
    return ::app::Fuse::Drawing::StarFactory__AppendTo(NULL, self, Corners, Radius, SpokeRadius, CornerRatio, rotation);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometryParser__uType* PathGeometryParser__typeof()
{
    static ::uStaticStrong<PathGeometryParser__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometryParser__uType*)::uAllocClassType(sizeof(PathGeometryParser__uType), "Fuse.Drawing.PathGeometryParser", false, 0, 5, 0);

    type->SetStrongRefs(
        "_data", offsetof(PathGeometryParser, _data),
        "_head", offsetof(PathGeometryParser, _head),
        "_headToken", offsetof(PathGeometryParser, _headToken),
        "_prevToken", offsetof(PathGeometryParser, _prevToken),
        "_token", offsetof(PathGeometryParser, _token));

    type->SetFields(7,
        ::uNewField("_data", NULL, offsetof(PathGeometryParser, _data), ::app::Uno::String__typeof()),
        ::uNewField("_head", NULL, offsetof(PathGeometryParser, _head), ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewField("_headToken", NULL, offsetof(PathGeometryParser, _headToken), ::app::Fuse::Drawing::Token__typeof()),
        ::uNewField("_prevToken", NULL, offsetof(PathGeometryParser, _prevToken), ::app::Fuse::Drawing::Token__typeof()),
        ::uNewField("_token", NULL, offsetof(PathGeometryParser, _token), ::app::Fuse::Drawing::Token__typeof()),
        ::uNewField("_x", NULL, offsetof(PathGeometryParser, _x), ::app::Uno::Float__typeof()),
        ::uNewField("_y", NULL, offsetof(PathGeometryParser, _y), ::app::Uno::Float__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("ClosePath", PathGeometryParser__ClosePath, 0, false),
        ::uNewFunctionVoid("CurveTo", PathGeometryParser__CurveTo, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Deserialize", PathGeometryParser__Deserialize, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Execute", PathGeometryParser__Execute, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("HLineTo", PathGeometryParser__HLineTo, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("LineTo", PathGeometryParser__LineTo, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("MoveTo", PathGeometryParser__MoveTo, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ReadFloat", PathGeometryParser__ReadFloat, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SmoothCurveTo", PathGeometryParser__SmoothCurveTo, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("StartNewToken", PathGeometryParser__StartNewToken, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("VLineTo", PathGeometryParser__VLineTo, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void PathGeometryParser___ObjInit(PathGeometryParser* __this, ::uString* data)
{
    __this->_data = data;
    __this->_headToken = ::app::Fuse::Drawing::Token__New_1(NULL, -1, false);
    __this->_prevToken = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next = ::app::Fuse::Drawing::Token__New_1(NULL, 0, false);
    bool wasExponent = false;

    for (int i = 0; i < ::uPtr< ::uString*>(data)->Length(); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(data)->Item(i);

        switch (c)
        {
            case 0:
            case ' ':
            case ',':
            {
                __this->StartNewToken(i - 1, i + 1, false);
                break;
            }
            case '-':
            {
                if (!wasExponent)
                {
                    __this->StartNewToken(i - 1, i, false);
                }

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
                __this->StartNewToken(i - 1, i, true);
                __this->StartNewToken(i, i + 1, false);
                break;
            }
        }

        wasExponent = (c == 'e') || (c == 'E');
    }

    ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Last = ::uPtr< ::uString*>(data)->Length() - 1;

    for (::app::Fuse::Drawing::Token* token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next; token != NULL; )
    {
        ::app::Fuse::Drawing::Token* next = ::uPtr< ::app::Fuse::Drawing::Token*>(token)->Next;

        while ((next != NULL) && ((::uPtr< ::app::Fuse::Drawing::Token*>(next)->Last - ::uPtr< ::app::Fuse::Drawing::Token*>(next)->First) < 0))
        {
            next = ::uPtr< ::app::Fuse::Drawing::Token*>(next)->Next;
        }

        token = ::uPtr< ::app::Fuse::Drawing::Token*>(token)->Next = next;
    }

    __this->_head = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next;

    while (__this->_token != NULL)
    {
        if (!::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->HasAction)
        {
            __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;
            continue;
        }

        ::uChar currentCommand = ::uPtr< ::uString*>(__this->_data)->Item(::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First);
        __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;

        do
        {
            __this->Execute(currentCommand);
        }
        while ((__this->_token != NULL) && !::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->HasAction);
    }
}

void PathGeometryParser__ClosePath(PathGeometryParser* __this)
{
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->ClosePath();
}

void PathGeometryParser__CurveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x1 = offsetX + __this->ReadFloat();
    float y1 = offsetY + __this->ReadFloat();
    float x2 = offsetX + __this->ReadFloat();
    float y2 = offsetY + __this->ReadFloat();
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->CurveTo(::app::Uno::Float2__New_2(NULL, x1, y1), ::app::Uno::Float2__New_2(NULL, x2, y2), ::app::Uno::Float2__New_2(NULL, x, y));
}

::app::Fuse::Drawing::PathGeometry* PathGeometryParser__Deserialize(::uStatic* __this, ::uString* data)
{
    if (::app::Uno::String__op_Equality(NULL, data, NULL) || (::uPtr< ::uString*>(data)->Length() == 0))
    {
        return ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    }

    return ::uPtr< PathGeometryParser*>(PathGeometryParser__New_1(NULL, data))->_head;
}

void PathGeometryParser__Execute(PathGeometryParser* __this, ::uChar c)
{
    switch (c)
    {
        case 'M':
        {
            __this->MoveTo(0.0f, 0.0f);
            break;
        }
        case 'C':
        {
            __this->CurveTo(0.0f, 0.0f);
            break;
        }
        case 'S':
        {
            __this->SmoothCurveTo(0.0f, 0.0f);
            break;
        }
        case 'Z':
        {
            __this->ClosePath();
            break;
        }
        case 'L':
        {
            __this->LineTo(0.0f, 0.0f);
            break;
        }
        case 'H':
        {
            __this->HLineTo(0.0f, 0.0f);
            break;
        }
        case 'V':
        {
            __this->VLineTo(0.0f, 0.0f);
            break;
        }
        case 'm':
        {
            __this->MoveTo(__this->_x, __this->_y);
            break;
        }
        case 'c':
        {
            __this->CurveTo(__this->_x, __this->_y);
            break;
        }
        case 's':
        {
            __this->SmoothCurveTo(__this->_x, __this->_y);
            break;
        }
        case 'z':
        {
            __this->ClosePath();
            break;
        }
        case 'l':
        {
            __this->LineTo(__this->_x, __this->_y);
            break;
        }
        case 'h':
        {
            __this->HLineTo(__this->_x, __this->_y);
            break;
        }
        case 'v':
        {
            __this->VLineTo(__this->_x, __this->_y);
            break;
        }
    }
}

void PathGeometryParser__HLineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->HorizontalLineTo(x);
}

void PathGeometryParser__LineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->LineTo(x, y);
}

void PathGeometryParser__MoveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->MoveTo(x, y);
}

PathGeometryParser* PathGeometryParser__New_1(::uStatic* __this, ::uString* data)
{
    PathGeometryParser* inst = (PathGeometryParser*)::uAllocObject(sizeof(PathGeometryParser), PathGeometryParser__typeof());
    inst->_ObjInit(data);
    return inst;
}

float PathGeometryParser__ReadFloat(PathGeometryParser* __this)
{
    ::uString* str = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->_data), ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First, (::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Last - ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First) + 1);
    float res = ::app::Uno::Float__Parse(NULL, str);
    __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;
    return res;
}

void PathGeometryParser__SmoothCurveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x2 = offsetX + __this->ReadFloat();
    float y2 = offsetY + __this->ReadFloat();
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->SmoothCurveTo(::app::Uno::Float2__New_2(NULL, x2, y2), ::app::Uno::Float2__New_2(NULL, x, y));
}

void PathGeometryParser__StartNewToken(PathGeometryParser* __this, int prevLastChar, int nextFirstChar, bool hasAction)
{
    ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Last = prevLastChar;
    __this->_prevToken = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Next = ::app::Fuse::Drawing::Token__New_1(NULL, nextFirstChar, hasAction);
}

void PathGeometryParser__VLineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->VerticalLineTo(y);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometryRenderer__uType* PathGeometryRenderer__typeof()
{
    static ::uStaticStrong<PathGeometryRenderer__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometryRenderer__uType*)::uAllocClassType(sizeof(PathGeometryRenderer__uType), "Fuse.Drawing.PathGeometryRenderer", false, 0, 7, 0);

    type->SetStrongRefs(
        "_fillRenderer", offsetof(PathGeometryRenderer, _fillRenderer),
        "_fillRule", offsetof(PathGeometryRenderer, _fillRule),
        "_fills", offsetof(PathGeometryRenderer, _fills),
        "_geometry", offsetof(PathGeometryRenderer, _geometry),
        "_strokeRenderers", offsetof(PathGeometryRenderer, _strokeRenderers),
        "_strokes", offsetof(PathGeometryRenderer, _strokes),
        "VisualInvalidated", offsetof(PathGeometryRenderer, VisualInvalidated));

    type->SetFields(16,
        ::uNewField("_antialiasing", NULL, offsetof(PathGeometryRenderer, _antialiasing), ::app::Fuse::Drawing::Antialiasing__typeof()),
        ::uNewField("_bounds", NULL, offsetof(PathGeometryRenderer, _bounds), ::app::Uno::Rect__typeof()),
        ::uNewField("_cachedAntialiasing", NULL, offsetof(PathGeometryRenderer, _cachedAntialiasing), ::app::Fuse::Drawing::Antialiasing__typeof()),
        ::uNewField("_density", NULL, offsetof(PathGeometryRenderer, _density), ::app::Uno::Float__typeof()),
        ::uNewField("_fillDensity", NULL, offsetof(PathGeometryRenderer, _fillDensity), ::app::Uno::Float__typeof()),
        ::uNewField("_fillRenderer", NULL, offsetof(PathGeometryRenderer, _fillRenderer), ::app::Fuse::Drawing::PolygonFiller__typeof()),
        ::uNewField("_fillRule", NULL, offsetof(PathGeometryRenderer, _fillRule), ::app::Uno::Predicate__int__typeof()),
        ::uNewField("_fills", NULL, offsetof(PathGeometryRenderer, _fills), ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_geometry", NULL, offsetof(PathGeometryRenderer, _geometry), ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewField("_hasBoundsCache", NULL, offsetof(PathGeometryRenderer, _hasBoundsCache), ::app::Uno::Bool__typeof()),
        ::uNewField("_innerBounds", NULL, offsetof(PathGeometryRenderer, _innerBounds), ::app::Uno::Rect__typeof()),
        ::uNewField("_preScale", NULL, offsetof(PathGeometryRenderer, _preScale), ::app::Uno::Float2__typeof()),
        ::uNewField("_strokeDensity", NULL, offsetof(PathGeometryRenderer, _strokeDensity), ::app::Uno::Float__typeof()),
        ::uNewField("_strokePadding", NULL, offsetof(PathGeometryRenderer, _strokePadding), ::app::Uno::Float4__typeof()),
        ::uNewField("_strokeRenderers", NULL, offsetof(PathGeometryRenderer, _strokeRenderers), ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()),
        ::uNewField("_strokes", NULL, offsetof(PathGeometryRenderer, _strokes), ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__typeof()));

    type->SetFunctions(49,
        ::uNewFunctionVoid("add_VisualInvalidated", PathGeometryRenderer__add_VisualInvalidated, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("CalcBounds", PathGeometryRenderer__CalcBounds, 0, false),
        ::uNewFunctionVoid("CompleteStrokeRenderers", PathGeometryRenderer__CompleteStrokeRenderers, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Draw", PathGeometryRenderer__Draw, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Draw", PathGeometryRenderer__Draw_1, 0, false, ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewFunctionVoid("DrawFill", PathGeometryRenderer__DrawFill, 0, false, ::app::Fuse::Drawing::RendererContext__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("DrawFills", PathGeometryRenderer__DrawFills, 0, false, ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewFunctionVoid("DrawStroke", PathGeometryRenderer__DrawStroke, 0, false, ::app::Fuse::Drawing::RendererContext__typeof(), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("DrawStrokes", PathGeometryRenderer__DrawStrokes, 0, false, ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewFunctionVoid("EnsureFillRenderer", PathGeometryRenderer__EnsureFillRenderer, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("EnsureStrokeRenderers", PathGeometryRenderer__EnsureStrokeRenderers, 0, false),
        ::uNewFunctionVoid("GeometryChanged", PathGeometryRenderer__GeometryChanged, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewFunction("get_Antialiasing", PathGeometryRenderer__get_Antialiasing, 0, false, ::app::Fuse::Drawing::Antialiasing__typeof()),
        ::uNewFunction("get_Bounds", PathGeometryRenderer__get_Bounds, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("get_Density", PathGeometryRenderer__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Fill", PathGeometryRenderer__get_Fill, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("get_FillRule", PathGeometryRenderer__get_FillRule, 0, false, ::app::Uno::Predicate__int__typeof()),
        ::uNewFunction("get_Fills", PathGeometryRenderer__get_Fills, 0, false, ::app::Uno::Collections::IList__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("get_Geometry", PathGeometryRenderer__get_Geometry, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewFunction("get_HasFills", PathGeometryRenderer__get_HasFills, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasStrokes", PathGeometryRenderer__get_HasStrokes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_InnerBounds", PathGeometryRenderer__get_InnerBounds, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("get_PreScale", PathGeometryRenderer__get_PreScale, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Stroke", PathGeometryRenderer__get_Stroke, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("get_StrokePadding", PathGeometryRenderer__get_StrokePadding, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Strokes", PathGeometryRenderer__get_Strokes, 0, false, ::app::Uno::Collections::IList__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("GetHitPart", PathGeometryRenderer__GetHitPart, 0, false, ::uObject__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("GetRendererContext", PathGeometryRenderer__GetRendererContext, 0, false, ::app::Fuse::Drawing::RendererContext__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("GetStrokeRenderer", PathGeometryRenderer__GetStrokeRenderer, 0, false, ::app::Fuse::Drawing::PolygonFiller__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("InvalidateStrokeAndFill", PathGeometryRenderer__InvalidateStrokeAndFill, 0, false),
        ::uNewFunctionVoid("InvalidateVisual", PathGeometryRenderer__InvalidateVisual, 0, false),
        ::uNewFunction(".ctor", PathGeometryRenderer__New_1, 0, true, PathGeometryRenderer__typeof()),
        ::uNewFunction(".ctor", PathGeometryRenderer__New_2, 0, true, PathGeometryRenderer__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewFunctionVoid("OnFillAdded", PathGeometryRenderer__OnFillAdded, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("OnFillRemoved", PathGeometryRenderer__OnFillRemoved, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("OnShadingChanged", PathGeometryRenderer__OnShadingChanged, 0, false),
        ::uNewFunctionVoid("OnStrokeAdded", PathGeometryRenderer__OnStrokeAdded, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("OnStrokeChanged", PathGeometryRenderer__OnStrokeChanged, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("OnStrokeRemoved", PathGeometryRenderer__OnStrokeRemoved, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("remove_VisualInvalidated", PathGeometryRenderer__remove_VisualInvalidated, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_Antialiasing", PathGeometryRenderer__set_Antialiasing, 0, false, ::app::Fuse::Drawing::Antialiasing__typeof()),
        ::uNewFunctionVoid("set_Density", PathGeometryRenderer__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Fill", PathGeometryRenderer__set_Fill, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("set_FillRule", PathGeometryRenderer__set_FillRule, 0, false, ::app::Uno::Predicate__int__typeof()),
        ::uNewFunctionVoid("set_Geometry", PathGeometryRenderer__set_Geometry, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewFunctionVoid("set_PreScale", PathGeometryRenderer__set_PreScale, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Stroke", PathGeometryRenderer__set_Stroke, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("SoftDispose", PathGeometryRenderer__SoftDispose, 0, false),
        ::uNewFunctionVoid("UpdateAa", PathGeometryRenderer__UpdateAa, 0, false));

    ::uRegisterType(type);
    return type;
}

void PathGeometryRenderer___ObjInit(PathGeometryRenderer* __this)
{
    __this->_geometry = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    __this->_density = 1.0f;
    __this->_antialiasing = 1;
    __this->_fillRule = ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero);
    __this->_preScale = ::app::Uno::Float2__New_1(NULL, 1.0f);
}

void PathGeometryRenderer___ObjInit_1(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* geometry)
{
    __this->_geometry = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    __this->_density = 1.0f;
    __this->_antialiasing = 1;
    __this->_fillRule = ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero);
    __this->_preScale = ::app::Uno::Float2__New_1(NULL, 1.0f);
    __this->Geometry(geometry);
}

void PathGeometryRenderer__add_VisualInvalidated(PathGeometryRenderer* __this, ::uDelegate* value)
{
    __this->VisualInvalidated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->VisualInvalidated, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void PathGeometryRenderer__CalcBounds(PathGeometryRenderer* __this)
{
    if (__this->_hasBoundsCache)
    {
        return;
    }

    __this->_innerBounds = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->Bounds();
    ::app::Uno::Rect scaled = __this->_innerBounds;
    scaled.Left = scaled.Left * __this->_preScale.X;
    scaled.Top = scaled.Top * __this->_preScale.Y;
    scaled.Right = scaled.Right * __this->_preScale.X;
    scaled.Bottom = scaled.Bottom * __this->_preScale.Y;
    __this->_bounds = scaled;
    __this->_strokePadding = ::app::Uno::Float4__New_1(NULL, 0.0f);

    if (__this->HasStrokes())
    {
        __this->UpdateAa();
        __this->CompleteStrokeRenderers(__this->Density());
        ::app::Uno::Rect r = scaled;

        for (::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_125 = ::uPtr< ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Values())->GetEnumerator(); enum_125.MoveNext(); )
        {
            ::app::Fuse::Drawing::PolygonFiller* s = enum_125.Current();
            ::app::Uno::Rect c = ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(s)->Bounds();
            r = ::app::Uno::Rect__Union(NULL, r, c);
        }

        ::app::Uno::Float2 diffMin = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_bounds.Minimum(), r.Minimum());
        ::app::Uno::Float2 diffMax = ::app::Uno::Float2__op_Subtraction_2(NULL, r.Maximum(), __this->_bounds.Maximum());
        __this->_strokePadding = ::app::Uno::Float4__New_2(NULL, diffMin.X, diffMin.Y, diffMax.X, diffMax.Y);
        __this->_strokePadding = ::app::Uno::Math__Max_7(NULL, __this->_strokePadding, ::app::Uno::Float4__New_1(NULL, 0.0f));
        __this->_bounds = r;
    }

    __this->_hasBoundsCache = true;
}

void PathGeometryRenderer__CompleteStrokeRenderers(PathGeometryRenderer* __this, float density)
{
    __this->EnsureStrokeRenderers();

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
        __this->GetStrokeRenderer(s, density);
    }
}

void PathGeometryRenderer__Draw(PathGeometryRenderer* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize)
{
    __this->Draw_1(__this->GetRendererContext(dc, transform, elementSize));
}

void PathGeometryRenderer__Draw_1(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    __this->UpdateAa();
    __this->DrawFills(ctx);
    __this->DrawStrokes(ctx);
}

void PathGeometryRenderer__DrawFill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Brush* fill)
{
    __this->EnsureFillRenderer(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density());

    if (!::uPtr< ::app::Fuse::Drawing::Brush*>(fill)->IsCompletelyTransparent())
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Draw_1(fill, ctx);
    }
}

void PathGeometryRenderer__DrawFills(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); i++)
        {
            __this->DrawFill(ctx, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i));
        }
    }
}

void PathGeometryRenderer__DrawStroke(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Stroke* s)
{
    __this->EnsureStrokeRenderers();

    if (__this->_strokeDensity != ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density())
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Clear();
        __this->_strokeDensity = ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density();
    }

    if ((::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush() != NULL) && !::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush())->IsCompletelyTransparent())
    {
        ::app::Fuse::Drawing::PolygonFiller* sr = __this->GetStrokeRenderer(s, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density());
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(sr)->Draw_1(::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush(), ctx);
    }
}

void PathGeometryRenderer__DrawStrokes(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    if (__this->HasStrokes())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawStroke(ctx, s);
        }
    }
}

void PathGeometryRenderer__EnsureFillRenderer(PathGeometryRenderer* __this, float density)
{
    ::app::Fuse::Drawing::PolygonFiller* ind_130;

    if ((__this->_fillDensity != density) || (__this->_fillRenderer == NULL))
    {
        __this->_fillRenderer = (ind_130 = __this->_fillRenderer, (ind_130 != NULL) ? ind_130 : ::app::Fuse::Drawing::PolygonFiller__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->ToPolygon(__this->_fillRule, __this->_preScale), __this->_antialiasing, density));
        __this->_fillDensity = density;
    }
}

void PathGeometryRenderer__EnsureStrokeRenderers(PathGeometryRenderer* __this)
{
    if (__this->_strokeRenderers == NULL)
    {
        __this->_strokeRenderers = ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(NULL);
    }
}

void PathGeometryRenderer__GeometryChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* geom)
{
    __this->InvalidateStrokeAndFill();
}

int PathGeometryRenderer__get_Antialiasing(PathGeometryRenderer* __this)
{
    return __this->_antialiasing;
}

::app::Uno::Rect PathGeometryRenderer__get_Bounds(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_bounds;
}

float PathGeometryRenderer__get_Density(PathGeometryRenderer* __this)
{
    return __this->_density;
}

::app::Fuse::Drawing::Brush* PathGeometryRenderer__get_Fill(PathGeometryRenderer* __this)
{
    return __this->HasFills() ? ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush(NULL, (::uObject*)__this->Fills()) : NULL;
}

::uDelegate* PathGeometryRenderer__get_FillRule(PathGeometryRenderer* __this)
{
    return __this->_fillRule;
}

::uObject* PathGeometryRenderer__get_Fills(PathGeometryRenderer* __this)
{
    ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush* ind_131;
    return (::uObject*)(ind_131 = __this->_fills, ((ind_131 != NULL) ? ind_131 : (__this->_fills = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)PathGeometryRenderer__OnFillAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)PathGeometryRenderer__OnFillRemoved, __this)))));
}

::app::Fuse::Drawing::PathGeometry* PathGeometryRenderer__get_Geometry(PathGeometryRenderer* __this)
{
    return __this->_geometry;
}

bool PathGeometryRenderer__get_HasFills(PathGeometryRenderer* __this)
{
    return (__this->_fills != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() > 0);
}

bool PathGeometryRenderer__get_HasStrokes(PathGeometryRenderer* __this)
{
    return (__this->_strokes != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count() > 0);
}

::app::Uno::Rect PathGeometryRenderer__get_InnerBounds(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_innerBounds;
}

::app::Uno::Float2 PathGeometryRenderer__get_PreScale(PathGeometryRenderer* __this)
{
    return __this->_preScale;
}

::app::Fuse::Drawing::Stroke* PathGeometryRenderer__get_Stroke(PathGeometryRenderer* __this)
{
    return __this->HasStrokes() ? ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Stroke(NULL, (::uObject*)__this->_strokes) : NULL;
}

::app::Uno::Float4 PathGeometryRenderer__get_StrokePadding(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_strokePadding;
}

::uObject* PathGeometryRenderer__get_Strokes(PathGeometryRenderer* __this)
{
    ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke* ind_132;
    return (::uObject*)(ind_132 = __this->_strokes, ((ind_132 != NULL) ? ind_132 : (__this->_strokes = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeRemoved, __this)))));
}

::uObject* PathGeometryRenderer__GetHitPart(PathGeometryRenderer* __this, ::app::Uno::Float2 p)
{
    __this->UpdateAa();

    if (__this->HasStrokes())
    {
        __this->CompleteStrokeRenderers(__this->Density());

        for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_127 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->GetEnumerator(); enum_127.MoveNext(); )
        {
            ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller stroke = enum_127.Current();

            if (::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(stroke.Value())->Intersects(p))
            {
                return (::uObject*)stroke.Key();
            }
        }
    }

    if (__this->HasFills())
    {
        __this->EnsureFillRenderer(__this->Density());

        if (::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Intersects(p))
        {
            return (::uObject*)__this->Fill();
        }
    }

    return NULL;
}

::app::Fuse::Drawing::RendererContext* PathGeometryRenderer__GetRendererContext(PathGeometryRenderer* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize)
{
    ::app::Fuse::Drawing::RendererContext* collection_128;
    collection_128 = ::app::Fuse::Drawing::RendererContext__New_1(NULL);
    ::uPtr< ::app::Fuse::Drawing::RendererContext*>(collection_128)->Transform(transform);
    collection_128->CanvasSize(elementSize);
    collection_128->Density(__this->Density());
    collection_128->CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
    return collection_128;
}

::app::Fuse::Drawing::PolygonFiller* PathGeometryRenderer__GetStrokeRenderer(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s, float density)
{
    ::app::Fuse::Drawing::PolygonFiller* strokeRenderer;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
    {
        ::app::Uno::Float2 widthOffset = ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->GetDeviceAdjusted(density);
        ::app::Fuse::Drawing::Polygon* strokePolygon = ::uPtr< ::app::Fuse::Drawing::Polygon*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->ToPolygon(__this->_fillRule, __this->_preScale))->Stroke(::app::Uno::Math__Max_1(NULL, 0.0f, widthOffset.Item(0)), widthOffset.Item(1), s->LineCap(), s->LineCap());
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Item(s, strokeRenderer = ::app::Fuse::Drawing::PolygonFiller__New_1(NULL, strokePolygon, __this->_antialiasing, density));
    }

    return strokeRenderer;
}

void PathGeometryRenderer__InvalidateStrokeAndFill(PathGeometryRenderer* __this)
{
    __this->_hasBoundsCache = false;

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(__this->Strokes())); i++)
        {
            __this->OnStrokeChanged(::app::Uno::Collections::IList__Fuse_Drawing_Stroke::Item(::uPtr< ::uObject*>(__this->Strokes()), i));
        }
    }

    if (__this->_strokeRenderers != NULL)
    {
        for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->GetEnumerator(); enum_126.MoveNext(); )
        {
            ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller p = enum_126.Current();
            ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(p.Value())->Dispose();
        }

        __this->_strokeRenderers = NULL;
    }

    if (__this->_fillRenderer != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Dispose();
        __this->_fillRenderer = NULL;
    }

    __this->InvalidateVisual();
}

void PathGeometryRenderer__InvalidateVisual(PathGeometryRenderer* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->VisualInvalidated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->VisualInvalidated)->InvokeVoid();
    }
}

PathGeometryRenderer* PathGeometryRenderer__New_1(::uStatic* __this)
{
    PathGeometryRenderer* inst = (PathGeometryRenderer*)::uAllocObject(sizeof(PathGeometryRenderer), PathGeometryRenderer__typeof());
    inst->_ObjInit();
    return inst;
}

PathGeometryRenderer* PathGeometryRenderer__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* geometry)
{
    PathGeometryRenderer* inst = (PathGeometryRenderer*)::uAllocObject(sizeof(PathGeometryRenderer), PathGeometryRenderer__typeof());
    inst->_ObjInit_1(geometry);
    return inst;
}

void PathGeometryRenderer__OnFillAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void PathGeometryRenderer__OnFillRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void PathGeometryRenderer__OnShadingChanged(PathGeometryRenderer* __this)
{
    __this->InvalidateVisual();
}

void PathGeometryRenderer__OnStrokeAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    s->add_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void PathGeometryRenderer__OnStrokeChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->_strokeRenderers != NULL)
    {
        ::app::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

        if (::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
        {
            ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(strokeRenderer)->Dispose();
            ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Remove(s);
        }
    }

    __this->InvalidateVisual();
}

void PathGeometryRenderer__OnStrokeRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    s->remove_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void PathGeometryRenderer__remove_VisualInvalidated(PathGeometryRenderer* __this, ::uDelegate* value)
{
    __this->VisualInvalidated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->VisualInvalidated, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void PathGeometryRenderer__set_Antialiasing(PathGeometryRenderer* __this, int value)
{
    if (value == __this->_antialiasing)
    {
        return;
    }

    __this->_antialiasing = value;
    __this->InvalidateVisual();
}

void PathGeometryRenderer__set_Density(PathGeometryRenderer* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->InvalidateStrokeAndFill();
    }
}

void PathGeometryRenderer__set_Fill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* value)
{
    if ((__this->HasFills() && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() == 1)) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(0) == value))
    {
        return;
    }

    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Clear(::uPtr< ::uObject*>(__this->Fills()));

    if (value != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(__this->Fills()), value);
    }
}

void PathGeometryRenderer__set_FillRule(PathGeometryRenderer* __this, ::uDelegate* value)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)value, (::uDelegate*)__this->_fillRule))
    {
        return;
    }

    __this->_fillRule = value;
    __this->InvalidateStrokeAndFill();
}

void PathGeometryRenderer__set_Geometry(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* value)
{
    if (value == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("value")));
    }

    if (value == __this->_geometry)
    {
        return;
    }

    __this->_geometry = value;
    __this->GeometryChanged(__this->_geometry);
}

void PathGeometryRenderer__set_PreScale(PathGeometryRenderer* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_preScale, value))
    {
        __this->_preScale = value;
        __this->InvalidateStrokeAndFill();
    }
}

void PathGeometryRenderer__set_Stroke(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* value)
{
    if ((__this->HasStrokes() && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count() == 1)) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Item(0) == value))
    {
        return;
    }

    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Clear(::uPtr< ::uObject*>(__this->Strokes()));

    if (value != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(__this->Strokes()), value);
    }
}

void PathGeometryRenderer__SoftDispose(PathGeometryRenderer* __this)
{
    if (__this->_fillRenderer != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Dispose();
        __this->_fillRenderer = NULL;
    }

    if (__this->_strokeRenderers != NULL)
    {
        for (::uObject* enum_129 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_129)); )
        {
            ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_129));
            ::app::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

            if (::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
            {
                ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(strokeRenderer)->Dispose();
            }
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Clear();
        __this->_strokeRenderers = NULL;
    }
}

void PathGeometryRenderer__UpdateAa(PathGeometryRenderer* __this)
{
    if (__this->_cachedAntialiasing == __this->Antialiasing())
    {
        return;
    }

    __this->_cachedAntialiasing = __this->Antialiasing();
    __this->InvalidateStrokeAndFill();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Polygon__uType* Polygon__typeof()
{
    static ::uStaticStrong<Polygon__uType*> type;
    if (type != NULL) return type;

    type = (Polygon__uType*)::uAllocClassType(sizeof(Polygon__uType), "Fuse.Drawing.Polygon", false, 0, 3, 0);

    type->SetStrongRefs(
        "_boundaryContours", offsetof(Polygon, _boundaryContours),
        "_contours", offsetof(Polygon, _contours),
        "_windingRule", offsetof(Polygon, _windingRule));

    type->SetFields(3,
        ::uNewField("_boundaryContours", NULL, offsetof(Polygon, _boundaryContours), ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof())),
        ::uNewField("_contours", NULL, offsetof(Polygon, _contours), ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour__typeof()),
        ::uNewField("_windingRule", NULL, offsetof(Polygon, _windingRule), ::app::Uno::Predicate__int__typeof()));

    type->SetFunctions(17,
        ::uNewFunction("CreateTriangle", Polygon__CreateTriangle, 0, false, ::app::Uno::Geometry::Triangle2D__typeof(), ::app::Fuse::Drawing::Tesselation::Face__typeof()),
        ::uNewFunction("Extrude", Polygon__Extrude, 0, false, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Contours", Polygon__get_Contours, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("get_IsDegenerate", Polygon__get_IsDegenerate, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_WindingRule", Polygon__get_WindingRule, 0, false, ::app::Uno::Predicate__int__typeof()),
        ::uNewFunction("GetBoundaryContours", Polygon__GetBoundaryContours, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("GetFillTriangles", Polygon__GetFillTriangles, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Geometry_Triangle2D__typeof()),
        ::uNewFunction("GetTriangleVertices", Polygon__GetTriangleVertices, 0, false, ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunction("Intersect", Polygon__Intersect, 0, false, Polygon__typeof(), Polygon__typeof()),
        ::uNewFunction(".ctor", Polygon__New_1, 0, true, Polygon__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof())),
        ::uNewFunction(".ctor", Polygon__New_2, 0, true, Polygon__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction(".ctor", Polygon__New_3, 0, true, Polygon__typeof(), ::app::Uno::Predicate__int__typeof(), ::uGetArrayType(::app::Fuse::Drawing::Contour__typeof())),
        ::uNewFunction(".ctor", Polygon__New_4, 0, true, Polygon__typeof(), ::app::Uno::Predicate__int__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof()),
        ::uNewFunction("Stroke", Polygon__Stroke, 0, false, Polygon__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::LineCap__typeof(), ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewFunction("Subtract", Polygon__Subtract, 0, false, Polygon__typeof(), Polygon__typeof()),
        ::uNewFunction("Triangulate", Polygon__Triangulate, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable__typeof()),
        ::uNewFunction("Union", Polygon__Union, 0, false, Polygon__typeof(), Polygon__typeof()));

    ::uRegisterType(type);
    return type;
}

void Polygon___ObjInit(Polygon* __this, ::uArray* contours)
{
    __this->_ObjInit_2(::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero), contours);
}

void Polygon___ObjInit_1(Polygon* __this, ::uObject* contours)
{
    __this->_ObjInit_3(::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero), contours);
}

void Polygon___ObjInit_2(Polygon* __this, ::uDelegate* windingRule, ::uArray* contours)
{
    __this->_windingRule = windingRule;
    __this->_contours = ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour__New_1(NULL, contours);
}

void Polygon___ObjInit_3(Polygon* __this, ::uDelegate* windingRule, ::uObject* contours)
{
    __this->_windingRule = windingRule;
    __this->_contours = ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour__New_2(NULL, contours);
}

::app::Uno::Geometry::Triangle2D* Polygon__CreateTriangle(Polygon* __this, ::app::Fuse::Drawing::Tesselation::Face* face)
{
    return ::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->ToTriangle();
}

::app::Uno::Content::Models::ModelMesh* Polygon__Extrude(Polygon* __this, float depth, float smoothingThreshold)
{
    Polygon* poly = __this;
    ::app::Uno::Collections::List__float3* vertices = ::app::Uno::Collections::List__float3__New_1(NULL);
    ::app::Uno::Collections::List__float3* normals = ::app::Uno::Collections::List__float3__New_1(NULL);
    ::app::Uno::Collections::List__float4* tangents = ::app::Uno::Collections::List__float4__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Geometry_Triangle2D::GetEnumerator(::uPtr< ::uObject*>(poly->GetFillTriangles())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Geometry::Triangle2D* tri = ::app::Uno::Collections::IEnumerator__Uno_Geometry_Triangle2D::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Uno::Float3 z = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, -1.0f);
        ::app::Uno::Float3 nz = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
        ::app::Uno::Float4 t = ::app::Uno::Float4__New_2(NULL, 1.0f, 0.0f, 0.0f, 1.0f);
        ::app::Uno::Float4 nt = ::app::Uno::Float4__New_2(NULL, 1.0f, 0.0f, 0.0f, -1.0f);
        ::uPtr< ::app::Uno::Collections::List__float3*>(vertices)->Add(::app::Uno::Float3__New_4(NULL, ::uPtr< ::app::Uno::Geometry::Triangle2D*>(tri)->C, 0.0f));
        ::uPtr< ::app::Uno::Collections::List__float3*>(normals)->Add(z);
        ::uPtr< ::app::Uno::Collections::List__float4*>(tangents)->Add(t);
        vertices->Add(::app::Uno::Float3__New_4(NULL, tri->B, 0.0f));
        normals->Add(z);
        tangents->Add(t);
        vertices->Add(::app::Uno::Float3__New_4(NULL, tri->A, 0.0f));
        normals->Add(z);
        tangents->Add(t);
        vertices->Add(::app::Uno::Float3__New_4(NULL, tri->A, depth));
        normals->Add(nz);
        tangents->Add(nt);
        vertices->Add(::app::Uno::Float3__New_4(NULL, tri->B, depth));
        normals->Add(nz);
        tangents->Add(nt);
        vertices->Add(::app::Uno::Float3__New_4(NULL, tri->C, depth));
        normals->Add(nz);
        tangents->Add(nt);
    }

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(poly->GetBoundaryContours())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Drawing::Contour* contour = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_124));
        ::uArray* faceNormals = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->VertexCount());

        for (int i = 0; i < contour->VertexCount(); i++)
        {
            ::app::Uno::Float2 tmp = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Item(i), ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Item(i - 1)));
            ::uPtr< ::uArray*>(faceNormals)->Item< ::app::Uno::Float2>(i) = ::app::Uno::Float2__New_2(NULL, tmp.Y, -tmp.X);
        }

        for (int i = 0; i < contour->VertexCount(); i++)
        {
            int fpi = i - 1;
            int fni = i + 1;

            while (fpi < 0)
            {
                fpi = fpi + ::uPtr< ::uArray*>(faceNormals)->Length();
            }

            while (fni >= faceNormals->Length())
            {
                fni = fni - faceNormals->Length();
            }

            ::app::Uno::Float2 fprev = faceNormals->Item< ::app::Uno::Float2>(fpi);
            ::app::Uno::Float2 fcurrent = faceNormals->Item< ::app::Uno::Float2>(i);
            ::app::Uno::Float2 fnext = faceNormals->Item< ::app::Uno::Float2>(fni);
            ::app::Uno::Float2 l = ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Item(i - 1);
            ::app::Uno::Float3 tl = ::app::Uno::Float3__New_4(NULL, l, 0.0f);
            ::app::Uno::Float3 bl = ::app::Uno::Float3__New_4(NULL, l, depth);
            ::app::Uno::Float2 c = contour->Item(i);
            ::app::Uno::Float3 tc = ::app::Uno::Float3__New_4(NULL, c, 0.0f);
            ::app::Uno::Float3 bc = ::app::Uno::Float3__New_4(NULL, c, depth);
            ::app::Uno::Float3 nl = (::app::Uno::Vector__Dot(NULL, fprev, fcurrent) > smoothingThreshold) ? ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, fprev, 0.5f), ::app::Uno::Float2__op_Multiply_1(NULL, fcurrent, 0.5f)), 0.0f) : ::app::Uno::Float3__New_4(NULL, fcurrent, 0.0f);
            ::app::Uno::Float3 nc = (::app::Uno::Vector__Dot(NULL, fcurrent, fnext) > smoothingThreshold) ? ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, fnext, 0.5f), ::app::Uno::Float2__op_Multiply_1(NULL, fcurrent, 0.5f)), 0.0f) : ::app::Uno::Float3__New_4(NULL, fcurrent, 0.0f);
            ::app::Uno::Float4 t = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 1.0f, 1.0f);
            ::uPtr< ::app::Uno::Collections::List__float3*>(vertices)->Add(tl);
            ::uPtr< ::app::Uno::Collections::List__float3*>(normals)->Add(nl);
            ::uPtr< ::app::Uno::Collections::List__float4*>(tangents)->Add(t);
            vertices->Add(tc);
            normals->Add(nc);
            tangents->Add(t);
            vertices->Add(bl);
            normals->Add(nl);
            tangents->Add(t);
            vertices->Add(bl);
            normals->Add(nl);
            tangents->Add(t);
            vertices->Add(tc);
            normals->Add(nc);
            tangents->Add(t);
            vertices->Add(bc);
            normals->Add(nc);
            tangents->Add(t);
        }
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(::uGetConstString("Position"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__float3(NULL, (::uObject*)vertices)));
    dict->Item(::uGetConstString("Normal"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__float3(NULL, (::uObject*)normals)));
    dict->Item(::uGetConstString("Tangent"), ::app::Uno::Content::Models::VertexAttributeArray__New_4(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__float4(NULL, (::uObject*)tangents)));
    return ::app::Uno::Content::Models::ModelMesh__New_1(NULL, ::uGetConstString("Path"), 1, dict, NULL);
}

::uObject* Polygon__get_Contours(Polygon* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*>(__this->_contours)->Items();
}

bool Polygon__get_IsDegenerate(Polygon* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*>(__this->_contours)->Length() < 1;
}

::uDelegate* Polygon__get_WindingRule(Polygon* __this)
{
    return __this->_windingRule;
}

::uObject* Polygon__GetBoundaryContours(Polygon* __this)
{
    if (__this->IsDegenerate())
    {
        __this->_boundaryContours = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), 0);
    }

    if (__this->_boundaryContours == NULL)
    {
        ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, __this->Contours());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(__this->_windingRule);
        mesh->SetWindingNumber(1);
        mesh->DeleteInternalEdges();
        __this->_boundaryContours = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Contour(NULL, mesh->GetContours());
        mesh->Dispose();
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Contour__New_1(NULL, __this->_boundaryContours);
}

::uObject* Polygon__GetFillTriangles(Polygon* __this)
{
    ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, __this->Contours());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(__this->_windingRule);
    mesh->TessellateInterior();
    return ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D(NULL, mesh->InteriorFaces(), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D__typeof(), (const void*)Polygon__CreateTriangle, __this));
}

::uArray* Polygon__GetTriangleVertices(Polygon* __this)
{
    ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, __this->Contours());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(__this->_windingRule);
    mesh->TessellateInterior();
    ::uArray* vertices = ::uNewArray(::app::Uno::Float2__typeof(), ::app::Uno::Collections::EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(NULL, mesh->InteriorFaces()) * 3);
    int v = 0;

    for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(mesh->InteriorFaces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* face = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_126));

        for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->EdgeLoop())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge* vert = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_127));
            ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float2>(v++) = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(vert)->Origin())->Coords();
        }
    }

    mesh->Dispose();
    return vertices;
}

Polygon* Polygon__Intersect(Polygon* __this, Polygon* polygon)
{
    ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__Fuse_Drawing_Contour(NULL, __this->Contours(), ::uPtr< Polygon*>(polygon)->Contours()));
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__AbsoluteGreaterOrEqualsTwo));
    return Polygon__New_2(NULL, mesh->GetContours());
}

Polygon* Polygon__New_1(::uStatic* __this, ::uArray* contours)
{
    Polygon* inst = (Polygon*)::uAllocObject(sizeof(Polygon), Polygon__typeof());
    inst->_ObjInit(contours);
    return inst;
}

Polygon* Polygon__New_2(::uStatic* __this, ::uObject* contours)
{
    Polygon* inst = (Polygon*)::uAllocObject(sizeof(Polygon), Polygon__typeof());
    inst->_ObjInit_1(contours);
    return inst;
}

Polygon* Polygon__New_3(::uStatic* __this, ::uDelegate* windingRule, ::uArray* contours)
{
    Polygon* inst = (Polygon*)::uAllocObject(sizeof(Polygon), Polygon__typeof());
    inst->_ObjInit_2(windingRule, contours);
    return inst;
}

Polygon* Polygon__New_4(::uStatic* __this, ::uDelegate* windingRule, ::uObject* contours)
{
    Polygon* inst = (Polygon*)::uAllocObject(sizeof(Polygon), Polygon__typeof());
    inst->_ObjInit_3(windingRule, contours);
    return inst;
}

Polygon* Polygon__Stroke(Polygon* __this, float Width, float Offset, int StartCap, int EndCap)
{
    float _width = Width;
    float _offset = Offset - (Width * 0.5f);
    ::app::Uno::Collections::List__Fuse_Drawing_Contour* strokeContours = ::app::Uno::Collections::List__Fuse_Drawing_Contour__New_1(NULL);

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(__this->Contours())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Drawing::Contour* contour = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_125));
        int vertexCount = ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->VertexCount();

        if (vertexCount < 2)
        {
            continue;
        }

        ::app::Uno::Collections::List__float2* outer = ::app::Uno::Collections::List__float2__New_1(NULL);
        ::app::Uno::Collections::List__float2* inner = ::app::Uno::Collections::List__float2__New_1(NULL);
        float dist = 0.0f;
        ::app::Uno::Float2 startInner = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 startOuter = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 endInner = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 endOuter = ::app::Uno::Float2__New_1(NULL, 0.0f);

        for (int i = 0; i < vertexCount; i++)
        {
            ::app::Uno::Float2 last = ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Item(i - 1);
            ::app::Uno::Float2 current = contour->Item(i);
            ::app::Uno::Float2 next = contour->Item(i + 1);
            ::app::Uno::Float2 lv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, current, last));
            ::app::Uno::Float2 lvn = ::app::Uno::Float2__New_2(NULL, -lv.Y, lv.X);
            ::app::Uno::Float2 rv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, next, current));
            ::app::Uno::Float2 rvn = ::app::Uno::Float2__New_2(NULL, -rv.Y, rv.X);
            float len = ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, last, current));

            if (i > 0)
            {
                dist = dist + len;
            }

            ::app::Uno::Float2 outerV = ::app::Uno::Float2();
            ::app::Uno::Float2 innerV = ::app::Uno::Float2();

            if (!contour->IsClosed() && (i == 0))
            {
                startInner = innerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, rvn, _offset));
                startOuter = outerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, rvn, _width + _offset));
            }
            else if (!contour->IsClosed() && (i == (vertexCount - 1)))
            {
                endInner = innerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, lvn, _offset));
                endOuter = outerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, lvn, _width + _offset));
            }
            else
            {
                ::app::Uno::Float2 bn0 = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, rvn, lvn), 2.0f);
                ::app::Uno::Float2 bisectNormal = ((::app::Uno::Math__Abs_1(NULL, bn0.X) + ::app::Uno::Math__Abs_1(NULL, bn0.Y)) < 1e-05f) ? lvn : ::app::Uno::Vector__Normalize(NULL, bn0);
                float angle = ::app::Uno::Geometry::Collision2D__AngleBetween(NULL, lv, bisectNormal);

                if (((angle < 0.1f) || (angle > 3.04159284f)) || (len < 1.0f))
                {
                    outerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, bisectNormal, _width + _offset));
                    innerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_1(NULL, bisectNormal, _offset));
                }
                else
                {
                    ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_1(NULL, lvn, _width + _offset));
                    ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_1(NULL, lvn, _offset));
                    outerV = ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvo, lv, current, bisectNormal);
                    innerV = ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvi, lv, current, bisectNormal);
                }
            }

            ::uPtr< ::app::Uno::Collections::List__float2*>(outer)->Add(outerV);
            ::uPtr< ::app::Uno::Collections::List__float2*>(inner)->Add(innerV);
        }

        ::uArray* innerRev = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::app::Uno::Collections::List__float2*>(inner)->Count());

        for (int i = 0; i < inner->Count(); ++i)
        {
            innerRev->Item< ::app::Uno::Float2>(i) = inner->Item((inner->Count() - i) - 1);
        }

        if (contour->IsClosed())
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(strokeContours)->Add(::app::Fuse::Drawing::Contour__New_2(NULL, true, (::uObject*)outer));
            strokeContours->Add(::app::Fuse::Drawing::Contour__New_1(NULL, true, innerRev));
        }
        else
        {
            ::uObject* start = ::uPtr< ::app::Fuse::Drawing::LineCapImpl*>(::app::Fuse::Drawing::LineCapImpl__Create_1(NULL, StartCap))->Create(startInner, startOuter);
            ::uObject* end = ::uPtr< ::app::Fuse::Drawing::LineCapImpl*>(::app::Fuse::Drawing::LineCapImpl__Create_1(NULL, EndCap))->Create(endOuter, endInner);
            ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(strokeContours)->Add(::app::Fuse::Drawing::Contour__New_2(NULL, true, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, start, (::uObject*)outer), end), (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, innerRev))));
        }
    }

    return Polygon__New_2(NULL, (::uObject*)strokeContours);
}

Polygon* Polygon__Subtract(Polygon* __this, Polygon* polygon)
{
    return NULL;
}

::uObject* Polygon__Triangulate(Polygon* __this)
{
    ::uArray* array_128;
    ::uArray* verts = __this->GetTriangleVertices();

    if (::uPtr< ::uArray*>(verts)->Length() < 3)
    {
        return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(NULL, ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), 0));
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(NULL, (array_128 = ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), 1), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::app::Fuse::Drawing::PolygonDrawable*>(0) = ::app::Fuse::Drawing::PolygonDrawable__New_1(NULL, verts), array_128));
}

Polygon* Polygon__Union(Polygon* __this, Polygon* polygon)
{
    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PolygonDrawable__uType* PolygonDrawable__typeof()
{
    static ::uStaticStrong<PolygonDrawable__uType*> type;
    if (type != NULL) return type;

    type = (PolygonDrawable__uType*)::uAllocClassType(sizeof(PolygonDrawable__uType), "Fuse.Drawing.PolygonDrawable", false, 0, 11, 0);

    type->SetStrongRefs(
        "_draw_1834ada4._compiledProgram", offsetof(PolygonDrawable, _draw_1834ada4._compiledProgram),
        "_draw_1834ada4._constValues", offsetof(PolygonDrawable, _draw_1834ada4._constValues),
        "_draw_1834ada4._Program", offsetof(PolygonDrawable, _draw_1834ada4._Program),
        "_draw_2b0b75._compiledProgram", offsetof(PolygonDrawable, _draw_2b0b75._compiledProgram),
        "_draw_2b0b75._constValues", offsetof(PolygonDrawable, _draw_2b0b75._constValues),
        "_draw_2b0b75._Program", offsetof(PolygonDrawable, _draw_2b0b75._Program),
        "_draw_5d8396da._compiledProgram", offsetof(PolygonDrawable, _draw_5d8396da._compiledProgram),
        "_draw_5d8396da._constValues", offsetof(PolygonDrawable, _draw_5d8396da._constValues),
        "_draw_5d8396da._Program", offsetof(PolygonDrawable, _draw_5d8396da._Program),
        "_vbo", offsetof(PolygonDrawable, _vbo),
        "_vertices", offsetof(PolygonDrawable, _vertices));

    type->SetFields(2,
        ::uNewField("_vbo", NULL, offsetof(PolygonDrawable, _vbo), ::app::Uno::Graphics::VertexBuffer__typeof()),
        ::uNewField("_vertices", NULL, offsetof(PolygonDrawable, _vertices), ::uGetArrayType(::app::Uno::Float2__typeof())));

    type->SetFunctions(4,
        ::uNewFunction("CalcBounds", PolygonDrawable__CalcBounds, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("Dispose", PolygonDrawable__Dispose, 0, false),
        ::uNewFunctionVoid("Draw", PolygonDrawable__Draw, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewFunction("Intersects", PolygonDrawable__Intersects, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void PolygonDrawable___ObjInit(PolygonDrawable* __this, ::uArray* vertices)
{
    __this->_vertices = vertices;
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, vertices), 0);
    __this->init_DrawCalls();
}

::app::Uno::Rect PolygonDrawable__CalcBounds(PolygonDrawable* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() == 0)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Float2 min = ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(0);
    ::app::Uno::Float2 max = ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(0);

    for (array_123 = __this->_vertices, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Float2 v = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(index_124);
        min = ::app::Uno::Math__Min_3(NULL, min, v);
        max = ::app::Uno::Math__Max_3(NULL, max, v);
    }

    return ::app::Uno::Rect__New_1(NULL, min.X, min.Y, max.X, max.Y);
}

void PolygonDrawable__Dispose(PolygonDrawable* __this)
{
    __this->free_DrawCalls();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Dispose();
}

void PolygonDrawable__Draw(PolygonDrawable* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();

    if (::uIs(f, ::app::Fuse::Drawing::ImageFill__typeof()))
    {
        ::app::Uno::Graphics::Texture2D* Texture_1834ada4_8_6_1 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
        ::app::Fuse::Drawing::ImageFill_DrawParams DP_1834ada4_8_5_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize());
        {
            __this->_draw_1834ada4.BlendEnabled(true);
            __this->_draw_1834ada4.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_1834ada4.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_1834ada4.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_1834ada4.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_1834ada4.DepthTestEnabled(false);
            __this->_draw_1834ada4.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_1834ada4.PolygonWinding(0);
            __this->_draw_1834ada4.Const(0, Texture_1834ada4_8_6_1 == NULL);
            __this->_draw_1834ada4.Use();
            __this->_draw_1834ada4.Attrib_1(1, 2, __this->_vbo, 8, 0);
            __this->_draw_1834ada4.Uniform_17(2, ctx->Transform());
            __this->_draw_1834ada4.Uniform_12(3, ctx->CanvasSize());
            __this->_draw_1834ada4.Uniform_12(4, DP_1834ada4_8_5_4.Origin);
            __this->_draw_1834ada4.Uniform_12(5, DP_1834ada4_8_5_4.Size);
            __this->_draw_1834ada4.Uniform_12(6, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_126 = DP_1834ada4_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_126.Z, ind_126.W)), (ind_127 = DP_1834ada4_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y))));
            __this->_draw_1834ada4.Uniform_12(7, (ind_128 = DP_1834ada4_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y)));
            __this->_draw_1834ada4.Uniform_16(8, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
            __this->_draw_1834ada4.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
            __this->_draw_1834ada4.Sampler_2(10, Texture_1834ada4_8_6_1);
            __this->_draw_1834ada4.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        {
            __this->_draw_2b0b75.BlendEnabled(true);
            __this->_draw_2b0b75.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_2b0b75.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_2b0b75.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_2b0b75.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_2b0b75.DepthTestEnabled(false);
            __this->_draw_2b0b75.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_2b0b75.PolygonWinding(0);
            __this->_draw_2b0b75.Use();
            __this->_draw_2b0b75.Attrib_1(0, 2, __this->_vbo, 8, 0);
            __this->_draw_2b0b75.Uniform_17(1, ctx->Transform());
            __this->_draw_2b0b75.Uniform_16(2, ::app::Uno::Float4__New_8(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, (ind_129 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_129.X, ind_129.Y, ind_129.Z)), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W * ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()));
            __this->_draw_2b0b75.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Uno::Float2 angleSlope_5d8396da_8_17_3 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        float angleLen_5d8396da_8_16_4 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        {
            __this->_draw_5d8396da.BlendEnabled(true);
            __this->_draw_5d8396da.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_5d8396da.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_5d8396da.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_5d8396da.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_5d8396da.DepthTestEnabled(false);
            __this->_draw_5d8396da.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_5d8396da.PolygonWinding(0);
            __this->_draw_5d8396da.Use();
            __this->_draw_5d8396da.Attrib_1(0, 2, __this->_vbo, 8, 0);
            __this->_draw_5d8396da.Uniform_17(1, ctx->Transform());
            __this->_draw_5d8396da.Uniform_12(2, ctx->CanvasSize());
            __this->_draw_5d8396da.Uniform_12(3, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, ctx->CanvasSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_5d8396da_8_17_3, angleLen_5d8396da_8_16_4), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), ctx->CanvasSize()));
            __this->_draw_5d8396da.Uniform_12(4, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
            __this->_draw_5d8396da.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_5d8396da.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_5d8396da_8_17_3 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_5d8396da.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_5d8396da_8_16_4 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_5d8396da.Sampler_2(8, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
            __this->_draw_5d8396da.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        {
            __this->_draw_2b0b75.BlendEnabled(true);
            __this->_draw_2b0b75.BlendSrcRgb(__this->Draw_BlendSrcRgb_303e4fd3_6_4_5);
            __this->_draw_2b0b75.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_303e4fd3_6_6_6);
            __this->_draw_2b0b75.BlendDstRgb(__this->Draw_BlendDstRgb_303e4fd3_6_5_7);
            __this->_draw_2b0b75.BlendDstAlpha(__this->Draw_BlendDstAlpha_303e4fd3_6_7_8);
            __this->_draw_2b0b75.DepthTestEnabled(false);
            __this->_draw_2b0b75.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_2b0b75.PolygonWinding(0);
            __this->_draw_2b0b75.Use();
            __this->_draw_2b0b75.Attrib_1(0, 2, __this->_vbo, 8, 0);
            __this->_draw_2b0b75.Uniform_17(1, ctx->Transform());
            __this->_draw_2b0b75.Uniform_16(2, ::app::Uno::Float4__New_8(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, (ind_130 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_130.X, ind_130.Y, ind_130.Z)), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W));
            __this->_draw_2b0b75.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
}

void PolygonDrawable__free_DrawCalls(PolygonDrawable* __this)
{
}

void PolygonDrawable__init_DrawCalls(PolygonDrawable* __this)
{
    __this->Draw_BlendSrcRgb_303e4fd3_6_4_5 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_303e4fd3_6_6_6 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_303e4fd3_6_5_7 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_303e4fd3_6_7_8 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_1834ada4 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 73), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_2b0b75 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 74), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_5d8396da = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 75), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

bool PolygonDrawable__Intersects(PolygonDrawable* __this, ::app::Uno::Float2 p)
{
    for (int i = 2; i < ::uPtr< ::uArray*>(__this->_vertices)->Length(); i = i + 3)
    {
        if (::app::Uno::Geometry::Collision2D__TriangleContainsPoint(NULL, ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i - 2), ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i - 1), ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i), p))
        {
            return true;
        }
    }

    return false;
}

PolygonDrawable* PolygonDrawable__New_1(::uStatic* __this, ::uArray* vertices)
{
    PolygonDrawable* inst = (PolygonDrawable*)::uAllocObject(sizeof(PolygonDrawable), PolygonDrawable__typeof());
    inst->_ObjInit(vertices);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PolygonFiller__uType* PolygonFiller__typeof()
{
    static ::uStaticStrong<PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (PolygonFiller__uType*)::uAllocClassType(sizeof(PolygonFiller__uType), "Fuse.Drawing.PolygonFiller", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))PolygonFiller__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(PolygonFiller__uType, __interface_0));

    type->SetStrongRefs(
        "_antialiasingBorders", offsetof(PolygonFiller, _antialiasingBorders),
        "_fills", offsetof(PolygonFiller, _fills));

    type->SetFields(6,
        ::uNewField("_antialiasingBorders", NULL, offsetof(PolygonFiller, _antialiasingBorders), ::uGetArrayType(::app::Fuse::Drawing::Border__typeof())),
        ::uNewField("_bounds", NULL, offsetof(PolygonFiller, _bounds), ::app::Uno::Rect__typeof()),
        ::uNewField("_density", NULL, offsetof(PolygonFiller, _density), ::app::Uno::Float__typeof()),
        ::uNewField("_fills", NULL, offsetof(PolygonFiller, _fills), ::uGetArrayType(::app::Fuse::Drawing::PolygonDrawable__typeof())),
        ::uNewField("_hasBounds", NULL, offsetof(PolygonFiller, _hasBounds), ::app::Uno::Bool__typeof()),
        ::uNewField("_px", NULL, offsetof(PolygonFiller, _px), ::app::Uno::Float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("CalcBounds", PolygonFiller__CalcBounds, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("ClearDepth", PolygonFiller__ClearDepth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("Contour", PolygonFiller__Contour, 0, false, ::app::Fuse::Drawing::Contour__typeof(), ::app::Fuse::Drawing::Border__typeof()),
        ::uNewFunction("CreateBorder", PolygonFiller__CreateBorder, 0, false, ::app::Fuse::Drawing::Border__typeof(), ::app::Fuse::Drawing::Contour__typeof()),
        ::uNewFunctionVoid("Dispose", PolygonFiller__Dispose, 0, false),
        ::uNewFunctionVoid("Draw", PolygonFiller__Draw, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Draw", PolygonFiller__Draw_1, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Drawing::RendererContext__typeof()),
        ::uNewFunction("get_Bounds", PolygonFiller__get_Bounds, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("Intersects", PolygonFiller__Intersects, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", PolygonFiller__New_1, 0, true, PolygonFiller__typeof(), ::app::Fuse::Drawing::Polygon__typeof(), ::app::Fuse::Drawing::Antialiasing__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void PolygonFiller___ObjInit(PolygonFiller* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    __this->_density = density;

    if (false && (antialiasing == 1))
    {
        __this->_px = 1.0f / density;
        ::uObject* boundaries = ::uPtr< ::app::Fuse::Drawing::Polygon*>(polygon)->GetBoundaryContours();
        __this->_antialiasingBorders = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Border(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(NULL, boundaries, ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof(), (const void*)PolygonFiller__CreateBorder, __this)));
        __this->_fills = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(NULL, ::uPtr< ::app::Fuse::Drawing::Polygon*>(::app::Fuse::Drawing::Polygon__New_2(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Border__New_1(NULL, __this->_antialiasingBorders), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof(), (const void*)PolygonFiller__Contour, __this))))->Triangulate());
    }
    else
    {
        __this->_fills = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(NULL, ::uPtr< ::app::Fuse::Drawing::Polygon*>(polygon)->Triangulate());
        __this->_antialiasingBorders = ::uNewArray(::app::Fuse::Drawing::Border__typeof(), 0);
    }
}

::app::Uno::Rect PolygonFiller__CalcBounds(PolygonFiller* __this)
{
    if (::uPtr< ::uArray*>(__this->_fills)->Length() == 0)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Rect r = ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(::uPtr< ::uArray*>(__this->_fills)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(0))->CalcBounds();

    for (int i = 1; i < ::uPtr< ::uArray*>(__this->_fills)->Length(); ++i)
    {
        r = ::app::Uno::Rect__Union(NULL, r, ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(::uPtr< ::uArray*>(__this->_fills)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(i))->CalcBounds());
    }

    return r;
}

void PolygonFiller__ClearDepth(PolygonFiller* __this, float depth)
{
    {
        ::app::OpenGL::GL__ClearDepth(NULL, depth);
        ::app::OpenGL::GL__Clear(NULL, 256);
    }
}

::app::Fuse::Drawing::Contour* PolygonFiller__Contour(PolygonFiller* __this, ::app::Fuse::Drawing::Border* border)
{
    return ::uPtr< ::app::Fuse::Drawing::Border*>(border)->Contour();
}

::app::Fuse::Drawing::Border* PolygonFiller__CreateBorder(PolygonFiller* __this, ::app::Fuse::Drawing::Contour* contour)
{
    return ::app::Fuse::Drawing::Border__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__float2(NULL, ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Vertices()), __this->_px * 0.5f, -__this->_px);
}

void PolygonFiller__Dispose(PolygonFiller* __this)
{
    ::uArray* array_130;
    int index_131 = int();
    int length_132 = int();
    ::uArray* array_133;
    int index_134 = int();
    int length_135 = int();

    for (array_130 = __this->_antialiasingBorders, index_131 = 0, length_132 = ::uPtr< ::uArray*>(array_130)->Length(); index_131 < length_132; ++index_131)
    {
        ::app::Fuse::Drawing::Border* border = ::uPtr< ::uArray*>(array_130)->Item< ::app::Fuse::Drawing::Border*>(index_131);
        ::uPtr< ::app::Fuse::Drawing::Border*>(border)->Dispose();
    }

    for (array_133 = __this->_fills, index_134 = 0, length_135 = ::uPtr< ::uArray*>(array_133)->Length(); index_134 < length_135; ++index_134)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_133)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_134);
        ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Dispose();
    }
}

void PolygonFiller__Draw(PolygonFiller* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize)
{
    float ind_139 = float();
    int ind_140;
    ::app::Fuse::Drawing::RendererContext* collection_123;
    __this->Draw_1(f, (collection_123 = ::app::Fuse::Drawing::RendererContext__New_1(NULL), ::uPtr< ::app::Fuse::Drawing::RendererContext*>(collection_123)->Transform(transform), transform, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(collection_123)->CanvasSize(elementSize), elementSize, ind_139 = __this->_density, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(collection_123)->Density(ind_139), ind_139, ind_140 = ::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace(), ::uPtr< ::app::Fuse::Drawing::RendererContext*>(collection_123)->CullFace(ind_140), ind_140, collection_123));
}

void PolygonFiller__Draw_1(PolygonFiller* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::uArray* array_124;
    int index_125 = int();
    int length_126 = int();
    ::uArray* array_127;
    int index_128 = int();
    int length_129 = int();

    for (array_124 = __this->_antialiasingBorders, index_125 = 0, length_126 = ::uPtr< ::uArray*>(array_124)->Length(); index_125 < length_126; ++index_125)
    {
        ::app::Fuse::Drawing::Border* aa = ::uPtr< ::uArray*>(array_124)->Item< ::app::Fuse::Drawing::Border*>(index_125);
        ::uPtr< ::app::Fuse::Drawing::Border*>(aa)->Draw(f, ctx);
    }

    for (array_127 = __this->_fills, index_128 = 0, length_129 = ::uPtr< ::uArray*>(array_127)->Length(); index_128 < length_129; ++index_128)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_127)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_128);
        ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Draw(f, ctx);
    }
}

::app::Uno::Rect PolygonFiller__get_Bounds(PolygonFiller* __this)
{
    if (__this->_hasBounds)
    {
        return __this->_bounds;
    }

    __this->_bounds = __this->CalcBounds();
    __this->_hasBounds = true;
    return __this->_bounds;
}

bool PolygonFiller__Intersects(PolygonFiller* __this, ::app::Uno::Float2 p)
{
    ::uArray* array_136;
    int index_137 = int();
    int length_138 = int();

    for (array_136 = __this->_fills, index_137 = 0, length_138 = ::uPtr< ::uArray*>(array_136)->Length(); index_137 < length_138; ++index_137)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_136)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_137);

        if (::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Intersects(p))
        {
            return true;
        }
    }

    return false;
}

PolygonFiller* PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    PolygonFiller* inst = (PolygonFiller*)::uAllocObject(sizeof(PolygonFiller), PolygonFiller__typeof());
    inst->_ObjInit(polygon, antialiasing, density);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RectangleFactory__uType* RectangleFactory__typeof()
{
    static ::uStaticStrong<RectangleFactory__uType*> type;
    if (type != NULL) return type;

    type = (RectangleFactory__uType*)::uAllocClassType(sizeof(RectangleFactory__uType), "Fuse.Drawing.RectangleFactory");

    type->SetFunctions(1,
        ::uNewFunction("AppendTo", RectangleFactory__AppendTo, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Drawing::PathGeometry* RectangleFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius)
{
    ::app::Uno::Float2 o = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    float t = o.Y;
    float b = t + Size.Y;
    float l = o.X;
    float r = l + Size.X;

    if (::app::Uno::Float4__op_Equality(NULL, CornerRadius, ::app::Uno::Float4__New_1(NULL, 0.0f)))
    {
        return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->MoveTo_1(o))->LineTo(l, b))->LineTo(r, b))->LineTo(r, t))->ClosePath();
    }

    ::app::Uno::Float4 cornerRadius = CornerRadius;

    if ((cornerRadius.X + cornerRadius.Y) > Size.X)
    {
        float f = Size.X / (cornerRadius.X + cornerRadius.Y);
        cornerRadius.X = cornerRadius.X * f;
        cornerRadius.Y = cornerRadius.Y * f;
    }

    if ((cornerRadius.Y + cornerRadius.Z) > Size.Y)
    {
        float f = Size.Y / (cornerRadius.Y + cornerRadius.Z);
        cornerRadius.Y = cornerRadius.Y * f;
        cornerRadius.Z = cornerRadius.Z * f;
    }

    if ((cornerRadius.Z + cornerRadius.W) > Size.X)
    {
        float f = Size.X / (cornerRadius.Z + cornerRadius.W);
        cornerRadius.Z = cornerRadius.Z * f;
        cornerRadius.W = cornerRadius.W * f;
    }

    if ((cornerRadius.W + cornerRadius.X) > Size.Y)
    {
        float f = Size.Y / (cornerRadius.W + cornerRadius.X);
        cornerRadius.W = cornerRadius.W * f;
        cornerRadius.X = cornerRadius.X * f;
    }

    ::app::Uno::Float2 rtlx = ::app::Uno::Float2__New_2(NULL, cornerRadius.X, 0.0f);
    ::app::Uno::Float2 rtly = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.X);
    ::app::Uno::Float2 rtrx = ::app::Uno::Float2__New_2(NULL, cornerRadius.Y, 0.0f);
    ::app::Uno::Float2 rtry = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.Y);
    ::app::Uno::Float2 rbrx = ::app::Uno::Float2__New_2(NULL, cornerRadius.Z, 0.0f);
    ::app::Uno::Float2 rbry = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.Z);
    ::app::Uno::Float2 rblx = ::app::Uno::Float2__New_2(NULL, cornerRadius.W, 0.0f);
    ::app::Uno::Float2 rbly = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.W);
    ::app::Uno::Float2 tl = ::app::Uno::Float2__New_2(NULL, l, t);
    ::app::Uno::Float2 tr = ::app::Uno::Float2__New_2(NULL, r, t);
    ::app::Uno::Float2 bl = ::app::Uno::Float2__New_2(NULL, l, b);
    ::app::Uno::Float2 br = ::app::Uno::Float2__New_2(NULL, r, b);
    float p = 0.45f;
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self->MoveTo_1(::app::Uno::Float2__op_Subtraction_2(NULL, bl, rbly)))->CurveTo(::app::Uno::Float2__op_Subtraction_2(NULL, bl, ::app::Uno::Float2__op_Multiply_1(NULL, rbly, p)), ::app::Uno::Float2__op_Addition_2(NULL, bl, ::app::Uno::Float2__op_Multiply_1(NULL, rblx, p)), ::app::Uno::Float2__op_Addition_2(NULL, bl, rblx)))->LineTo_1(::app::Uno::Float2__op_Subtraction_2(NULL, br, rbrx)))->CurveTo(::app::Uno::Float2__op_Subtraction_2(NULL, br, ::app::Uno::Float2__op_Multiply_1(NULL, rbrx, p)), ::app::Uno::Float2__op_Subtraction_2(NULL, br, ::app::Uno::Float2__op_Multiply_1(NULL, rbry, p)), ::app::Uno::Float2__op_Subtraction_2(NULL, br, rbry)))->LineTo_1(::app::Uno::Float2__op_Addition_2(NULL, tr, rtry)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, tr, ::app::Uno::Float2__op_Multiply_1(NULL, rtry, p)), ::app::Uno::Float2__op_Subtraction_2(NULL, tr, ::app::Uno::Float2__op_Multiply_1(NULL, rtrx, p)), ::app::Uno::Float2__op_Subtraction_2(NULL, tr, rtrx)))->LineTo_1(::app::Uno::Float2__op_Addition_2(NULL, tl, rtlx)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, tl, ::app::Uno::Float2__op_Multiply_1(NULL, rtlx, p)), ::app::Uno::Float2__op_Addition_2(NULL, tl, ::app::Uno::Float2__op_Multiply_1(NULL, rtly, p)), ::app::Uno::Float2__op_Addition_2(NULL, tl, rtly)))->ClosePath())->MoveTo_1(o);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RegularPolygonFactory__uType* RegularPolygonFactory__typeof()
{
    static ::uStaticStrong<RegularPolygonFactory__uType*> type;
    if (type != NULL) return type;

    type = (RegularPolygonFactory__uType*)::uAllocClassType(sizeof(RegularPolygonFactory__uType), "Fuse.Drawing.RegularPolygonFactory");

    type->SetFunctions(1,
        ::uNewFunction("AppendTo", RegularPolygonFactory__AppendTo, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Drawing::PathGeometry* RegularPolygonFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    float t = -6.28318548f / (float)Sides;
    ::app::Uno::Float2 c = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Fuse::Drawing::PathGeometry* g = self->MoveTo(c.X, c.Y - Radius);

    for (int i = 1; i < Sides; i++)
    {
        g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->LineTo(c.X + (::app::Uno::Math__Sin_1(NULL, t * (float)i) * Radius), c.Y - (::app::Uno::Math__Cos_1(NULL, t * (float)i) * Radius));
    }

    g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->ClosePath();
    return g;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RendererContext__uType* RendererContext__typeof()
{
    static ::uStaticStrong<RendererContext__uType*> type;
    if (type != NULL) return type;

    type = (RendererContext__uType*)::uAllocClassType(sizeof(RendererContext__uType), "Fuse.Drawing.RendererContext", false, 0, 0, 0);

    type->SetFunctions(9,
        ::uNewFunction("get_CanvasSize", RendererContext__get_CanvasSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_CullFace", RendererContext__get_CullFace, 0, false, ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunction("get_Density", RendererContext__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Transform", RendererContext__get_Transform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", RendererContext__New_1, 0, true, RendererContext__typeof()),
        ::uNewFunctionVoid("set_CanvasSize", RendererContext__set_CanvasSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_CullFace", RendererContext__set_CullFace, 0, false, ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunctionVoid("set_Density", RendererContext__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Transform", RendererContext__set_Transform, 0, false, ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void RendererContext___ObjInit(RendererContext* __this)
{
}

::app::Uno::Float2 RendererContext__get_CanvasSize(RendererContext* __this)
{
    return __this->_CanvasSize;
}

int RendererContext__get_CullFace(RendererContext* __this)
{
    return __this->_CullFace;
}

float RendererContext__get_Density(RendererContext* __this)
{
    return __this->_Density;
}

::app::Uno::Float4x4 RendererContext__get_Transform(RendererContext* __this)
{
    return __this->_Transform;
}

RendererContext* RendererContext__New_1(::uStatic* __this)
{
    RendererContext* inst = (RendererContext*)::uAllocObject(sizeof(RendererContext), RendererContext__typeof());
    inst->_ObjInit();
    return inst;
}

void RendererContext__set_CanvasSize(RendererContext* __this, ::app::Uno::Float2 value)
{
    __this->_CanvasSize = value;
}

void RendererContext__set_CullFace(RendererContext* __this, int value)
{
    __this->_CullFace = value;
}

void RendererContext__set_Density(RendererContext* __this, float value)
{
    __this->_Density = value;
}

void RendererContext__set_Transform(RendererContext* __this, ::app::Uno::Float4x4 value)
{
    __this->_Transform = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ResampleMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.ResampleMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Nearest", 0LL,
        "Linear", 1LL,
        "Mipmap", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RoundCap__uType* RoundCap__typeof()
{
    static ::uStaticStrong<RoundCap__uType*> type;
    if (type != NULL) return type;

    type = (RoundCap__uType*)::uAllocClassType(sizeof(RoundCap__uType), "Fuse.Drawing.RoundCap", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineCapImpl__typeof());
    type->__fp_Create = (::uObject*(*)(::app::Fuse::Drawing::LineCapImpl*, ::app::Uno::Float2, ::app::Uno::Float2))RoundCap__Create;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RoundCap__New_1, 0, true, RoundCap__typeof()));

    ::uRegisterType(type);
    return type;
}

void RoundCap___ObjInit_1(RoundCap* __this)
{
    ::app::Fuse::Drawing::LineCapImpl___ObjInit(__this);
}

::uObject* RoundCap__Create(RoundCap* __this, ::app::Uno::Float2 from, ::app::Uno::Float2 to)
{
    int steps = 20;
    ::uArray* verts = ::uNewArray(::app::Uno::Float2__typeof(), 18);
    ::app::Uno::Float2 center = ::app::Uno::Math__Lerp_2(NULL, from, to, 0.5f);
    ::app::Uno::Float2 u = ::app::Uno::Float2__op_Subtraction_2(NULL, from, center);
    ::app::Uno::Float2 v = ::app::Uno::Float2__New_2(NULL, u.Y, -u.X);
    ::app::Uno::Float2x2 matrix = ::app::Uno::Float2x2__New_2(NULL, u, v);

    for (int i = 1; i < 19; i++)
    {
        float f = (float)i / 20.0f;
        float r = (float)((double)f * 3.1415926535897931);
        ::app::Uno::Float2 rainbow = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, r), ::app::Uno::Math__Sin_1(NULL, r));
        ::uPtr< ::uArray*>(verts)->Item< ::app::Uno::Float2>(i - 1) = ::app::Uno::Float2__op_Addition_2(NULL, center, ::app::Uno::Vector__Transform(NULL, rainbow, matrix));
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, verts);
}

RoundCap* RoundCap__New_1(::uStatic* __this)
{
    RoundCap* inst = (RoundCap*)::uAllocObject(sizeof(RoundCap), RoundCap__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SmoothCurveTo__uType* SmoothCurveTo__typeof()
{
    static ::uStaticStrong<SmoothCurveTo__uType*> type;
    if (type != NULL) return type;

    type = (SmoothCurveTo__uType*)::uAllocClassType(sizeof(SmoothCurveTo__uType), "Fuse.Drawing.SmoothCurveTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::CurveTo__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))SmoothCurveTo__Serialize;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", SmoothCurveTo__New_4, 0, true, SmoothCurveTo__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void SmoothCurveTo___ObjInit_3(SmoothCurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::CurveTo___ObjInit_1(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastTangent);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointEnd);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->CurveToCtor(prev, ::app::Uno::Float2__New_2(NULL, lastPosition.X, lastPosition.Y), ::app::Uno::Float2__op_Addition_2(NULL, lastPosition, lastTangent), ::app::Uno::Float2__New_2(NULL, controlPointEnd.X, controlPointEnd.Y), ::app::Uno::Float2__New_2(NULL, position.X, position.Y));
}

SmoothCurveTo* SmoothCurveTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    SmoothCurveTo* inst = (SmoothCurveTo*)::uAllocObject(sizeof(SmoothCurveTo), SmoothCurveTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, lastTangent, controlPointEnd, position);
    return inst;
}

::uString* SmoothCurveTo__Serialize(SmoothCurveTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("S "), ::uBox(::app::Uno::Float__typeof(), __this->ControlPointEnd().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->ControlPointEnd().Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SolidColor__uType* SolidColor__typeof()
{
    static ::uStaticStrong<SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (SolidColor__uType*)::uAllocClassType(sizeof(SolidColor__uType), "Fuse.Drawing.SolidColor", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::DynamicBrush__typeof());
    type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))SolidColor__get_IsCompletelyTransparent;

    type->SetFields(1,
        ::uNewField("_color", NULL, offsetof(SolidColor, _color), ::app::Uno::Float4__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Color", SolidColor__get_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", SolidColor__New_1, 0, true, SolidColor__typeof()),
        ::uNewFunction(".ctor", SolidColor__New_2, 0, true, SolidColor__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Color", SolidColor__set_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetColor", SolidColor__SetColor, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void SolidColor___ObjInit_2(SolidColor* __this)
{
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
}

void SolidColor___ObjInit_3(SolidColor* __this, ::app::Uno::Float4 color)
{
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
    __this->_color = color;
}

::app::Uno::Float4 SolidColor__get_Color(SolidColor* __this)
{
    return __this->_color;
}

bool SolidColor__get_IsCompletelyTransparent(SolidColor* __this)
{
    return ::app::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent(__this) || (__this->Color().W == 0.0f);
}

SolidColor* SolidColor__New_1(::uStatic* __this)
{
    SolidColor* inst = (SolidColor*)::uAllocObject(sizeof(SolidColor), SolidColor__typeof());
    inst->_ObjInit_2();
    return inst;
}

SolidColor* SolidColor__New_2(::uStatic* __this, ::app::Uno::Float4 color)
{
    SolidColor* inst = (SolidColor*)::uAllocObject(sizeof(SolidColor), SolidColor__typeof());
    inst->_ObjInit_3(color);
    return inst;
}

void SolidColor__set_Color(SolidColor* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnShadingChanged();
    }
}

void SolidColor__SetColor(SolidColor* __this, ::app::Uno::Float4 c)
{
    __this->Color(c);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StarFactory__uType* StarFactory__typeof()
{
    static ::uStaticStrong<StarFactory__uType*> type;
    if (type != NULL) return type;

    type = (StarFactory__uType*)::uAllocClassType(sizeof(StarFactory__uType), "Fuse.Drawing.StarFactory");

    type->SetFunctions(1,
        ::uNewFunction("AppendTo", StarFactory__AppendTo, 0, true, ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Drawing::PathGeometry* StarFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Points, float Radius, float spokeRadius, float cornerRatio, float rotation)
{
    float t = -6.28318548f / (float)(Points * 2);
    ::app::Uno::Float2 c = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Fuse::Drawing::PathGeometry* g = self;
    int count = (Points * 2) - 1;

    for (int i = 0; i < count; i++)
    {
        ::app::Uno::Float2 radius = ((i % 2) == 0) ? ::app::Uno::Float2__New_2(NULL, Radius, spokeRadius) : ::app::Uno::Float2__New_2(NULL, spokeRadius, Radius);
        ::app::Uno::Float2 pa = ::app::Uno::Float2__New_2(NULL, c.X + (::app::Uno::Math__Sin_1(NULL, (t * (float)i) + rotation) * radius.Item(0)), c.Y - (::app::Uno::Math__Cos_1(NULL, (t * (float)i) + rotation) * radius.Item(0)));
        ::app::Uno::Float2 pb = ::app::Uno::Float2__New_2(NULL, c.X + (::app::Uno::Math__Sin_1(NULL, (t * (float)(i + 1)) + rotation) * radius.Item(1)), c.Y - (::app::Uno::Math__Cos_1(NULL, (t * (float)(i + 1)) + rotation) * radius.Item(1)));

        if (i == 0)
        {
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->MoveTo_1(pa);
        }

        if (cornerRatio > 1e-05f)
        {
            ::app::Uno::Float2 na = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, (t * (float)i) + rotation), ::app::Uno::Math__Sin_1(NULL, (t * (float)i) + rotation));
            ::app::Uno::Float2 nb = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, (t * (float)(i + 1)) + rotation), ::app::Uno::Math__Sin_1(NULL, (t * (float)(i + 1)) + rotation));
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->CurveTo(::app::Uno::Float2__op_Subtraction_2(NULL, pa, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, na, cornerRatio), radius.Item(0))), ::app::Uno::Float2__op_Addition_2(NULL, pb, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, nb, cornerRatio), radius.Item(1))), pb);
        }
        else
        {
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->LineTo_1(pb);
        }
    }

    g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->ClosePath();
    return g;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StaticBrush__uType* StaticBrush__typeof()
{
    static ::uStaticStrong<StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (StaticBrush__uType*)::uAllocClassType(sizeof(StaticBrush__uType), "Fuse.Drawing.StaticBrush", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Brush__typeof());

    ::uRegisterType(type);
    return type;
}

void StaticBrush___ObjInit_1(StaticBrush* __this)
{
    ::app::Fuse::Drawing::Brush___ObjInit(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StaticSolidColor__uType* StaticSolidColor__typeof()
{
    static ::uStaticStrong<StaticSolidColor__uType*> type;
    if (type != NULL) return type;

    type = (StaticSolidColor__uType*)::uAllocClassType(sizeof(StaticSolidColor__uType), "Fuse.Drawing.StaticSolidColor", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::StaticBrush__typeof());
    type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))StaticSolidColor__get_IsCompletelyTransparent;

    type->SetFields(1,
        ::uNewField("_color", NULL, offsetof(StaticSolidColor, _color), ::app::Uno::Float4__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Color", StaticSolidColor__get_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", StaticSolidColor__New_1, 0, true, StaticSolidColor__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StaticSolidColor___ObjInit_2(StaticSolidColor* __this, ::app::Uno::Float4 color)
{
    ::app::Fuse::Drawing::StaticBrush___ObjInit_1(__this);
    __this->_color = color;
}

::app::Uno::Float4 StaticSolidColor__get_Color(StaticSolidColor* __this)
{
    return __this->_color;
}

bool StaticSolidColor__get_IsCompletelyTransparent(StaticSolidColor* __this)
{
    return ::app::Fuse::Drawing::Brush__get_IsCompletelyTransparent(__this) || (__this->Color().W == 0.0f);
}

StaticSolidColor* StaticSolidColor__New_1(::uStatic* __this, ::app::Uno::Float4 color)
{
    StaticSolidColor* inst = (StaticSolidColor*)::uAllocObject(sizeof(StaticSolidColor), StaticSolidColor__typeof());
    inst->_ObjInit_2(color);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Stroke__uType* Stroke__typeof()
{
    static ::uStaticStrong<Stroke__uType*> type;
    if (type != NULL) return type;

    type = (Stroke__uType*)::uAllocClassType(sizeof(Stroke__uType), "Fuse.Drawing.Stroke", false, 0, 3, 0);

    type->SetStrongRefs(
        "_brush", offsetof(Stroke, _brush),
        "ShadingChanged", offsetof(Stroke, ShadingChanged),
        "StrokeChanged", offsetof(Stroke, StrokeChanged));

    type->SetFields(8,
        ::uNewField("_adjustment", NULL, offsetof(Stroke, _adjustment), ::app::Fuse::Drawing::StrokeAdjustment__typeof()),
        ::uNewField("_alignment", NULL, offsetof(Stroke, _alignment), ::app::Fuse::Drawing::StrokeAlignment__typeof()),
        ::uNewField("_brush", NULL, offsetof(Stroke, _brush), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_lineCap", NULL, offsetof(Stroke, _lineCap), ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewField("_lineJoin", NULL, offsetof(Stroke, _lineJoin), ::app::Fuse::Drawing::LineJoin__typeof()),
        ::uNewField("_offset", NULL, offsetof(Stroke, _offset), ::app::Uno::Float__typeof()),
        ::uNewField("_pinCount", NULL, offsetof(Stroke, _pinCount), ::app::Uno::Int__typeof()),
        ::uNewField("_width", NULL, offsetof(Stroke, _width), ::app::Uno::Float__typeof()));

    type->SetFunctions(31,
        ::uNewFunctionVoid("add_ShadingChanged", Stroke__add_ShadingChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("add_StrokeChanged", Stroke__add_StrokeChanged, 0, false, ::app::Uno::Action__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("Adjust", Stroke__Adjust, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("AdjustPosition", Stroke__AdjustPosition, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Adjustment", Stroke__get_Adjustment, 0, false, ::app::Fuse::Drawing::StrokeAdjustment__typeof()),
        ::uNewFunction("get_Alignment", Stroke__get_Alignment, 0, false, ::app::Fuse::Drawing::StrokeAlignment__typeof()),
        ::uNewFunction("get_Brush", Stroke__get_Brush, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("get_IsPinned", Stroke__get_IsPinned, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_LineCap", Stroke__get_LineCap, 0, false, ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewFunction("get_LineJoin", Stroke__get_LineJoin, 0, false, ::app::Fuse::Drawing::LineJoin__typeof()),
        ::uNewFunction("get_Offset", Stroke__get_Offset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Width", Stroke__get_Width, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("GetDeviceAdjusted", Stroke__GetDeviceAdjusted, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Stroke__New_1, 0, true, Stroke__typeof()),
        ::uNewFunction(".ctor", Stroke__New_2, 0, true, Stroke__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::LineCap__typeof(), ::app::Fuse::Drawing::LineJoin__typeof()),
        ::uNewFunctionVoid("OnPinned", Stroke__OnPinned, 0, false),
        ::uNewFunctionVoid("OnShadingChanged", Stroke__OnShadingChanged, 0, false),
        ::uNewFunctionVoid("OnStrokeChanged", Stroke__OnStrokeChanged, 0, false),
        ::uNewFunctionVoid("OnUnpinned", Stroke__OnUnpinned, 0, false),
        ::uNewFunctionVoid("Pin", Stroke__Pin, 0, false),
        ::uNewFunctionVoid("Prepare", Stroke__Prepare, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("remove_ShadingChanged", Stroke__remove_ShadingChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("remove_StrokeChanged", Stroke__remove_StrokeChanged, 0, false, ::app::Uno::Action__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunctionVoid("set_Adjustment", Stroke__set_Adjustment, 0, false, ::app::Fuse::Drawing::StrokeAdjustment__typeof()),
        ::uNewFunctionVoid("set_Alignment", Stroke__set_Alignment, 0, false, ::app::Fuse::Drawing::StrokeAlignment__typeof()),
        ::uNewFunctionVoid("set_Brush", Stroke__set_Brush, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("set_LineCap", Stroke__set_LineCap, 0, false, ::app::Fuse::Drawing::LineCap__typeof()),
        ::uNewFunctionVoid("set_LineJoin", Stroke__set_LineJoin, 0, false, ::app::Fuse::Drawing::LineJoin__typeof()),
        ::uNewFunctionVoid("set_Offset", Stroke__set_Offset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Width", Stroke__set_Width, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Unpin", Stroke__Unpin, 0, false));

    ::uRegisterType(type);
    return type;
}

void Stroke___ObjInit(Stroke* __this)
{
    __this->_width = 1.0f;
    __this->_adjustment = 2;
    __this->_alignment = 1;
}

void Stroke___ObjInit_1(Stroke* __this, ::app::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin)
{
    __this->_width = 1.0f;
    __this->_adjustment = 2;
    __this->_alignment = 1;
    __this->Brush(brush);
    __this->Width(width);
    __this->LineCap(lineCap);
    __this->LineJoin(lineJoin);
}

void Stroke__add_ShadingChanged(Stroke* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Stroke__add_StrokeChanged(Stroke* __this, ::uDelegate* value)
{
    __this->StrokeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->StrokeChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof());
}

float Stroke__Adjust(Stroke* __this, float w, float ppi)
{
    w = __this->AdjustPosition(w, ppi);
    w = ::app::Uno::Math__Max_1(NULL, w, 1.0f / ppi);
    return w;
}

float Stroke__AdjustPosition(Stroke* __this, float w, float ppi)
{
    switch (__this->Adjustment())
    {
        case 0:
        {
            return w;
        }
        case 1:
        {
            w = ::app::Uno::Math__Ceil_1(NULL, w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::app::Uno::Math__Floor_1(NULL, (w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::app::Uno::Math__Floor_1(NULL, w * ppi) / ppi;
            break;
        }
    }

    return w;
}

int Stroke__get_Adjustment(Stroke* __this)
{
    return __this->_adjustment;
}

int Stroke__get_Alignment(Stroke* __this)
{
    return __this->_alignment;
}

::app::Fuse::Drawing::Brush* Stroke__get_Brush(Stroke* __this)
{
    return __this->_brush;
}

bool Stroke__get_IsPinned(Stroke* __this)
{
    return __this->_pinCount > 0;
}

int Stroke__get_LineCap(Stroke* __this)
{
    return __this->_lineCap;
}

int Stroke__get_LineJoin(Stroke* __this)
{
    return __this->_lineJoin;
}

float Stroke__get_Offset(Stroke* __this)
{
    return __this->_offset;
}

float Stroke__get_Width(Stroke* __this)
{
    return __this->_width;
}

::app::Uno::Float2 Stroke__GetDeviceAdjusted(Stroke* __this, float ppi)
{
    float lo = 0.0f;
    float hi = 0.0f;

    switch (__this->Alignment())
    {
        case 2:
        {
            lo = ::app::Uno::Math__Ceil_1(NULL, (__this->_offset - 0.5f) * ppi) / ppi;
            hi = lo + __this->Adjust(__this->_width, ppi);
            break;
        }
        case 1:
        {
            hi = ::app::Uno::Math__Floor_1(NULL, (__this->_offset + 0.5f) * ppi) / ppi;
            lo = hi - __this->Adjust(__this->_width, ppi);
            break;
        }
        case 0:
        {
            lo = __this->AdjustPosition(__this->_offset - (__this->_width / 2.0f), ppi);
            hi = lo + __this->Adjust(__this->_width, ppi);
            break;
        }
    }

    ::app::Uno::Float2 r = ::app::Uno::Float2__New_2(NULL, hi - lo, (hi + lo) / 2.0f);
    return r;
}

Stroke* Stroke__New_1(::uStatic* __this)
{
    Stroke* inst = (Stroke*)::uAllocObject(sizeof(Stroke), Stroke__typeof());
    inst->_ObjInit();
    return inst;
}

Stroke* Stroke__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin)
{
    Stroke* inst = (Stroke*)::uAllocObject(sizeof(Stroke), Stroke__typeof());
    inst->_ObjInit_1(brush, width, lineCap, lineJoin);
    return inst;
}

void Stroke__OnPinned(Stroke* __this)
{
    if (__this->Brush() != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Brush())->Pin();
    }
}

void Stroke__OnShadingChanged(Stroke* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShadingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShadingChanged)->InvokeVoid();
    }
}

void Stroke__OnStrokeChanged(Stroke* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->StrokeChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->StrokeChanged)->InvokeVoid< Stroke*>(__this);
    }
}

void Stroke__OnUnpinned(Stroke* __this)
{
    if (__this->Brush() != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Brush())->Unpin();
    }
}

void Stroke__Pin(Stroke* __this)
{
    __this->_pinCount++;

    if (__this->_pinCount == 1)
    {
        __this->OnPinned();
    }
}

void Stroke__Prepare(Stroke* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (__this->Brush() != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Brush())->Prepare(dc, canvasSize);
    }
}

void Stroke__remove_ShadingChanged(Stroke* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Stroke__remove_StrokeChanged(Stroke* __this, ::uDelegate* value)
{
    __this->StrokeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->StrokeChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof());
}

void Stroke__set_Adjustment(Stroke* __this, int value)
{
    if (__this->_adjustment != value)
    {
        __this->_adjustment = value;
        __this->OnStrokeChanged();
    }
}

void Stroke__set_Alignment(Stroke* __this, int value)
{
    if (__this->_alignment != value)
    {
        __this->_alignment = value;
        __this->OnStrokeChanged();
    }
}

void Stroke__set_Brush(Stroke* __this, ::app::Fuse::Drawing::Brush* value)
{
    if (value == __this->_brush)
    {
        return;
    }

    if (__this->IsPinned())
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_brush)->Unpin();
    }

    if (::uIs(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Stroke__OnShadingChanged, __this));
    }

    __this->_brush = value;

    if (::uIs(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Stroke__OnShadingChanged, __this));
    }

    if (__this->IsPinned())
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_brush)->Pin();
    }

    __this->OnShadingChanged();
}

void Stroke__set_LineCap(Stroke* __this, int value)
{
    if (value == __this->_lineCap)
    {
        return;
    }

    __this->_lineCap = value;
    __this->OnStrokeChanged();
}

void Stroke__set_LineJoin(Stroke* __this, int value)
{
    if (value == __this->_lineJoin)
    {
        return;
    }

    __this->_lineJoin = value;
    __this->OnStrokeChanged();
}

void Stroke__set_Offset(Stroke* __this, float value)
{
    __this->_offset = value;
    __this->OnStrokeChanged();
}

void Stroke__set_Width(Stroke* __this, float value)
{
    __this->_width = value;
    __this->OnStrokeChanged();
}

void Stroke__Unpin(Stroke* __this)
{
    __this->_pinCount--;

    if (__this->_pinCount == 0)
    {
        __this->OnUnpinned();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StrokeAdjustment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.StrokeAdjustment", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "None", 0LL,
        "PixelCeil", 1LL,
        "PixelNear", 2LL,
        "PixelFloor", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StrokeAlignment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.StrokeAlignment", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Center", 0LL,
        "Inside", 1LL,
        "Outside", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Token__uType* Token__typeof()
{
    static ::uStaticStrong<Token__uType*> type;
    if (type != NULL) return type;

    type = (Token__uType*)::uAllocClassType(sizeof(Token__uType), "Fuse.Drawing.Token", false, 0, 1, 0);

    type->SetStrongRefs(
        "Next", offsetof(Token, Next));

    type->SetFields(4,
        ::uNewField("First", NULL, offsetof(Token, First), ::app::Uno::Int__typeof()),
        ::uNewField("HasAction", NULL, offsetof(Token, HasAction), ::app::Uno::Bool__typeof()),
        ::uNewField("Last", NULL, offsetof(Token, Last), ::app::Uno::Int__typeof()),
        ::uNewField("Next", NULL, offsetof(Token, Next), Token__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Token__New_1, 0, true, Token__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Token___ObjInit(Token* __this, int first, bool hasAction)
{
    __this->First = first;
    __this->HasAction = hasAction;
}

Token* Token__New_1(::uStatic* __this, int first, bool hasAction)
{
    Token* inst = (Token*)::uAllocObject(sizeof(Token), Token__typeof());
    inst->_ObjInit(first, hasAction);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Util__uType* Util__typeof()
{
    static ::uStaticStrong<Util__uType*> type;
    if (type != NULL) return type;

    type = (Util__uType*)::uAllocClassType(sizeof(Util__uType), "Fuse.Drawing.Util", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction(".ctor", Util__New_1, 0, true, Util__typeof()),
        ::uNewFunctionVoid("ValidateFloat", Util__ValidateFloat, 0, true, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("ValidateFloat2", Util__ValidateFloat2, 0, true, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Util___ObjInit(Util* __this)
{
}

Util* Util__New_1(::uStatic* __this)
{
    Util* inst = (Util*)::uAllocObject(sizeof(Util), Util__typeof());
    inst->_ObjInit();
    return inst;
}

void Util__ValidateFloat(::uStatic* __this, float v)
{
    if (v != v)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("NaN in path data!")));
    }

    if (v >= 1e+18f)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Too large path coordinate!")));
    }
}

void Util__ValidateFloat2(::uStatic* __this, ::app::Uno::Float2 v)
{
    Util__ValidateFloat(NULL, v.X);
    Util__ValidateFloat(NULL, v.Y);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VerticalLineTo__uType* VerticalLineTo__typeof()
{
    static ::uStaticStrong<VerticalLineTo__uType*> type;
    if (type != NULL) return type;

    type = (VerticalLineTo__uType*)::uAllocClassType(sizeof(VerticalLineTo__uType), "Fuse.Drawing.VerticalLineTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineTo__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))VerticalLineTo__Serialize;

    type->SetFields(1,
        ::uNewField("_y", NULL, offsetof(VerticalLineTo, _y), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", VerticalLineTo__New_4, 0, true, VerticalLineTo__typeof(), ::app::Fuse::Drawing::PathGeometry__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void VerticalLineTo___ObjInit_3(VerticalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y)
{
    ::app::Fuse::Drawing::LineTo___ObjInit_1(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat(NULL, y);
    __this->LineToCtor(prev, lastPosition, ::app::Uno::Float2__New_2(NULL, lastPosition.X, y));
    __this->_y = y;
}

VerticalLineTo* VerticalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y)
{
    VerticalLineTo* inst = (VerticalLineTo*)::uAllocObject(sizeof(VerticalLineTo), VerticalLineTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, y);
    return inst;
}

::uString* VerticalLineTo__Serialize(VerticalLineTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("V "), ::uBox(::app::Uno::Float__typeof(), __this->_y));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WindingRules__uType* WindingRules__typeof()
{
    static ::uStaticStrong<WindingRules__uType*> type;
    if (type != NULL) return type;

    type = (WindingRules__uType*)::uAllocClassType(sizeof(WindingRules__uType), "Fuse.Drawing.WindingRules");

    type->SetFunctions(5,
        ::uNewFunction("AbsoluteGreaterOrEqualsTwo", WindingRules__AbsoluteGreaterOrEqualsTwo, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Negative", WindingRules__Negative, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NonZero", WindingRules__NonZero, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Odd", WindingRules__Odd, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Positive", WindingRules__Positive, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

bool WindingRules__AbsoluteGreaterOrEqualsTwo(::uStatic* __this, int n)
{
    return (n >= 2) || (n <= -2);
}

bool WindingRules__Negative(::uStatic* __this, int n)
{
    return n < 0;
}

bool WindingRules__NonZero(::uStatic* __this, int n)
{
    return n != 0;
}

bool WindingRules__Odd(::uStatic* __this, int n)
{
    return (n & 1) != 0;
}

bool WindingRules__Positive(::uStatic* __this, int n)
{
    return n > 0;
}

}}}
