#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Fuse.Effects.Blur.h>
#include <app/Fuse.Effects.Desaturate.h>
#include <app/Fuse.Effects.DropShadow.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Effects.EffectHelpers.h>
#include <app/Fuse.Effects.EffectType.h>
#include <app/Fuse.Effects.Halftone.h>
#include <app/Fuse.Effects.Mask.h>
#include <app/Fuse.Effects.Mask_MaskMode.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Action__Fuse_Effects_Effect.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Recti.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UX.FileSource.h>

namespace app {
namespace Fuse {
namespace Effects {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicEffect__uType* BasicEffect__typeof()
{
    static ::uStaticStrong<BasicEffect__uType*> type;
    if (type != NULL) return type;

    type = (BasicEffect__uType*)::uAllocClassType(sizeof(BasicEffect__uType), "Fuse.Effects.BasicEffect", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Effects::Effect__typeof());
    type->__fp_Render = (void(*)(::app::Fuse::Effects::Effect*, ::app::Fuse::DrawContext*))BasicEffect__Render;

    type->SetFunctions(3,
        ::uNewFunction("ConservativelySnapToCoveringIntegers", BasicEffect__ConservativelySnapToCoveringIntegers, 0, true, ::app::Uno::Recti__typeof(), ::app::Uno::Rect__typeof()),
        ::uNewFunction("GetLocalElementRect", BasicEffect__GetLocalElementRect, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("OnRender", type->__fp_OnRender, offsetof(BasicEffect__uType, __fp_OnRender), false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Rect__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicEffect___ObjInit_1(BasicEffect* __this, int effectType)
{
    ::app::Fuse::Effects::Effect___ObjInit(__this, effectType);
}

::app::Uno::Recti BasicEffect__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r)
{
    ::app::Uno::Int2 origin = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Floor_2(NULL, r.LeftTop()));
    ::app::Uno::Int2 size = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::app::Uno::Recti__New_1(NULL, origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

::app::Uno::Rect BasicEffect__GetLocalElementRect(BasicEffect* __this)
{
    ::app::Uno::Recti ir = BasicEffect__ConservativelySnapToCoveringIntegers(NULL, ::app::Uno::Rect__Scale(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->RenderBoundsWithoutEffects(), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()));
    return ::app::Uno::Rect__New_1(NULL, (float)ir.Minimum().X / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom(), (float)ir.Minimum().Y / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom(), (float)ir.Maximum().X / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom(), (float)ir.Maximum().Y / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom());
}

void BasicEffect__Render(BasicEffect* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Rect rect = __this->GetLocalElementRect();
    __this->OnRender(dc, rect);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blur__uType* Blur__typeof()
{
    static ::uStaticStrong<Blur__uType*> type;
    if (type != NULL) return type;

    type = (Blur__uType*)::uAllocClassType(sizeof(Blur__uType), "Fuse.Effects.Blur", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Effects::BasicEffect__typeof());
    type->__fp_ModifyRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Effects::Effect*, ::app::Uno::Rect))Blur__ModifyRenderBounds;
    type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))Blur__OnRender;

    type->SetStrongRefs(
        "_draw_71e4915d._compiledProgram", offsetof(Blur, _draw_71e4915d._compiledProgram),
        "_draw_71e4915d._constValues", offsetof(Blur, _draw_71e4915d._constValues),
        "_draw_71e4915d._Program", offsetof(Blur, _draw_71e4915d._Program),
        "_helpers", offsetof(Blur, _helpers),
        "OnRender_VertexData_71e4915d_7_2_1", offsetof(Blur, OnRender_VertexData_71e4915d_7_2_1));

    type->SetFields(2,
        ::uNewField("_helpers", NULL, offsetof(Blur, _helpers), ::app::Fuse::Effects::EffectHelpers__typeof()),
        ::uNewField("_radius", NULL, offsetof(Blur, _radius), ::app::Uno::Float__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Padding", Blur__get_Padding, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Radius", Blur__get_Radius, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Sigma", Blur__get_Sigma, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Blur__New_1, 0, true, Blur__typeof()),
        ::uNewFunctionVoid("set_Radius", Blur__set_Radius, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Blur___ObjInit_2(Blur* __this)
{
    __this->_helpers = ::app::Fuse::Effects::EffectHelpers__New_1(NULL);
    ::app::Fuse::Effects::BasicEffect___ObjInit_1(__this, 1);
    __this->Radius(3.0f);
    __this->init_DrawCalls();
}

void Blur__free_DrawCalls(Blur* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnRender_VertexData_71e4915d_7_2_1)->Dispose();
}

float Blur__get_Padding(Blur* __this)
{
    return ::app::Uno::Math__Ceil_1(NULL, (__this->Sigma() * 3.0f) * ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()) / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom();
}

float Blur__get_Radius(Blur* __this)
{
    return __this->_radius;
}

float Blur__get_Sigma(Blur* __this)
{
    return ::app::Uno::Math__Max_1(NULL, __this->Radius(), 1e-05f);
}

void Blur__init_DrawCalls(Blur* __this)
{
    ::uArray* array_123;
    __this->OnRender_VertexData_71e4915d_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_123)), 0);
    __this->OnRender_LocalTransform_71e4915d_4_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->OnRender_LocalTransform_71e4915d_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_71e4915d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 95), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

::app::Uno::Rect Blur__ModifyRenderBounds(Blur* __this, ::app::Uno::Rect inBounds)
{
    return ::app::Uno::Rect__Inflate(NULL, inBounds, __this->Padding());
}

Blur* Blur__New_1(::uStatic* __this)
{
    Blur* inst = (Blur*)::uAllocObject(sizeof(Blur), Blur__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Blur__OnRender(Blur* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    ::app::Uno::Rect paddedRect = ::app::Uno::Rect__Inflate(NULL, elementRect, __this->Padding());
    ::app::Uno::Graphics::Framebuffer* original = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, paddedRect, ::app::Uno::Float2__op_Implicit_1(NULL, ::app::Uno::Int2__New_1(NULL, 0)));

    if (original == NULL)
    {
        return;
    }

    ::app::Uno::Graphics::Framebuffer* blur = ::uPtr< ::app::Fuse::Effects::EffectHelpers*>(__this->_helpers)->Blur(::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer(), dc, __this->Sigma() * ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom());
    ::app::Fuse::FramebufferPool__Release(NULL, original);
    ::app::Uno::Float4x4 LocalTransform_71e4915d_4_8_4 = ::app::Uno::Matrix__Mul_10(NULL, __this->OnRender_LocalTransform_71e4915d_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, paddedRect.Size().X, paddedRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_71e4915d_4_8_3, ::app::Uno::Matrix__Translation(NULL, ::app::Uno::Float2__op_Subtraction_1(NULL, elementRect.Minimum(), __this->Padding()).X, ::app::Uno::Float2__op_Subtraction_1(NULL, elementRect.Minimum(), __this->Padding()).Y, 0.0f));
    {
        __this->_draw_71e4915d.BlendEnabled(true);
        __this->_draw_71e4915d.BlendSrcRgb(2);
        __this->_draw_71e4915d.BlendDstRgb(3);
        __this->_draw_71e4915d.BlendDstAlpha(3);
        __this->_draw_71e4915d.DepthTestEnabled(false);
        __this->_draw_71e4915d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
        __this->_draw_71e4915d.Use();
        __this->_draw_71e4915d.Attrib_1(0, 2, __this->OnRender_VertexData_71e4915d_7_2_1, 8, 0);
        __this->_draw_71e4915d.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
        __this->_draw_71e4915d.Uniform_17(2, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_71e4915d_4_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_71e4915d_4_8_4);
        __this->_draw_71e4915d.Sampler_2(3, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(blur)->ColorBuffer());
        __this->_draw_71e4915d.DrawArrays(6);
    }

    ::app::Fuse::FramebufferPool__Release(NULL, blur);
}

void Blur__set_Radius(Blur* __this, float value)
{
    if (__this->_radius != value)
    {
        __this->_radius = value;
        __this->OnRenderingChanged();
        __this->OnRenderBoundsChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Desaturate__uType* Desaturate__typeof()
{
    static ::uStaticStrong<Desaturate__uType*> type;
    if (type != NULL) return type;

    type = (Desaturate__uType*)::uAllocClassType(sizeof(Desaturate__uType), "Fuse.Effects.Desaturate", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Effects::BasicEffect__typeof());
    type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))Desaturate__OnRender;

    type->SetStrongRefs(
        "_draw_86b72be7._compiledProgram", offsetof(Desaturate, _draw_86b72be7._compiledProgram),
        "_draw_86b72be7._constValues", offsetof(Desaturate, _draw_86b72be7._constValues),
        "_draw_86b72be7._Program", offsetof(Desaturate, _draw_86b72be7._Program),
        "OnRender_VertexData_86b72be7_7_2_1", offsetof(Desaturate, OnRender_VertexData_86b72be7_7_2_1));

    type->SetFields(1,
        ::uNewField("_amount", NULL, offsetof(Desaturate, _amount), ::app::Uno::Float__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Amount", Desaturate__get_Amount, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Desaturate__New_1, 0, true, Desaturate__typeof()),
        ::uNewFunctionVoid("set_Amount", Desaturate__set_Amount, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Desaturate___ObjInit_2(Desaturate* __this)
{
    __this->_amount = 1.0f;
    ::app::Fuse::Effects::BasicEffect___ObjInit_1(__this, 1);
    __this->init_DrawCalls();
}

void Desaturate__free_DrawCalls(Desaturate* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnRender_VertexData_86b72be7_7_2_1)->Dispose();
}

float Desaturate__get_Amount(Desaturate* __this)
{
    return __this->_amount;
}

void Desaturate__init_DrawCalls(Desaturate* __this)
{
    ::uArray* array_123;
    __this->OnRender_VertexData_86b72be7_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_123)), 0);
    __this->OnRender_LocalTransform_86b72be7_4_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->OnRender_LocalTransform_86b72be7_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_86b72be7 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 96), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Desaturate* Desaturate__New_1(::uStatic* __this)
{
    Desaturate* inst = (Desaturate*)::uAllocObject(sizeof(Desaturate), Desaturate__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Desaturate__OnRender(Desaturate* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    ::app::Uno::Graphics::Framebuffer* original = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, elementRect, ::app::Uno::Float2__op_Implicit_1(NULL, ::app::Uno::Int2__New_1(NULL, 0)));

    if (original == NULL)
    {
        return;
    }

    ::app::Uno::Float4x4 LocalTransform_86b72be7_4_8_4 = ::app::Uno::Matrix__Mul_10(NULL, __this->OnRender_LocalTransform_86b72be7_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_86b72be7_4_8_3, ::app::Uno::Matrix__Translation(NULL, elementRect.Minimum().X, elementRect.Minimum().Y, 0.0f));
    {
        __this->_draw_86b72be7.BlendEnabled(true);
        __this->_draw_86b72be7.BlendSrcRgb(2);
        __this->_draw_86b72be7.BlendDstRgb(3);
        __this->_draw_86b72be7.BlendDstAlpha(3);
        __this->_draw_86b72be7.DepthTestEnabled(false);
        __this->_draw_86b72be7.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
        __this->_draw_86b72be7.Use();
        __this->_draw_86b72be7.Attrib_1(0, 2, __this->OnRender_VertexData_86b72be7_7_2_1, 8, 0);
        __this->_draw_86b72be7.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
        __this->_draw_86b72be7.Uniform_11(2, __this->Amount());
        __this->_draw_86b72be7.Uniform_17(3, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_86b72be7_4_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_86b72be7_4_8_4);
        __this->_draw_86b72be7.Sampler_2(4, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
        __this->_draw_86b72be7.DrawArrays(6);
    }

    ::app::Fuse::FramebufferPool__Release(NULL, original);
}

void Desaturate__set_Amount(Desaturate* __this, float value)
{
    if (__this->_amount != value)
    {
        __this->_amount = value;
        __this->OnRenderingChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DropShadow__uType* DropShadow__typeof()
{
    static ::uStaticStrong<DropShadow__uType*> type;
    if (type != NULL) return type;

    type = (DropShadow__uType*)::uAllocClassType(sizeof(DropShadow__uType), "Fuse.Effects.DropShadow", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Effects::BasicEffect__typeof());
    type->__fp_get_Active = (bool(*)(::app::Fuse::Effects::Effect*))DropShadow__get_Active;
    type->__fp_ModifyRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Effects::Effect*, ::app::Uno::Rect))DropShadow__ModifyRenderBounds;
    type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))DropShadow__OnRender;

    type->SetStrongRefs(
        "_draw_5f9c2c70._compiledProgram", offsetof(DropShadow, _draw_5f9c2c70._compiledProgram),
        "_draw_5f9c2c70._constValues", offsetof(DropShadow, _draw_5f9c2c70._constValues),
        "_draw_5f9c2c70._Program", offsetof(DropShadow, _draw_5f9c2c70._Program),
        "_helpers", offsetof(DropShadow, _helpers),
        "OnRender_VertexData_5f9c2c70_7_2_1", offsetof(DropShadow, OnRender_VertexData_5f9c2c70_7_2_1));

    type->SetFields(6,
        ::uNewField("_angle", NULL, offsetof(DropShadow, _angle), ::app::Uno::Float__typeof()),
        ::uNewField("_color", NULL, offsetof(DropShadow, _color), ::app::Uno::Float4__typeof()),
        ::uNewField("_distance", NULL, offsetof(DropShadow, _distance), ::app::Uno::Float__typeof()),
        ::uNewField("_helpers", NULL, offsetof(DropShadow, _helpers), ::app::Fuse::Effects::EffectHelpers__typeof()),
        ::uNewField("_size", NULL, offsetof(DropShadow, _size), ::app::Uno::Float__typeof()),
        ::uNewField("_spread", NULL, offsetof(DropShadow, _spread), ::app::Uno::Float__typeof()));

    type->SetFunctions(15,
        ::uNewFunction("get_Angle", DropShadow__get_Angle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Color", DropShadow__get_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Distance", DropShadow__get_Distance, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Offset", DropShadow__get_Offset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Padding", DropShadow__get_Padding, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Radius", DropShadow__get_Radius, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Sigma", DropShadow__get_Sigma, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Size", DropShadow__get_Size, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Spread", DropShadow__get_Spread, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", DropShadow__New_1, 0, true, DropShadow__typeof()),
        ::uNewFunctionVoid("set_Angle", DropShadow__set_Angle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Color", DropShadow__set_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Distance", DropShadow__set_Distance, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Size", DropShadow__set_Size, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Spread", DropShadow__set_Spread, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void DropShadow___ObjInit_2(DropShadow* __this)
{
    __this->_helpers = ::app::Fuse::Effects::EffectHelpers__New_1(NULL);
    ::app::Fuse::Effects::BasicEffect___ObjInit_1(__this, 0);
    __this->Size(5.0f);
    __this->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.35f));
    __this->Angle(90.0f);
    __this->Distance(3.0f);
    __this->init_DrawCalls();
}

void DropShadow__free_DrawCalls(DropShadow* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnRender_VertexData_5f9c2c70_7_2_1)->Dispose();
}

bool DropShadow__get_Active(DropShadow* __this)
{
    return __this->Color().W > 0.0f;
}

float DropShadow__get_Angle(DropShadow* __this)
{
    return __this->_angle;
}

::app::Uno::Float4 DropShadow__get_Color(DropShadow* __this)
{
    return __this->_color;
}

float DropShadow__get_Distance(DropShadow* __this)
{
    return __this->_distance;
}

::app::Uno::Float2 DropShadow__get_Offset(DropShadow* __this)
{
    float th = __this->Angle() * 0.0174532924f;
    return ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Cos_1(NULL, th), ::app::Uno::Math__Sin_1(NULL, th)), __this->Distance());
}

float DropShadow__get_Padding(DropShadow* __this)
{
    return ::app::Uno::Math__Ceil_1(NULL, (__this->Sigma() * 3.0f) * ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()) / ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom();
}

float DropShadow__get_Radius(DropShadow* __this)
{
    return __this->Size() / 2.0f;
}

float DropShadow__get_Sigma(DropShadow* __this)
{
    return ::app::Uno::Math__Max_1(NULL, __this->Radius(), 1e-05f);
}

float DropShadow__get_Size(DropShadow* __this)
{
    return __this->_size;
}

float DropShadow__get_Spread(DropShadow* __this)
{
    return __this->_spread;
}

void DropShadow__init_DrawCalls(DropShadow* __this)
{
    ::uArray* array_124;
    __this->OnRender_VertexData_5f9c2c70_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_124 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_124)), 0);
    __this->OnRender_LocalTransform_5f9c2c70_4_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->OnRender_LocalTransform_5f9c2c70_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_5f9c2c70 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 97), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

::app::Uno::Rect DropShadow__ModifyRenderBounds(DropShadow* __this, ::app::Uno::Rect inBounds)
{
    ::app::Uno::Rect r = ::app::Uno::Rect__Translate(NULL, ::app::Uno::Rect__Inflate(NULL, inBounds, __this->Padding()), __this->Offset());
    return ::app::Uno::Rect__Union(NULL, r, inBounds);
}

DropShadow* DropShadow__New_1(::uStatic* __this)
{
    DropShadow* inst = (DropShadow*)::uAllocObject(sizeof(DropShadow), DropShadow__typeof());
    inst->_ObjInit_2();
    return inst;
}

void DropShadow__OnRender(DropShadow* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Graphics::Framebuffer* temp = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, elementRect, ::app::Uno::Float2__New_1(NULL, __this->Padding()));

    if (temp == NULL)
    {
        return;
    }

    ::app::Uno::Graphics::Framebuffer* blur = ::uPtr< ::app::Fuse::Effects::EffectHelpers*>(__this->_helpers)->Blur(::uPtr< ::app::Uno::Graphics::Framebuffer*>(temp)->ColorBuffer(), dc, __this->Sigma() * ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom());
    ::app::Uno::Float4x4 LocalTransform_5f9c2c70_4_8_4 = ::app::Uno::Matrix__Mul_10(NULL, __this->OnRender_LocalTransform_5f9c2c70_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)temp->Size().X, (float)temp->Size().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()).X, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)temp->Size().X, (float)temp->Size().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()).Y, 1.0f), __this->OnRender_LocalTransform_5f9c2c70_4_8_3, ::app::Uno::Matrix__Translation(NULL, ::app::Uno::Float2__op_Subtraction_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, elementRect.Minimum(), __this->Offset()), __this->Padding()).X, ::app::Uno::Float2__op_Subtraction_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, elementRect.Minimum(), __this->Offset()), __this->Padding()).Y, 0.0f));
    {
        __this->_draw_5f9c2c70.BlendEnabled(true);
        __this->_draw_5f9c2c70.BlendSrcRgb(2);
        __this->_draw_5f9c2c70.BlendDstRgb(3);
        __this->_draw_5f9c2c70.BlendDstAlpha(3);
        __this->_draw_5f9c2c70.DepthTestEnabled(false);
        __this->_draw_5f9c2c70.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
        __this->_draw_5f9c2c70.Use();
        __this->_draw_5f9c2c70.Attrib_1(0, 2, __this->OnRender_VertexData_5f9c2c70_7_2_1, 8, 0);
        __this->_draw_5f9c2c70.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
        __this->_draw_5f9c2c70.Uniform_11(2, __this->Color().W);
        __this->_draw_5f9c2c70.Uniform_14(3, (ind_123 = __this->Color(), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)));
        __this->_draw_5f9c2c70.Uniform_17(4, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_5f9c2c70_4_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_5f9c2c70_4_8_4);
        __this->_draw_5f9c2c70.Uniform_11(5, ::app::Uno::Math__Pow_1(NULL, 1.0f / ::app::Uno::Math__Max_1(NULL, 1.0f - __this->Spread(), 1e-10f), 2.0f));
        __this->_draw_5f9c2c70.Sampler_2(6, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(blur)->ColorBuffer());
        __this->_draw_5f9c2c70.DrawArrays(6);
    }

    ::app::Fuse::FramebufferPool__Release(NULL, blur);
    ::app::Fuse::FramebufferPool__Release(NULL, temp);
}

void DropShadow__set_Angle(DropShadow* __this, float value)
{
    if (__this->_angle != value)
    {
        __this->_angle = value;

        if (__this->Active())
        {
            __this->OnRenderingChanged();
            __this->OnRenderBoundsChanged();
        }
    }
}

void DropShadow__set_Color(DropShadow* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        bool wasActive = __this->Active();
        __this->_color = value;

        if (wasActive || __this->Active())
        {
            __this->OnRenderingChanged();
        }
    }
}

void DropShadow__set_Distance(DropShadow* __this, float value)
{
    if (__this->_distance != value)
    {
        __this->_distance = value;

        if (__this->Active())
        {
            __this->OnRenderingChanged();
            __this->OnRenderBoundsChanged();
        }
    }
}

void DropShadow__set_Size(DropShadow* __this, float value)
{
    if (__this->_size != value)
    {
        __this->_size = value;

        if (__this->Active())
        {
            __this->OnRenderingChanged();
            __this->OnRenderBoundsChanged();
        }
    }
}

void DropShadow__set_Spread(DropShadow* __this, float value)
{
    value = ::app::Uno::Math__Clamp_1(NULL, value, 0.0f, 1.0f);

    if (__this->_spread != value)
    {
        bool wasActive = __this->Active();
        __this->_spread = value;

        if (wasActive || __this->Active())
        {
            __this->OnRenderingChanged();
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Effects\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Effect__uType* Effect__typeof()
{
    static ::uStaticStrong<Effect__uType*> type;
    if (type != NULL) return type;

    type = (Effect__uType*)::uAllocClassType(sizeof(Effect__uType), "Fuse.Effects.Effect", false, 0, 3, 0);

    type->__fp_get_Active = Effect__get_Active;
    type->__fp_ModifyRenderBounds = Effect__ModifyRenderBounds;

    type->SetStrongRefs(
        "_Element", offsetof(Effect, _Element),
        "RenderBoundsChanged", offsetof(Effect, RenderBoundsChanged),
        "RenderingChanged", offsetof(Effect, RenderingChanged));

    type->SetFields(3,
        ::uNewField("_effectType", NULL, offsetof(Effect, _effectType), ::app::Fuse::Effects::EffectType__typeof()),
        ::uNewField("_isRooted", NULL, offsetof(Effect, _isRooted), ::app::Uno::Bool__typeof()),
        ::uNewField("AddedByStyle", NULL, offsetof(Effect, AddedByStyle), ::app::Uno::Bool__typeof()));

    type->SetFunctions(18,
        ::uNewFunctionVoid("add_RenderBoundsChanged", Effect__add_RenderBoundsChanged, 0, false, ::app::Uno::Action__Fuse_Effects_Effect__typeof()),
        ::uNewFunctionVoid("add_RenderingChanged", Effect__add_RenderingChanged, 0, false, ::app::Uno::Action__Fuse_Effects_Effect__typeof()),
        ::uNewFunctionVoid("Added", Effect__Added, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_Active", type->__fp_get_Active, offsetof(Effect__uType, __fp_get_Active), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Element", Effect__get_Element, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_Type", Effect__get_Type, 0, false, ::app::Fuse::Effects::EffectType__typeof()),
        ::uNewFunction("ModifyRenderBounds", type->__fp_ModifyRenderBounds, offsetof(Effect__uType, __fp_ModifyRenderBounds), false, ::app::Uno::Rect__typeof(), ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("OnRenderBoundsChanged", Effect__OnRenderBoundsChanged, 0, false),
        ::uNewFunctionVoid("OnRenderingChanged", Effect__OnRenderingChanged, 0, false),
        ::uNewFunctionVoid("OnRooted", Effect__OnRooted, 0, false),
        ::uNewFunctionVoid("OnUnrooted", Effect__OnUnrooted, 0, false),
        ::uNewFunctionVoid("remove_RenderBoundsChanged", Effect__remove_RenderBoundsChanged, 0, false, ::app::Uno::Action__Fuse_Effects_Effect__typeof()),
        ::uNewFunctionVoid("remove_RenderingChanged", Effect__remove_RenderingChanged, 0, false, ::app::Uno::Action__Fuse_Effects_Effect__typeof()),
        ::uNewFunctionVoid("Removed", Effect__Removed, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("Render", type->__fp_Render, offsetof(Effect__uType, __fp_Render), false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("Rooted", Effect__Rooted, 0, false),
        ::uNewFunctionVoid("set_Element", Effect__set_Element, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("Unrooted", Effect__Unrooted, 0, false));

    ::uRegisterType(type);
    return type;
}

void Effect___ObjInit(Effect* __this, int effectType)
{
    __this->_effectType = effectType;
}

void Effect__add_RenderBoundsChanged(Effect* __this, ::uDelegate* value)
{
    __this->RenderBoundsChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->RenderBoundsChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Effects_Effect__typeof());
}

void Effect__add_RenderingChanged(Effect* __this, ::uDelegate* value)
{
    __this->RenderingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->RenderingChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Effects_Effect__typeof());
}

void Effect__Added(Effect* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->Element(elm);

    if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->IsLocalRooted())
    {
        __this->Rooted();
    }
}

bool Effect__get_Active(Effect* __this)
{
    return true;
}

::app::Fuse::Elements::Element* Effect__get_Element(Effect* __this)
{
    return __this->_Element;
}

int Effect__get_Type(Effect* __this)
{
    return __this->_effectType;
}

::app::Uno::Rect Effect__ModifyRenderBounds(Effect* __this, ::app::Uno::Rect inBounds)
{
    return inBounds;
}

void Effect__OnRenderBoundsChanged(Effect* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->RenderBoundsChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->RenderBoundsChanged)->InvokeVoid< Effect*>(__this);
    }
}

void Effect__OnRenderingChanged(Effect* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->RenderingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->RenderingChanged)->InvokeVoid< Effect*>(__this);
    }
}

void Effect__OnRooted(Effect* __this)
{
}

void Effect__OnUnrooted(Effect* __this)
{
}

void Effect__remove_RenderBoundsChanged(Effect* __this, ::uDelegate* value)
{
    __this->RenderBoundsChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->RenderBoundsChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Effects_Effect__typeof());
}

void Effect__remove_RenderingChanged(Effect* __this, ::uDelegate* value)
{
    __this->RenderingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->RenderingChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Effects_Effect__typeof());
}

void Effect__Removed(Effect* __this, ::app::Fuse::Elements::Element* elm)
{
    if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->IsLocalRooted())
    {
        __this->Unrooted();
    }

    __this->Element(NULL);
}

void Effect__Rooted(Effect* __this)
{
    if (__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = true;
    __this->OnRooted();
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AddDrawCost(3.0);
}

void Effect__set_Element(Effect* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Element = value;
}

void Effect__Unrooted(Effect* __this)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->RemoveDrawCost(3.0);

    if (!__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = false;
    __this->OnUnrooted();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EffectHelpers__uType* EffectHelpers__typeof()
{
    static ::uStaticStrong<EffectHelpers__uType*> type;
    if (type != NULL) return type;

    type = (EffectHelpers__uType*)::uAllocClassType(sizeof(EffectHelpers__uType), "Fuse.Effects.EffectHelpers", false, 0, 20, 0);

    type->SetStrongRefs(
        "_draw_25256393._compiledProgram", offsetof(EffectHelpers, _draw_25256393._compiledProgram),
        "_draw_25256393._constValues", offsetof(EffectHelpers, _draw_25256393._constValues),
        "_draw_25256393._Program", offsetof(EffectHelpers, _draw_25256393._Program),
        "_draw_304ecdb6._compiledProgram", offsetof(EffectHelpers, _draw_304ecdb6._compiledProgram),
        "_draw_304ecdb6._constValues", offsetof(EffectHelpers, _draw_304ecdb6._constValues),
        "_draw_304ecdb6._Program", offsetof(EffectHelpers, _draw_304ecdb6._Program),
        "_draw_d49bc125._compiledProgram", offsetof(EffectHelpers, _draw_d49bc125._compiledProgram),
        "_draw_d49bc125._constValues", offsetof(EffectHelpers, _draw_d49bc125._constValues),
        "_draw_d49bc125._Program", offsetof(EffectHelpers, _draw_d49bc125._Program),
        "_draw_d8715896._compiledProgram", offsetof(EffectHelpers, _draw_d8715896._compiledProgram),
        "_draw_d8715896._constValues", offsetof(EffectHelpers, _draw_d8715896._constValues),
        "_draw_d8715896._Program", offsetof(EffectHelpers, _draw_d8715896._Program),
        "GaussianBlurSeparable_VertexData_d49bc125_2_5_2", offsetof(EffectHelpers, GaussianBlurSeparable_VertexData_d49bc125_2_5_2),
        "GaussianBlurSeparable_VertexData_d49bc125_2_5_3", offsetof(EffectHelpers, GaussianBlurSeparable_VertexData_d49bc125_2_5_3),
        "ResampleBilinear_VertexData_304ecdb6_2_5_2", offsetof(EffectHelpers, ResampleBilinear_VertexData_304ecdb6_2_5_2),
        "ResampleBilinear_VertexData_304ecdb6_2_5_3", offsetof(EffectHelpers, ResampleBilinear_VertexData_304ecdb6_2_5_3),
        "ResampleGaussian5tap_VertexData_25256393_2_5_2", offsetof(EffectHelpers, ResampleGaussian5tap_VertexData_25256393_2_5_2),
        "ResampleGaussian5tap_VertexData_25256393_2_5_3", offsetof(EffectHelpers, ResampleGaussian5tap_VertexData_25256393_2_5_3),
        "ResampleGaussian9tap_VertexData_d8715896_2_5_2", offsetof(EffectHelpers, ResampleGaussian9tap_VertexData_d8715896_2_5_2),
        "ResampleGaussian9tap_VertexData_d8715896_2_5_3", offsetof(EffectHelpers, ResampleGaussian9tap_VertexData_d8715896_2_5_3));

    type->SetFunctions(9,
        ::uNewFunction("Blur", EffectHelpers__Blur, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("BlurHorizontal", EffectHelpers__BlurHorizontal, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("BlurVertical", EffectHelpers__BlurVertical, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("GaussianBlurSeparable", EffectHelpers__GaussianBlurSeparable, 0, false, ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", EffectHelpers__New_1, 0, true, EffectHelpers__typeof()),
        ::uNewFunction("ResampleBilinear", EffectHelpers__ResampleBilinear, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Int2__typeof()),
        ::uNewFunction("ResampleGaussian", EffectHelpers__ResampleGaussian, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("ResampleGaussian5tap", EffectHelpers__ResampleGaussian5tap, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Int2__typeof()),
        ::uNewFunction("ResampleGaussian9tap", EffectHelpers__ResampleGaussian9tap, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Fuse::DrawContext__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Int2__typeof()));

    ::uRegisterType(type);
    return type;
}

void EffectHelpers___ObjInit(EffectHelpers* __this)
{
    __this->init_DrawCalls();
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__Blur(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float sigma)
{
    int maxSamples = 3;
    ::app::Uno::Graphics::Texture2D* src = original;
    ::app::Uno::Graphics::Framebuffer* fb = NULL;
    ::app::Uno::Float2 sigmas = ::app::Uno::Float2__New_1(NULL, sigma);

    while (((3.0f * sigmas.X) > (float)maxSamples) && ((3.0f * sigmas.Y) > (float)maxSamples))
    {
        ::app::Uno::Int2 newSize = ::app::Uno::Int2__New_2(NULL, ::app::Uno::Math__Max_8(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(src)->Size().X / 2, 1), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(src)->Size().Y / 2, 1));
        ::app::Uno::Graphics::Framebuffer* newFb = __this->ResampleGaussian5tap(dc, src, newSize);

        if (fb != NULL)
        {
            ::app::Fuse::FramebufferPool__Release(NULL, fb);
        }

        sigmas = ::app::Uno::Math__Sqrt_2(NULL, ::app::Uno::Float2__op_Subtraction_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, sigmas, sigmas), 1.0f));
        sigmas = ::app::Uno::Float2__op_Multiply_2(NULL, sigmas, ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_2(NULL, (float)newSize.X, (float)newSize.Y), ::app::Uno::Float2__op_Implicit_1(NULL, src->Size())));
        fb = newFb;
        src = ::uPtr< ::app::Uno::Graphics::Framebuffer*>(newFb)->ColorBuffer();
        maxSamples = maxSamples * 2;
    }

    ::app::Uno::Int2 samples = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Max_2(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Multiply(NULL, 3.0f, sigmas)), 1.0f));
    ::app::Uno::Graphics::Framebuffer* tmp = __this->BlurHorizontal(dc, ::uPtr< ::app::Uno::Graphics::Texture2D*>(src)->Size(), src, sigmas.X, samples.X);

    if (fb != NULL)
    {
        ::app::Fuse::FramebufferPool__Release(NULL, fb);
    }

    ::app::Uno::Graphics::Framebuffer* blur = __this->BlurVertical(dc, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Uno::Graphics::Framebuffer*>(tmp)->ColorBuffer())->Size(), ::uPtr< ::app::Uno::Graphics::Framebuffer*>(tmp)->ColorBuffer(), sigmas.Y, samples.Y);
    ::app::Fuse::FramebufferPool__Release(NULL, tmp);
    return blur;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurHorizontal(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples)
{
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, size, 3, false);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    __this->GaussianBlurSeparable(tex, ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurVertical(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples)
{
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, size, 3, false);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    __this->GaussianBlurSeparable(tex, ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

void EffectHelpers__free_DrawCalls(EffectHelpers* __this)
{
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->ResampleBilinear_VertexData_304ecdb6_2_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->ResampleBilinear_VertexData_304ecdb6_2_5_3)->Dispose();
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->ResampleGaussian5tap_VertexData_25256393_2_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->ResampleGaussian5tap_VertexData_25256393_2_5_3)->Dispose();
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->ResampleGaussian9tap_VertexData_d8715896_2_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->ResampleGaussian9tap_VertexData_d8715896_2_5_3)->Dispose();
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->GaussianBlurSeparable_VertexData_d49bc125_2_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->GaussianBlurSeparable_VertexData_d49bc125_2_5_3)->Dispose();
}

void EffectHelpers__GaussianBlurSeparable(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float sigma, int samples)
{
    float sigmaSquared = sigma * sigma;
    float scale = 1.0f / (float)::app::Uno::Math__Sqrt(NULL, 6.2831853071795862 * (double)sigmaSquared);
    ::uArray* weights = ::uNewArray(::app::Uno::Float__typeof(), 1 + samples);
    ::uArray* offsets = ::uNewArray(::app::Uno::Float2__typeof(), samples);
    float total = weights->Item< float>(0) = scale;

    for (int i = 0; i < samples; ++i)
    {
        int offset1 = (i * 2) + 1;
        int offset2 = (i * 2) + 2;
        float weight1 = scale * ::app::Uno::Math__Exp_1(NULL, (float)(-offset1 * offset1) / (2.0f * sigmaSquared));
        float weight2 = scale * ::app::Uno::Math__Exp_1(NULL, (float)(-offset2 * offset2) / (2.0f * sigmaSquared));
        float weight = weight1 + weight2;
        float offset = (((float)offset1 * weight1) + ((float)offset2 * weight2)) / weight;
        ::uPtr< ::uArray*>(weights)->Item< float>(i + 1) = weight;
        ::uPtr< ::uArray*>(offsets)->Item< ::app::Uno::Float2>(i) = ::app::Uno::Float2__op_Multiply_2(NULL, dir, ::app::Uno::Float2__New_2(NULL, offset / (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().X, offset / (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().Y));
        total = total + (2.0f * weight);
    }

    for (int i = 0; i < (samples + 1); ++i)
    {
        weights->Item< float>(i) = weights->Item< float>(i) / total;
    }

    {
        __this->_draw_d49bc125.DepthTestEnabled(false);
        __this->_draw_d49bc125.Const_1(0, ::uPtr< ::uArray*>(weights)->Length());
        __this->_draw_d49bc125.Const_1(1, samples);
        __this->_draw_d49bc125.Const_1(2, ::uPtr< ::uArray*>(offsets)->Length());
        __this->_draw_d49bc125.Use();
        __this->_draw_d49bc125.Attrib_1(3, 2, __this->GaussianBlurSeparable_VertexData_d49bc125_2_5_3, 8, 0);
        __this->_draw_d49bc125.Uniform_6(4, weights);
        __this->_draw_d49bc125.Uniform_5(5, offsets);
        __this->_draw_d49bc125.Sampler_3(6, tex, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
        __this->_draw_d49bc125.Draw(6, 2, __this->GaussianBlurSeparable_VertexData_d49bc125_2_5_2);
    }
}

void EffectHelpers__init_DrawCalls(EffectHelpers* __this)
{
    ::uArray* array_133;
    ::uArray* array_134;
    array_133 = ::uNewArray(::app::Uno::Float2__typeof(), 4);
    ::uPtr< ::uArray*>(array_133)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_133)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_133)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_133)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uArray* Vertices_304ecdb6_2_2_0 = array_133;
    array_134 = ::uNewArray(::app::Uno::UShort__typeof(), 6);
    ::uPtr< ::uArray*>(array_134)->Item< ::uUShort>(0) = 0;
    ::uPtr< ::uArray*>(array_134)->Item< ::uUShort>(1) = 1;
    ::uPtr< ::uArray*>(array_134)->Item< ::uUShort>(2) = 2;
    ::uPtr< ::uArray*>(array_134)->Item< ::uUShort>(3) = 2;
    ::uPtr< ::uArray*>(array_134)->Item< ::uUShort>(4) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< ::uUShort>(5) = 0;
    ::uArray* Indices_304ecdb6_2_3_1 = array_134;
    __this->ResampleBilinear_VertexData_304ecdb6_2_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, Indices_304ecdb6_2_3_1), 0);
    __this->ResampleBilinear_VertexData_304ecdb6_2_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_304ecdb6_2_2_0), 0);
    __this->ResampleGaussian5tap_VertexData_25256393_2_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, Indices_304ecdb6_2_3_1), 0);
    __this->ResampleGaussian5tap_VertexData_25256393_2_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_304ecdb6_2_2_0), 0);
    __this->ResampleGaussian9tap_VertexData_d8715896_2_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, Indices_304ecdb6_2_3_1), 0);
    __this->ResampleGaussian9tap_VertexData_d8715896_2_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_304ecdb6_2_2_0), 0);
    __this->GaussianBlurSeparable_VertexData_d49bc125_2_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, Indices_304ecdb6_2_3_1), 0);
    __this->GaussianBlurSeparable_VertexData_d49bc125_2_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_304ecdb6_2_2_0), 0);
    __this->_draw_304ecdb6 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 86), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_25256393 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 98), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_d8715896 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 99), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_d49bc125 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 100), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

EffectHelpers* EffectHelpers__New_1(::uStatic* __this)
{
    EffectHelpers* inst = (EffectHelpers*)::uAllocObject(sizeof(EffectHelpers), EffectHelpers__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleBilinear(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size)
{
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, size, 3, false);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    {
        __this->_draw_304ecdb6.DepthTestEnabled(false);
        __this->_draw_304ecdb6.Use();
        __this->_draw_304ecdb6.Attrib_1(0, 2, __this->ResampleBilinear_VertexData_304ecdb6_2_5_3, 8, 0);
        __this->_draw_304ecdb6.Sampler_3(1, tex, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
        __this->_draw_304ecdb6.Draw(6, 2, __this->ResampleBilinear_VertexData_304ecdb6_2_5_2);
    }

    dc->PopRenderTarget();
    return fb;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleGaussian(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size, float sigma, int samples)
{
    ::app::Uno::Graphics::Framebuffer* tmp = __this->BlurHorizontal(dc, ::app::Uno::Int2__New_2(NULL, size.X, ::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().Y), tex, sigma, samples);
    ::app::Uno::Graphics::Framebuffer* fb = __this->BlurVertical(dc, size, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(tmp)->ColorBuffer(), sigma, samples);
    ::app::Fuse::FramebufferPool__Release(NULL, tmp);
    return fb;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleGaussian5tap(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, size, 3, false);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    ::app::Uno::Float2 diagonalOffsets = ::app::Uno::Float2__New_2(NULL, 0.384289622f, 1.20486164f);
    ::app::Uno::Int2 texSize = ::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size();
    float centerWeight = 0.162102818f;
    float diagonalWeight = 0.20850347f;
    {
        __this->_draw_25256393.DepthTestEnabled(false);
        __this->_draw_25256393.Use();
        __this->_draw_25256393.Attrib_1(0, 2, __this->ResampleGaussian5tap_VertexData_25256393_2_5_3, 8, 0);
        __this->_draw_25256393.Uniform_11(1, centerWeight);
        __this->_draw_25256393.Uniform_12(2, ::app::Uno::Float2__op_Division_2(NULL, (ind_123 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, diagonalOffsets), diagonalOffsets), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)));
        __this->_draw_25256393.Uniform_11(3, diagonalWeight);
        __this->_draw_25256393.Uniform_12(4, ::app::Uno::Float2__op_Division_2(NULL, (ind_124 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, diagonalOffsets), diagonalOffsets), ::app::Uno::Float2__New_2(NULL, ind_124.W, ind_124.X)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)));
        __this->_draw_25256393.Uniform_12(5, ::app::Uno::Float2__op_Division_2(NULL, (ind_125 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, diagonalOffsets), diagonalOffsets), ::app::Uno::Float2__New_2(NULL, ind_125.Z, ind_125.W)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)));
        __this->_draw_25256393.Uniform_12(6, ::app::Uno::Float2__op_Division_2(NULL, (ind_126 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, diagonalOffsets), diagonalOffsets), ::app::Uno::Float2__New_2(NULL, ind_126.Y, ind_126.Z)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)));
        __this->_draw_25256393.Sampler_3(7, tex, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
        __this->_draw_25256393.Draw(6, 2, __this->ResampleGaussian5tap_VertexData_25256393_2_5_2);
    }

    dc->PopRenderTarget();
    return fb;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleGaussian9tap(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size)
{
    ::app::Uno::Float3 ind_127 = ::app::Uno::Float3();
    ::app::Uno::Float3 ind_128 = ::app::Uno::Float3();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_131 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_132 = ::app::Uno::Float4();
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, size, 3, false);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    ::app::Uno::Float2 diagonalOffsets = ::app::Uno::Float2__New_2(NULL, 0.384289622f, 1.20486164f);
    ::app::Uno::Int2 texSize = ::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size();
    float centerWeight = 0.162102818f;
    float cornerWeight = 0.1202598f;
    float crossWeight = 0.08921692f;
    float offset = 1.18243349f;
    {
        __this->_draw_d8715896.DepthTestEnabled(false);
        __this->_draw_d8715896.Use();
        __this->_draw_d8715896.Attrib_1(0, 2, __this->ResampleGaussian9tap_VertexData_d8715896_2_5_3, 8, 0);
        __this->_draw_d8715896.Uniform_11(1, centerWeight);
        __this->_draw_d8715896.Uniform_12(2, (ind_127 = ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_1(NULL, offset), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)), 0.0f), ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Z)));
        __this->_draw_d8715896.Uniform_11(3, crossWeight);
        __this->_draw_d8715896.Uniform_12(4, (ind_128 = ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_1(NULL, offset), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)), 0.0f), ::app::Uno::Float2__New_2(NULL, ind_128.Z, ind_128.Y)));
        __this->_draw_d8715896.Uniform_12(5, (ind_129 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_1(NULL, offset), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, ::app::Uno::Float2__New_1(NULL, offset)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize))), ::app::Uno::Float2__New_2(NULL, ind_129.X, ind_129.Y)));
        __this->_draw_d8715896.Uniform_11(6, cornerWeight);
        __this->_draw_d8715896.Uniform_12(7, (ind_130 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_1(NULL, offset), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, ::app::Uno::Float2__New_1(NULL, offset)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize))), ::app::Uno::Float2__New_2(NULL, ind_130.Z, ind_130.Y)));
        __this->_draw_d8715896.Uniform_12(8, (ind_131 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_1(NULL, offset), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, ::app::Uno::Float2__New_1(NULL, offset)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize))), ::app::Uno::Float2__New_2(NULL, ind_131.X, ind_131.W)));
        __this->_draw_d8715896.Uniform_12(9, (ind_132 = ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_1(NULL, offset), ::app::Uno::Float2__op_Implicit_1(NULL, texSize)), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, ::app::Uno::Float2__New_1(NULL, offset)), ::app::Uno::Float2__op_Implicit_1(NULL, texSize))), ::app::Uno::Float2__New_2(NULL, ind_132.Z, ind_132.W)));
        __this->_draw_d8715896.Sampler_3(10, tex, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
        __this->_draw_d8715896.Draw(6, 2, __this->ResampleGaussian9tap_VertexData_d8715896_2_5_2);
    }

    dc->PopRenderTarget();
    return fb;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Effects\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* EffectType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Effects.EffectType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Underlay", 0LL,
        "Composition", 1LL,
        "Overlay", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Halftone__uType* Halftone__typeof()
{
    static ::uStaticStrong<Halftone__uType*> type;
    if (type != NULL) return type;

    type = (Halftone__uType*)::uAllocClassType(sizeof(Halftone__uType), "Fuse.Effects.Halftone", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Effects::BasicEffect__typeof());
    type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))Halftone__OnRender;

    type->SetStrongRefs(
        "_draw_a4fda2a4._compiledProgram", offsetof(Halftone, _draw_a4fda2a4._compiledProgram),
        "_draw_a4fda2a4._constValues", offsetof(Halftone, _draw_a4fda2a4._constValues),
        "_draw_a4fda2a4._Program", offsetof(Halftone, _draw_a4fda2a4._Program),
        "OnRender_VertexData_a4fda2a4_7_2_1", offsetof(Halftone, OnRender_VertexData_a4fda2a4_7_2_1));

    type->SetFields(5,
        ::uNewField("_dotTint", NULL, offsetof(Halftone, _dotTint), ::app::Uno::Float__typeof()),
        ::uNewField("_intensity", NULL, offsetof(Halftone, _intensity), ::app::Uno::Float__typeof()),
        ::uNewField("_paperTint", NULL, offsetof(Halftone, _paperTint), ::app::Uno::Float__typeof()),
        ::uNewField("_smoothness", NULL, offsetof(Halftone, _smoothness), ::app::Uno::Float__typeof()),
        ::uNewField("_spacing", NULL, offsetof(Halftone, _spacing), ::app::Uno::Float__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_DotTint", Halftone__get_DotTint, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Intensity", Halftone__get_Intensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_PaperTint", Halftone__get_PaperTint, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Smoothness", Halftone__get_Smoothness, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Spacing", Halftone__get_Spacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Halftone__New_1, 0, true, Halftone__typeof()),
        ::uNewFunctionVoid("set_DotTint", Halftone__set_DotTint, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Intensity", Halftone__set_Intensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_PaperTint", Halftone__set_PaperTint, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Smoothness", Halftone__set_Smoothness, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Spacing", Halftone__set_Spacing, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Halftone___ObjInit_2(Halftone* __this)
{
    __this->_spacing = 5.0f;
    __this->_intensity = 1.0f;
    __this->_smoothness = 2.0f;
    __this->_dotTint = 0.5f;
    __this->_paperTint = 0.2f;
    ::app::Fuse::Effects::BasicEffect___ObjInit_1(__this, 1);
    __this->init_DrawCalls();
}

void Halftone__free_DrawCalls(Halftone* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnRender_VertexData_a4fda2a4_7_2_1)->Dispose();
}

float Halftone__get_DotTint(Halftone* __this)
{
    return __this->_dotTint;
}

float Halftone__get_Intensity(Halftone* __this)
{
    return __this->_intensity;
}

float Halftone__get_PaperTint(Halftone* __this)
{
    return __this->_paperTint;
}

float Halftone__get_Smoothness(Halftone* __this)
{
    return __this->_smoothness;
}

float Halftone__get_Spacing(Halftone* __this)
{
    return __this->_spacing;
}

void Halftone__init_DrawCalls(Halftone* __this)
{
    ::uArray* array_123;
    __this->OnRender_VertexData_a4fda2a4_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_123)), 0);
    __this->OnRender_LocalTransform_a4fda2a4_4_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->OnRender_LocalTransform_a4fda2a4_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_a4fda2a4 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 101), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Halftone* Halftone__New_1(::uStatic* __this)
{
    Halftone* inst = (Halftone*)::uAllocObject(sizeof(Halftone), Halftone__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Halftone__OnRender(Halftone* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    ::app::Uno::Graphics::Framebuffer* original = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, elementRect, ::app::Uno::Float2__op_Implicit_1(NULL, ::app::Uno::Int2__New_1(NULL, 0)));

    if (original == NULL)
    {
        return;
    }

    float tSpacing = __this->Spacing();
    float angle = 0.7853982f;
    ::app::Uno::Float2x2 rot = ::app::Uno::Float2x2__New_1(NULL, ::app::Uno::Math__Cos_1(NULL, angle), ::app::Uno::Math__Sin_1(NULL, angle), -::app::Uno::Math__Sin_1(NULL, angle), ::app::Uno::Math__Cos_1(NULL, angle));
    ::app::Uno::Float2x2 rotI = ::app::Uno::Float2x2__New_1(NULL, ::app::Uno::Math__Cos_1(NULL, -angle), ::app::Uno::Math__Sin_1(NULL, -angle), -::app::Uno::Math__Sin_1(NULL, -angle), ::app::Uno::Math__Cos_1(NULL, -angle));
    ::app::Uno::Float4x4 LocalTransform_a4fda2a4_4_8_4 = ::app::Uno::Matrix__Mul_10(NULL, __this->OnRender_LocalTransform_a4fda2a4_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_a4fda2a4_4_8_3, ::app::Uno::Matrix__Translation(NULL, elementRect.Minimum().X, elementRect.Minimum().Y, 0.0f));
    {
        __this->_draw_a4fda2a4.BlendEnabled(true);
        __this->_draw_a4fda2a4.BlendSrcRgb(2);
        __this->_draw_a4fda2a4.BlendDstRgb(3);
        __this->_draw_a4fda2a4.BlendDstAlpha(3);
        __this->_draw_a4fda2a4.DepthTestEnabled(false);
        __this->_draw_a4fda2a4.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
        __this->_draw_a4fda2a4.Use();
        __this->_draw_a4fda2a4.Attrib_1(0, 2, __this->OnRender_VertexData_a4fda2a4_7_2_1, 8, 0);
        __this->_draw_a4fda2a4.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
        __this->_draw_a4fda2a4.Uniform_11(2, __this->PaperTint());
        __this->_draw_a4fda2a4.Uniform_11(3, __this->DotTint());
        __this->_draw_a4fda2a4.Uniform_11(4, tSpacing);
        __this->_draw_a4fda2a4.Uniform_11(5, __this->Intensity());
        __this->_draw_a4fda2a4.Uniform_12(6, elementRect.Size());
        __this->_draw_a4fda2a4.Uniform_12(7, elementRect.Minimum());
        __this->_draw_a4fda2a4.Uniform_13(8, rot);
        __this->_draw_a4fda2a4.Uniform_13(9, rotI);
        __this->_draw_a4fda2a4.Uniform_11(10, dc->ViewportPointDensity());
        __this->_draw_a4fda2a4.Uniform_11(11, 1.0f / __this->Smoothness());
        __this->_draw_a4fda2a4.Uniform_17(12, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_a4fda2a4_4_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_a4fda2a4_4_8_4);
        __this->_draw_a4fda2a4.Sampler_2(13, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
        __this->_draw_a4fda2a4.DrawArrays(6);
    }

    ::app::Fuse::FramebufferPool__Release(NULL, original);
}

void Halftone__set_DotTint(Halftone* __this, float value)
{
    if (__this->_dotTint != value)
    {
        __this->_dotTint = value;
        __this->OnRenderingChanged();
    }
}

void Halftone__set_Intensity(Halftone* __this, float value)
{
    if (__this->_intensity != value)
    {
        __this->_intensity = value;
        __this->OnRenderingChanged();
    }
}

void Halftone__set_PaperTint(Halftone* __this, float value)
{
    if (__this->_paperTint != value)
    {
        __this->_paperTint = value;
        __this->OnRenderingChanged();
    }
}

void Halftone__set_Smoothness(Halftone* __this, float value)
{
    if (__this->_smoothness != value)
    {
        __this->_smoothness = value;
        __this->OnRenderingChanged();
    }
}

void Halftone__set_Spacing(Halftone* __this, float value)
{
    if (__this->_spacing != value)
    {
        __this->_spacing = value;
        __this->OnRenderingChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Mask__uType* Mask__typeof()
{
    static ::uStaticStrong<Mask__uType*> type;
    if (type != NULL) return type;

    type = (Mask__uType*)::uAllocClassType(sizeof(Mask__uType), "Fuse.Effects.Mask", false, 1, 13, 0);

    type->SetBaseType(::app::Fuse::Effects::BasicEffect__typeof());
    type->__fp_ModifyRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Effects::Effect*, ::app::Uno::Rect))Mask__ModifyRenderBounds;
    type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))Mask__OnRender;
    type->__interface_0.__fp_OnSourceChanged = (void(*)(void*))Mask__Fuse_Internal_IImageContainerOwner_OnSourceChanged;
    type->__interface_0.__fp_OnParamChanged = (void(*)(void*))Mask__Fuse_Internal_IImageContainerOwner_OnParamChanged;
    type->__interface_0.__fp_OnSizingChanged = (void(*)(void*))Mask__Fuse_Internal_IImageContainerOwner_OnSizingChanged;

    type->SetInterfaces(
        ::app::Fuse::Internal::IImageContainerOwner__typeof(), offsetof(Mask__uType, __interface_0));

    type->SetStrongRefs(
        "_container", offsetof(Mask, _container),
        "_draw_193b0147._compiledProgram", offsetof(Mask, _draw_193b0147._compiledProgram),
        "_draw_193b0147._constValues", offsetof(Mask, _draw_193b0147._constValues),
        "_draw_193b0147._Program", offsetof(Mask, _draw_193b0147._Program),
        "_draw_21360147._compiledProgram", offsetof(Mask, _draw_21360147._compiledProgram),
        "_draw_21360147._constValues", offsetof(Mask, _draw_21360147._constValues),
        "_draw_21360147._Program", offsetof(Mask, _draw_21360147._Program),
        "_draw_312c0147._compiledProgram", offsetof(Mask, _draw_312c0147._compiledProgram),
        "_draw_312c0147._constValues", offsetof(Mask, _draw_312c0147._constValues),
        "_draw_312c0147._Program", offsetof(Mask, _draw_312c0147._Program),
        "OnRender_VertexData_193b0147_7_2_1", offsetof(Mask, OnRender_VertexData_193b0147_7_2_1),
        "OnRender_VertexData_21360147_7_2_1", offsetof(Mask, OnRender_VertexData_21360147_7_2_1),
        "OnRender_VertexData_312c0147_7_2_1", offsetof(Mask, OnRender_VertexData_312c0147_7_2_1));

    type->SetFields(2,
        ::uNewField("_container", NULL, offsetof(Mask, _container), ::app::Fuse::Internal::ImageContainer__typeof()),
        ::uNewField("_mode", NULL, offsetof(Mask, _mode), ::app::Fuse::Effects::Mask_MaskMode__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("Fuse.Internal.IImageContainerOwner.OnParamChanged", Mask__Fuse_Internal_IImageContainerOwner_OnParamChanged, 0, false),
        ::uNewFunctionVoid("Fuse.Internal.IImageContainerOwner.OnSizingChanged", Mask__Fuse_Internal_IImageContainerOwner_OnSizingChanged, 0, false),
        ::uNewFunctionVoid("Fuse.Internal.IImageContainerOwner.OnSourceChanged", Mask__Fuse_Internal_IImageContainerOwner_OnSourceChanged, 0, false),
        ::uNewFunction("get_File", Mask__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Mode", Mask__get_Mode, 0, false, ::app::Fuse::Effects::Mask_MaskMode__typeof()),
        ::uNewFunction("get_Source", Mask__get_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction(".ctor", Mask__New_1, 0, true, Mask__typeof()),
        ::uNewFunctionVoid("set_File", Mask__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_Mode", Mask__set_Mode, 0, false, ::app::Fuse::Effects::Mask_MaskMode__typeof()),
        ::uNewFunctionVoid("set_Source", Mask__set_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void Mask___ObjInit_2(Mask* __this)
{
    __this->_mode = 2;
    ::app::Fuse::Effects::BasicEffect___ObjInit_1(__this, 1);
    __this->_container = ::app::Fuse::Internal::ImageContainer__New_1(NULL, (::uObject*)__this);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->StretchMode(3);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(true);
    __this->init_DrawCalls();
}

void Mask__free_DrawCalls(Mask* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnRender_VertexData_21360147_7_2_1)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnRender_VertexData_193b0147_7_2_1)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnRender_VertexData_312c0147_7_2_1)->Dispose();
}

void Mask__Fuse_Internal_IImageContainerOwner_OnParamChanged(Mask* __this)
{
    __this->OnRenderingChanged();
}

void Mask__Fuse_Internal_IImageContainerOwner_OnSizingChanged(Mask* __this)
{
    __this->OnRenderingChanged();
}

void Mask__Fuse_Internal_IImageContainerOwner_OnSourceChanged(Mask* __this)
{
    __this->OnRenderingChanged();
}

::app::Uno::UX::FileSource* Mask__get_File(Mask* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File();
}

int Mask__get_Mode(Mask* __this)
{
    return __this->_mode;
}

::app::Fuse::Resources::ImageSource* Mask__get_Source(Mask* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source();
}

void Mask__init_DrawCalls(Mask* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_21360147_7_1_0 = array_123;
    __this->OnRender_VertexData_21360147_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_21360147_7_1_0), 0);
    __this->OnRender_LocalTransform_21360147_4_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->OnRender_LocalTransform_21360147_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->OnRender_VertexData_193b0147_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_21360147_7_1_0), 0);
    __this->OnRender_VertexData_312c0147_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_21360147_7_1_0), 0);
    __this->_draw_21360147 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 102), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_193b0147 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 103), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_312c0147 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 104), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

::app::Uno::Rect Mask__ModifyRenderBounds(Mask* __this, ::app::Uno::Rect inBounds)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->ActualSize());
}

Mask* Mask__New_1(::uStatic* __this)
{
    Mask* inst = (Mask*)::uAllocObject(sizeof(Mask), Mask__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Mask__OnRender(Mask* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    elementRect = ::app::Uno::Rect__Intersect(NULL, ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->ActualSize()), elementRect);
    ::app::Uno::Graphics::Texture2D* texture = ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->GetTexture();

    if (texture == NULL)
    {
        return;
    }

    ::app::Uno::Graphics::Framebuffer* original = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, elementRect, ::app::Uno::Float2__New_1(NULL, 0.0f));

    if (original == NULL)
    {
        return;
    }

    switch (__this->_mode)
    {
        case 0:
        {
            ::app::Uno::Float4x4 LocalTransform_21360147_4_8_4 = ::app::Uno::Matrix__Mul_10(NULL, __this->OnRender_LocalTransform_21360147_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_21360147_4_8_3, ::app::Uno::Matrix__Translation(NULL, elementRect.Minimum().X, elementRect.Minimum().Y, 0.0f));
            {
                __this->_draw_21360147.BlendEnabled(true);
                __this->_draw_21360147.BlendSrcRgb(2);
                __this->_draw_21360147.BlendDstRgb(3);
                __this->_draw_21360147.BlendDstAlpha(3);
                __this->_draw_21360147.DepthTestEnabled(false);
                __this->_draw_21360147.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_21360147.Use();
                __this->_draw_21360147.Attrib_1(0, 2, __this->OnRender_VertexData_21360147_7_2_1, 8, 0);
                __this->_draw_21360147.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
                __this->_draw_21360147.Uniform_17(2, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_21360147_4_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_21360147_4_8_4);
                __this->_draw_21360147.Sampler_2(3, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
                __this->_draw_21360147.Sampler_3(4, texture, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
                __this->_draw_21360147.DrawArrays(6);
            }

            break;
        }
        case 1:
        {
            ::app::Uno::Float4x4 LocalTransform_193b0147_4_8_2 = ::app::Uno::Matrix__Mul_10(NULL, __this->OnRender_LocalTransform_21360147_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_21360147_4_8_3, ::app::Uno::Matrix__Translation(NULL, elementRect.Minimum().X, elementRect.Minimum().Y, 0.0f));
            {
                __this->_draw_193b0147.BlendEnabled(true);
                __this->_draw_193b0147.BlendSrcRgb(2);
                __this->_draw_193b0147.BlendDstRgb(3);
                __this->_draw_193b0147.BlendDstAlpha(3);
                __this->_draw_193b0147.DepthTestEnabled(false);
                __this->_draw_193b0147.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_193b0147.Use();
                __this->_draw_193b0147.Attrib_1(0, 2, __this->OnRender_VertexData_193b0147_7_2_1, 8, 0);
                __this->_draw_193b0147.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
                __this->_draw_193b0147.Uniform_17(2, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_193b0147_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_193b0147_4_8_2);
                __this->_draw_193b0147.Sampler_2(3, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
                __this->_draw_193b0147.Sampler_3(4, texture, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
                __this->_draw_193b0147.DrawArrays(6);
            }

            break;
        }
        case 2:
        {
            ::app::Uno::Float4x4 LocalTransform_312c0147_4_8_2 = ::app::Uno::Matrix__Mul_10(NULL, __this->OnRender_LocalTransform_21360147_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_21360147_4_8_3, ::app::Uno::Matrix__Translation(NULL, elementRect.Minimum().X, elementRect.Minimum().Y, 0.0f));
            {
                __this->_draw_312c0147.BlendEnabled(true);
                __this->_draw_312c0147.BlendSrcRgb(2);
                __this->_draw_312c0147.BlendDstRgb(3);
                __this->_draw_312c0147.BlendDstAlpha(3);
                __this->_draw_312c0147.DepthTestEnabled(false);
                __this->_draw_312c0147.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_312c0147.Use();
                __this->_draw_312c0147.Attrib_1(0, 2, __this->OnRender_VertexData_312c0147_7_2_1, 8, 0);
                __this->_draw_312c0147.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
                __this->_draw_312c0147.Uniform_17(2, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_312c0147_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_312c0147_4_8_2);
                __this->_draw_312c0147.Sampler_2(3, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
                __this->_draw_312c0147.Sampler_3(4, texture, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
                __this->_draw_312c0147.DrawArrays(6);
            }

            break;
        }
    }

    ::app::Fuse::FramebufferPool__Release(NULL, original);
}

void Mask__set_File(Mask* __this, ::app::Uno::UX::FileSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File(value);
}

void Mask__set_Mode(Mask* __this, int value)
{
    if (__this->_mode != value)
    {
        __this->_mode = value;
        __this->OnRenderingChanged();
    }
}

void Mask__set_Source(Mask* __this, ::app::Fuse::Resources::ImageSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source(value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Mask_MaskMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Effects.Mask.MaskMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Alpha", 0LL,
        "Grayscale", 1LL,
        "RGBA", 2LL);

    ::uRegisterType(type);
    return type;
}

}}}
