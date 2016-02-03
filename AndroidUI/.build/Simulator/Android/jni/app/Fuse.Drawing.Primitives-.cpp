#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.ImageFill.h>
#include <app/Fuse.Drawing.ImageFill_DrawParams.h>
#include <app/Fuse.Drawing.Internal.Float2Buffer.h>
#include <app/Fuse.Drawing.Internal.FloatBuffer.h>
#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <app/Fuse.Drawing.Internal.UShortBuffer.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h>
#include <app/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h>
#include <app/Fuse.Drawing.Primitives.Coverage.h>
#include <app/Fuse.Drawing.Primitives.FillCoverage.h>
#include <app/Fuse.Drawing.Primitives.LimitCoverage.h>
#include <app/Fuse.Drawing.Primitives.OneLimitCoverage.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.StrokeCoverage.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Drawing.Primitives.WedgeCoverage.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Circle*> Circle__Singleton;

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.Drawing.Primitives.Circle", false, 0, 77, 0);

    type->SetStrongRefs(
        "_bufferIndex", offsetof(Circle, _bufferIndex),
        "_bufferVertex", offsetof(Circle, _bufferVertex),
        "_draw_22c0272b._compiledProgram", offsetof(Circle, _draw_22c0272b._compiledProgram),
        "_draw_22c0272b._constValues", offsetof(Circle, _draw_22c0272b._constValues),
        "_draw_22c0272b._Program", offsetof(Circle, _draw_22c0272b._Program),
        "_draw_37e0cc03._compiledProgram", offsetof(Circle, _draw_37e0cc03._compiledProgram),
        "_draw_37e0cc03._constValues", offsetof(Circle, _draw_37e0cc03._constValues),
        "_draw_37e0cc03._Program", offsetof(Circle, _draw_37e0cc03._Program),
        "_draw_44028225._compiledProgram", offsetof(Circle, _draw_44028225._compiledProgram),
        "_draw_44028225._constValues", offsetof(Circle, _draw_44028225._constValues),
        "_draw_44028225._Program", offsetof(Circle, _draw_44028225._Program),
        "_draw_44238225._compiledProgram", offsetof(Circle, _draw_44238225._compiledProgram),
        "_draw_44238225._constValues", offsetof(Circle, _draw_44238225._constValues),
        "_draw_44238225._Program", offsetof(Circle, _draw_44238225._Program),
        "_draw_44c88225._compiledProgram", offsetof(Circle, _draw_44c88225._compiledProgram),
        "_draw_44c88225._constValues", offsetof(Circle, _draw_44c88225._constValues),
        "_draw_44c88225._Program", offsetof(Circle, _draw_44c88225._Program),
        "_draw_492f1061._compiledProgram", offsetof(Circle, _draw_492f1061._compiledProgram),
        "_draw_492f1061._constValues", offsetof(Circle, _draw_492f1061._constValues),
        "_draw_492f1061._Program", offsetof(Circle, _draw_492f1061._Program),
        "_draw_49d1aa95._compiledProgram", offsetof(Circle, _draw_49d1aa95._compiledProgram),
        "_draw_49d1aa95._constValues", offsetof(Circle, _draw_49d1aa95._constValues),
        "_draw_49d1aa95._Program", offsetof(Circle, _draw_49d1aa95._Program),
        "_draw_508d0866._compiledProgram", offsetof(Circle, _draw_508d0866._compiledProgram),
        "_draw_508d0866._constValues", offsetof(Circle, _draw_508d0866._constValues),
        "_draw_508d0866._Program", offsetof(Circle, _draw_508d0866._Program),
        "_draw_8cc20e6d._compiledProgram", offsetof(Circle, _draw_8cc20e6d._compiledProgram),
        "_draw_8cc20e6d._constValues", offsetof(Circle, _draw_8cc20e6d._constValues),
        "_draw_8cc20e6d._Program", offsetof(Circle, _draw_8cc20e6d._Program),
        "_draw_8f2093cb._compiledProgram", offsetof(Circle, _draw_8f2093cb._compiledProgram),
        "_draw_8f2093cb._constValues", offsetof(Circle, _draw_8f2093cb._constValues),
        "_draw_8f2093cb._Program", offsetof(Circle, _draw_8f2093cb._Program),
        "_draw_95395768._compiledProgram", offsetof(Circle, _draw_95395768._compiledProgram),
        "_draw_95395768._constValues", offsetof(Circle, _draw_95395768._constValues),
        "_draw_95395768._Program", offsetof(Circle, _draw_95395768._Program),
        "_draw_95dbf19c._compiledProgram", offsetof(Circle, _draw_95dbf19c._compiledProgram),
        "_draw_95dbf19c._constValues", offsetof(Circle, _draw_95dbf19c._constValues),
        "_draw_95dbf19c._Program", offsetof(Circle, _draw_95dbf19c._Program),
        "_draw_9cb80e6d._compiledProgram", offsetof(Circle, _draw_9cb80e6d._compiledProgram),
        "_draw_9cb80e6d._constValues", offsetof(Circle, _draw_9cb80e6d._constValues),
        "_draw_9cb80e6d._Program", offsetof(Circle, _draw_9cb80e6d._Program),
        "_draw_a4b30e6d._compiledProgram", offsetof(Circle, _draw_a4b30e6d._compiledProgram),
        "_draw_a4b30e6d._constValues", offsetof(Circle, _draw_a4b30e6d._constValues),
        "_draw_a4b30e6d._Program", offsetof(Circle, _draw_a4b30e6d._Program),
        "_draw_a6879bc6._compiledProgram", offsetof(Circle, _draw_a6879bc6._compiledProgram),
        "_draw_a6879bc6._constValues", offsetof(Circle, _draw_a6879bc6._constValues),
        "_draw_a6879bc6._Program", offsetof(Circle, _draw_a6879bc6._Program),
        "_draw_ad930e6d._compiledProgram", offsetof(Circle, _draw_ad930e6d._compiledProgram),
        "_draw_ad930e6d._constValues", offsetof(Circle, _draw_ad930e6d._constValues),
        "_draw_ad930e6d._Program", offsetof(Circle, _draw_ad930e6d._Program),
        "_draw_b58e0e6d._compiledProgram", offsetof(Circle, _draw_b58e0e6d._compiledProgram),
        "_draw_b58e0e6d._constValues", offsetof(Circle, _draw_b58e0e6d._constValues),
        "_draw_b58e0e6d._Program", offsetof(Circle, _draw_b58e0e6d._Program),
        "_draw_bdee0e6d._compiledProgram", offsetof(Circle, _draw_bdee0e6d._compiledProgram),
        "_draw_bdee0e6d._constValues", offsetof(Circle, _draw_bdee0e6d._constValues),
        "_draw_bdee0e6d._Program", offsetof(Circle, _draw_bdee0e6d._Program),
        "_draw_c0451d52._compiledProgram", offsetof(Circle, _draw_c0451d52._compiledProgram),
        "_draw_c0451d52._constValues", offsetof(Circle, _draw_c0451d52._constValues),
        "_draw_c0451d52._Program", offsetof(Circle, _draw_c0451d52._Program),
        "_draw_c0451d53._compiledProgram", offsetof(Circle, _draw_c0451d53._compiledProgram),
        "_draw_c0451d53._constValues", offsetof(Circle, _draw_c0451d53._constValues),
        "_draw_c0451d53._Program", offsetof(Circle, _draw_c0451d53._Program),
        "_draw_c5840e6d._compiledProgram", offsetof(Circle, _draw_c5840e6d._compiledProgram),
        "_draw_c5840e6d._constValues", offsetof(Circle, _draw_c5840e6d._constValues),
        "_draw_c5840e6d._Program", offsetof(Circle, _draw_c5840e6d._Program),
        "_draw_ebd684fc._compiledProgram", offsetof(Circle, _draw_ebd684fc._compiledProgram),
        "_draw_ebd684fc._constValues", offsetof(Circle, _draw_ebd684fc._constValues),
        "_draw_ebd684fc._Program", offsetof(Circle, _draw_ebd684fc._Program),
        "_draw_ec791f30._compiledProgram", offsetof(Circle, _draw_ec791f30._compiledProgram),
        "_draw_ec791f30._constValues", offsetof(Circle, _draw_ec791f30._constValues),
        "_draw_ec791f30._Program", offsetof(Circle, _draw_ec791f30._Program),
        "_draw_f3347d01._compiledProgram", offsetof(Circle, _draw_f3347d01._compiledProgram),
        "_draw_f3347d01._constValues", offsetof(Circle, _draw_f3347d01._constValues),
        "_draw_f3347d01._Program", offsetof(Circle, _draw_f3347d01._Program),
        "_fillCoverage", offsetof(Circle, _fillCoverage),
        "_oneLimitCoverage", offsetof(Circle, _oneLimitCoverage),
        "_strokeCoverage", offsetof(Circle, _strokeCoverage));

    type->SetFields(6,
        ::uNewField("_bufferIndex", NULL, offsetof(Circle, _bufferIndex), ::app::Fuse::Drawing::Internal::UShortBuffer__typeof()),
        ::uNewField("_bufferVertex", NULL, offsetof(Circle, _bufferVertex), ::app::Fuse::Drawing::Internal::Float2Buffer__typeof()),
        ::uNewField("_fillCoverage", NULL, offsetof(Circle, _fillCoverage), ::app::Fuse::Drawing::Primitives::FillCoverage__typeof()),
        ::uNewField("_oneLimitCoverage", NULL, offsetof(Circle, _oneLimitCoverage), ::app::Fuse::Drawing::Primitives::LimitCoverage__typeof()),
        ::uNewField("_strokeCoverage", NULL, offsetof(Circle, _strokeCoverage), ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()),
        ::uNewField("Singleton", &Circle__Singleton, 0, Circle__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Draw", Circle__Draw, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Drawing::Primitives::Coverage__typeof(), ::app::Fuse::Drawing::Primitives::LimitCoverage__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Fill", Circle__Fill, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("InitBuffers", Circle__InitBuffers, 0, false),
        ::uNewFunction(".ctor", Circle__New_1, 0, true, Circle__typeof()),
        ::uNewFunctionVoid("Stroke", Circle__Stroke, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Circle___ObjInit(Circle* __this)
{
    __this->_oneLimitCoverage = (::app::Fuse::Drawing::Primitives::LimitCoverage*)::app::Fuse::Drawing::Primitives::OneLimitCoverage__New_1(NULL);
    __this->_strokeCoverage = ::app::Fuse::Drawing::Primitives::StrokeCoverage__New_1(NULL);
    __this->_fillCoverage = ::app::Fuse::Drawing::Primitives::FillCoverage__New_1(NULL);
    __this->init_DrawCalls();
}

void Circle___TypeInit(::uStatic* __this)
{
    Circle__Singleton = Circle__New_1(NULL);
}

void Circle__Draw(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_131 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_132 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_133 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_134 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_136 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_137 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_138 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_139 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_140 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_141 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_142 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_143 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_144 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_145 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_146 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_147 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_148 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_149 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_150 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_151 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_152 = ::app::Uno::Float4();

    if (__this->_bufferVertex == NULL)
    {
        __this->InitBuffers();
    }

    if (::uIs(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_8cc20e6d_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_8cc20e6d_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_8cc20e6d_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_8cc20e6d_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_8cc20e6d.BlendEnabled(true);
                    __this->_draw_8cc20e6d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_8cc20e6d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_8cc20e6d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_8cc20e6d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_8cc20e6d.DepthTestEnabled(false);
                    __this->_draw_8cc20e6d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_8cc20e6d.Const(0, Texture_8cc20e6d_13_6_4 == NULL);
                    __this->_draw_8cc20e6d.Use();
                    __this->_draw_8cc20e6d.Attrib_1(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_8cc20e6d.Uniform_12(2, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_8cc20e6d.Uniform_12(3, center);
                    __this->_draw_8cc20e6d.Uniform_17(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_8cc20e6d.Uniform_12(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_8cc20e6d.Uniform_12(6, DP_8cc20e6d_13_5_7.Origin);
                    __this->_draw_8cc20e6d.Uniform_12(7, DP_8cc20e6d_13_5_7.Size);
                    __this->_draw_8cc20e6d.Uniform_12(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = DP_8cc20e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_123.Z, ind_123.W)), (ind_124 = DP_8cc20e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))));
                    __this->_draw_8cc20e6d.Uniform_12(9, (ind_125 = DP_8cc20e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)));
                    __this->_draw_8cc20e6d.Uniform_16(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_8cc20e6d.Uniform_11(11, radius);
                    __this->_draw_8cc20e6d.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_8cc20e6d.Uniform_11(13, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_8cc20e6d.Uniform_11(14, dc->ViewportPointDensity());
                    __this->_draw_8cc20e6d.Uniform_11(15, 1.0f / smoothness);
                    __this->_draw_8cc20e6d.Uniform_11(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_8cc20e6d.Uniform_12(17, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_8cc20e6d_19_2_14, EndVec_8cc20e6d_19_3_15)));
                    __this->_draw_8cc20e6d.Uniform_12(18, StartVec_8cc20e6d_19_2_14);
                    __this->_draw_8cc20e6d.Uniform_12(19, EndVec_8cc20e6d_19_3_15);
                    __this->_draw_8cc20e6d.Sampler_2(20, Texture_8cc20e6d_13_6_4);
                    __this->_draw_8cc20e6d.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_a4b30e6d_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_a4b30e6d_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_a4b30e6d_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_a4b30e6d_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_a4b30e6d.BlendEnabled(true);
                    __this->_draw_a4b30e6d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a4b30e6d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a4b30e6d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a4b30e6d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a4b30e6d.DepthTestEnabled(false);
                    __this->_draw_a4b30e6d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_a4b30e6d.Const(0, Texture_a4b30e6d_13_6_4 == NULL);
                    __this->_draw_a4b30e6d.Use();
                    __this->_draw_a4b30e6d.Attrib_1(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_a4b30e6d.Uniform_12(2, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_a4b30e6d.Uniform_12(3, center);
                    __this->_draw_a4b30e6d.Uniform_17(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_a4b30e6d.Uniform_12(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_a4b30e6d.Uniform_12(6, DP_a4b30e6d_13_5_7.Origin);
                    __this->_draw_a4b30e6d.Uniform_12(7, DP_a4b30e6d_13_5_7.Size);
                    __this->_draw_a4b30e6d.Uniform_12(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_126 = DP_a4b30e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_126.Z, ind_126.W)), (ind_127 = DP_a4b30e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y))));
                    __this->_draw_a4b30e6d.Uniform_12(9, (ind_128 = DP_a4b30e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y)));
                    __this->_draw_a4b30e6d.Uniform_16(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_a4b30e6d.Uniform_11(11, radius);
                    __this->_draw_a4b30e6d.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_a4b30e6d.Uniform_11(13, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_a4b30e6d.Uniform_11(14, dc->ViewportPointDensity());
                    __this->_draw_a4b30e6d.Uniform_11(15, 1.0f / smoothness);
                    __this->_draw_a4b30e6d.Uniform_11(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_a4b30e6d.Uniform_12(17, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_a4b30e6d_19_2_14, EndVec_a4b30e6d_19_3_15)));
                    __this->_draw_a4b30e6d.Uniform_12(18, StartVec_a4b30e6d_19_2_14);
                    __this->_draw_a4b30e6d.Uniform_12(19, EndVec_a4b30e6d_19_3_15);
                    __this->_draw_a4b30e6d.Sampler_2(20, Texture_a4b30e6d_13_6_4);
                    __this->_draw_a4b30e6d.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_9cb80e6d_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_9cb80e6d_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                {
                    __this->_draw_9cb80e6d.BlendEnabled(true);
                    __this->_draw_9cb80e6d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_9cb80e6d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_9cb80e6d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_9cb80e6d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_9cb80e6d.DepthTestEnabled(false);
                    __this->_draw_9cb80e6d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_9cb80e6d.Const(0, Texture_9cb80e6d_13_6_4 == NULL);
                    __this->_draw_9cb80e6d.Use();
                    __this->_draw_9cb80e6d.Attrib_1(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_9cb80e6d.Uniform_12(2, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_9cb80e6d.Uniform_12(3, center);
                    __this->_draw_9cb80e6d.Uniform_17(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_9cb80e6d.Uniform_12(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_9cb80e6d.Uniform_12(6, DP_9cb80e6d_13_5_7.Origin);
                    __this->_draw_9cb80e6d.Uniform_12(7, DP_9cb80e6d_13_5_7.Size);
                    __this->_draw_9cb80e6d.Uniform_12(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_129 = DP_9cb80e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_129.Z, ind_129.W)), (ind_130 = DP_9cb80e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_130.X, ind_130.Y))));
                    __this->_draw_9cb80e6d.Uniform_12(9, (ind_131 = DP_9cb80e6d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_131.X, ind_131.Y)));
                    __this->_draw_9cb80e6d.Uniform_16(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_9cb80e6d.Uniform_11(11, radius);
                    __this->_draw_9cb80e6d.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_9cb80e6d.Uniform_11(13, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_9cb80e6d.Uniform_11(14, dc->ViewportPointDensity());
                    __this->_draw_9cb80e6d.Uniform_11(15, 1.0f / smoothness);
                    __this->_draw_9cb80e6d.Uniform_11(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_9cb80e6d.Sampler_2(17, Texture_9cb80e6d_13_6_4);
                    __this->_draw_9cb80e6d.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_b58e0e6d_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_b58e0e6d_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_b58e0e6d.BlendEnabled(true);
                    __this->_draw_b58e0e6d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_b58e0e6d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_b58e0e6d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_b58e0e6d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_b58e0e6d.DepthTestEnabled(false);
                    __this->_draw_b58e0e6d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_b58e0e6d.Use();
                    __this->_draw_b58e0e6d.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_b58e0e6d.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_b58e0e6d.Uniform_12(2, center);
                    __this->_draw_b58e0e6d.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_b58e0e6d.Uniform_11(4, radius);
                    __this->_draw_b58e0e6d.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_b58e0e6d.Uniform_11(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_b58e0e6d.Uniform_11(7, dc->ViewportPointDensity());
                    __this->_draw_b58e0e6d.Uniform_11(8, 1.0f / smoothness);
                    __this->_draw_b58e0e6d.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_b58e0e6d.Uniform_14(10, (ind_132 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_132.X, ind_132.Y, ind_132.Z)));
                    __this->_draw_b58e0e6d.Uniform_11(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_b58e0e6d.Uniform_12(12, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_b58e0e6d_19_2_7, EndVec_b58e0e6d_19_3_8)));
                    __this->_draw_b58e0e6d.Uniform_12(13, StartVec_b58e0e6d_19_2_7);
                    __this->_draw_b58e0e6d.Uniform_12(14, EndVec_b58e0e6d_19_3_8);
                    __this->_draw_b58e0e6d.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_ad930e6d_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_ad930e6d_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_ad930e6d.BlendEnabled(true);
                    __this->_draw_ad930e6d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_ad930e6d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_ad930e6d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_ad930e6d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_ad930e6d.DepthTestEnabled(false);
                    __this->_draw_ad930e6d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_ad930e6d.Use();
                    __this->_draw_ad930e6d.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_ad930e6d.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_ad930e6d.Uniform_12(2, center);
                    __this->_draw_ad930e6d.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_ad930e6d.Uniform_11(4, radius);
                    __this->_draw_ad930e6d.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_ad930e6d.Uniform_11(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_ad930e6d.Uniform_11(7, dc->ViewportPointDensity());
                    __this->_draw_ad930e6d.Uniform_11(8, 1.0f / smoothness);
                    __this->_draw_ad930e6d.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_ad930e6d.Uniform_14(10, (ind_133 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_133.X, ind_133.Y, ind_133.Z)));
                    __this->_draw_ad930e6d.Uniform_11(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_ad930e6d.Uniform_12(12, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_ad930e6d_19_2_7, EndVec_ad930e6d_19_3_8)));
                    __this->_draw_ad930e6d.Uniform_12(13, StartVec_ad930e6d_19_2_7);
                    __this->_draw_ad930e6d.Uniform_12(14, EndVec_ad930e6d_19_3_8);
                    __this->_draw_ad930e6d.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_c5840e6d.BlendEnabled(true);
                    __this->_draw_c5840e6d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_c5840e6d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_c5840e6d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_c5840e6d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_c5840e6d.DepthTestEnabled(false);
                    __this->_draw_c5840e6d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_c5840e6d.Use();
                    __this->_draw_c5840e6d.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_c5840e6d.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_c5840e6d.Uniform_12(2, center);
                    __this->_draw_c5840e6d.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_c5840e6d.Uniform_11(4, radius);
                    __this->_draw_c5840e6d.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_c5840e6d.Uniform_11(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_c5840e6d.Uniform_11(7, dc->ViewportPointDensity());
                    __this->_draw_c5840e6d.Uniform_11(8, 1.0f / smoothness);
                    __this->_draw_c5840e6d.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_c5840e6d.Uniform_14(10, (ind_134 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_134.X, ind_134.Y, ind_134.Z)));
                    __this->_draw_c5840e6d.Uniform_11(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_c5840e6d.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_bdee0e6d_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_bdee0e6d_13_16_7 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_bdee0e6d_19_2_15 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_bdee0e6d_19_3_16 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_bdee0e6d.BlendEnabled(true);
                    __this->_draw_bdee0e6d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_bdee0e6d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_bdee0e6d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_bdee0e6d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_bdee0e6d.DepthTestEnabled(false);
                    __this->_draw_bdee0e6d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_bdee0e6d.Use();
                    __this->_draw_bdee0e6d.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_bdee0e6d.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_bdee0e6d.Uniform_12(2, center);
                    __this->_draw_bdee0e6d.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_bdee0e6d.Uniform_12(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_bdee0e6d.Uniform_12(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_bdee0e6d_13_17_6, angleLen_bdee0e6d_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_bdee0e6d.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_bdee0e6d.Uniform_11(7, radius);
                    __this->_draw_bdee0e6d.Uniform_11(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_bdee0e6d.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_bdee0e6d.Uniform_11(10, dc->ViewportPointDensity());
                    __this->_draw_bdee0e6d.Uniform_11(11, 1.0f / smoothness);
                    __this->_draw_bdee0e6d.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_bdee0e6d.Uniform_12(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_bdee0e6d_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_bdee0e6d.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_bdee0e6d_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_bdee0e6d.Uniform_12(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_bdee0e6d_19_2_15, EndVec_bdee0e6d_19_3_16)));
                    __this->_draw_bdee0e6d.Uniform_12(16, StartVec_bdee0e6d_19_2_15);
                    __this->_draw_bdee0e6d.Uniform_12(17, EndVec_bdee0e6d_19_3_16);
                    __this->_draw_bdee0e6d.Sampler_2(18, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_bdee0e6d.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_c0451d53_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_c0451d53_13_16_7 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_c0451d53_19_2_15 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_c0451d53_19_3_16 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_c0451d53.BlendEnabled(true);
                    __this->_draw_c0451d53.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d53.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d53.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d53.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d53.DepthTestEnabled(false);
                    __this->_draw_c0451d53.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_c0451d53.Use();
                    __this->_draw_c0451d53.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_c0451d53.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_c0451d53.Uniform_12(2, center);
                    __this->_draw_c0451d53.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_c0451d53.Uniform_12(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_c0451d53.Uniform_12(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_c0451d53_13_17_6, angleLen_c0451d53_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_c0451d53.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_c0451d53.Uniform_11(7, radius);
                    __this->_draw_c0451d53.Uniform_11(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_c0451d53.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_c0451d53.Uniform_11(10, dc->ViewportPointDensity());
                    __this->_draw_c0451d53.Uniform_11(11, 1.0f / smoothness);
                    __this->_draw_c0451d53.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_c0451d53.Uniform_12(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_c0451d53_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_c0451d53.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_c0451d53_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_c0451d53.Uniform_12(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_c0451d53_19_2_15, EndVec_c0451d53_19_3_16)));
                    __this->_draw_c0451d53.Uniform_12(16, StartVec_c0451d53_19_2_15);
                    __this->_draw_c0451d53.Uniform_12(17, EndVec_c0451d53_19_3_16);
                    __this->_draw_c0451d53.Sampler_2(18, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_c0451d53.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_c0451d52_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_c0451d52_13_16_7 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                {
                    __this->_draw_c0451d52.BlendEnabled(true);
                    __this->_draw_c0451d52.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d52.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d52.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d52.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_c0451d52.DepthTestEnabled(false);
                    __this->_draw_c0451d52.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_c0451d52.Use();
                    __this->_draw_c0451d52.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_c0451d52.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_c0451d52.Uniform_12(2, center);
                    __this->_draw_c0451d52.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_c0451d52.Uniform_12(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_c0451d52.Uniform_12(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_c0451d52_13_17_6, angleLen_c0451d52_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_c0451d52.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_c0451d52.Uniform_11(7, radius);
                    __this->_draw_c0451d52.Uniform_11(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_c0451d52.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_c0451d52.Uniform_11(10, dc->ViewportPointDensity());
                    __this->_draw_c0451d52.Uniform_11(11, 1.0f / smoothness);
                    __this->_draw_c0451d52.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_c0451d52.Uniform_12(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_c0451d52_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_c0451d52.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_c0451d52_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_c0451d52.Sampler_2(15, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_c0451d52.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_44028225_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_44028225_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_44028225.BlendEnabled(true);
                    __this->_draw_44028225.BlendSrcRgb(__this->Draw_BlendSrcRgb_44028225_11_4_22);
                    __this->_draw_44028225.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_44028225_11_6_23);
                    __this->_draw_44028225.BlendDstRgb(__this->Draw_BlendDstRgb_44028225_11_5_24);
                    __this->_draw_44028225.BlendDstAlpha(__this->Draw_BlendDstAlpha_44028225_11_7_25);
                    __this->_draw_44028225.DepthTestEnabled(false);
                    __this->_draw_44028225.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_44028225.Use();
                    __this->_draw_44028225.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_44028225.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_44028225.Uniform_12(2, center);
                    __this->_draw_44028225.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_44028225.Uniform_11(4, radius);
                    __this->_draw_44028225.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_44028225.Uniform_11(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_44028225.Uniform_11(7, dc->ViewportPointDensity());
                    __this->_draw_44028225.Uniform_11(8, 1.0f / smoothness);
                    __this->_draw_44028225.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_44028225.Uniform_14(10, (ind_135 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_135.X, ind_135.Y, ind_135.Z)));
                    __this->_draw_44028225.Uniform_12(11, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_44028225_19_2_7, EndVec_44028225_19_3_8)));
                    __this->_draw_44028225.Uniform_12(12, StartVec_44028225_19_2_7);
                    __this->_draw_44028225.Uniform_12(13, EndVec_44028225_19_3_8);
                    __this->_draw_44028225.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_44238225_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_44238225_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_44238225.BlendEnabled(true);
                    __this->_draw_44238225.BlendSrcRgb(__this->Draw_BlendSrcRgb_44028225_11_4_22);
                    __this->_draw_44238225.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_44028225_11_6_23);
                    __this->_draw_44238225.BlendDstRgb(__this->Draw_BlendDstRgb_44028225_11_5_24);
                    __this->_draw_44238225.BlendDstAlpha(__this->Draw_BlendDstAlpha_44028225_11_7_25);
                    __this->_draw_44238225.DepthTestEnabled(false);
                    __this->_draw_44238225.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_44238225.Use();
                    __this->_draw_44238225.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_44238225.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_44238225.Uniform_12(2, center);
                    __this->_draw_44238225.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_44238225.Uniform_11(4, radius);
                    __this->_draw_44238225.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_44238225.Uniform_11(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_44238225.Uniform_11(7, dc->ViewportPointDensity());
                    __this->_draw_44238225.Uniform_11(8, 1.0f / smoothness);
                    __this->_draw_44238225.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_44238225.Uniform_14(10, (ind_136 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_136.X, ind_136.Y, ind_136.Z)));
                    __this->_draw_44238225.Uniform_12(11, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_44238225_19_2_7, EndVec_44238225_19_3_8)));
                    __this->_draw_44238225.Uniform_12(12, StartVec_44238225_19_2_7);
                    __this->_draw_44238225.Uniform_12(13, EndVec_44238225_19_3_8);
                    __this->_draw_44238225.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_44c88225.BlendEnabled(true);
                    __this->_draw_44c88225.BlendSrcRgb(__this->Draw_BlendSrcRgb_44028225_11_4_22);
                    __this->_draw_44c88225.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_44028225_11_6_23);
                    __this->_draw_44c88225.BlendDstRgb(__this->Draw_BlendDstRgb_44028225_11_5_24);
                    __this->_draw_44c88225.BlendDstAlpha(__this->Draw_BlendDstAlpha_44028225_11_7_25);
                    __this->_draw_44c88225.DepthTestEnabled(false);
                    __this->_draw_44c88225.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_44c88225.Use();
                    __this->_draw_44c88225.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_44c88225.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_44c88225.Uniform_12(2, center);
                    __this->_draw_44c88225.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_44c88225.Uniform_11(4, radius);
                    __this->_draw_44c88225.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_44c88225.Uniform_11(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_44c88225.Uniform_11(7, dc->ViewportPointDensity());
                    __this->_draw_44c88225.Uniform_11(8, 1.0f / smoothness);
                    __this->_draw_44c88225.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_44c88225.Uniform_14(10, (ind_137 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_137.X, ind_137.Y, ind_137.Z)));
                    __this->_draw_44c88225.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
    }
    else if (::uIs(cover, ::app::Fuse::Drawing::Primitives::FillCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_ebd684fc_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_ebd684fc_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_ebd684fc_19_2_13 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_ebd684fc_19_3_14 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_ebd684fc.BlendEnabled(true);
                    __this->_draw_ebd684fc.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_ebd684fc.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_ebd684fc.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_ebd684fc.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_ebd684fc.DepthTestEnabled(false);
                    __this->_draw_ebd684fc.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_ebd684fc.Const(0, Texture_ebd684fc_13_6_4 == NULL);
                    __this->_draw_ebd684fc.Use();
                    __this->_draw_ebd684fc.Attrib_1(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_ebd684fc.Uniform_12(2, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_ebd684fc.Uniform_12(3, center);
                    __this->_draw_ebd684fc.Uniform_17(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_ebd684fc.Uniform_12(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_ebd684fc.Uniform_12(6, DP_ebd684fc_13_5_7.Origin);
                    __this->_draw_ebd684fc.Uniform_12(7, DP_ebd684fc_13_5_7.Size);
                    __this->_draw_ebd684fc.Uniform_12(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_138 = DP_ebd684fc_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_138.Z, ind_138.W)), (ind_139 = DP_ebd684fc_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_139.X, ind_139.Y))));
                    __this->_draw_ebd684fc.Uniform_12(9, (ind_140 = DP_ebd684fc_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_140.X, ind_140.Y)));
                    __this->_draw_ebd684fc.Uniform_16(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_ebd684fc.Uniform_11(11, radius);
                    __this->_draw_ebd684fc.Uniform_11(12, dc->ViewportPointDensity());
                    __this->_draw_ebd684fc.Uniform_11(13, 1.0f / smoothness);
                    __this->_draw_ebd684fc.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_ebd684fc.Uniform_12(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_ebd684fc_19_2_13, EndVec_ebd684fc_19_3_14)));
                    __this->_draw_ebd684fc.Uniform_12(16, StartVec_ebd684fc_19_2_13);
                    __this->_draw_ebd684fc.Uniform_12(17, EndVec_ebd684fc_19_3_14);
                    __this->_draw_ebd684fc.Sampler_2(18, Texture_ebd684fc_13_6_4);
                    __this->_draw_ebd684fc.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_492f1061_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_492f1061_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_492f1061_19_2_13 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_492f1061_19_3_14 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_492f1061.BlendEnabled(true);
                    __this->_draw_492f1061.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_492f1061.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_492f1061.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_492f1061.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_492f1061.DepthTestEnabled(false);
                    __this->_draw_492f1061.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_492f1061.Const(0, Texture_492f1061_13_6_4 == NULL);
                    __this->_draw_492f1061.Use();
                    __this->_draw_492f1061.Attrib_1(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_492f1061.Uniform_12(2, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_492f1061.Uniform_12(3, center);
                    __this->_draw_492f1061.Uniform_17(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_492f1061.Uniform_12(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_492f1061.Uniform_12(6, DP_492f1061_13_5_7.Origin);
                    __this->_draw_492f1061.Uniform_12(7, DP_492f1061_13_5_7.Size);
                    __this->_draw_492f1061.Uniform_12(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_141 = DP_492f1061_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_141.Z, ind_141.W)), (ind_142 = DP_492f1061_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_142.X, ind_142.Y))));
                    __this->_draw_492f1061.Uniform_12(9, (ind_143 = DP_492f1061_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_143.X, ind_143.Y)));
                    __this->_draw_492f1061.Uniform_16(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_492f1061.Uniform_11(11, radius);
                    __this->_draw_492f1061.Uniform_11(12, dc->ViewportPointDensity());
                    __this->_draw_492f1061.Uniform_11(13, 1.0f / smoothness);
                    __this->_draw_492f1061.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_492f1061.Uniform_12(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_492f1061_19_2_13, EndVec_492f1061_19_3_14)));
                    __this->_draw_492f1061.Uniform_12(16, StartVec_492f1061_19_2_13);
                    __this->_draw_492f1061.Uniform_12(17, EndVec_492f1061_19_3_14);
                    __this->_draw_492f1061.Sampler_2(18, Texture_492f1061_13_6_4);
                    __this->_draw_492f1061.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_a6879bc6_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_a6879bc6_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                {
                    __this->_draw_a6879bc6.BlendEnabled(true);
                    __this->_draw_a6879bc6.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a6879bc6.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a6879bc6.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a6879bc6.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_a6879bc6.DepthTestEnabled(false);
                    __this->_draw_a6879bc6.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_a6879bc6.Const(0, Texture_a6879bc6_13_6_4 == NULL);
                    __this->_draw_a6879bc6.Use();
                    __this->_draw_a6879bc6.Attrib_1(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_a6879bc6.Uniform_12(2, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_a6879bc6.Uniform_12(3, center);
                    __this->_draw_a6879bc6.Uniform_17(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_a6879bc6.Uniform_12(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_a6879bc6.Uniform_12(6, DP_a6879bc6_13_5_7.Origin);
                    __this->_draw_a6879bc6.Uniform_12(7, DP_a6879bc6_13_5_7.Size);
                    __this->_draw_a6879bc6.Uniform_12(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_144 = DP_a6879bc6_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_144.Z, ind_144.W)), (ind_145 = DP_a6879bc6_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_145.X, ind_145.Y))));
                    __this->_draw_a6879bc6.Uniform_12(9, (ind_146 = DP_a6879bc6_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_146.X, ind_146.Y)));
                    __this->_draw_a6879bc6.Uniform_16(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_a6879bc6.Uniform_11(11, radius);
                    __this->_draw_a6879bc6.Uniform_11(12, dc->ViewportPointDensity());
                    __this->_draw_a6879bc6.Uniform_11(13, 1.0f / smoothness);
                    __this->_draw_a6879bc6.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_a6879bc6.Sampler_2(15, Texture_a6879bc6_13_6_4);
                    __this->_draw_a6879bc6.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_37e0cc03_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_37e0cc03_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_37e0cc03.BlendEnabled(true);
                    __this->_draw_37e0cc03.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_37e0cc03.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_37e0cc03.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_37e0cc03.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_37e0cc03.DepthTestEnabled(false);
                    __this->_draw_37e0cc03.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_37e0cc03.Use();
                    __this->_draw_37e0cc03.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_37e0cc03.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_37e0cc03.Uniform_12(2, center);
                    __this->_draw_37e0cc03.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_37e0cc03.Uniform_11(4, radius);
                    __this->_draw_37e0cc03.Uniform_11(5, dc->ViewportPointDensity());
                    __this->_draw_37e0cc03.Uniform_11(6, 1.0f / smoothness);
                    __this->_draw_37e0cc03.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_37e0cc03.Uniform_14(8, (ind_147 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_147.X, ind_147.Y, ind_147.Z)));
                    __this->_draw_37e0cc03.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_37e0cc03.Uniform_12(10, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_37e0cc03_19_2_6, EndVec_37e0cc03_19_3_7)));
                    __this->_draw_37e0cc03.Uniform_12(11, StartVec_37e0cc03_19_2_6);
                    __this->_draw_37e0cc03.Uniform_12(12, EndVec_37e0cc03_19_3_7);
                    __this->_draw_37e0cc03.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_95395768_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_95395768_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_95395768.BlendEnabled(true);
                    __this->_draw_95395768.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_95395768.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_95395768.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_95395768.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_95395768.DepthTestEnabled(false);
                    __this->_draw_95395768.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_95395768.Use();
                    __this->_draw_95395768.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_95395768.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_95395768.Uniform_12(2, center);
                    __this->_draw_95395768.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_95395768.Uniform_11(4, radius);
                    __this->_draw_95395768.Uniform_11(5, dc->ViewportPointDensity());
                    __this->_draw_95395768.Uniform_11(6, 1.0f / smoothness);
                    __this->_draw_95395768.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_95395768.Uniform_14(8, (ind_148 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_148.X, ind_148.Y, ind_148.Z)));
                    __this->_draw_95395768.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_95395768.Uniform_12(10, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_95395768_19_2_6, EndVec_95395768_19_3_7)));
                    __this->_draw_95395768.Uniform_12(11, StartVec_95395768_19_2_6);
                    __this->_draw_95395768.Uniform_12(12, EndVec_95395768_19_3_7);
                    __this->_draw_95395768.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_22c0272b.BlendEnabled(true);
                    __this->_draw_22c0272b.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_22c0272b.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_22c0272b.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_22c0272b.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_22c0272b.DepthTestEnabled(false);
                    __this->_draw_22c0272b.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_22c0272b.Use();
                    __this->_draw_22c0272b.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_22c0272b.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_22c0272b.Uniform_12(2, center);
                    __this->_draw_22c0272b.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_22c0272b.Uniform_11(4, radius);
                    __this->_draw_22c0272b.Uniform_11(5, dc->ViewportPointDensity());
                    __this->_draw_22c0272b.Uniform_11(6, 1.0f / smoothness);
                    __this->_draw_22c0272b.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_22c0272b.Uniform_14(8, (ind_149 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_149.X, ind_149.Y, ind_149.Z)));
                    __this->_draw_22c0272b.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_22c0272b.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_49d1aa95_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_49d1aa95_13_16_7 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_49d1aa95_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_49d1aa95_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_49d1aa95.BlendEnabled(true);
                    __this->_draw_49d1aa95.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_49d1aa95.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_49d1aa95.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_49d1aa95.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_49d1aa95.DepthTestEnabled(false);
                    __this->_draw_49d1aa95.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_49d1aa95.Use();
                    __this->_draw_49d1aa95.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_49d1aa95.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_49d1aa95.Uniform_12(2, center);
                    __this->_draw_49d1aa95.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_49d1aa95.Uniform_12(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_49d1aa95.Uniform_12(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_49d1aa95_13_17_6, angleLen_49d1aa95_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_49d1aa95.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_49d1aa95.Uniform_11(7, radius);
                    __this->_draw_49d1aa95.Uniform_11(8, dc->ViewportPointDensity());
                    __this->_draw_49d1aa95.Uniform_11(9, 1.0f / smoothness);
                    __this->_draw_49d1aa95.Uniform_11(10, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_49d1aa95.Uniform_12(11, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_49d1aa95_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_49d1aa95.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_49d1aa95_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_49d1aa95.Uniform_12(13, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_49d1aa95_19_2_14, EndVec_49d1aa95_19_3_15)));
                    __this->_draw_49d1aa95.Uniform_12(14, StartVec_49d1aa95_19_2_14);
                    __this->_draw_49d1aa95.Uniform_12(15, EndVec_49d1aa95_19_3_15);
                    __this->_draw_49d1aa95.Sampler_2(16, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_49d1aa95.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_ec791f30_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_ec791f30_13_16_7 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_ec791f30_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_ec791f30_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_ec791f30.BlendEnabled(true);
                    __this->_draw_ec791f30.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_ec791f30.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_ec791f30.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_ec791f30.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_ec791f30.DepthTestEnabled(false);
                    __this->_draw_ec791f30.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_ec791f30.Use();
                    __this->_draw_ec791f30.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_ec791f30.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_ec791f30.Uniform_12(2, center);
                    __this->_draw_ec791f30.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_ec791f30.Uniform_12(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_ec791f30.Uniform_12(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_ec791f30_13_17_6, angleLen_ec791f30_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_ec791f30.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_ec791f30.Uniform_11(7, radius);
                    __this->_draw_ec791f30.Uniform_11(8, dc->ViewportPointDensity());
                    __this->_draw_ec791f30.Uniform_11(9, 1.0f / smoothness);
                    __this->_draw_ec791f30.Uniform_11(10, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_ec791f30.Uniform_12(11, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_ec791f30_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_ec791f30.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_ec791f30_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_ec791f30.Uniform_12(13, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_ec791f30_19_2_14, EndVec_ec791f30_19_3_15)));
                    __this->_draw_ec791f30.Uniform_12(14, StartVec_ec791f30_19_2_14);
                    __this->_draw_ec791f30.Uniform_12(15, EndVec_ec791f30_19_3_15);
                    __this->_draw_ec791f30.Sampler_2(16, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_ec791f30.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_8f2093cb_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_8f2093cb_13_16_7 = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                {
                    __this->_draw_8f2093cb.BlendEnabled(true);
                    __this->_draw_8f2093cb.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_8f2093cb.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_8f2093cb.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_8f2093cb.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_8f2093cb.DepthTestEnabled(false);
                    __this->_draw_8f2093cb.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_8f2093cb.Use();
                    __this->_draw_8f2093cb.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_8f2093cb.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_8f2093cb.Uniform_12(2, center);
                    __this->_draw_8f2093cb.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_8f2093cb.Uniform_12(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_8f2093cb.Uniform_12(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_8f2093cb_13_17_6, angleLen_8f2093cb_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_8f2093cb.Uniform_12(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_8f2093cb.Uniform_11(7, radius);
                    __this->_draw_8f2093cb.Uniform_11(8, dc->ViewportPointDensity());
                    __this->_draw_8f2093cb.Uniform_11(9, 1.0f / smoothness);
                    __this->_draw_8f2093cb.Uniform_11(10, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_8f2093cb.Uniform_12(11, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_8f2093cb_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_8f2093cb.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_8f2093cb_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_8f2093cb.Sampler_2(13, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_8f2093cb.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_508d0866_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_508d0866_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_508d0866.BlendEnabled(true);
                    __this->_draw_508d0866.BlendSrcRgb(__this->Draw_BlendSrcRgb_44028225_11_4_22);
                    __this->_draw_508d0866.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_44028225_11_6_23);
                    __this->_draw_508d0866.BlendDstRgb(__this->Draw_BlendDstRgb_44028225_11_5_24);
                    __this->_draw_508d0866.BlendDstAlpha(__this->Draw_BlendDstAlpha_44028225_11_7_25);
                    __this->_draw_508d0866.DepthTestEnabled(false);
                    __this->_draw_508d0866.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_508d0866.Use();
                    __this->_draw_508d0866.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_508d0866.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_508d0866.Uniform_12(2, center);
                    __this->_draw_508d0866.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_508d0866.Uniform_11(4, radius);
                    __this->_draw_508d0866.Uniform_11(5, dc->ViewportPointDensity());
                    __this->_draw_508d0866.Uniform_11(6, 1.0f / smoothness);
                    __this->_draw_508d0866.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_508d0866.Uniform_14(8, (ind_150 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_150.X, ind_150.Y, ind_150.Z)));
                    __this->_draw_508d0866.Uniform_12(9, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_508d0866_19_2_6, EndVec_508d0866_19_3_7)));
                    __this->_draw_508d0866.Uniform_12(10, StartVec_508d0866_19_2_6);
                    __this->_draw_508d0866.Uniform_12(11, EndVec_508d0866_19_3_7);
                    __this->_draw_508d0866.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_f3347d01_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_f3347d01_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_f3347d01.BlendEnabled(true);
                    __this->_draw_f3347d01.BlendSrcRgb(__this->Draw_BlendSrcRgb_44028225_11_4_22);
                    __this->_draw_f3347d01.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_44028225_11_6_23);
                    __this->_draw_f3347d01.BlendDstRgb(__this->Draw_BlendDstRgb_44028225_11_5_24);
                    __this->_draw_f3347d01.BlendDstAlpha(__this->Draw_BlendDstAlpha_44028225_11_7_25);
                    __this->_draw_f3347d01.DepthTestEnabled(false);
                    __this->_draw_f3347d01.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_f3347d01.Use();
                    __this->_draw_f3347d01.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_f3347d01.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_f3347d01.Uniform_12(2, center);
                    __this->_draw_f3347d01.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_f3347d01.Uniform_11(4, radius);
                    __this->_draw_f3347d01.Uniform_11(5, dc->ViewportPointDensity());
                    __this->_draw_f3347d01.Uniform_11(6, 1.0f / smoothness);
                    __this->_draw_f3347d01.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_f3347d01.Uniform_14(8, (ind_151 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_151.X, ind_151.Y, ind_151.Z)));
                    __this->_draw_f3347d01.Uniform_12(9, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_f3347d01_19_2_6, EndVec_f3347d01_19_3_7)));
                    __this->_draw_f3347d01.Uniform_12(10, StartVec_f3347d01_19_2_6);
                    __this->_draw_f3347d01.Uniform_12(11, EndVec_f3347d01_19_3_7);
                    __this->_draw_f3347d01.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_95dbf19c.BlendEnabled(true);
                    __this->_draw_95dbf19c.BlendSrcRgb(__this->Draw_BlendSrcRgb_44028225_11_4_22);
                    __this->_draw_95dbf19c.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_44028225_11_6_23);
                    __this->_draw_95dbf19c.BlendDstRgb(__this->Draw_BlendDstRgb_44028225_11_5_24);
                    __this->_draw_95dbf19c.BlendDstAlpha(__this->Draw_BlendDstAlpha_44028225_11_7_25);
                    __this->_draw_95dbf19c.DepthTestEnabled(false);
                    __this->_draw_95dbf19c.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_95dbf19c.Use();
                    __this->_draw_95dbf19c.Attrib_1(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_95dbf19c.Uniform_12(1, ::app::Uno::Float2__op_Addition(NULL, radius, ::app::Uno::Float2__op_Multiply_1(NULL, extend, 2.0f)));
                    __this->_draw_95dbf19c.Uniform_12(2, center);
                    __this->_draw_95dbf19c.Uniform_17(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_95dbf19c.Uniform_11(4, radius);
                    __this->_draw_95dbf19c.Uniform_11(5, dc->ViewportPointDensity());
                    __this->_draw_95dbf19c.Uniform_11(6, 1.0f / smoothness);
                    __this->_draw_95dbf19c.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_95dbf19c.Uniform_14(8, (ind_152 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_152.X, ind_152.Y, ind_152.Z)));
                    __this->_draw_95dbf19c.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
    }
}

void Circle__Fill(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness)
{
    __this->Draw(dc, node, radius, brush, (::app::Fuse::Drawing::Primitives::Coverage*)__this->_fillCoverage, __this->_oneLimitCoverage, ::app::Uno::Float2__New_1(NULL, smoothness), center, smoothness);
}

void Circle__free_DrawCalls(Circle* __this)
{
}

void Circle__init_DrawCalls(Circle* __this)
{
    __this->Draw_BlendSrcRgb_44028225_11_4_22 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_44028225_11_6_23 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_44028225_11_5_24 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_44028225_11_7_25 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_8cc20e6d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 40), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_a4b30e6d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 41), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_9cb80e6d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 42), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_b58e0e6d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 43), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_ad930e6d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 44), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c5840e6d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 45), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_bdee0e6d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 46), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c0451d53 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 47), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c0451d52 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 48), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_44028225 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 49), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_44238225 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 50), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_44c88225 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 51), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_ebd684fc = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 52), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_492f1061 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 53), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_a6879bc6 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 54), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_37e0cc03 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 55), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_95395768 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 56), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_22c0272b = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 57), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_49d1aa95 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 58), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_ec791f30 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 59), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_8f2093cb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 60), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_508d0866 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 61), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_f3347d01 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 62), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_95dbf19c = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 63), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void Circle__InitBuffers(Circle* __this)
{
    __this->_bufferVertex = ::app::Fuse::Drawing::Internal::Float2Buffer__New_3(NULL);
    __this->_bufferIndex = ::app::Fuse::Drawing::Internal::UShortBuffer__New_3(NULL);
    int numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::app::Uno::Math__Sin_1(NULL, theta);
    ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->Append(0.0, 0.0);

    for (int i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->Append((double)(::app::Uno::Math__Cos_1(NULL, r) * len), (double)(::app::Uno::Math__Sin_1(NULL, r) * len));
        ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Append(0);
        ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : (i + 2));
        ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Append(i + 1);
    }

    ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->InitDeviceVertex(0);
    ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->InitDeviceIndex(0);
}

Circle* Circle__New_1(::uStatic* __this)
{
    Circle* inst = (Circle*)::uAllocObject(sizeof(Circle), Circle__typeof());
    inst->_ObjInit();
    return inst;
}

void Circle__Stroke(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness)
{
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->GetDeviceAdjusted(::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity());
    ::app::Fuse::Drawing::Primitives::StrokeCoverage* sc = __this->_strokeCoverage;
    ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(sc)->Radius = r.Item(0) / 2.0f;
    sc->Center = r.Item(1);
    float extend = ::app::Uno::Math__Max_1(NULL, 0.0f, r.Item(0) + r.Item(1)) + smoothness;
    __this->Draw(dc, node, radius, stroke->Brush(), (::app::Fuse::Drawing::Primitives::Coverage*)sc, __this->_oneLimitCoverage, ::app::Uno::Float2__New_1(NULL, extend), center, smoothness);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcaveWedgeCoverage__uType* ConcaveWedgeCoverage__typeof()
{
    static ::uStaticStrong<ConcaveWedgeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (ConcaveWedgeCoverage__uType*)::uAllocClassType(sizeof(ConcaveWedgeCoverage__uType), "Fuse.Drawing.Primitives.ConcaveWedgeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::WedgeCoverage__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConcaveWedgeCoverage__New_1, 0, true, ConcaveWedgeCoverage__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConcaveWedgeCoverage___ObjInit_2(ConcaveWedgeCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::WedgeCoverage___ObjInit_1(__this);
}

ConcaveWedgeCoverage* ConcaveWedgeCoverage__New_1(::uStatic* __this)
{
    ConcaveWedgeCoverage* inst = (ConcaveWedgeCoverage*)::uAllocObject(sizeof(ConcaveWedgeCoverage), ConcaveWedgeCoverage__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConvexWedgeCoverage__uType* ConvexWedgeCoverage__typeof()
{
    static ::uStaticStrong<ConvexWedgeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (ConvexWedgeCoverage__uType*)::uAllocClassType(sizeof(ConvexWedgeCoverage__uType), "Fuse.Drawing.Primitives.ConvexWedgeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::WedgeCoverage__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ConvexWedgeCoverage__New_1, 0, true, ConvexWedgeCoverage__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConvexWedgeCoverage___ObjInit_2(ConvexWedgeCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::WedgeCoverage___ObjInit_1(__this);
}

ConvexWedgeCoverage* ConvexWedgeCoverage__New_1(::uStatic* __this)
{
    ConvexWedgeCoverage* inst = (ConvexWedgeCoverage*)::uAllocObject(sizeof(ConvexWedgeCoverage), ConvexWedgeCoverage__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Coverage__uType* Coverage__typeof()
{
    static ::uStaticStrong<Coverage__uType*> type;
    if (type != NULL) return type;

    type = (Coverage__uType*)::uAllocClassType(sizeof(Coverage__uType), "Fuse.Drawing.Primitives.Coverage", false, 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

void Coverage___ObjInit(Coverage* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FillCoverage__uType* FillCoverage__typeof()
{
    static ::uStaticStrong<FillCoverage__uType*> type;
    if (type != NULL) return type;

    type = (FillCoverage__uType*)::uAllocClassType(sizeof(FillCoverage__uType), "Fuse.Drawing.Primitives.FillCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::Coverage__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FillCoverage__New_1, 0, true, FillCoverage__typeof()));

    ::uRegisterType(type);
    return type;
}

void FillCoverage___ObjInit_1(FillCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::Coverage___ObjInit(__this);
}

FillCoverage* FillCoverage__New_1(::uStatic* __this)
{
    FillCoverage* inst = (FillCoverage*)::uAllocObject(sizeof(FillCoverage), FillCoverage__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LimitCoverage__uType* LimitCoverage__typeof()
{
    static ::uStaticStrong<LimitCoverage__uType*> type;
    if (type != NULL) return type;

    type = (LimitCoverage__uType*)::uAllocClassType(sizeof(LimitCoverage__uType), "Fuse.Drawing.Primitives.LimitCoverage", false, 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

void LimitCoverage___ObjInit(LimitCoverage* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OneLimitCoverage__uType* OneLimitCoverage__typeof()
{
    static ::uStaticStrong<OneLimitCoverage__uType*> type;
    if (type != NULL) return type;

    type = (OneLimitCoverage__uType*)::uAllocClassType(sizeof(OneLimitCoverage__uType), "Fuse.Drawing.Primitives.OneLimitCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::LimitCoverage__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", OneLimitCoverage__New_1, 0, true, OneLimitCoverage__typeof()));

    ::uRegisterType(type);
    return type;
}

void OneLimitCoverage___ObjInit_1(OneLimitCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::LimitCoverage___ObjInit(__this);
}

OneLimitCoverage* OneLimitCoverage__New_1(::uStatic* __this)
{
    OneLimitCoverage* inst = (OneLimitCoverage*)::uAllocObject(sizeof(OneLimitCoverage), OneLimitCoverage__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Rectangle*> Rectangle__Singleton;

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.Drawing.Primitives.Rectangle", false, 0, 30, 0);

    type->SetStrongRefs(
        "_bufferDistance", offsetof(Rectangle, _bufferDistance),
        "_draw_36ff13e7._compiledProgram", offsetof(Rectangle, _draw_36ff13e7._compiledProgram),
        "_draw_36ff13e7._constValues", offsetof(Rectangle, _draw_36ff13e7._constValues),
        "_draw_36ff13e7._Program", offsetof(Rectangle, _draw_36ff13e7._Program),
        "_draw_4f08b69a._compiledProgram", offsetof(Rectangle, _draw_4f08b69a._compiledProgram),
        "_draw_4f08b69a._constValues", offsetof(Rectangle, _draw_4f08b69a._constValues),
        "_draw_4f08b69a._Program", offsetof(Rectangle, _draw_4f08b69a._Program),
        "_draw_671258c9._compiledProgram", offsetof(Rectangle, _draw_671258c9._compiledProgram),
        "_draw_671258c9._constValues", offsetof(Rectangle, _draw_671258c9._constValues),
        "_draw_671258c9._Program", offsetof(Rectangle, _draw_671258c9._Program),
        "_draw_94579f4c._compiledProgram", offsetof(Rectangle, _draw_94579f4c._compiledProgram),
        "_draw_94579f4c._constValues", offsetof(Rectangle, _draw_94579f4c._constValues),
        "_draw_94579f4c._Program", offsetof(Rectangle, _draw_94579f4c._Program),
        "_draw_9b9cd64._compiledProgram", offsetof(Rectangle, _draw_9b9cd64._compiledProgram),
        "_draw_9b9cd64._constValues", offsetof(Rectangle, _draw_9b9cd64._constValues),
        "_draw_9b9cd64._Program", offsetof(Rectangle, _draw_9b9cd64._Program),
        "_draw_ac6141ff._compiledProgram", offsetof(Rectangle, _draw_ac6141ff._compiledProgram),
        "_draw_ac6141ff._constValues", offsetof(Rectangle, _draw_ac6141ff._constValues),
        "_draw_ac6141ff._Program", offsetof(Rectangle, _draw_ac6141ff._Program),
        "_draw_d9a68882._compiledProgram", offsetof(Rectangle, _draw_d9a68882._compiledProgram),
        "_draw_d9a68882._constValues", offsetof(Rectangle, _draw_d9a68882._constValues),
        "_draw_d9a68882._Program", offsetof(Rectangle, _draw_d9a68882._Program),
        "_draw_f1b02ab1._compiledProgram", offsetof(Rectangle, _draw_f1b02ab1._compiledProgram),
        "_draw_f1b02ab1._constValues", offsetof(Rectangle, _draw_f1b02ab1._constValues),
        "_draw_f1b02ab1._Program", offsetof(Rectangle, _draw_f1b02ab1._Program),
        "_edgeInfo.Buffer", offsetof(Rectangle, _edgeInfo.Buffer),
        "_fillCoverage", offsetof(Rectangle, _fillCoverage),
        "_strokeCoverage", offsetof(Rectangle, _strokeCoverage),
        "_uniforms", offsetof(Rectangle, _uniforms),
        "_vertexInfo.Buffer", offsetof(Rectangle, _vertexInfo.Buffer));

    type->SetFields(7,
        ::uNewField("_bufferDistance", NULL, offsetof(Rectangle, _bufferDistance), ::app::Fuse::Drawing::Internal::FloatBuffer__typeof()),
        ::uNewField("_edgeInfo", NULL, offsetof(Rectangle, _edgeInfo), ::app::Uno::Graphics::VertexAttributeInfo__typeof()),
        ::uNewField("_fillCoverage", NULL, offsetof(Rectangle, _fillCoverage), ::app::Fuse::Drawing::Primitives::FillCoverage__typeof()),
        ::uNewField("_strokeCoverage", NULL, offsetof(Rectangle, _strokeCoverage), ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()),
        ::uNewField("_uniforms", NULL, offsetof(Rectangle, _uniforms), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewField("_vertexInfo", NULL, offsetof(Rectangle, _vertexInfo), ::app::Uno::Graphics::VertexAttributeInfo__typeof()),
        ::uNewField("Singleton", &Rectangle__Singleton, 0, Rectangle__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("add", Rectangle__add, 0, false, ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunctionVoid("Draw", Rectangle__Draw, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Drawing::Primitives::Coverage__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Fill", Rectangle__Fill, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("InitBuffers", Rectangle__InitBuffers, 0, false),
        ::uNewFunction("neg", Rectangle__neg, 0, false, ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunction(".ctor", Rectangle__New_1, 0, true, Rectangle__typeof()),
        ::uNewFunctionVoid("Stroke", Rectangle__Stroke, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("sub", Rectangle__sub, 0, false, ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunction("sum_mul", Rectangle__sum_mul, 0, false, ::app::Uno::Float__typeof(), ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof())));

    ::uRegisterType(type);
    return type;
}

void Rectangle___ObjInit(Rectangle* __this)
{
    __this->_strokeCoverage = ::app::Fuse::Drawing::Primitives::StrokeCoverage__New_1(NULL);
    __this->_fillCoverage = ::app::Fuse::Drawing::Primitives::FillCoverage__New_1(NULL);
    __this->_uniforms = ::uNewArray(::app::Uno::Float__typeof(), 10);
    __this->init_DrawCalls();
}

void Rectangle___TypeInit(::uStatic* __this)
{
    Rectangle__Singleton = Rectangle__New_1(NULL);
}

::uArray* Rectangle__add(Rectangle* __this, ::uArray* a, ::uArray* b)
{
    ::uArray* r = ::uNewArray(::app::Uno::Float__typeof(), ::uPtr< ::uArray*>(a)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        r->Item< float>(i) = a->Item< float>(i) + ::uPtr< ::uArray*>(b)->Item< float>(i);
    }

    return r;
}

void Rectangle__Draw(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Uno::Float2 extend, ::app::Uno::Float2 position, float smoothness)
{
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_136 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_137 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_138 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_139 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_140 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_141 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_142 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_143 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_144 = ::app::Uno::Float4();

    if (__this->_bufferDistance == NULL)
    {
        __this->InitBuffers();
    }

    float mn = ::app::Uno::Math__Min_1(NULL, Size.X / 2.0f, Size.Y / 2.0f);

    for (int i = 0; i < 4; ++i)
    {
        CornerRadius.Item(i, ::app::Uno::Math__Clamp_1(NULL, CornerRadius.Item(i), 0.0f, mn));
    }

    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(1) = CornerRadius.Item(3);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(2) = CornerRadius.Item(2);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(3) = CornerRadius.Item(1);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(4) = CornerRadius.Item(0);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(5) = Size.X;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(6) = Size.Y;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(7) = extend.X;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(8) = extend.Y;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(9) = mn;
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());
    ::app::Uno::Float2 csz = (elm == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualSize();

    if (::uIs(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            ::app::Uno::Graphics::Texture2D* Texture_671258c9_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
            ::app::Fuse::Drawing::ImageFill_DrawParams DP_671258c9_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, csz);
            {
                __this->_draw_671258c9.BlendEnabled(true);
                __this->_draw_671258c9.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_671258c9.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_671258c9.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_671258c9.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_671258c9.DepthTestEnabled(false);
                __this->_draw_671258c9.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_671258c9.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_671258c9.Const(1, Texture_671258c9_13_6_4 == NULL);
                __this->_draw_671258c9.Use();
                __this->_draw_671258c9.Attrib_1(2, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_671258c9.Attrib_1(3, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_671258c9.Attrib_1(4, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_671258c9.Uniform_6(5, __this->_uniforms);
                __this->_draw_671258c9.Uniform_12(6, position);
                __this->_draw_671258c9.Uniform_17(7, dc->GetLocalToClipTransform(node));
                __this->_draw_671258c9.Uniform_12(8, csz);
                __this->_draw_671258c9.Uniform_12(9, DP_671258c9_13_5_7.Origin);
                __this->_draw_671258c9.Uniform_12(10, DP_671258c9_13_5_7.Size);
                __this->_draw_671258c9.Uniform_12(11, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_135 = DP_671258c9_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_135.Z, ind_135.W)), (ind_136 = DP_671258c9_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_136.X, ind_136.Y))));
                __this->_draw_671258c9.Uniform_12(12, (ind_137 = DP_671258c9_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_137.X, ind_137.Y)));
                __this->_draw_671258c9.Uniform_16(13, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                __this->_draw_671258c9.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_671258c9.Uniform_11(15, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_671258c9.Uniform_11(16, dc->ViewportPointDensity());
                __this->_draw_671258c9.Uniform_11(17, 1.0f / smoothness);
                __this->_draw_671258c9.Uniform_11(18, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                __this->_draw_671258c9.Sampler_2(19, Texture_671258c9_13_6_4);
                __this->_draw_671258c9.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            {
                __this->_draw_9b9cd64.BlendEnabled(true);
                __this->_draw_9b9cd64.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9b9cd64.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9b9cd64.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9b9cd64.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9b9cd64.DepthTestEnabled(false);
                __this->_draw_9b9cd64.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_9b9cd64.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_9b9cd64.Use();
                __this->_draw_9b9cd64.Attrib_1(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_9b9cd64.Attrib_1(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_9b9cd64.Attrib_1(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_9b9cd64.Uniform_6(4, __this->_uniforms);
                __this->_draw_9b9cd64.Uniform_12(5, position);
                __this->_draw_9b9cd64.Uniform_17(6, dc->GetLocalToClipTransform(node));
                __this->_draw_9b9cd64.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_9b9cd64.Uniform_11(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_9b9cd64.Uniform_11(9, dc->ViewportPointDensity());
                __this->_draw_9b9cd64.Uniform_11(10, 1.0f / smoothness);
                __this->_draw_9b9cd64.Uniform_11(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                __this->_draw_9b9cd64.Uniform_14(12, (ind_138 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_138.X, ind_138.Y, ind_138.Z)));
                __this->_draw_9b9cd64.Uniform_11(13, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                __this->_draw_9b9cd64.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            ::app::Uno::Float2 angleSlope_ac6141ff_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            float angleLen_ac6141ff_13_16_7 = ::app::Uno::Math__Abs_1(NULL, csz.X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, csz.Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            {
                __this->_draw_ac6141ff.BlendEnabled(true);
                __this->_draw_ac6141ff.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_ac6141ff.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_ac6141ff.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_ac6141ff.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_ac6141ff.DepthTestEnabled(false);
                __this->_draw_ac6141ff.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_ac6141ff.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_ac6141ff.Use();
                __this->_draw_ac6141ff.Attrib_1(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_ac6141ff.Attrib_1(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_ac6141ff.Attrib_1(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_ac6141ff.Uniform_6(4, __this->_uniforms);
                __this->_draw_ac6141ff.Uniform_12(5, position);
                __this->_draw_ac6141ff.Uniform_17(6, dc->GetLocalToClipTransform(node));
                __this->_draw_ac6141ff.Uniform_12(7, csz);
                __this->_draw_ac6141ff.Uniform_12(8, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, csz, 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_ac6141ff_13_17_6, angleLen_ac6141ff_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), csz));
                __this->_draw_ac6141ff.Uniform_12(9, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                __this->_draw_ac6141ff.Uniform_11(10, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_ac6141ff.Uniform_11(11, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_ac6141ff.Uniform_11(12, dc->ViewportPointDensity());
                __this->_draw_ac6141ff.Uniform_11(13, 1.0f / smoothness);
                __this->_draw_ac6141ff.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                __this->_draw_ac6141ff.Uniform_12(15, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_ac6141ff_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_ac6141ff.Uniform_11(16, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_ac6141ff_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_ac6141ff.Sampler_2(17, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                __this->_draw_ac6141ff.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            {
                __this->_draw_4f08b69a.BlendEnabled(true);
                __this->_draw_4f08b69a.BlendSrcRgb(__this->Draw_BlendSrcRgb_4f08b69a_11_4_15);
                __this->_draw_4f08b69a.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_4f08b69a_11_6_16);
                __this->_draw_4f08b69a.BlendDstRgb(__this->Draw_BlendDstRgb_4f08b69a_11_5_17);
                __this->_draw_4f08b69a.BlendDstAlpha(__this->Draw_BlendDstAlpha_4f08b69a_11_7_18);
                __this->_draw_4f08b69a.DepthTestEnabled(false);
                __this->_draw_4f08b69a.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_4f08b69a.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_4f08b69a.Use();
                __this->_draw_4f08b69a.Attrib_1(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_4f08b69a.Attrib_1(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_4f08b69a.Attrib_1(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_4f08b69a.Uniform_6(4, __this->_uniforms);
                __this->_draw_4f08b69a.Uniform_12(5, position);
                __this->_draw_4f08b69a.Uniform_17(6, dc->GetLocalToClipTransform(node));
                __this->_draw_4f08b69a.Uniform_11(7, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_4f08b69a.Uniform_11(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_4f08b69a.Uniform_11(9, dc->ViewportPointDensity());
                __this->_draw_4f08b69a.Uniform_11(10, 1.0f / smoothness);
                __this->_draw_4f08b69a.Uniform_11(11, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                __this->_draw_4f08b69a.Uniform_14(12, (ind_139 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_139.X, ind_139.Y, ind_139.Z)));
                __this->_draw_4f08b69a.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
    }
    else if (::uIs(cover, ::app::Fuse::Drawing::Primitives::FillCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            ::app::Uno::Graphics::Texture2D* Texture_f1b02ab1_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
            ::app::Fuse::Drawing::ImageFill_DrawParams DP_f1b02ab1_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, csz);
            {
                __this->_draw_f1b02ab1.BlendEnabled(true);
                __this->_draw_f1b02ab1.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_f1b02ab1.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_f1b02ab1.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_f1b02ab1.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_f1b02ab1.DepthTestEnabled(false);
                __this->_draw_f1b02ab1.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_f1b02ab1.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_f1b02ab1.Const(1, Texture_f1b02ab1_13_6_4 == NULL);
                __this->_draw_f1b02ab1.Use();
                __this->_draw_f1b02ab1.Attrib_1(2, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_f1b02ab1.Attrib_1(3, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_f1b02ab1.Attrib_1(4, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_f1b02ab1.Uniform_6(5, __this->_uniforms);
                __this->_draw_f1b02ab1.Uniform_12(6, position);
                __this->_draw_f1b02ab1.Uniform_17(7, dc->GetLocalToClipTransform(node));
                __this->_draw_f1b02ab1.Uniform_12(8, csz);
                __this->_draw_f1b02ab1.Uniform_12(9, DP_f1b02ab1_13_5_7.Origin);
                __this->_draw_f1b02ab1.Uniform_12(10, DP_f1b02ab1_13_5_7.Size);
                __this->_draw_f1b02ab1.Uniform_12(11, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_140 = DP_f1b02ab1_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_140.Z, ind_140.W)), (ind_141 = DP_f1b02ab1_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_141.X, ind_141.Y))));
                __this->_draw_f1b02ab1.Uniform_12(12, (ind_142 = DP_f1b02ab1_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_142.X, ind_142.Y)));
                __this->_draw_f1b02ab1.Uniform_16(13, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                __this->_draw_f1b02ab1.Uniform_11(14, dc->ViewportPointDensity());
                __this->_draw_f1b02ab1.Uniform_11(15, 1.0f / smoothness);
                __this->_draw_f1b02ab1.Uniform_11(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                __this->_draw_f1b02ab1.Sampler_2(17, Texture_f1b02ab1_13_6_4);
                __this->_draw_f1b02ab1.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            {
                __this->_draw_94579f4c.BlendEnabled(true);
                __this->_draw_94579f4c.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_94579f4c.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_94579f4c.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_94579f4c.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_94579f4c.DepthTestEnabled(false);
                __this->_draw_94579f4c.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_94579f4c.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_94579f4c.Use();
                __this->_draw_94579f4c.Attrib_1(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_94579f4c.Attrib_1(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_94579f4c.Attrib_1(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_94579f4c.Uniform_6(4, __this->_uniforms);
                __this->_draw_94579f4c.Uniform_12(5, position);
                __this->_draw_94579f4c.Uniform_17(6, dc->GetLocalToClipTransform(node));
                __this->_draw_94579f4c.Uniform_11(7, dc->ViewportPointDensity());
                __this->_draw_94579f4c.Uniform_11(8, 1.0f / smoothness);
                __this->_draw_94579f4c.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                __this->_draw_94579f4c.Uniform_14(10, (ind_143 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_143.X, ind_143.Y, ind_143.Z)));
                __this->_draw_94579f4c.Uniform_11(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                __this->_draw_94579f4c.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            ::app::Uno::Float2 angleSlope_36ff13e7_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            float angleLen_36ff13e7_13_16_7 = ::app::Uno::Math__Abs_1(NULL, csz.X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, csz.Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            {
                __this->_draw_36ff13e7.BlendEnabled(true);
                __this->_draw_36ff13e7.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_36ff13e7.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_36ff13e7.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_36ff13e7.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_36ff13e7.DepthTestEnabled(false);
                __this->_draw_36ff13e7.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_36ff13e7.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_36ff13e7.Use();
                __this->_draw_36ff13e7.Attrib_1(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_36ff13e7.Attrib_1(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_36ff13e7.Attrib_1(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_36ff13e7.Uniform_6(4, __this->_uniforms);
                __this->_draw_36ff13e7.Uniform_12(5, position);
                __this->_draw_36ff13e7.Uniform_17(6, dc->GetLocalToClipTransform(node));
                __this->_draw_36ff13e7.Uniform_12(7, csz);
                __this->_draw_36ff13e7.Uniform_12(8, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, csz, 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_36ff13e7_13_17_6, angleLen_36ff13e7_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), csz));
                __this->_draw_36ff13e7.Uniform_12(9, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                __this->_draw_36ff13e7.Uniform_11(10, dc->ViewportPointDensity());
                __this->_draw_36ff13e7.Uniform_11(11, 1.0f / smoothness);
                __this->_draw_36ff13e7.Uniform_11(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                __this->_draw_36ff13e7.Uniform_12(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_36ff13e7_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_36ff13e7.Uniform_11(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_36ff13e7_13_16_7 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_36ff13e7.Sampler_2(15, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                __this->_draw_36ff13e7.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            {
                __this->_draw_d9a68882.BlendEnabled(true);
                __this->_draw_d9a68882.BlendSrcRgb(__this->Draw_BlendSrcRgb_4f08b69a_11_4_15);
                __this->_draw_d9a68882.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_4f08b69a_11_6_16);
                __this->_draw_d9a68882.BlendDstRgb(__this->Draw_BlendDstRgb_4f08b69a_11_5_17);
                __this->_draw_d9a68882.BlendDstAlpha(__this->Draw_BlendDstAlpha_4f08b69a_11_7_18);
                __this->_draw_d9a68882.DepthTestEnabled(false);
                __this->_draw_d9a68882.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_d9a68882.Const_1(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_d9a68882.Use();
                __this->_draw_d9a68882.Attrib_1(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_d9a68882.Attrib_1(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_d9a68882.Attrib_1(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_d9a68882.Uniform_6(4, __this->_uniforms);
                __this->_draw_d9a68882.Uniform_12(5, position);
                __this->_draw_d9a68882.Uniform_17(6, dc->GetLocalToClipTransform(node));
                __this->_draw_d9a68882.Uniform_11(7, dc->ViewportPointDensity());
                __this->_draw_d9a68882.Uniform_11(8, 1.0f / smoothness);
                __this->_draw_d9a68882.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                __this->_draw_d9a68882.Uniform_14(10, (ind_144 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_144.X, ind_144.Y, ind_144.Z)));
                __this->_draw_d9a68882.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
    }
}

void Rectangle__Fill(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 Position, float Smoothness)
{
    __this->Draw(dc, node, Size, CornerRadius, brush, (::app::Fuse::Drawing::Primitives::Coverage*)__this->_fillCoverage, ::app::Uno::Float2__New_1(NULL, Smoothness), Position, Smoothness);
}

void Rectangle__free_DrawCalls(Rectangle* __this)
{
}

void Rectangle__init_DrawCalls(Rectangle* __this)
{
    __this->Draw_BlendSrcRgb_4f08b69a_11_4_15 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_4f08b69a_11_6_16 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_4f08b69a_11_5_17 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_4f08b69a_11_7_18 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_671258c9 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 64), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_9b9cd64 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 65), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_ac6141ff = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 66), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_4f08b69a = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 67), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_f1b02ab1 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 68), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_94579f4c = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 69), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_36ff13e7 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 70), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_d9a68882 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 71), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void Rectangle__InitBuffers(Rectangle* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::uArray* array_125;
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_128;
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    ::uArray* array_134;
    __this->_bufferDistance = ::app::Fuse::Drawing::Internal::FloatBuffer__New_3(NULL);
    array_123 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_123)->Item< float>(0) = 1.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius0 = array_123;
    array_124 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_124)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(1) = 1.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius1 = array_124;
    array_125 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_125)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(2) = 1.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius2 = array_125;
    array_126 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_126)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(3) = 1.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius3 = array_126;
    array_127 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_127)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(4) = 1.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(8) = 0.0f;
    ::uArray* SizeX = array_127;
    array_128 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_128)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(5) = 1.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(8) = 0.0f;
    ::uArray* SizeY = array_128;
    array_129 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_129)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(6) = 1.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(8) = 0.0f;
    ::uArray* ExtendX = array_129;
    array_130 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_130)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(7) = 1.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(8) = 0.0f;
    ::uArray* ExtendY = array_130;
    array_131 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_131)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(8) = 1.0f;
    ::uArray* Mn = array_131;
    array_132 = ::uNewArray(::uGetArrayType(::app::Uno::Float__typeof()), 56);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(0) = CornerRadius0;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(1) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(2) = __this->sub(SizeX, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(3) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(4) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(5) = __this->sub(SizeY, CornerRadius0);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(6) = CornerRadius0;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(7) = __this->sub(SizeY, CornerRadius0);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(8) = __this->sub(SizeX, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(9) = __this->sub(SizeY, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(10) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(11) = __this->sub(SizeY, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(12) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(13) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(14) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(15) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(16) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(17) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(18) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(19) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(20) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(21) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(22) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(23) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(24) = __this->sub(SizeX, CornerRadius2);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(25) = CornerRadius2;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(26) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(27) = CornerRadius2;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(28) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(29) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(30) = __this->sub(SizeX, CornerRadius2);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(31) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(32) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(33) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(34) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(35) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(36) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(37) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(38) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(39) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(40) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(41) = __this->sub(SizeY, CornerRadius0);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(42) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(43) = __this->sub(SizeY, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(44) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(45) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(46) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(47) = CornerRadius2;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(48) = CornerRadius0;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(49) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(50) = __this->sub(SizeX, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(51) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(52) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(53) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(54) = __this->sub(SizeX, CornerRadius2);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(55) = Mn;
    ::uArray* vr = array_132;
    ::uArray* offsets = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::uArray*>(vr)->Length());

    for (int i = 0; i < vr->Length(); ++i)
    {
        ::app::Uno::Int2 offset = ::app::Uno::Int2__New_2(NULL, 0, 0);
        ::uArray* v = ::uPtr< ::uArray*>(vr)->Item< ::uArray*>(i);

        for (int j = 0; j < ::uPtr< ::uArray*>(v)->Length(); ++j)
        {
            float f = ::uPtr< ::uArray*>(v)->Item< float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                {
                    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("more than two non-zero values!")));
                }

                int o = 1 + j;
                offset = ::app::Uno::Int2__New_2(NULL, (f < 0.0f) ? -o : o, offset.X);
            }
        }

        ::uPtr< ::uArray*>(offsets)->Item< ::app::Uno::Float2>(i) = ::app::Uno::Float2__op_Implicit_1(NULL, offset);
    }

    array_133 = ::uNewArray(::app::Uno::Int__typeof(), 72);
    ::uPtr< ::uArray*>(array_133)->Item< int>(0) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(1) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(2) = 11;
    ::uPtr< ::uArray*>(array_133)->Item< int>(3) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(4) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(5) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(6) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(7) = 2;
    ::uPtr< ::uArray*>(array_133)->Item< int>(8) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(9) = 2;
    ::uPtr< ::uArray*>(array_133)->Item< int>(10) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(11) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(12) = 14;
    ::uPtr< ::uArray*>(array_133)->Item< int>(13) = 11;
    ::uPtr< ::uArray*>(array_133)->Item< int>(14) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(15) = 14;
    ::uPtr< ::uArray*>(array_133)->Item< int>(16) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(17) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(18) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(19) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(20) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(21) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(22) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(23) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(24) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(25) = 0;
    ::uPtr< ::uArray*>(array_133)->Item< int>(26) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(27) = 0;
    ::uPtr< ::uArray*>(array_133)->Item< int>(28) = 1;
    ::uPtr< ::uArray*>(array_133)->Item< int>(29) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(30) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(31) = 1;
    ::uPtr< ::uArray*>(array_133)->Item< int>(32) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(33) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(34) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(35) = 7;
    ::uPtr< ::uArray*>(array_133)->Item< int>(36) = 7;
    ::uPtr< ::uArray*>(array_133)->Item< int>(37) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(38) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(39) = 7;
    ::uPtr< ::uArray*>(array_133)->Item< int>(40) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(41) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(42) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(43) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(44) = 13;
    ::uPtr< ::uArray*>(array_133)->Item< int>(45) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(46) = 13;
    ::uPtr< ::uArray*>(array_133)->Item< int>(47) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(48) = 2;
    ::uPtr< ::uArray*>(array_133)->Item< int>(49) = 16;
    ::uPtr< ::uArray*>(array_133)->Item< int>(50) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(51) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(52) = 16;
    ::uPtr< ::uArray*>(array_133)->Item< int>(53) = 0;
    ::uPtr< ::uArray*>(array_133)->Item< int>(54) = 1;
    ::uPtr< ::uArray*>(array_133)->Item< int>(55) = 17;
    ::uPtr< ::uArray*>(array_133)->Item< int>(56) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(57) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(58) = 17;
    ::uPtr< ::uArray*>(array_133)->Item< int>(59) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(60) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(61) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(62) = 19;
    ::uPtr< ::uArray*>(array_133)->Item< int>(63) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(64) = 13;
    ::uPtr< ::uArray*>(array_133)->Item< int>(65) = 19;
    ::uPtr< ::uArray*>(array_133)->Item< int>(66) = 11;
    ::uPtr< ::uArray*>(array_133)->Item< int>(67) = 18;
    ::uPtr< ::uArray*>(array_133)->Item< int>(68) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(69) = 14;
    ::uPtr< ::uArray*>(array_133)->Item< int>(70) = 18;
    ::uPtr< ::uArray*>(array_133)->Item< int>(71) = 11;
    ::uArray* vsr = array_133;
    array_134 = ::uNewArray(::app::Uno::Int__typeof(), 72);
    ::uPtr< ::uArray*>(array_134)->Item< int>(0) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(1) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(2) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(3) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(4) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(5) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(6) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(7) = 20;
    ::uPtr< ::uArray*>(array_134)->Item< int>(8) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(9) = 20;
    ::uPtr< ::uArray*>(array_134)->Item< int>(10) = 20;
    ::uPtr< ::uArray*>(array_134)->Item< int>(11) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(12) = 26;
    ::uPtr< ::uArray*>(array_134)->Item< int>(13) = 26;
    ::uPtr< ::uArray*>(array_134)->Item< int>(14) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(15) = 26;
    ::uPtr< ::uArray*>(array_134)->Item< int>(16) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(17) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(18) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(19) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(20) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(21) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(22) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(23) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(24) = 24;
    ::uPtr< ::uArray*>(array_134)->Item< int>(25) = 24;
    ::uPtr< ::uArray*>(array_134)->Item< int>(26) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(27) = 24;
    ::uPtr< ::uArray*>(array_134)->Item< int>(28) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(29) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(30) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(31) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(32) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(33) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(34) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(35) = 7;
    ::uPtr< ::uArray*>(array_134)->Item< int>(36) = 7;
    ::uPtr< ::uArray*>(array_134)->Item< int>(37) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(38) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(39) = 7;
    ::uPtr< ::uArray*>(array_134)->Item< int>(40) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(41) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(42) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(43) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(44) = 23;
    ::uPtr< ::uArray*>(array_134)->Item< int>(45) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(46) = 23;
    ::uPtr< ::uArray*>(array_134)->Item< int>(47) = 23;
    ::uPtr< ::uArray*>(array_134)->Item< int>(48) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(49) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(50) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(51) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(52) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(53) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(54) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(55) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(56) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(57) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(58) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(59) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(60) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(61) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(62) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(63) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(64) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(65) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(66) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(67) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(68) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(69) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(70) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(71) = 11;
    ::uArray* ptr = array_134;
    ::app::Uno::Buffer* bufferVertex = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(vsr)->Length() * 16);
    ::app::Uno::Buffer* bufferEdge = ::app::Uno::Buffer__New_3(NULL, vsr->Length() * 16);
    __this->_vertexInfo = ::uDefault< ::app::Uno::Graphics::VertexAttributeInfo>();
    __this->_vertexInfo.BufferOffset = 0;
    __this->_vertexInfo.BufferStride = 16;
    __this->_vertexInfo.Type = 4;
    __this->_vertexInfo.Buffer = ::app::Uno::Graphics::VertexBuffer__New_2(NULL, 0);
    __this->_edgeInfo = ::uDefault< ::app::Uno::Graphics::VertexAttributeInfo>();
    __this->_edgeInfo.BufferOffset = 0;
    __this->_edgeInfo.BufferStride = 16;
    __this->_edgeInfo.Type = 4;
    __this->_edgeInfo.Buffer = ::app::Uno::Graphics::VertexBuffer__New_2(NULL, 0);

    for (int i = 0; i < vsr->Length(); ++i)
    {
        ::uPtr< ::app::Uno::Buffer*>(bufferVertex)->SetFloat4(i * __this->_vertexInfo.BufferStride, ::app::Uno::Float4__New_7(NULL, ::uPtr< ::uArray*>(offsets)->Item< ::app::Uno::Float2>(::uPtr< ::uArray*>(vsr)->Item< int>(i) * 2), ::uPtr< ::uArray*>(offsets)->Item< ::app::Uno::Float2>((::uPtr< ::uArray*>(vsr)->Item< int>(i) * 2) + 1)), true);
        ::uPtr< ::app::Uno::Buffer*>(bufferEdge)->SetFloat4(i * __this->_edgeInfo.BufferStride, ::app::Uno::Float4__New_7(NULL, offsets->Item< ::app::Uno::Float2>(::uPtr< ::uArray*>(ptr)->Item< int>(i) * 2), offsets->Item< ::app::Uno::Float2>((::uPtr< ::uArray*>(ptr)->Item< int>(i) * 2) + 1)), true);
        ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Append_1((float)(::uUShort)(1 + ((i < 48) ? 8 : ((i < 54) ? 0 : ((i < 60) ? 1 : ((i < 66) ? 2 : 3))))));
    }

    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vertexInfo.Buffer)->Update(bufferVertex);
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_edgeInfo.Buffer)->Update(bufferEdge);
    ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->InitDeviceVertex(0);
}

::uArray* Rectangle__neg(Rectangle* __this, ::uArray* a)
{
    ::uArray* r = ::uNewArray(::app::Uno::Float__typeof(), ::uPtr< ::uArray*>(a)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        r->Item< float>(i) = -a->Item< float>(i);
    }

    return r;
}

Rectangle* Rectangle__New_1(::uStatic* __this)
{
    Rectangle* inst = (Rectangle*)::uAllocObject(sizeof(Rectangle), Rectangle__typeof());
    inst->_ObjInit();
    return inst;
}

void Rectangle__Stroke(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 Position, float Smoothness)
{
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->GetDeviceAdjusted(::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity());
    ::app::Fuse::Drawing::Primitives::StrokeCoverage* sc = __this->_strokeCoverage;
    ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(sc)->Radius = r.Item(0) / 2.0f;
    sc->Center = r.Item(1);
    float extend = ::app::Uno::Math__Max_1(NULL, 0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    __this->Draw(dc, node, Size, CornerRadius, stroke->Brush(), (::app::Fuse::Drawing::Primitives::Coverage*)sc, ::app::Uno::Float2__New_1(NULL, extend), Position, Smoothness);
}

::uArray* Rectangle__sub(Rectangle* __this, ::uArray* a, ::uArray* b)
{
    ::uArray* r = ::uNewArray(::app::Uno::Float__typeof(), ::uPtr< ::uArray*>(a)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        r->Item< float>(i) = a->Item< float>(i) - ::uPtr< ::uArray*>(b)->Item< float>(i);
    }

    return r;
}

float Rectangle__sum_mul(Rectangle* __this, ::uArray* a, ::uArray* b)
{
    float r = 0.0f;

    for (int i = 0; i < ::uPtr< ::uArray*>(a)->Length(); i++)
    {
        r = r + (::uPtr< ::uArray*>(a)->Item< float>(i) * ::uPtr< ::uArray*>(b)->Item< float>(i));
    }

    return r;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StrokeCoverage__uType* StrokeCoverage__typeof()
{
    static ::uStaticStrong<StrokeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (StrokeCoverage__uType*)::uAllocClassType(sizeof(StrokeCoverage__uType), "Fuse.Drawing.Primitives.StrokeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::Coverage__typeof());

    type->SetFields(2,
        ::uNewField("Center", NULL, offsetof(StrokeCoverage, Center), ::app::Uno::Float__typeof()),
        ::uNewField("Radius", NULL, offsetof(StrokeCoverage, Radius), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", StrokeCoverage__New_1, 0, true, StrokeCoverage__typeof()));

    ::uRegisterType(type);
    return type;
}

void StrokeCoverage___ObjInit_1(StrokeCoverage* __this)
{
    __this->Radius = 1.0f;
    __this->Center = 0.0f;
    ::app::Fuse::Drawing::Primitives::Coverage___ObjInit(__this);
}

StrokeCoverage* StrokeCoverage__New_1(::uStatic* __this)
{
    StrokeCoverage* inst = (StrokeCoverage*)::uAllocObject(sizeof(StrokeCoverage), StrokeCoverage__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Wedge*> Wedge__Singleton;

Wedge__uType* Wedge__typeof()
{
    static ::uStaticStrong<Wedge__uType*> type;
    if (type != NULL) return type;

    type = (Wedge__uType*)::uAllocClassType(sizeof(Wedge__uType), "Fuse.Drawing.Primitives.Wedge", false, 0, 4, 0);

    type->SetStrongRefs(
        "_concaveWedgeCoverage", offsetof(Wedge, _concaveWedgeCoverage),
        "_convexWedgeCoverage", offsetof(Wedge, _convexWedgeCoverage),
        "_fillCoverage", offsetof(Wedge, _fillCoverage),
        "_strokeCoverage", offsetof(Wedge, _strokeCoverage));

    type->SetFields(5,
        ::uNewField("_concaveWedgeCoverage", NULL, offsetof(Wedge, _concaveWedgeCoverage), ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()),
        ::uNewField("_convexWedgeCoverage", NULL, offsetof(Wedge, _convexWedgeCoverage), ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()),
        ::uNewField("_fillCoverage", NULL, offsetof(Wedge, _fillCoverage), ::app::Fuse::Drawing::Primitives::FillCoverage__typeof()),
        ::uNewField("_strokeCoverage", NULL, offsetof(Wedge, _strokeCoverage), ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()),
        ::uNewField("Singleton", &Wedge__Singleton, 0, Wedge__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Fill", Wedge__Fill, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Wedge__New_1, 0, true, Wedge__typeof()),
        ::uNewFunction("SetupWedgeCoverage", Wedge__SetupWedgeCoverage, 0, false, ::app::Fuse::Drawing::Primitives::WedgeCoverage__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Stroke", Wedge__Stroke, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Wedge___ObjInit(Wedge* __this)
{
    __this->_convexWedgeCoverage = ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__New_1(NULL);
    __this->_concaveWedgeCoverage = ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__New_1(NULL);
    __this->_strokeCoverage = ::app::Fuse::Drawing::Primitives::StrokeCoverage__New_1(NULL);
    __this->_fillCoverage = ::app::Fuse::Drawing::Primitives::FillCoverage__New_1(NULL);
}

void Wedge___TypeInit(::uStatic* __this)
{
    Wedge__Singleton = Wedge__New_1(NULL);
}

void Wedge__Fill(Wedge* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::app::Fuse::Drawing::Primitives::WedgeCoverage* wc = __this->SetupWedgeCoverage(startAngle, endAngle);
    ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Draw(dc, node, radius, brush, (::app::Fuse::Drawing::Primitives::Coverage*)__this->_fillCoverage, (::app::Fuse::Drawing::Primitives::LimitCoverage*)wc, ::app::Uno::Float2__New_1(NULL, smoothness), center, smoothness);
}

Wedge* Wedge__New_1(::uStatic* __this)
{
    Wedge* inst = (Wedge*)::uAllocObject(sizeof(Wedge), Wedge__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Fuse::Drawing::Primitives::WedgeCoverage* Wedge__SetupWedgeCoverage(Wedge* __this, float startAngle, float endAngle)
{
    float pStartAngle = ::app::Uno::Math__Mod_1(NULL, startAngle, 6.28318548f);
    float pEndAngle = ::app::Uno::Math__Mod_1(NULL, endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
    {
        pEndAngle = pEndAngle + 6.28318548f;
    }

    ::app::Fuse::Drawing::Primitives::WedgeCoverage* wc = (::app::Fuse::Drawing::Primitives::WedgeCoverage*)__this->_concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
    {
        wc = (::app::Fuse::Drawing::Primitives::WedgeCoverage*)__this->_convexWedgeCoverage;
    }

    ::uPtr< ::app::Fuse::Drawing::Primitives::WedgeCoverage*>(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

void Wedge__Stroke(Wedge* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->GetDeviceAdjusted(::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity());
    ::app::Fuse::Drawing::Primitives::StrokeCoverage* sc = __this->_strokeCoverage;
    ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(sc)->Radius = r.Item(0) / 2.0f;
    sc->Center = r.Item(1);
    float extend = ::app::Uno::Math__Max_1(NULL, 0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::app::Fuse::Drawing::Primitives::WedgeCoverage* wc = __this->SetupWedgeCoverage(startAngle, endAngle);
    ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Draw(dc, node, radius, stroke->Brush(), (::app::Fuse::Drawing::Primitives::Coverage*)sc, (::app::Fuse::Drawing::Primitives::LimitCoverage*)wc, ::app::Uno::Float2__New_1(NULL, extend), center, smoothness);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WedgeCoverage__uType* WedgeCoverage__typeof()
{
    static ::uStaticStrong<WedgeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (WedgeCoverage__uType*)::uAllocClassType(sizeof(WedgeCoverage__uType), "Fuse.Drawing.Primitives.WedgeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::LimitCoverage__typeof());

    type->SetFields(2,
        ::uNewField("EndAngle", NULL, offsetof(WedgeCoverage, EndAngle), ::app::Uno::Float__typeof()),
        ::uNewField("StartAngle", NULL, offsetof(WedgeCoverage, StartAngle), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void WedgeCoverage___ObjInit_1(WedgeCoverage* __this)
{
    __this->StartAngle = 0.0f;
    __this->EndAngle = 6.28318548f;
    ::app::Fuse::Drawing::Primitives::LimitCoverage___ObjInit(__this);
}

}}}}
