#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLBufferHandle.h>
#include <app/OpenGL.GLBufferTarget.h>
#include <app/OpenGL.GLBufferUsage.h>
#include <app/OpenGL.GLClearBufferMask.h>
#include <app/OpenGL.GLEnableCap.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/OpenGL.GLFramebufferTarget.h>
#include <app/OpenGL.GLIntegerName.h>
#include <app/OpenGL.GLRenderbufferHandle.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/OpenGL.GLTextureParameterName.h>
#include <app/OpenGL.GLTextureParameterValue.h>
#include <app/OpenGL.GLTextureTarget.h>
#include <app/OpenGL.GLTextureUnit.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Graphics.BlendEquation.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.CompareFunc.h>
#include <app/Uno.Graphics.CubeFace.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.FormatHelpers.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.FramebufferFlags.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.IndexTypeHelpers.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.PolygonWinding.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.TextureAddressMode.h>
#include <app/Uno.Graphics.TextureCube.h>
#include <app/Uno.Graphics.TextureFilter.h>
#include <app/Uno.Graphics.TextureHelpers.h>
#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Graphics.VideoTexture.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.IO.CppXliStreamHandle.h>
#include <app/Uno.IO.FileSystemImpl.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <XliGL.h>
#include <XliImage.h>
#include <XliPlatform.h>

namespace app {
namespace Uno {
namespace Graphics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BlendEquation__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.BlendEquation", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Add", 0LL,
        "Subtract", 1LL,
        "ReverseSubtract", 2LL,
        "Min", 3LL,
        "Max", 4LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BlendOperand__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.BlendOperand", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcAlpha", 2LL,
        "OneMinusSrcAlpha", 3LL,
        "SrcColor", 4LL,
        "OneMinusSrcColor", 5LL,
        "DstAlpha", 6LL,
        "OneMinusDstAlpha", 7LL,
        "DstColor", 8LL,
        "OneMinusDstColor", 9LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BufferUsage__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.BufferUsage", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Immutable", 0LL,
        "Dynamic", 1LL,
        "Stream", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* CompareFunc__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.CompareFunc", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Always", 0LL,
        "Less", 1LL,
        "LessOrEqual", 2LL,
        "Equal", 3LL,
        "NotEqual", 4LL,
        "GreaterOrEqual", 5LL,
        "Greater", 6LL,
        "Never", 7LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* CubeFace__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.CubeFace", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "PositiveX", 0LL,
        "NegativeX", 1LL,
        "PositiveY", 2LL,
        "NegativeY", 3LL,
        "PositiveZ", 4LL,
        "NegativeZ", 5LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DeviceBuffer__uType* DeviceBuffer__typeof()
{
    static ::uStaticStrong<DeviceBuffer__uType*> type;
    if (type != NULL) return type;

    type = (DeviceBuffer__uType*)::uAllocClassType(sizeof(DeviceBuffer__uType), "Uno.Graphics.DeviceBuffer", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))DeviceBuffer__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(DeviceBuffer__uType, __interface_0));

    type->SetFunctions(15,
        ::uNewFunctionVoid("Dispose", DeviceBuffer__Dispose, 0, false),
        ::uNewFunction("get_GLBufferHandle", DeviceBuffer__get_GLBufferHandle, 0, false, ::app::OpenGL::GLBufferHandle__typeof()),
        ::uNewFunction("get_GLBufferTarget", DeviceBuffer__get_GLBufferTarget, 0, false, ::app::OpenGL::GLBufferTarget__typeof()),
        ::uNewFunction("get_IsDisposed", DeviceBuffer__get_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_SizeInBytes", DeviceBuffer__get_SizeInBytes, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Usage", DeviceBuffer__get_Usage, 0, false, ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunctionVoid("GLInit", DeviceBuffer__GLInit, 0, false, ::app::OpenGL::GLBufferTarget__typeof()),
        ::uNewFunctionVoid("GLInit", DeviceBuffer__GLInit_1, 0, false, ::app::OpenGL::GLBufferTarget__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("GLInit", DeviceBuffer__GLInit_2, 0, false, ::app::OpenGL::GLBufferTarget__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_GLBufferHandle", DeviceBuffer__set_GLBufferHandle, 0, false, ::app::OpenGL::GLBufferHandle__typeof()),
        ::uNewFunctionVoid("set_GLBufferTarget", DeviceBuffer__set_GLBufferTarget, 0, false, ::app::OpenGL::GLBufferTarget__typeof()),
        ::uNewFunctionVoid("set_IsDisposed", DeviceBuffer__set_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_SizeInBytes", DeviceBuffer__set_SizeInBytes, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Usage", DeviceBuffer__set_Usage, 0, false, ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunctionVoid("Update", DeviceBuffer__Update, 0, false, ::app::Uno::Buffer__typeof()));

    ::uRegisterType(type);
    return type;
}

void DeviceBuffer___ObjInit(DeviceBuffer* __this, int usage)
{
    __this->Usage(usage);
}

void DeviceBuffer__Dispose(DeviceBuffer* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("DeviceBuffer")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteBuffer(NULL, __this->GLBufferHandle());
    }

    __this->IsDisposed(true);
}

::uUInt DeviceBuffer__get_GLBufferHandle(DeviceBuffer* __this)
{
    return __this->_GLBufferHandle;
}

int DeviceBuffer__get_GLBufferTarget(DeviceBuffer* __this)
{
    return __this->_GLBufferTarget;
}

bool DeviceBuffer__get_IsDisposed(DeviceBuffer* __this)
{
    return __this->_IsDisposed;
}

int DeviceBuffer__get_SizeInBytes(DeviceBuffer* __this)
{
    return __this->_SizeInBytes;
}

int DeviceBuffer__get_Usage(DeviceBuffer* __this)
{
    return __this->_Usage;
}

void DeviceBuffer__GLInit(DeviceBuffer* __this, int target)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
}

void DeviceBuffer__GLInit_1(DeviceBuffer* __this, int target, ::app::Uno::Buffer* data)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
    __this->SizeInBytes(::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());
    ::app::OpenGL::GL__BufferData(NULL, __this->GLBufferTarget(), data, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
}

void DeviceBuffer__GLInit_2(DeviceBuffer* __this, int target, int sizeInBytes)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
    __this->SizeInBytes(sizeInBytes);
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());
    ::app::OpenGL::GL__BufferDatai(NULL, __this->GLBufferTarget(), sizeInBytes, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
}

void DeviceBuffer__set_GLBufferHandle(DeviceBuffer* __this, ::uUInt value)
{
    __this->_GLBufferHandle = value;
}

void DeviceBuffer__set_GLBufferTarget(DeviceBuffer* __this, int value)
{
    __this->_GLBufferTarget = value;
}

void DeviceBuffer__set_IsDisposed(DeviceBuffer* __this, bool value)
{
    __this->_IsDisposed = value;
}

void DeviceBuffer__set_SizeInBytes(DeviceBuffer* __this, int value)
{
    __this->_SizeInBytes = value;
}

void DeviceBuffer__set_Usage(DeviceBuffer* __this, int value)
{
    __this->_Usage = value;
}

void DeviceBuffer__Update(DeviceBuffer* __this, ::app::Uno::Buffer* data)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("DeviceBuffer")));
    }
    else
    {
        ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());

        if (::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes() <= __this->SizeInBytes())
        {
            ::app::OpenGL::GL__BufferSubData(NULL, __this->GLBufferTarget(), 0, data);
        }
        else
        {
            ::app::OpenGL::GL__BufferData(NULL, __this->GLBufferTarget(), data, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
            __this->SizeInBytes(::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());
        }

        ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Format__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.Format", ::app::Uno::Int__typeof(), 7);

    type->SetLiterals(
        "Unknown", 0LL,
        "L8", 1LL,
        "LA88", 2LL,
        "RGBA8888", 3LL,
        "RGBA4444", 4LL,
        "RGBA5551", 5LL,
        "RGB565", 6LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatHelpers__uType* FormatHelpers__typeof()
{
    static ::uStaticStrong<FormatHelpers__uType*> type;
    if (type != NULL) return type;

    type = (FormatHelpers__uType*)::uAllocClassType(sizeof(FormatHelpers__uType), "Uno.Graphics.FormatHelpers");

    type->SetFunctions(1,
        ::uNewFunction("GetStrideInBytes", FormatHelpers__GetStrideInBytes, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof()));

    ::uRegisterType(type);
    return type;
}

int FormatHelpers__GetStrideInBytes(::uStatic* __this, int format)
{
    switch (format)
    {
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 2;
        }
        case 3:
        {
            return 4;
        }
        case 4:
        {
            return 2;
        }
        case 5:
        {
            return 2;
        }
        case 6:
        {
            return 2;
        }
    }

    U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Invalid format <"), ::uBox< int>(::app::Uno::Graphics::Format__typeof(), format)), ::uGetConstString(">"))));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Framebuffer__uType* Framebuffer__typeof()
{
    static ::uStaticStrong<Framebuffer__uType*> type;
    if (type != NULL) return type;

    type = (Framebuffer__uType*)::uAllocClassType(sizeof(Framebuffer__uType), "framebuffer", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Framebuffer__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Framebuffer__uType, __interface_0));

    type->SetStrongRefs(
        "_ColorBuffer", offsetof(Framebuffer, _ColorBuffer),
        "_RenderTarget", offsetof(Framebuffer, _RenderTarget));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Dispose", Framebuffer__Dispose, 0, false),
        ::uNewFunctionVoid("GenerateMipmap", Framebuffer__GenerateMipmap, 0, false),
        ::uNewFunction("get_ColorBuffer", Framebuffer__get_ColorBuffer, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction("get_Format", Framebuffer__get_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction("get_HasDepth", Framebuffer__get_HasDepth, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_RenderTarget", Framebuffer__get_RenderTarget, 0, false, ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewFunction("get_Size", Framebuffer__get_Size, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_SupportsMipmap", Framebuffer__get_SupportsMipmap, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", Framebuffer__New_1, 0, true, Framebuffer__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Graphics::FramebufferFlags__typeof()),
        ::uNewFunctionVoid("set_ColorBuffer", Framebuffer__set_ColorBuffer, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunctionVoid("set_RenderTarget", Framebuffer__set_RenderTarget, 0, false, ::app::Uno::Graphics::RenderTarget__typeof()));

    ::uRegisterType(type);
    return type;
}

void Framebuffer___ObjInit(Framebuffer* __this, ::app::Uno::Int2 size, int format, int flags)
{
    __this->ColorBuffer(::app::Uno::Graphics::Texture2D__New_2(NULL, size, format, (flags & 2) == 2));
    __this->RenderTarget(::app::Uno::Graphics::RenderTarget__CreateFromTexture2D(NULL, __this->ColorBuffer(), 0, (flags & 1) == 1));
}

void Framebuffer__Dispose(Framebuffer* __this)
{
    ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->Dispose();
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->Dispose();
}

void Framebuffer__GenerateMipmap(Framebuffer* __this)
{
    ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->GenerateMipmap();
}

::app::Uno::Graphics::Texture2D* Framebuffer__get_ColorBuffer(Framebuffer* __this)
{
    return __this->_ColorBuffer;
}

int Framebuffer__get_Format(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->Format();
}

bool Framebuffer__get_HasDepth(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->HasDepth();
}

::app::Uno::Graphics::RenderTarget* Framebuffer__get_RenderTarget(Framebuffer* __this)
{
    return __this->_RenderTarget;
}

::app::Uno::Int2 Framebuffer__get_Size(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->Size();
}

bool Framebuffer__get_SupportsMipmap(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->SupportsMipmap();
}

Framebuffer* Framebuffer__New_1(::uStatic* __this, ::app::Uno::Int2 size, int format, int flags)
{
    Framebuffer* inst = (Framebuffer*)::uAllocObject(sizeof(Framebuffer), Framebuffer__typeof());
    inst->_ObjInit(size, format, flags);
    return inst;
}

void Framebuffer__set_ColorBuffer(Framebuffer* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_ColorBuffer = value;
}

void Framebuffer__set_RenderTarget(Framebuffer* __this, ::app::Uno::Graphics::RenderTarget* value)
{
    __this->_RenderTarget = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FramebufferFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.FramebufferFlags", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", 0LL,
        "DepthBuffer", 1LL,
        "Mipmap", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsContext__uType* GraphicsContext__typeof()
{
    static ::uStaticStrong<GraphicsContext__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsContext__uType*)::uAllocClassType(sizeof(GraphicsContext__uType), "Uno.Graphics.GraphicsContext", false, 0, 2, 0);

    type->SetStrongRefs(
        "_backbuffer", offsetof(GraphicsContext, _backbuffer),
        "_renderTarget", offsetof(GraphicsContext, _renderTarget));

    type->SetFields(6,
        ::uNewField("_backbuffer", NULL, offsetof(GraphicsContext, _backbuffer), ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewField("_handle", NULL, offsetof(GraphicsContext, _handle), ::app::Uno::Runtime::Implementation::GraphicsContextHandle__typeof()),
        ::uNewField("_renderTarget", NULL, offsetof(GraphicsContext, _renderTarget), ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewField("_scissor", NULL, offsetof(GraphicsContext, _scissor), ::app::Uno::Recti__typeof()),
        ::uNewField("_scissorEnabled", NULL, offsetof(GraphicsContext, _scissorEnabled), ::app::Uno::Bool__typeof()),
        ::uNewField("_viewport", NULL, offsetof(GraphicsContext, _viewport), ::app::Uno::Recti__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Clear", GraphicsContext__Clear, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("ForceResetState", GraphicsContext__ForceResetState, 0, false),
        ::uNewFunction("get_Backbuffer", GraphicsContext__get_Backbuffer, 0, false, ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewFunction("get_RenderTarget", GraphicsContext__get_RenderTarget, 0, false, ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewFunction("get_Scissor", GraphicsContext__get_Scissor, 0, false, ::app::Uno::Recti__typeof()),
        ::uNewFunction("get_Viewport", GraphicsContext__get_Viewport, 0, false, ::app::Uno::Recti__typeof()),
        ::uNewFunctionVoid("set_Scissor", GraphicsContext__set_Scissor, 0, false, ::app::Uno::Recti__typeof()),
        ::uNewFunctionVoid("set_Viewport", GraphicsContext__set_Viewport, 0, false, ::app::Uno::Recti__typeof()),
        ::uNewFunctionVoid("SetRenderTarget", GraphicsContext__SetRenderTarget, 0, false, ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewFunctionVoid("SetRenderTarget", GraphicsContext__SetRenderTarget_1, 0, false, ::app::Uno::Graphics::RenderTarget__typeof(), ::app::Uno::Recti__typeof(), ::app::Uno::Recti__typeof()),
        ::uNewFunctionVoid("UpdateBackbuffer", GraphicsContext__UpdateBackbuffer, 0, false));

    ::uRegisterType(type);
    return type;
}

void GraphicsContext___ObjInit(GraphicsContext* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetInstance(NULL);
    __this->_renderTarget = __this->_backbuffer = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    __this->UpdateBackbuffer();
}

void GraphicsContext__Clear(GraphicsContext* __this, ::app::Uno::Float4 color, float depth)
{
    {
        ::app::OpenGL::GL__ClearDepth(NULL, depth);
        ::app::OpenGL::GL__ClearColor(NULL, color.X, color.Y, color.Z, color.W);
        ::app::OpenGL::GL__Clear(NULL, 17664);
    }
}

void GraphicsContext__ForceResetState(GraphicsContext* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetInstance(NULL);
    __this->_renderTarget = __this->_backbuffer = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    __this->UpdateBackbuffer();
    __this->Viewport(__this->_viewport);
    ::app::OpenGL::GL__Enable(NULL, 3089);
    __this->_scissorEnabled = true;
    __this->SetRenderTarget(__this->_backbuffer);
}

::app::Uno::Graphics::RenderTarget* GraphicsContext__get_Backbuffer(GraphicsContext* __this)
{
    return __this->_backbuffer;
}

::app::Uno::Graphics::RenderTarget* GraphicsContext__get_RenderTarget(GraphicsContext* __this)
{
    return __this->_renderTarget;
}

::app::Uno::Recti GraphicsContext__get_Scissor(GraphicsContext* __this)
{
    return __this->_scissor;
}

::app::Uno::Recti GraphicsContext__get_Viewport(GraphicsContext* __this)
{
    return __this->_viewport;
}

GraphicsContext* GraphicsContext__New_1(::uStatic* __this)
{
    GraphicsContext* inst = (GraphicsContext*)::uAllocObject(sizeof(GraphicsContext), GraphicsContext__typeof());
    inst->_ObjInit();
    return inst;
}

void GraphicsContext__set_Scissor(GraphicsContext* __this, ::app::Uno::Recti value)
{
    {
        if (!__this->_scissorEnabled)
        {
            ::app::OpenGL::GL__Enable(NULL, 3089);
            __this->_scissorEnabled = true;
        }

        __this->_scissor = value;

        if (__this->_renderTarget == __this->_backbuffer)
        {
            ::app::Uno::Int2 offset = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferOffset(NULL, __this->_handle);
            int realFbHeight = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetRealBackbufferHeight(NULL, __this->_handle);
            ::app::Uno::Recti offsetScissor = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__op_Addition_1(NULL, __this->_scissor.Position(), offset), __this->_scissor.Size());
            ::app::Uno::Recti currentScissor = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferScissor(NULL, __this->_handle);
            ::app::Uno::Recti clippedScissor = ::app::Uno::Recti__New_1(NULL, ::app::Uno::Math__Max_8(NULL, offsetScissor.Left, currentScissor.Left), ::app::Uno::Math__Max_8(NULL, offsetScissor.Top, currentScissor.Top), ::app::Uno::Math__Min_8(NULL, offsetScissor.Right, currentScissor.Right), ::app::Uno::Math__Min_8(NULL, offsetScissor.Bottom, currentScissor.Bottom));
            ::app::OpenGL::GL__Scissor(NULL, clippedScissor.Left, realFbHeight - clippedScissor.Bottom, ::app::Uno::Math__Max_8(NULL, 0, clippedScissor.Size().X), ::app::Uno::Math__Max_8(NULL, 0, clippedScissor.Size().Y));
        }
        else
        {
            ::app::OpenGL::GL__Scissor(NULL, __this->_scissor.Left, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->Size().Y - __this->_scissor.Bottom, ::app::Uno::Math__Max_8(NULL, 0, __this->_scissor.Size().X), ::app::Uno::Math__Max_8(NULL, 0, __this->_scissor.Size().Y));
        }
    }
}

void GraphicsContext__set_Viewport(GraphicsContext* __this, ::app::Uno::Recti value)
{
    {
        __this->_viewport = value;

        if (__this->_renderTarget == __this->_backbuffer)
        {
            ::app::Uno::Int2 offset = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferOffset(NULL, __this->_handle);
            int realFbHeight = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetRealBackbufferHeight(NULL, __this->_handle);
            ::app::Uno::Recti offsetViewport = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__op_Addition_1(NULL, __this->_viewport.Position(), offset), __this->_viewport.Size());
            ::app::OpenGL::GL__Viewport(NULL, offsetViewport.Left, realFbHeight - offsetViewport.Bottom, ::app::Uno::Math__Max_8(NULL, 0, offsetViewport.Size().X), ::app::Uno::Math__Max_8(NULL, 0, offsetViewport.Size().Y));
        }
        else
        {
            ::app::OpenGL::GL__Viewport(NULL, __this->_viewport.Left, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->Size().Y - __this->_viewport.Bottom, ::app::Uno::Math__Max_8(NULL, 0, __this->_viewport.Size().X), ::app::Uno::Math__Max_8(NULL, 0, __this->_viewport.Size().Y));
        }
    }
}

void GraphicsContext__SetRenderTarget(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget)
{
    if (renderTarget == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("renderTarget")));
    }

    ::app::Uno::Recti full = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__New_1(NULL, 0), ::uPtr< ::app::Uno::Graphics::RenderTarget*>(renderTarget)->Size());
    __this->SetRenderTarget_1(renderTarget, full, full);
}

void GraphicsContext__SetRenderTarget_1(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget, ::app::Uno::Recti viewport, ::app::Uno::Recti scissor)
{
    if (renderTarget == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("renderTarget")));
    }

    __this->_renderTarget = renderTarget;
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->GLFramebufferHandle());
    __this->Viewport(viewport);
    __this->Scissor(scissor);
}

void GraphicsContext__UpdateBackbuffer(GraphicsContext* __this)
{
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->GLFramebufferHandle(::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferGLHandle(NULL, __this->_handle));
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->Size(::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferSize(NULL, __this->_handle));
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->HasDepth(true);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IndexBuffer__uType* IndexBuffer__typeof()
{
    static ::uStaticStrong<IndexBuffer__uType*> type;
    if (type != NULL) return type;

    type = (IndexBuffer__uType*)::uAllocClassType(sizeof(IndexBuffer__uType), "Uno.Graphics.IndexBuffer", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Graphics::DeviceBuffer__typeof());

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(IndexBuffer__uType, __interface_0));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", IndexBuffer__New_1, 0, true, IndexBuffer__typeof(), ::app::Uno::Buffer__typeof(), ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunction(".ctor", IndexBuffer__New_2, 0, true, IndexBuffer__typeof(), ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunction(".ctor", IndexBuffer__New_3, 0, true, IndexBuffer__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::BufferUsage__typeof()));

    ::uRegisterType(type);
    return type;
}

void IndexBuffer___ObjInit_1(IndexBuffer* __this, ::app::Uno::Buffer* data, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_1(34963, data);
}

void IndexBuffer___ObjInit_2(IndexBuffer* __this, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit(34963);
}

void IndexBuffer___ObjInit_3(IndexBuffer* __this, int sizeInBytes, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_2(34963, sizeInBytes);
}

IndexBuffer* IndexBuffer__New_1(::uStatic* __this, ::app::Uno::Buffer* data, int usage)
{
    IndexBuffer* inst = (IndexBuffer*)::uAllocObject(sizeof(IndexBuffer), IndexBuffer__typeof());
    inst->_ObjInit_1(data, usage);
    return inst;
}

IndexBuffer* IndexBuffer__New_2(::uStatic* __this, int usage)
{
    IndexBuffer* inst = (IndexBuffer*)::uAllocObject(sizeof(IndexBuffer), IndexBuffer__typeof());
    inst->_ObjInit_2(usage);
    return inst;
}

IndexBuffer* IndexBuffer__New_3(::uStatic* __this, int sizeInBytes, int usage)
{
    IndexBuffer* inst = (IndexBuffer*)::uAllocObject(sizeof(IndexBuffer), IndexBuffer__typeof());
    inst->_ObjInit_3(sizeInBytes, usage);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* IndexType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.IndexType", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Undefined", 0LL,
        "Byte", 1LL,
        "UShort", 2LL,
        "UInt", 4LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IndexTypeHelpers__uType* IndexTypeHelpers__typeof()
{
    static ::uStaticStrong<IndexTypeHelpers__uType*> type;
    if (type != NULL) return type;

    type = (IndexTypeHelpers__uType*)::uAllocClassType(sizeof(IndexTypeHelpers__uType), "Uno.Graphics.IndexTypeHelpers");

    type->SetFunctions(1,
        ::uNewFunction("GetStrideInBytes", IndexTypeHelpers__GetStrideInBytes, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::IndexType__typeof()));

    ::uRegisterType(type);
    return type;
}

int IndexTypeHelpers__GetStrideInBytes(::uStatic* __this, int type)
{
    switch (type)
    {
        case 1:
        case 2:
        case 4:
        {
            return type;
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Invalid IndexType <"), ::uBox< int>(::app::Uno::Graphics::IndexType__typeof(), type)), ::uGetConstString(">"))));
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PolygonFace__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.PolygonFace", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "None", 0LL,
        "Front", 1LL,
        "Back", 2LL,
        "Both", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PolygonWinding__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.PolygonWinding", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Clockwise", 0LL,
        "CounterClockwise", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PrimitiveType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.PrimitiveType", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Triangles", 1LL,
        "Lines", 2LL,
        "Points", 3LL,
        "TriangleStrip", 4LL,
        "LineStrip", 5LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RenderTarget__uType* RenderTarget__typeof()
{
    static ::uStaticStrong<RenderTarget__uType*> type;
    if (type != NULL) return type;

    type = (RenderTarget__uType*)::uAllocClassType(sizeof(RenderTarget__uType), "Uno.Graphics.RenderTarget", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))RenderTarget__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(RenderTarget__uType, __interface_0));

    type->SetFunctions(17,
        ::uNewFunction("Create", RenderTarget__CreateFromTexture2D, 0, true, RenderTarget__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Create", RenderTarget__CreateFromTextureCube, 0, true, RenderTarget__typeof(), ::app::Uno::Graphics::TextureCube__typeof(), ::app::Uno::Graphics::CubeFace__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Dispose", RenderTarget__Dispose, 0, false),
        ::uNewFunction("get_GLDepthBufferHandle", RenderTarget__get_GLDepthBufferHandle, 0, false, ::app::OpenGL::GLRenderbufferHandle__typeof()),
        ::uNewFunction("get_GLFramebufferHandle", RenderTarget__get_GLFramebufferHandle, 0, false, ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunction("get_HasDepth", RenderTarget__get_HasDepth, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsDisposed", RenderTarget__get_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_OwnsGLDepthBufferHandle", RenderTarget__get_OwnsGLDepthBufferHandle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_OwnsGLFramebufferHandle", RenderTarget__get_OwnsGLFramebufferHandle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Size", RenderTarget__get_Size, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("set_GLDepthBufferHandle", RenderTarget__set_GLDepthBufferHandle, 0, false, ::app::OpenGL::GLRenderbufferHandle__typeof()),
        ::uNewFunctionVoid("set_GLFramebufferHandle", RenderTarget__set_GLFramebufferHandle, 0, false, ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunctionVoid("set_HasDepth", RenderTarget__set_HasDepth, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsDisposed", RenderTarget__set_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_OwnsGLDepthBufferHandle", RenderTarget__set_OwnsGLDepthBufferHandle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_OwnsGLFramebufferHandle", RenderTarget__set_OwnsGLFramebufferHandle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Size", RenderTarget__set_Size, 0, false, ::app::Uno::Int2__typeof()));

    ::uRegisterType(type);
    return type;
}

void RenderTarget___ObjInit(RenderTarget* __this)
{
}

RenderTarget* RenderTarget__CreateFromTexture2D(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip, bool depth)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CreateRenderTarget(NULL, 3553, ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->GLTextureHandle(), mip, ::app::Uno::Graphics::TextureHelpers__GetMipSize(NULL, texture, mip), depth);
}

RenderTarget* RenderTarget__CreateFromTextureCube(::uStatic* __this, ::app::Uno::Graphics::TextureCube* texture, int face, int mip, bool depth)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CreateRenderTarget(NULL, 34069 + face, ::uPtr< ::app::Uno::Graphics::TextureCube*>(texture)->GLTextureHandle(), mip, ::app::Uno::Graphics::TextureHelpers__GetMipSize_1(NULL, texture, mip), depth);
}

void RenderTarget__Dispose(RenderTarget* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("RenderTarget")));
    }
    else
    {
        if (__this->OwnsGLDepthBufferHandle() && ::app::OpenGL::GLRenderbufferHandle__op_Inequality(NULL, __this->GLDepthBufferHandle(), ::app::OpenGL::GLRenderbufferHandle__Zero))
        {
            ::app::OpenGL::GL__DeleteRenderbuffer(NULL, __this->GLDepthBufferHandle());
        }

        if (__this->OwnsGLFramebufferHandle() && ::app::OpenGL::GLFramebufferHandle__op_Inequality(NULL, __this->GLFramebufferHandle(), ::app::OpenGL::GLFramebufferHandle__Zero))
        {
            ::app::OpenGL::GL__DeleteFramebuffer(NULL, __this->GLFramebufferHandle());
        }
    }

    __this->IsDisposed(true);
}

::uUInt RenderTarget__get_GLDepthBufferHandle(RenderTarget* __this)
{
    return __this->_GLDepthBufferHandle;
}

::uUInt RenderTarget__get_GLFramebufferHandle(RenderTarget* __this)
{
    return __this->_GLFramebufferHandle;
}

bool RenderTarget__get_HasDepth(RenderTarget* __this)
{
    return __this->_HasDepth;
}

bool RenderTarget__get_IsDisposed(RenderTarget* __this)
{
    return __this->_IsDisposed;
}

bool RenderTarget__get_OwnsGLDepthBufferHandle(RenderTarget* __this)
{
    return __this->_OwnsGLDepthBufferHandle;
}

bool RenderTarget__get_OwnsGLFramebufferHandle(RenderTarget* __this)
{
    return __this->_OwnsGLFramebufferHandle;
}

::app::Uno::Int2 RenderTarget__get_Size(RenderTarget* __this)
{
    return __this->_Size;
}

RenderTarget* RenderTarget__New_1(::uStatic* __this)
{
    RenderTarget* inst = (RenderTarget*)::uAllocObject(sizeof(RenderTarget), RenderTarget__typeof());
    inst->_ObjInit();
    return inst;
}

void RenderTarget__set_GLDepthBufferHandle(RenderTarget* __this, ::uUInt value)
{
    __this->_GLDepthBufferHandle = value;
}

void RenderTarget__set_GLFramebufferHandle(RenderTarget* __this, ::uUInt value)
{
    __this->_GLFramebufferHandle = value;
}

void RenderTarget__set_HasDepth(RenderTarget* __this, bool value)
{
    __this->_HasDepth = value;
}

void RenderTarget__set_IsDisposed(RenderTarget* __this, bool value)
{
    __this->_IsDisposed = value;
}

void RenderTarget__set_OwnsGLDepthBufferHandle(RenderTarget* __this, bool value)
{
    __this->_OwnsGLDepthBufferHandle = value;
}

void RenderTarget__set_OwnsGLFramebufferHandle(RenderTarget* __this, bool value)
{
    __this->_OwnsGLFramebufferHandle = value;
}

void RenderTarget__set_Size(RenderTarget* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SamplerState__uType* SamplerState__typeof()
{
    static ::uStaticStrong<SamplerState__uType*> type;
    if (type != NULL) return type;

    type = (SamplerState__uType*)::uAllocStructType(sizeof(SamplerState__uType), "Uno.Graphics.SamplerState", sizeof(SamplerState), 0, 0, 0);

    type->SetFields(5,
        ::uNewField("AddressU", NULL, offsetof(SamplerState, AddressU), ::app::Uno::Graphics::TextureAddressMode__typeof()),
        ::uNewField("AddressV", NULL, offsetof(SamplerState, AddressV), ::app::Uno::Graphics::TextureAddressMode__typeof()),
        ::uNewField("AddressW", NULL, offsetof(SamplerState, AddressW), ::app::Uno::Graphics::TextureAddressMode__typeof()),
        ::uNewField("MagFilter", NULL, offsetof(SamplerState, MagFilter), ::app::Uno::Graphics::TextureFilter__typeof()),
        ::uNewField("MinFilter", NULL, offsetof(SamplerState, MinFilter), ::app::Uno::Graphics::TextureFilter__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_LinearClamp", SamplerState__get_LinearClamp, 0, true, SamplerState__typeof()),
        ::uNewFunction("get_MinFilterNoMipmap", SamplerState__get_MinFilterNoMipmap, 0, false, ::app::Uno::Graphics::TextureFilter__typeof()),
        ::uNewFunction("get_TrilinearClamp", SamplerState__get_TrilinearClamp, 0, true, SamplerState__typeof()),
        ::uNewFunction(".ctor", SamplerState__New_1, 0, true, SamplerState__typeof(), ::app::Uno::Graphics::TextureFilter__typeof(), ::app::Uno::Graphics::TextureFilter__typeof(), ::app::Uno::Graphics::TextureAddressMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void SamplerState___ObjInit(SamplerState* __this, int minFilter, int magFilter, int addressMode)
{
    __this->MinFilter = minFilter;
    __this->MagFilter = magFilter;
    __this->AddressU = addressMode;
    __this->AddressV = addressMode;
    __this->AddressW = addressMode;
}

SamplerState SamplerState__get_LinearClamp(::uStatic* __this)
{
    return SamplerState__New_1(NULL, 9729, 9729, 33071);
}

int SamplerState__get_MinFilterNoMipmap(SamplerState* __this)
{
    switch (__this->MinFilter)
    {
        case 9984:
        case 9985:
        {
            return 9728;
        }
        case 9986:
        case 9987:
        {
            return 9729;
        }
        default:
        {
            return __this->MinFilter;
        }
    }
}

SamplerState SamplerState__get_TrilinearClamp(::uStatic* __this)
{
    return SamplerState__New_1(NULL, 9987, 9729, 33071);
}

SamplerState SamplerState__New_1(::uStatic* __this, int minFilter, int magFilter, int addressMode)
{
    SamplerState inst = ::uDefault< SamplerState>();
    inst._ObjInit(minFilter, magFilter, addressMode);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Texture2D___maxSize;

Texture2D__uType* Texture2D__typeof()
{
    static ::uStaticStrong<Texture2D__uType*> type;
    if (type != NULL) return type;

    type = (Texture2D__uType*)::uAllocClassType(sizeof(Texture2D__uType), "Uno.Graphics.Texture2D", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Texture2D__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Texture2D__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_maxSize", &Texture2D___maxSize, 0, ::app::Uno::Int__typeof()));

    type->SetFunctions(23,
        ::uNewFunctionVoid("Dispose", Texture2D__Dispose, 0, false),
        ::uNewFunctionVoid("GenerateMipmap", Texture2D__GenerateMipmap, 0, false),
        ::uNewFunction("get_CanUpdate", Texture2D__get_CanUpdate, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Format", Texture2D__get_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction("get_GLTextureHandle", Texture2D__get_GLTextureHandle, 0, false, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunction("get_IsDisposed", Texture2D__get_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MaxSize", Texture2D__get_MaxSize, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_MipCount", Texture2D__get_MipCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Size", Texture2D__get_Size, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_SupportsMipmap", Texture2D__get_SupportsMipmap, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("Load", Texture2D__Load, 0, true, Texture2D__typeof(), ::app::Uno::BundleFile__typeof()),
        ::uNewFunction("Load", Texture2D__Load_1, 0, true, Texture2D__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Load", Texture2D__Load_2, 0, true, Texture2D__typeof(), ::app::Uno::String__typeof(), ::app::Uno::IO::CppXliStreamHandle__typeof()),
        ::uNewFunction(".ctor", Texture2D__New_1, 0, true, Texture2D__typeof(), ::app::OpenGL::GLTextureHandle__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction(".ctor", Texture2D__New_2, 0, true, Texture2D__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Format", Texture2D__set_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunctionVoid("set_GLTextureHandle", Texture2D__set_GLTextureHandle, 0, false, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunctionVoid("set_IsDisposed", Texture2D__set_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_MipCount", Texture2D__set_MipCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Size", Texture2D__set_Size, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("Update", Texture2D__Update, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("Update", Texture2D__Update_1, 0, false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Buffer__typeof())),
        ::uNewFunctionVoid("Update", Texture2D__Update_2, 0, false, ::app::Uno::IntPtr__typeof()));

    ::uRegisterType(type);
    return type;
}

void Texture2D___ObjInit(Texture2D* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format)
{
    __this->GLTextureHandle(handle);
    __this->Size(size);
    __this->MipCount(mipCount);
    __this->Format(format);
}

void Texture2D___ObjInit_1(Texture2D* __this, ::app::Uno::Int2 size, int format, bool mipmap)
{
    __this->GLTextureHandle(::app::OpenGL::GL__CreateTexture(NULL));
    __this->Size(size);
    __this->Format(format);
    __this->MipCount(mipmap ? ::app::Uno::Graphics::TextureHelpers__GetMipCount_1(NULL, size) : 1);
    __this->Update(NULL);
}

void Texture2D__Dispose(Texture2D* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("Texture2D")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteTexture(NULL, __this->GLTextureHandle());
    }

    __this->IsDisposed(true);
}

void Texture2D__GenerateMipmap(Texture2D* __this)
{
    if (!__this->SupportsMipmap())
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture does not support mipmap")));
    }
    else
    {
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__GenerateMipmap(NULL, 3553);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

bool Texture2D__get_CanUpdate(Texture2D* __this)
{
    return __this->Format() != 0;
}

int Texture2D__get_Format(Texture2D* __this)
{
    return __this->_Format;
}

::uUInt Texture2D__get_GLTextureHandle(Texture2D* __this)
{
    return __this->_GLTextureHandle;
}

bool Texture2D__get_IsDisposed(Texture2D* __this)
{
    return __this->_IsDisposed;
}

int Texture2D__get_MaxSize(::uStatic* __this)
{
    if (Texture2D___maxSize == 0)
    {
        Texture2D___maxSize = ::app::OpenGL::GL__GetInteger_1(NULL, 3379);
    }

    return Texture2D___maxSize;
}

int Texture2D__get_MipCount(Texture2D* __this)
{
    return __this->_MipCount;
}

::app::Uno::Int2 Texture2D__get_Size(Texture2D* __this)
{
    return __this->_Size;
}

bool Texture2D__get_SupportsMipmap(Texture2D* __this)
{
    return ((__this->MipCount() > 1) && ::app::Uno::Math__IsPow2(NULL, __this->Size().X)) && ::app::Uno::Math__IsPow2(NULL, __this->Size().Y);
}

Texture2D* Texture2D__Load(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    return Texture2D__Load_2(NULL, ::uPtr< ::app::Uno::BundleFile*>(file)->Name(), ::uPtr< ::app::Uno::BundleFile*>(file)->CppXliOpenRead());
}

Texture2D* Texture2D__Load_1(::uStatic* __this, ::uString* filename)
{
    return Texture2D__Load_2(NULL, filename, ::app::Uno::IO::FileSystemImpl__CppXliOpenRead(NULL, filename));
}

Texture2D* Texture2D__Load_2(::uStatic* __this, ::uString* filename_, ::Xli::Stream* handle_)
{
    Xli::Managed<Xli::Texture> tex = uLoadXliTexture(::uStringToXliString(filename_), handle_);
    handle_->Release();
    
    uGLTextureInfo info;
    GLuint handle = uCreateGLTexture(tex, false, &info);
    
    if (info.GLTarget != GL_TEXTURE_2D)
        XLI_THROW("Invalid 2D texture");
    
    return ::app::Uno::Graphics::Texture2D__New_1(NULL, handle, ::app::Uno::Int2__New_2(NULL, info.Width, info.Height), info.MipCount, 0);
}

Texture2D* Texture2D__New_1(::uStatic* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format)
{
    Texture2D* inst = (Texture2D*)::uAllocObject(sizeof(Texture2D), Texture2D__typeof());
    inst->_ObjInit(handle, size, mipCount, format);
    return inst;
}

Texture2D* Texture2D__New_2(::uStatic* __this, ::app::Uno::Int2 size, int format, bool mipmap)
{
    Texture2D* inst = (Texture2D*)::uAllocObject(sizeof(Texture2D), Texture2D__typeof());
    inst->_ObjInit_1(size, format, mipmap);
    return inst;
}

void Texture2D__set_Format(Texture2D* __this, int value)
{
    __this->_Format = value;
}

void Texture2D__set_GLTextureHandle(Texture2D* __this, ::uUInt value)
{
    __this->_GLTextureHandle = value;
}

void Texture2D__set_IsDisposed(Texture2D* __this, bool value)
{
    __this->_IsDisposed = value;
}

void Texture2D__set_MipCount(Texture2D* __this, int value)
{
    __this->_MipCount = value;
}

void Texture2D__set_Size(Texture2D* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

void Texture2D__Update(Texture2D* __this, ::app::Uno::Buffer* mip0)
{
    if (__this->Format() == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture is immutable and cannot be updated")));
    }
    else
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10240, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10243, 33071);
        ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__TexImage2DFromBuffer(NULL, 3553, __this->Size().X, __this->Size().Y, 0, __this->Format(), mip0);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

void Texture2D__Update_1(Texture2D* __this, int firstMip, ::uArray* mips)
{
    if (__this->Format() == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture is immutable and cannot be updated")));
    }
    else
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10240, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10243, 33071);
        int w = __this->Size().X;
        int h = __this->Size().Y;

        for (int i = 0; i < __this->MipCount(); i++)
        {
            if (i >= firstMip)
            {
                ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__TexImage2DFromBuffer(NULL, 3553, w, h, i, __this->Format(), ::uPtr< ::uArray*>(mips)->Item< ::app::Uno::Buffer*>(i));
            }

            w = w >> 1;
            h = h >> 1;

            if (w < 1)
            {
                w = 1;
            }

            if (h < 1)
            {
                h = 1;
            }

            if (i >= (mips->Length() - firstMip))
            {
                break;
            }
        }

        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

void Texture2D__Update_2(Texture2D* __this, void* mip0)
{
    if (__this->Format() == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture is immutable and cannot be updated")));
    }
    else
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10240, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10243, 33071);
        ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__TexImage2DFromIntPtr(NULL, 3553, __this->Size().X, __this->Size().Y, 0, __this->Format(), mip0);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextureAddressMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.TextureAddressMode", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Wrap", 10497LL,
        "Clamp", 33071LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureCube__uType* TextureCube__typeof()
{
    static ::uStaticStrong<TextureCube__uType*> type;
    if (type != NULL) return type;

    type = (TextureCube__uType*)::uAllocClassType(sizeof(TextureCube__uType), "Uno.Graphics.TextureCube", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))TextureCube__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(TextureCube__uType, __interface_0));

    type->SetFunctions(21,
        ::uNewFunctionVoid("Dispose", TextureCube__Dispose, 0, false),
        ::uNewFunctionVoid("GenerateMipmap", TextureCube__GenerateMipmap, 0, false),
        ::uNewFunction("get_CanUpdate", TextureCube__get_CanUpdate, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Format", TextureCube__get_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction("get_GLTextureHandle", TextureCube__get_GLTextureHandle, 0, false, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunction("get_IsDisposed", TextureCube__get_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MipCount", TextureCube__get_MipCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Size", TextureCube__get_Size, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_SupportsMipmap", TextureCube__get_SupportsMipmap, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("Load", TextureCube__Load, 0, true, TextureCube__typeof(), ::app::Uno::BundleFile__typeof()),
        ::uNewFunction("Load", TextureCube__Load_1, 0, true, TextureCube__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Load", TextureCube__Load_2, 0, true, TextureCube__typeof(), ::app::Uno::String__typeof(), ::app::Uno::IO::CppXliStreamHandle__typeof()),
        ::uNewFunction(".ctor", TextureCube__New_1, 0, true, TextureCube__typeof(), ::app::OpenGL::GLTextureHandle__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction(".ctor", TextureCube__New_2, 0, true, TextureCube__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Format", TextureCube__set_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunctionVoid("set_GLTextureHandle", TextureCube__set_GLTextureHandle, 0, false, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunctionVoid("set_IsDisposed", TextureCube__set_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_MipCount", TextureCube__set_MipCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Size", TextureCube__set_Size, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Update", TextureCube__Update, 0, false, ::app::Uno::Graphics::CubeFace__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("Update", TextureCube__Update_1, 0, false, ::app::Uno::Graphics::CubeFace__typeof(), ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Buffer__typeof())));

    ::uRegisterType(type);
    return type;
}

void TextureCube___ObjInit(TextureCube* __this, ::uUInt handle, int size, int mipCount, int format)
{
    __this->GLTextureHandle(handle);
    __this->Size(size);
    __this->MipCount(mipCount);
    __this->Format(format);
}

void TextureCube___ObjInit_1(TextureCube* __this, int size, int format, bool mipmap)
{
    __this->GLTextureHandle(::app::OpenGL::GL__CreateTexture(NULL));
    __this->Size(size);
    __this->Format(format);
    __this->MipCount(mipmap ? ::app::Uno::Graphics::TextureHelpers__GetMipCount(NULL, size) : 1);

    for (int i = 0; i < 6; i++)
    {
        __this->Update(i, NULL);
    }
}

void TextureCube__Dispose(TextureCube* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("TextureCube")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteTexture(NULL, __this->GLTextureHandle());
    }

    __this->IsDisposed(true);
}

void TextureCube__GenerateMipmap(TextureCube* __this)
{
    if (!__this->SupportsMipmap())
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture does not support mipmap")));
    }
    else
    {
        ::app::OpenGL::GL__BindTexture(NULL, 34067, __this->GLTextureHandle());
        ::app::OpenGL::GL__GenerateMipmap(NULL, 34067);
        ::app::OpenGL::GL__BindTexture(NULL, 34067, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

bool TextureCube__get_CanUpdate(TextureCube* __this)
{
    return __this->Format() != 0;
}

int TextureCube__get_Format(TextureCube* __this)
{
    return __this->_Format;
}

::uUInt TextureCube__get_GLTextureHandle(TextureCube* __this)
{
    return __this->_GLTextureHandle;
}

bool TextureCube__get_IsDisposed(TextureCube* __this)
{
    return __this->_IsDisposed;
}

int TextureCube__get_MipCount(TextureCube* __this)
{
    return __this->_MipCount;
}

int TextureCube__get_Size(TextureCube* __this)
{
    return __this->_Size;
}

bool TextureCube__get_SupportsMipmap(TextureCube* __this)
{
    return (__this->MipCount() > 1) && ::app::Uno::Math__IsPow2(NULL, __this->Size());
}

TextureCube* TextureCube__Load(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    return TextureCube__Load_2(NULL, ::uPtr< ::app::Uno::BundleFile*>(file)->Name(), ::uPtr< ::app::Uno::BundleFile*>(file)->CppXliOpenRead());
}

TextureCube* TextureCube__Load_1(::uStatic* __this, ::uString* filename)
{
    return TextureCube__Load_2(NULL, filename, ::app::Uno::IO::FileSystemImpl__CppXliOpenRead(NULL, filename));
}

TextureCube* TextureCube__Load_2(::uStatic* __this, ::uString* filename_, ::Xli::Stream* handle_)
{
    Xli::Managed<Xli::Texture> tex = uLoadXliTexture(::uStringToXliString(filename_), handle_);
    handle_->Release();
    
    if (tex->Faces.Length() == 1)
    {
        Xli::PrintLine("Converting 2D texture to cube texture");
        tex = tex->Convert2DToCube();
    }
    
    uGLTextureInfo info;
    GLuint handle = uCreateGLTexture(tex, true, &info);
    
    if (info.GLTarget != GL_TEXTURE_CUBE_MAP)
        XLI_THROW("Invalid cube map");
    
    return ::app::Uno::Graphics::TextureCube__New_1(NULL, handle, info.Width, info.MipCount, 0);
}

TextureCube* TextureCube__New_1(::uStatic* __this, ::uUInt handle, int size, int mipCount, int format)
{
    TextureCube* inst = (TextureCube*)::uAllocObject(sizeof(TextureCube), TextureCube__typeof());
    inst->_ObjInit(handle, size, mipCount, format);
    return inst;
}

TextureCube* TextureCube__New_2(::uStatic* __this, int size, int format, bool mipmap)
{
    TextureCube* inst = (TextureCube*)::uAllocObject(sizeof(TextureCube), TextureCube__typeof());
    inst->_ObjInit_1(size, format, mipmap);
    return inst;
}

void TextureCube__set_Format(TextureCube* __this, int value)
{
    __this->_Format = value;
}

void TextureCube__set_GLTextureHandle(TextureCube* __this, ::uUInt value)
{
    __this->_GLTextureHandle = value;
}

void TextureCube__set_IsDisposed(TextureCube* __this, bool value)
{
    __this->_IsDisposed = value;
}

void TextureCube__set_MipCount(TextureCube* __this, int value)
{
    __this->_MipCount = value;
}

void TextureCube__set_Size(TextureCube* __this, int value)
{
    __this->_Size = value;
}

void TextureCube__Update(TextureCube* __this, int face, ::app::Uno::Buffer* mip0)
{
    if (__this->Format() == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture is immutable and cannot be updated")));
    }
    else
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984);
        ::app::OpenGL::GL__BindTexture(NULL, 34067, __this->GLTextureHandle());
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10240, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10243, 33071);
        ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__TexImage2DFromBuffer(NULL, 34069 + face, __this->Size(), __this->Size(), 0, __this->Format(), mip0);
        ::app::OpenGL::GL__BindTexture(NULL, 34067, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

void TextureCube__Update_1(TextureCube* __this, int face, int firstMip, ::uArray* mips)
{
    if (__this->Format() == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture is immutable and cannot be updated")));
    }
    else
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984);
        ::app::OpenGL::GL__BindTexture(NULL, 34067, __this->GLTextureHandle());
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10240, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, 34067, 10243, 33071);
        int wh = __this->Size();

        for (int i = 0; i < __this->MipCount(); i++)
        {
            if (i >= firstMip)
            {
                ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__TexImage2DFromBuffer(NULL, 34069 + face, wh, wh, i, __this->Format(), ::uPtr< ::uArray*>(mips)->Item< ::app::Uno::Buffer*>(i));
            }

            wh = wh >> 1;

            if (wh < 1)
            {
                wh = 1;
            }

            if (i >= (mips->Length() - firstMip))
            {
                break;
            }
        }

        ::app::OpenGL::GL__BindTexture(NULL, 34067, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextureFilter__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.TextureFilter", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureHelpers__uType* TextureHelpers__typeof()
{
    static ::uStaticStrong<TextureHelpers__uType*> type;
    if (type != NULL) return type;

    type = (TextureHelpers__uType*)::uAllocClassType(sizeof(TextureHelpers__uType), "Uno.Graphics.TextureHelpers");

    type->SetFunctions(4,
        ::uNewFunction("GetMipCount", TextureHelpers__GetMipCount, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMipCount", TextureHelpers__GetMipCount_1, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int2__typeof()),
        ::uNewFunction("GetMipSize", TextureHelpers__GetMipSize, 0, true, ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetMipSize", TextureHelpers__GetMipSize_1, 0, true, ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::TextureCube__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

int TextureHelpers__GetMipCount(::uStatic* __this, int size)
{
    int result = 0;

    do
    {
        result++;
        size = size >> 1;
    }
    while (size > 0);

    return result;
}

int TextureHelpers__GetMipCount_1(::uStatic* __this, ::app::Uno::Int2 size)
{
    int result = 0;

    do
    {
        result++;
        size.X = size.X >> 1;
        size.Y = size.Y >> 1;
    }
    while ((size.X > 0) && (size.Y > 0));

    return result;
}

::app::Uno::Int2 TextureHelpers__GetMipSize(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip)
{
    ::app::Uno::Int2 size = ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->Size();

    if (mip > 0)
    {
        size.X = size.X >> mip;
        size.Y = size.Y >> mip;

        if (size.X < 0)
        {
            size.X = 1;
        }

        if (size.Y < 0)
        {
            size.Y = 1;
        }
    }

    return size;
}

::app::Uno::Int2 TextureHelpers__GetMipSize_1(::uStatic* __this, ::app::Uno::Graphics::TextureCube* texture, int mip)
{
    int size = ::uPtr< ::app::Uno::Graphics::TextureCube*>(texture)->Size();

    if (mip > 0)
    {
        size = size >> mip;

        if (size < 0)
        {
            size = 1;
        }
    }

    return ::app::Uno::Int2__New_2(NULL, size, size);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexAttributeInfo__uType* VertexAttributeInfo__typeof()
{
    static ::uStaticStrong<VertexAttributeInfo__uType*> type;
    if (type != NULL) return type;

    type = (VertexAttributeInfo__uType*)::uAllocStructType(sizeof(VertexAttributeInfo__uType), "Uno.Graphics.VertexAttributeInfo", sizeof(VertexAttributeInfo), 0, 1, 0);

    type->SetStrongRefs(
        "Buffer", offsetof(VertexAttributeInfo, Buffer));

    type->SetFields(4,
        ::uNewField("Buffer", NULL, offsetof(VertexAttributeInfo, Buffer), ::app::Uno::Graphics::VertexBuffer__typeof()),
        ::uNewField("BufferOffset", NULL, offsetof(VertexAttributeInfo, BufferOffset), ::app::Uno::Int__typeof()),
        ::uNewField("BufferStride", NULL, offsetof(VertexAttributeInfo, BufferStride), ::app::Uno::Int__typeof()),
        ::uNewField("Type", NULL, offsetof(VertexAttributeInfo, Type), ::app::Uno::Graphics::VertexAttributeType__typeof()));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* VertexAttributeType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.VertexAttributeType", ::app::Uno::Int__typeof(), 21);

    type->SetLiterals(
        "Undefined", 0LL,
        "Float", 1LL,
        "Float2", 2LL,
        "Float3", 3LL,
        "Float4", 4LL,
        "Short", 5LL,
        "ShortNormalized", 6LL,
        "Short2", 7LL,
        "Short2Normalized", 8LL,
        "Short4", 9LL,
        "Short4Normalized", 10LL,
        "UShort", 11LL,
        "UShortNormalized", 12LL,
        "UShort2", 13LL,
        "UShort2Normalized", 14LL,
        "UShort4", 15LL,
        "UShort4Normalized", 16LL,
        "SByte4", 17LL,
        "SByte4Normalized", 18LL,
        "Byte4", 19LL,
        "Byte4Normalized", 20LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexAttributeTypeHelpers__uType* VertexAttributeTypeHelpers__typeof()
{
    static ::uStaticStrong<VertexAttributeTypeHelpers__uType*> type;
    if (type != NULL) return type;

    type = (VertexAttributeTypeHelpers__uType*)::uAllocClassType(sizeof(VertexAttributeTypeHelpers__uType), "Uno.Graphics.VertexAttributeTypeHelpers");

    type->SetFunctions(1,
        ::uNewFunction("GetStrideInBytes", VertexAttributeTypeHelpers__GetStrideInBytes, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::VertexAttributeType__typeof()));

    ::uRegisterType(type);
    return type;
}

int VertexAttributeTypeHelpers__GetStrideInBytes(::uStatic* __this, int type)
{
    switch (type)
    {
        case 1:
        {
            return 4;
        }
        case 2:
        {
            return 8;
        }
        case 3:
        {
            return 12;
        }
        case 4:
        {
            return 16;
        }
        case 5:
        case 6:
        case 11:
        case 12:
        {
            return 2;
        }
        case 7:
        case 8:
        case 13:
        case 14:
        {
            return 4;
        }
        case 9:
        case 10:
        case 15:
        case 16:
        {
            return 8;
        }
        case 17:
        case 18:
        case 19:
        case 20:
        {
            return 4;
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Invalid VertexAttributeType <"), ::uBox< int>(::app::Uno::Graphics::VertexAttributeType__typeof(), type)), ::uGetConstString(">"))));
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexBuffer__uType* VertexBuffer__typeof()
{
    static ::uStaticStrong<VertexBuffer__uType*> type;
    if (type != NULL) return type;

    type = (VertexBuffer__uType*)::uAllocClassType(sizeof(VertexBuffer__uType), "Uno.Graphics.VertexBuffer", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Graphics::DeviceBuffer__typeof());

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(VertexBuffer__uType, __interface_0));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", VertexBuffer__New_1, 0, true, VertexBuffer__typeof(), ::app::Uno::Buffer__typeof(), ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunction(".ctor", VertexBuffer__New_2, 0, true, VertexBuffer__typeof(), ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunction(".ctor", VertexBuffer__New_3, 0, true, VertexBuffer__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::BufferUsage__typeof()));

    ::uRegisterType(type);
    return type;
}

void VertexBuffer___ObjInit_1(VertexBuffer* __this, ::app::Uno::Buffer* data, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_1(34962, data);
}

void VertexBuffer___ObjInit_2(VertexBuffer* __this, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit(34962);
}

void VertexBuffer___ObjInit_3(VertexBuffer* __this, int sizeInBytes, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_2(34962, sizeInBytes);
}

VertexBuffer* VertexBuffer__New_1(::uStatic* __this, ::app::Uno::Buffer* data, int usage)
{
    VertexBuffer* inst = (VertexBuffer*)::uAllocObject(sizeof(VertexBuffer), VertexBuffer__typeof());
    inst->_ObjInit_1(data, usage);
    return inst;
}

VertexBuffer* VertexBuffer__New_2(::uStatic* __this, int usage)
{
    VertexBuffer* inst = (VertexBuffer*)::uAllocObject(sizeof(VertexBuffer), VertexBuffer__typeof());
    inst->_ObjInit_2(usage);
    return inst;
}

VertexBuffer* VertexBuffer__New_3(::uStatic* __this, int sizeInBytes, int usage)
{
    VertexBuffer* inst = (VertexBuffer*)::uAllocObject(sizeof(VertexBuffer), VertexBuffer__typeof());
    inst->_ObjInit_3(sizeInBytes, usage);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VideoTexture__uType* VideoTexture__typeof()
{
    static ::uStaticStrong<VideoTexture__uType*> type;
    if (type != NULL) return type;

    type = (VideoTexture__uType*)::uAllocClassType(sizeof(VideoTexture__uType), "Uno.Graphics.VideoTexture", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))VideoTexture__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(VideoTexture__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("SupportsMipmap", NULL, offsetof(VideoTexture, SupportsMipmap), ::app::Uno::Bool__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("Dispose", VideoTexture__Dispose, 0, false),
        ::uNewFunction("get_GLTextureHandle", VideoTexture__get_GLTextureHandle, 0, false, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunction("get_IsDisposed", VideoTexture__get_IsDisposed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", VideoTexture__New_1, 0, true, VideoTexture__typeof(), ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunctionVoid("set_GLTextureHandle", VideoTexture__set_GLTextureHandle, 0, false, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunctionVoid("set_IsDisposed", VideoTexture__set_IsDisposed, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void VideoTexture___ObjInit(VideoTexture* __this, ::uUInt handle)
{
    __this->GLTextureHandle(handle);
}

void VideoTexture__Dispose(VideoTexture* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("Texture2D")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteTexture(NULL, __this->GLTextureHandle());
    }

    __this->IsDisposed(true);
}

::uUInt VideoTexture__get_GLTextureHandle(VideoTexture* __this)
{
    return __this->_GLTextureHandle;
}

bool VideoTexture__get_IsDisposed(VideoTexture* __this)
{
    return __this->_IsDisposed;
}

VideoTexture* VideoTexture__New_1(::uStatic* __this, ::uUInt handle)
{
    VideoTexture* inst = (VideoTexture*)::uAllocObject(sizeof(VideoTexture), VideoTexture__typeof());
    inst->_ObjInit(handle);
    return inst;
}

void VideoTexture__set_GLTextureHandle(VideoTexture* __this, ::uUInt value)
{
    __this->_GLTextureHandle = value;
}

void VideoTexture__set_IsDisposed(VideoTexture* __this, bool value)
{
    __this->_IsDisposed = value;
}

}}}
