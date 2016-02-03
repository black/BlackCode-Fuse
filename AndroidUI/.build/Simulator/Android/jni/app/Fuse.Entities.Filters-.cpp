#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Entities.Filters.Blitter.h>
#include <app/Fuse.Entities.Filters.Blur.h>
#include <app/Fuse.Entities.Filters.FindEdges.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Filters {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Blitter*> Blitter___instance;

Blitter__uType* Blitter__typeof()
{
    static ::uStaticStrong<Blitter__uType*> type;
    if (type != NULL) return type;

    type = (Blitter__uType*)::uAllocClassType(sizeof(Blitter__uType), "Fuse.Entities.Filters.Blitter", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_68768587._compiledProgram", offsetof(Blitter, _draw_68768587._compiledProgram),
        "_draw_68768587._constValues", offsetof(Blitter, _draw_68768587._constValues),
        "_draw_68768587._Program", offsetof(Blitter, _draw_68768587._Program),
        "Blit_VertexData_68768587_2_5_2", offsetof(Blitter, Blit_VertexData_68768587_2_5_2),
        "Blit_VertexData_68768587_2_5_3", offsetof(Blitter, Blit_VertexData_68768587_2_5_3));

    type->SetFields(1,
        ::uNewField("_instance", &Blitter___instance, 0, Blitter__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Blit", Blitter__Blit, 0, false, ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Instance", Blitter__get_Instance, 0, true, Blitter__typeof()),
        ::uNewFunction(".ctor", Blitter__New_1, 0, true, Blitter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Blitter___ObjInit(Blitter* __this)
{
    __this->init_DrawCalls();
}

void Blitter__Blit(Blitter* __this, ::app::Uno::Graphics::Texture2D* tex, bool blend)
{
    {
        __this->_draw_68768587.BlendEnabled(blend);
        __this->_draw_68768587.DepthTestEnabled(false);
        __this->_draw_68768587.CullFace(0);
        __this->_draw_68768587.Use();
        __this->_draw_68768587.Attrib_1(0, 2, __this->Blit_VertexData_68768587_2_5_3, 8, 0);
        __this->_draw_68768587.Sampler_2(1, tex);
        __this->_draw_68768587.Draw(6, 2, __this->Blit_VertexData_68768587_2_5_2);
    }
}

void Blitter__free_DrawCalls(Blitter* __this)
{
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->Blit_VertexData_68768587_2_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->Blit_VertexData_68768587_2_5_3)->Dispose();
}

Blitter* Blitter__get_Instance(::uStatic* __this)
{
    Blitter* ind_125 = Blitter___instance;
    return (ind_125 != NULL) ? ind_125 : (Blitter___instance = Blitter__New_1(NULL));
}

void Blitter__init_DrawCalls(Blitter* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    __this->Blit_VertexData_68768587_2_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, (array_123 = ::uNewArray(::app::Uno::UShort__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(0) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(1) = 1, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(2) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(3) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(4) = 3, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(5) = 0, array_123)), 0);
    __this->Blit_VertexData_68768587_2_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_124 = ::uNewArray(::app::Uno::Float2__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), array_124)), 0);
    __this->_draw_68768587 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 86), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Blitter* Blitter__New_1(::uStatic* __this)
{
    Blitter* inst = (Blitter*)::uAllocObject(sizeof(Blitter), Blitter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blur__uType* Blur__typeof()
{
    static ::uStaticStrong<Blur__uType*> type;
    if (type != NULL) return type;

    type = (Blur__uType*)::uAllocClassType(sizeof(Blur__uType), "Fuse.Entities.Filters.Blur", false, 1, 5, 0);

    type->SetBaseType(::app::Fuse::Entities::RenderNode__typeof());
    type->__fp_OnDraw = (void(*)(::app::Fuse::Entities::RenderNode*, ::app::Fuse::DrawContext*))Blur__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Blur__uType, __interface_0));

    type->SetStrongRefs(
        "_draw_4fa3ba3f._compiledProgram", offsetof(Blur, _draw_4fa3ba3f._compiledProgram),
        "_draw_4fa3ba3f._constValues", offsetof(Blur, _draw_4fa3ba3f._constValues),
        "_draw_4fa3ba3f._Program", offsetof(Blur, _draw_4fa3ba3f._Program),
        "DirectionalBlur_VertexData_4fa3ba3f_2_5_2", offsetof(Blur, DirectionalBlur_VertexData_4fa3ba3f_2_5_2),
        "DirectionalBlur_VertexData_4fa3ba3f_2_5_3", offsetof(Blur, DirectionalBlur_VertexData_4fa3ba3f_2_5_3));

    type->SetFields(2,
        ::uNewField("_passes", NULL, offsetof(Blur, _passes), ::app::Uno::Int__typeof()),
        ::uNewField("_quality", NULL, offsetof(Blur, _quality), ::app::Uno::Float__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("DirectionalBlur", Blur__DirectionalBlur, 0, false, ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ClearColor", Blur__get_ClearColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Glow", Blur__get_Glow, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Passes", Blur__get_Passes, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Quality", Blur__get_Quality, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Blur__New_2, 0, true, Blur__typeof()),
        ::uNewFunctionVoid("set_ClearColor", Blur__set_ClearColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Glow", Blur__set_Glow, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Passes", Blur__set_Passes, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Quality", Blur__set_Quality, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Blur___ObjInit_2(Blur* __this)
{
    __this->_quality = 100.0f;
    __this->_passes = 4;
    ::app::Fuse::Entities::RenderNode___ObjInit_1(__this);
    __this->ClearColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.0f));
    __this->init_DrawCalls();
}

void Blur__DirectionalBlur(Blur* __this, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir)
{
    {
        __this->_draw_4fa3ba3f.DepthTestEnabled(false);
        __this->_draw_4fa3ba3f.CullFace(0);
        __this->_draw_4fa3ba3f.Use();
        __this->_draw_4fa3ba3f.Attrib_1(0, 2, __this->DirectionalBlur_VertexData_4fa3ba3f_2_5_3, 8, 0);
        __this->_draw_4fa3ba3f.Uniform_12(1, ::app::Uno::Float2__New_2(NULL, dir.X / (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().X, dir.Y / (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().Y));
        __this->_draw_4fa3ba3f.Uniform_12(2, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, dir.X / (float)tex->Size().X, dir.Y / (float)tex->Size().Y), 3.0f));
        __this->_draw_4fa3ba3f.Sampler_2(3, tex);
        __this->_draw_4fa3ba3f.Draw(6, 2, __this->DirectionalBlur_VertexData_4fa3ba3f_2_5_2);
    }
}

void Blur__free_DrawCalls(Blur* __this)
{
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->DirectionalBlur_VertexData_4fa3ba3f_2_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->DirectionalBlur_VertexData_4fa3ba3f_2_5_3)->Dispose();
}

::app::Uno::Float4 Blur__get_ClearColor(Blur* __this)
{
    return __this->_ClearColor;
}

bool Blur__get_Glow(Blur* __this)
{
    return __this->_Glow;
}

int Blur__get_Passes(Blur* __this)
{
    return __this->_passes;
}

float Blur__get_Quality(Blur* __this)
{
    return __this->_quality;
}

void Blur__init_DrawCalls(Blur* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    __this->DirectionalBlur_VertexData_4fa3ba3f_2_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, (array_123 = ::uNewArray(::app::Uno::UShort__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(0) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(1) = 1, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(2) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(3) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(4) = 3, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(5) = 0, array_123)), 0);
    __this->DirectionalBlur_VertexData_4fa3ba3f_2_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_124 = ::uNewArray(::app::Uno::Float2__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), array_124)), 0);
    __this->_draw_4fa3ba3f = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 85), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Blur* Blur__New_2(::uStatic* __this)
{
    Blur* inst = (Blur*)::uAllocObject(sizeof(Blur), Blur__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Blur__OnDraw(Blur* __this, ::app::Fuse::DrawContext* dc)
{
    int width = (int)(((float)::uPtr< ::app::Fuse::DrawContext*>(dc)->GLViewportPixelSize().X * __this->Quality()) / 100.0f);
    int height = (int)(((float)dc->GLViewportPixelSize().Y * __this->Quality()) / 100.0f);

    if (width < 1)
    {
        width = 1;
    }

    if (height < 1)
    {
        height = 1;
    }

    ::app::Uno::Graphics::Framebuffer* fb1 = ::app::Fuse::FramebufferPool__Lock(NULL, width, height, 3, true);
    ::app::Uno::Graphics::Framebuffer* fb2 = ::app::Fuse::FramebufferPool__Lock(NULL, width, height, 3, false);
    dc->PushRenderTarget_1(::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb1)->RenderTarget());
    dc->Clear(__this->ClearColor(), 1.0f);
    ::app::Fuse::Entities::RenderNode__OnDraw(__this, dc);
    dc->PopRenderTarget();

    for (int i = 1; i < __this->Passes(); i++)
    {
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget_1(::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb2)->RenderTarget());
        dc->Clear(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
        __this->DirectionalBlur(::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb1)->ColorBuffer(), ::app::Uno::Float2__New_2(NULL, 0.5f, 0.0f));
        dc->PopRenderTarget();
        dc->PushRenderTarget_1(fb1->RenderTarget());
        dc->Clear(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
        __this->DirectionalBlur(fb2->ColorBuffer(), ::app::Uno::Float2__New_2(NULL, 0.0f, 0.5f));
        dc->PopRenderTarget();
    }

    if (__this->Glow())
    {
        ::app::Fuse::Entities::RenderNode__OnDraw(__this, dc);
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->Flush();
    }

    ::uPtr< ::app::Fuse::Entities::Filters::Blitter*>(::app::Fuse::Entities::Filters::Blitter__get_Instance(NULL))->Blit(fb1->ColorBuffer(), __this->Glow());
    ::app::Fuse::FramebufferPool__Release(NULL, fb1);
    ::app::Fuse::FramebufferPool__Release(NULL, fb2);
}

void Blur__set_ClearColor(Blur* __this, ::app::Uno::Float4 value)
{
    __this->_ClearColor = value;
}

void Blur__set_Glow(Blur* __this, bool value)
{
    __this->_Glow = value;
}

void Blur__set_Passes(Blur* __this, int value)
{
    if (__this->_passes != value)
    {
        __this->_passes = value;

        if (__this->_passes < 0)
        {
            __this->_passes = 0;
        }

        if (__this->_passes > 20)
        {
            __this->_passes = 20;
        }
    }
}

void Blur__set_Quality(Blur* __this, float value)
{
    if (__this->_quality != value)
    {
        __this->_quality = value;

        if (__this->_quality < 1.0f)
        {
            __this->_quality = 1.0f;
        }

        if (__this->_quality > 100.0f)
        {
            __this->_quality = 100.0f;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FindEdges__uType* FindEdges__typeof()
{
    static ::uStaticStrong<FindEdges__uType*> type;
    if (type != NULL) return type;

    type = (FindEdges__uType*)::uAllocClassType(sizeof(FindEdges__uType), "Fuse.Entities.Filters.FindEdges", false, 1, 5, 0);

    type->SetBaseType(::app::Fuse::Entities::RenderNode__typeof());
    type->__fp_OnDraw = (void(*)(::app::Fuse::Entities::RenderNode*, ::app::Fuse::DrawContext*))FindEdges__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(FindEdges__uType, __interface_0));

    type->SetStrongRefs(
        "_draw_5796b4a7._compiledProgram", offsetof(FindEdges, _draw_5796b4a7._compiledProgram),
        "_draw_5796b4a7._constValues", offsetof(FindEdges, _draw_5796b4a7._constValues),
        "_draw_5796b4a7._Program", offsetof(FindEdges, _draw_5796b4a7._Program),
        "OnDraw_VertexData_5796b4a7_7_5_2", offsetof(FindEdges, OnDraw_VertexData_5796b4a7_7_5_2),
        "OnDraw_VertexData_5796b4a7_7_5_3", offsetof(FindEdges, OnDraw_VertexData_5796b4a7_7_5_3));

    type->SetFunctions(15,
        ::uNewFunction("get_BackgroundColor", FindEdges__get_BackgroundColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_BlendDst", FindEdges__get_BlendDst, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunction("get_BlendEnabled", FindEdges__get_BlendEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_BlendSrc", FindEdges__get_BlendSrc, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunction("get_EdgeColor", FindEdges__get_EdgeColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Spread", FindEdges__get_Spread, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Strength", FindEdges__get_Strength, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", FindEdges__New_2, 0, true, FindEdges__typeof()),
        ::uNewFunctionVoid("set_BackgroundColor", FindEdges__set_BackgroundColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_BlendDst", FindEdges__set_BlendDst, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunctionVoid("set_BlendEnabled", FindEdges__set_BlendEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_BlendSrc", FindEdges__set_BlendSrc, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunctionVoid("set_EdgeColor", FindEdges__set_EdgeColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Spread", FindEdges__set_Spread, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Strength", FindEdges__set_Strength, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void FindEdges___ObjInit_2(FindEdges* __this)
{
    ::app::Fuse::Entities::RenderNode___ObjInit_1(__this);
    __this->Spread(1.0f);
    __this->Strength(0.25f);
    __this->BackgroundColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.0f));
    __this->EdgeColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    __this->init_DrawCalls();
}

void FindEdges__free_DrawCalls(FindEdges* __this)
{
    ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->OnDraw_VertexData_5796b4a7_7_5_2)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->OnDraw_VertexData_5796b4a7_7_5_3)->Dispose();
}

::app::Uno::Float4 FindEdges__get_BackgroundColor(FindEdges* __this)
{
    return __this->_BackgroundColor;
}

int FindEdges__get_BlendDst(FindEdges* __this)
{
    return __this->_BlendDst;
}

bool FindEdges__get_BlendEnabled(FindEdges* __this)
{
    return __this->_BlendEnabled;
}

int FindEdges__get_BlendSrc(FindEdges* __this)
{
    return __this->_BlendSrc;
}

::app::Uno::Float4 FindEdges__get_EdgeColor(FindEdges* __this)
{
    return __this->_EdgeColor;
}

float FindEdges__get_Spread(FindEdges* __this)
{
    return __this->_Spread;
}

float FindEdges__get_Strength(FindEdges* __this)
{
    return __this->_Strength;
}

void FindEdges__init_DrawCalls(FindEdges* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    __this->OnDraw_VertexData_5796b4a7_7_5_2 = ::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, (array_123 = ::uNewArray(::app::Uno::UShort__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(0) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(1) = 1, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(2) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(3) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(4) = 3, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(5) = 0, array_123)), 0);
    __this->OnDraw_VertexData_5796b4a7_7_5_3 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_124 = ::uNewArray(::app::Uno::Float2__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), array_124)), 0);
    __this->_draw_5796b4a7 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 87), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

FindEdges* FindEdges__New_2(::uStatic* __this)
{
    FindEdges* inst = (FindEdges*)::uAllocObject(sizeof(FindEdges), FindEdges__typeof());
    inst->_ObjInit_2();
    return inst;
}

void FindEdges__OnDraw(FindEdges* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock(NULL, ::uPtr< ::app::Fuse::DrawContext*>(dc)->GLViewportPixelSize().X, ::uPtr< ::app::Fuse::DrawContext*>(dc)->GLViewportPixelSize().Y, 3, true);
    dc->PushRenderTarget_1(::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->RenderTarget());
    dc->Clear(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
    ::app::Fuse::Entities::RenderNode__OnDraw(__this, dc);
    dc->PopRenderTarget();

    if (__this->BlendEnabled())
    {
        ::app::Fuse::Entities::RenderNode__OnDraw(__this, dc);
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->Flush();
    }

    {
        __this->_draw_5796b4a7.BlendEnabled(__this->BlendEnabled());
        __this->_draw_5796b4a7.BlendSrcRgb(__this->BlendSrc());
        __this->_draw_5796b4a7.BlendSrcAlpha(__this->BlendSrc());
        __this->_draw_5796b4a7.BlendDstRgb(__this->BlendDst());
        __this->_draw_5796b4a7.BlendDstAlpha(__this->BlendDst());
        __this->_draw_5796b4a7.Use();
        __this->_draw_5796b4a7.Attrib_1(0, 2, __this->OnDraw_VertexData_5796b4a7_7_5_3, 8, 0);
        __this->_draw_5796b4a7.Uniform_12(1, ::app::Uno::Float2__New_2(NULL, ::app::Uno::Float2__New_2(NULL, __this->Spread() / (float)::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size().X, __this->Spread() / (float)::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size().Y).X, 0.0f));
        __this->_draw_5796b4a7.Uniform_12(2, ::app::Uno::Float2__New_2(NULL, 0.0f, ::app::Uno::Float2__New_2(NULL, __this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).Y));
        __this->_draw_5796b4a7.Uniform_12(3, ::app::Uno::Float2__New_2(NULL, -::app::Uno::Float2__New_2(NULL, __this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).X, 0.0f));
        __this->_draw_5796b4a7.Uniform_12(4, ::app::Uno::Float2__New_2(NULL, 0.0f, -::app::Uno::Float2__New_2(NULL, __this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).Y));
        __this->_draw_5796b4a7.Uniform_11(5, __this->Strength());
        __this->_draw_5796b4a7.Uniform_16(6, __this->BackgroundColor());
        __this->_draw_5796b4a7.Uniform_16(7, __this->EdgeColor());
        __this->_draw_5796b4a7.Sampler_2(8, fb->ColorBuffer());
        __this->_draw_5796b4a7.Draw(6, 2, __this->OnDraw_VertexData_5796b4a7_7_5_2);
    }

    ::app::Fuse::FramebufferPool__Release(NULL, fb);
}

void FindEdges__set_BackgroundColor(FindEdges* __this, ::app::Uno::Float4 value)
{
    __this->_BackgroundColor = value;
}

void FindEdges__set_BlendDst(FindEdges* __this, int value)
{
    __this->_BlendDst = value;
}

void FindEdges__set_BlendEnabled(FindEdges* __this, bool value)
{
    __this->_BlendEnabled = value;
}

void FindEdges__set_BlendSrc(FindEdges* __this, int value)
{
    __this->_BlendSrc = value;
}

void FindEdges__set_EdgeColor(FindEdges* __this, ::app::Uno::Float4 value)
{
    __this->_EdgeColor = value;
}

void FindEdges__set_Spread(FindEdges* __this, float value)
{
    __this->_Spread = value;
}

void FindEdges__set_Strength(FindEdges* __this, float value)
{
    __this->_Strength = value;
}

}}}}
