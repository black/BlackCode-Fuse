#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.ImageFill.h>
#include <app/Fuse.Drawing.ImageFill_DrawParams.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Internal {
namespace Drawing {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< SolidRectangle*> SolidRectangle__Impl;

SolidRectangle__uType* SolidRectangle__typeof()
{
    static ::uStaticStrong<SolidRectangle__uType*> type;
    if (type != NULL) return type;

    type = (SolidRectangle__uType*)::uAllocClassType(sizeof(SolidRectangle__uType), "Fuse.Internal.Drawing.SolidRectangle", false, 0, 13, 0);

    type->SetStrongRefs(
        "_draw_c930343d._compiledProgram", offsetof(SolidRectangle, _draw_c930343d._compiledProgram),
        "_draw_c930343d._constValues", offsetof(SolidRectangle, _draw_c930343d._constValues),
        "_draw_c930343d._Program", offsetof(SolidRectangle, _draw_c930343d._Program),
        "_draw_c951343d._compiledProgram", offsetof(SolidRectangle, _draw_c951343d._compiledProgram),
        "_draw_c951343d._constValues", offsetof(SolidRectangle, _draw_c951343d._constValues),
        "_draw_c951343d._Program", offsetof(SolidRectangle, _draw_c951343d._Program),
        "_draw_c993343d._compiledProgram", offsetof(SolidRectangle, _draw_c993343d._compiledProgram),
        "_draw_c993343d._constValues", offsetof(SolidRectangle, _draw_c993343d._constValues),
        "_draw_c993343d._Program", offsetof(SolidRectangle, _draw_c993343d._Program),
        "DrawElement_VertexData_c8ee343d_7_2_1", offsetof(SolidRectangle, DrawElement_VertexData_c8ee343d_7_2_1),
        "DrawElement_VertexData_c930343d_7_2_1", offsetof(SolidRectangle, DrawElement_VertexData_c930343d_7_2_1),
        "DrawElement_VertexData_c951343d_7_2_1", offsetof(SolidRectangle, DrawElement_VertexData_c951343d_7_2_1),
        "DrawElement_VertexData_c993343d_7_2_1", offsetof(SolidRectangle, DrawElement_VertexData_c993343d_7_2_1));

    type->SetFields(1,
        ::uNewField("Impl", &SolidRectangle__Impl, 0, SolidRectangle__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("DrawElement", SolidRectangle__DrawElement, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", SolidRectangle__New_1, 0, true, SolidRectangle__typeof()));

    ::uRegisterType(type);
    return type;
}

void SolidRectangle___ObjInit(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

void SolidRectangle___TypeInit(::uStatic* __this)
{
    SolidRectangle__Impl = SolidRectangle__New_1(NULL);
}

void SolidRectangle__DrawElement(SolidRectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush, float opacity)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();

    if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_c993343d_4_8_5 = ::app::Uno::Matrix__Mul_10(NULL, __this->DrawElement_LocalTransform_c993343d_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_c993343d_4_8_3, __this->DrawElement_LocalTransform_c993343d_4_8_4);
        ::app::Uno::Graphics::Texture2D* Texture_c993343d_13_6_9 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
        ::app::Fuse::Drawing::ImageFill_DrawParams DP_c993343d_13_5_12 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, element->ActualSize());
        {
            __this->_draw_c993343d.BlendEnabled(true);
            __this->_draw_c993343d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_c993343d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_c993343d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_c993343d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_c993343d.DepthTestEnabled(false);
            __this->_draw_c993343d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
            __this->_draw_c993343d.Const(0, Texture_c993343d_13_6_9 == NULL);
            __this->_draw_c993343d.Use();
            __this->_draw_c993343d.Attrib_1(1, 2, __this->DrawElement_VertexData_c993343d_7_2_1, 8, 0);
            __this->_draw_c993343d.Uniform_17(2, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
            __this->_draw_c993343d.Uniform_12(3, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize());
            __this->_draw_c993343d.Uniform_12(4, DP_c993343d_13_5_12.Origin);
            __this->_draw_c993343d.Uniform_12(5, DP_c993343d_13_5_12.Size);
            __this->_draw_c993343d.Uniform_12(6, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = DP_c993343d_13_5_12.UVClip, ::app::Uno::Float2__New_2(NULL, ind_123.Z, ind_123.W)), (ind_124 = DP_c993343d_13_5_12.UVClip, ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))));
            __this->_draw_c993343d.Uniform_12(7, (ind_125 = DP_c993343d_13_5_12.UVClip, ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)));
            __this->_draw_c993343d.Uniform_16(8, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
            __this->_draw_c993343d.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
            __this->_draw_c993343d.Uniform_11(10, opacity);
            __this->_draw_c993343d.Uniform_17(11, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_c993343d_4_8_5, ((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_c993343d_4_8_5);
            __this->_draw_c993343d.Sampler_2(12, Texture_c993343d_13_6_9);
            __this->_draw_c993343d.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_c930343d_4_8_2 = ::app::Uno::Matrix__Mul_10(NULL, __this->DrawElement_LocalTransform_c993343d_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_c993343d_4_8_3, __this->DrawElement_LocalTransform_c993343d_4_8_4);
        {
            __this->_draw_c930343d.BlendEnabled(true);
            __this->_draw_c930343d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c930343d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c930343d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c930343d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c930343d.DepthTestEnabled(false);
            __this->_draw_c930343d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
            __this->_draw_c930343d.Use();
            __this->_draw_c930343d.Attrib_1(0, 2, __this->DrawElement_VertexData_c930343d_7_2_1, 8, 0);
            __this->_draw_c930343d.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
            __this->_draw_c930343d.Uniform_16(2, ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_8(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, (ind_126 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_126.X, ind_126.Y, ind_126.Z)), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W * ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), opacity));
            __this->_draw_c930343d.Uniform_17(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_c930343d_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_c930343d_4_8_2);
            __this->_draw_c930343d.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_c951343d_4_8_2 = ::app::Uno::Matrix__Mul_10(NULL, __this->DrawElement_LocalTransform_c993343d_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_c993343d_4_8_3, __this->DrawElement_LocalTransform_c993343d_4_8_4);
        ::app::Uno::Float2 angleSlope_c951343d_13_17_8 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        float angleLen_c951343d_13_16_9 = ::app::Uno::Math__Abs_1(NULL, element->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_1(NULL, element->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        {
            __this->_draw_c951343d.BlendEnabled(true);
            __this->_draw_c951343d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_c951343d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_c951343d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_c951343d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_c951343d.DepthTestEnabled(false);
            __this->_draw_c951343d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
            __this->_draw_c951343d.Use();
            __this->_draw_c951343d.Attrib_1(0, 2, __this->DrawElement_VertexData_c951343d_7_2_1, 8, 0);
            __this->_draw_c951343d.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
            __this->_draw_c951343d.Uniform_12(2, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize());
            __this->_draw_c951343d.Uniform_12(3, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, element->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, angleSlope_c951343d_13_17_8, angleLen_c951343d_13_16_9), 2.0f)) : ::app::Uno::Float2__op_Multiply_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), element->ActualSize()));
            __this->_draw_c951343d.Uniform_12(4, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
            __this->_draw_c951343d.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_c951343d.Uniform_11(6, opacity);
            __this->_draw_c951343d.Uniform_17(7, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_c951343d_4_8_2, ((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_c951343d_4_8_2);
            __this->_draw_c951343d.Uniform_12(8, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_c951343d_13_17_8 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), element->ActualSize())));
            __this->_draw_c951343d.Uniform_11(9, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_c951343d_13_16_9 : ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), element->ActualSize())));
            __this->_draw_c951343d.Sampler_2(10, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
            __this->_draw_c951343d.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_c8ee343d_4_8_2 = ::app::Uno::Matrix__Mul_10(NULL, __this->DrawElement_LocalTransform_c993343d_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_c993343d_4_8_3, __this->DrawElement_LocalTransform_c993343d_4_8_4);
        {
            __this->_draw_c930343d.BlendEnabled(true);
            __this->_draw_c930343d.BlendSrcRgb(__this->DrawElement_BlendSrcRgb_c8ee343d_11_4_10);
            __this->_draw_c930343d.BlendSrcAlpha(__this->DrawElement_BlendSrcAlpha_c8ee343d_11_6_11);
            __this->_draw_c930343d.BlendDstRgb(__this->DrawElement_BlendDstRgb_c8ee343d_11_5_12);
            __this->_draw_c930343d.BlendDstAlpha(__this->DrawElement_BlendDstAlpha_c8ee343d_11_7_13);
            __this->_draw_c930343d.DepthTestEnabled(false);
            __this->_draw_c930343d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
            __this->_draw_c930343d.Use();
            __this->_draw_c930343d.Attrib_1(0, 2, __this->DrawElement_VertexData_c8ee343d_7_2_1, 8, 0);
            __this->_draw_c930343d.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
            __this->_draw_c930343d.Uniform_16(2, ::app::Uno::Float4__op_Multiply_1(NULL, ::app::Uno::Float4__New_8(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, (ind_127 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_127.X, ind_127.Y, ind_127.Z)), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), opacity));
            __this->_draw_c930343d.Uniform_17(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_c8ee343d_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_c8ee343d_4_8_2);
            __this->_draw_c930343d.DrawArrays(6);
        }
    }
}

void SolidRectangle__free_DrawCalls(SolidRectangle* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->DrawElement_VertexData_c993343d_7_2_1)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->DrawElement_VertexData_c930343d_7_2_1)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->DrawElement_VertexData_c951343d_7_2_1)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->DrawElement_VertexData_c8ee343d_7_2_1)->Dispose();
}

void SolidRectangle__init_DrawCalls(SolidRectangle* __this)
{
    ::uArray* array_128;
    array_128 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_128)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_128)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_128)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_128)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_128)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_128)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_c993343d_7_1_0 = array_128;
    __this->DrawElement_VertexData_c993343d_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_c993343d_7_1_0), 0);
    __this->DrawElement_LocalTransform_c993343d_4_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->DrawElement_LocalTransform_c993343d_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->DrawElement_LocalTransform_c993343d_4_8_4 = ::app::Uno::Matrix__Translation(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f).X, ::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->DrawElement_VertexData_c930343d_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_c993343d_7_1_0), 0);
    __this->DrawElement_VertexData_c951343d_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_c993343d_7_1_0), 0);
    __this->DrawElement_VertexData_c8ee343d_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_c993343d_7_1_0), 0);
    __this->DrawElement_BlendSrcRgb_c8ee343d_11_4_10 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->DrawElement_BlendSrcAlpha_c8ee343d_11_6_11 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->DrawElement_BlendDstRgb_c8ee343d_11_5_12 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->DrawElement_BlendDstAlpha_c8ee343d_11_7_13 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_c993343d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 93), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c930343d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 80), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c951343d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 94), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

SolidRectangle* SolidRectangle__New_1(::uStatic* __this)
{
    SolidRectangle* inst = (SolidRectangle*)::uAllocObject(sizeof(SolidRectangle), SolidRectangle__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
