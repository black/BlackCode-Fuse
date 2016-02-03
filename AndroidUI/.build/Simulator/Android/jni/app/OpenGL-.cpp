#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLBlendEquation.h>
#include <app/OpenGL.GLBlendingFactor.h>
#include <app/OpenGL.GLBufferHandle.h>
#include <app/OpenGL.GLBufferTarget.h>
#include <app/OpenGL.GLBufferUsage.h>
#include <app/OpenGL.GLClearBufferMask.h>
#include <app/OpenGL.GLCullFaceMode.h>
#include <app/OpenGL.GLDataType.h>
#include <app/OpenGL.GLDepthFunction.h>
#include <app/OpenGL.GLEnableCap.h>
#include <app/OpenGL.GLError.h>
#include <app/OpenGL.GLFramebufferAttachment.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/OpenGL.GLFramebufferStatus.h>
#include <app/OpenGL.GLFramebufferTarget.h>
#include <app/OpenGL.GLFrontFaceDirection.h>
#include <app/OpenGL.GLIndexType.h>
#include <app/OpenGL.GLInteger4Name.h>
#include <app/OpenGL.GLIntegerName.h>
#include <app/OpenGL.GLPixelFormat.h>
#include <app/OpenGL.GLPixelStoreParameter.h>
#include <app/OpenGL.GLPixelType.h>
#include <app/OpenGL.GLPrimitiveType.h>
#include <app/OpenGL.GLProgramHandle.h>
#include <app/OpenGL.GLProgramParameter.h>
#include <app/OpenGL.GLRenderbufferHandle.h>
#include <app/OpenGL.GLRenderbufferStorage.h>
#include <app/OpenGL.GLRenderbufferTarget.h>
#include <app/OpenGL.GLShaderHandle.h>
#include <app/OpenGL.GLShaderParameter.h>
#include <app/OpenGL.GLShaderPrecision.h>
#include <app/OpenGL.GLShaderPrecisionFormat.h>
#include <app/OpenGL.GLShaderType.h>
#include <app/OpenGL.GLStringName.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/OpenGL.GLTextureParameterName.h>
#include <app/OpenGL.GLTextureParameterValue.h>
#include <app/OpenGL.GLTextureTarget.h>
#include <app/OpenGL.GLTextureUnit.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float3x3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Int3.h>
#include <app/Uno.Int4.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <XliGL/GL.h>

namespace app {
namespace OpenGL {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GL__uType* GL__typeof()
{
    static ::uStaticStrong<GL__uType*> type;
    if (type != NULL) return type;

    type = (GL__uType*)::uAllocClassType(sizeof(GL__uType), "OpenGL.GL");

    type->SetFunctions(98,
        ::uNewFunctionVoid("ActiveTexture", GL__ActiveTexture, 0, true, ::app::OpenGL::GLTextureUnit__typeof()),
        ::uNewFunctionVoid("AttachShader", GL__AttachShader, 0, true, ::app::OpenGL::GLProgramHandle__typeof(), ::app::OpenGL::GLShaderHandle__typeof()),
        ::uNewFunctionVoid("BindAttribLocation", GL__BindAttribLocation, 0, true, ::app::OpenGL::GLProgramHandle__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("BindBuffer", GL__BindBuffer, 0, true, ::app::OpenGL::GLBufferTarget__typeof(), ::app::OpenGL::GLBufferHandle__typeof()),
        ::uNewFunctionVoid("BindFramebuffer", GL__BindFramebuffer, 0, true, ::app::OpenGL::GLFramebufferTarget__typeof(), ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunctionVoid("BindRenderbuffer", GL__BindRenderbuffer, 0, true, ::app::OpenGL::GLRenderbufferTarget__typeof(), ::app::OpenGL::GLRenderbufferHandle__typeof()),
        ::uNewFunctionVoid("BindTexture", GL__BindTexture, 0, true, ::app::OpenGL::GLTextureTarget__typeof(), ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunctionVoid("BlendEquation", GL__BlendEquation, 0, true, ::app::OpenGL::GLBlendEquation__typeof()),
        ::uNewFunctionVoid("BlendEquationSeparate", GL__BlendEquationSeparate, 0, true, ::app::OpenGL::GLBlendEquation__typeof(), ::app::OpenGL::GLBlendEquation__typeof()),
        ::uNewFunctionVoid("BlendFunc", GL__BlendFunc, 0, true, ::app::OpenGL::GLBlendingFactor__typeof(), ::app::OpenGL::GLBlendingFactor__typeof()),
        ::uNewFunctionVoid("BlendFuncSeparate", GL__BlendFuncSeparate, 0, true, ::app::OpenGL::GLBlendingFactor__typeof(), ::app::OpenGL::GLBlendingFactor__typeof(), ::app::OpenGL::GLBlendingFactor__typeof(), ::app::OpenGL::GLBlendingFactor__typeof()),
        ::uNewFunctionVoid("BufferData", GL__BufferData, 0, true, ::app::OpenGL::GLBufferTarget__typeof(), ::app::Uno::Buffer__typeof(), ::app::OpenGL::GLBufferUsage__typeof()),
        ::uNewFunctionVoid("BufferData", GL__BufferDatai, 0, true, ::app::OpenGL::GLBufferTarget__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLBufferUsage__typeof()),
        ::uNewFunctionVoid("BufferSubData", GL__BufferSubData, 0, true, ::app::OpenGL::GLBufferTarget__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunction("CheckFramebufferStatus", GL__CheckFramebufferStatus, 0, true, ::app::OpenGL::GLFramebufferStatus__typeof(), ::app::OpenGL::GLFramebufferTarget__typeof()),
        ::uNewFunctionVoid("Clear", GL__Clear, 0, true, ::app::OpenGL::GLClearBufferMask__typeof()),
        ::uNewFunctionVoid("ClearColor", GL__ClearColor, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("ClearDepth", GL__ClearDepth, 0, true, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("ColorMask", GL__ColorMask, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("CompileShader", GL__CompileShader, 0, true, ::app::OpenGL::GLShaderHandle__typeof()),
        ::uNewFunction("CreateBuffer", GL__CreateBuffer, 0, true, ::app::OpenGL::GLBufferHandle__typeof()),
        ::uNewFunction("CreateFramebuffer", GL__CreateFramebuffer, 0, true, ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunction("CreateProgram", GL__CreateProgram, 0, true, ::app::OpenGL::GLProgramHandle__typeof()),
        ::uNewFunction("CreateRenderbuffer", GL__CreateRenderbuffer, 0, true, ::app::OpenGL::GLRenderbufferHandle__typeof()),
        ::uNewFunction("CreateShader", GL__CreateShader, 0, true, ::app::OpenGL::GLShaderHandle__typeof(), ::app::OpenGL::GLShaderType__typeof()),
        ::uNewFunction("CreateTexture", GL__CreateTexture, 0, true, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunctionVoid("CullFace", GL__CullFace, 0, true, ::app::OpenGL::GLCullFaceMode__typeof()),
        ::uNewFunctionVoid("DeleteBuffer", GL__DeleteBuffer, 0, true, ::app::OpenGL::GLBufferHandle__typeof()),
        ::uNewFunctionVoid("DeleteFramebuffer", GL__DeleteFramebuffer, 0, true, ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunctionVoid("DeleteProgram", GL__DeleteProgram, 0, true, ::app::OpenGL::GLProgramHandle__typeof()),
        ::uNewFunctionVoid("DeleteRenderbuffer", GL__DeleteRenderbuffer, 0, true, ::app::OpenGL::GLRenderbufferHandle__typeof()),
        ::uNewFunctionVoid("DeleteShader", GL__DeleteShader, 0, true, ::app::OpenGL::GLShaderHandle__typeof()),
        ::uNewFunctionVoid("DeleteTexture", GL__DeleteTexture, 0, true, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewFunctionVoid("DepthFunc", GL__DepthFunc, 0, true, ::app::OpenGL::GLDepthFunction__typeof()),
        ::uNewFunctionVoid("DepthMask", GL__DepthMask, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("DepthRange", GL__DepthRange, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("DetachShader", GL__DetachShader, 0, true, ::app::OpenGL::GLProgramHandle__typeof(), ::app::OpenGL::GLShaderHandle__typeof()),
        ::uNewFunctionVoid("Disable", GL__Disable, 0, true, ::app::OpenGL::GLEnableCap__typeof()),
        ::uNewFunctionVoid("DisableVertexAttribArray", GL__DisableVertexAttribArray, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("DisposeContext", GL__DisposeContext, 0, true),
        ::uNewFunctionVoid("DrawArrays", GL__DrawArrays, 0, true, ::app::OpenGL::GLPrimitiveType__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("DrawElements", GL__DrawElements, 0, true, ::app::OpenGL::GLPrimitiveType__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLIndexType__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Enable", GL__Enable, 0, true, ::app::OpenGL::GLEnableCap__typeof()),
        ::uNewFunctionVoid("EnableVertexAttribArray", GL__EnableVertexAttribArray, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("FramebufferRenderbuffer", GL__FramebufferRenderbuffer, 0, true, ::app::OpenGL::GLFramebufferTarget__typeof(), ::app::OpenGL::GLFramebufferAttachment__typeof(), ::app::OpenGL::GLRenderbufferTarget__typeof(), ::app::OpenGL::GLRenderbufferHandle__typeof()),
        ::uNewFunctionVoid("FramebufferTexture2D", GL__FramebufferTexture2D, 0, true, ::app::OpenGL::GLFramebufferTarget__typeof(), ::app::OpenGL::GLFramebufferAttachment__typeof(), ::app::OpenGL::GLTextureTarget__typeof(), ::app::OpenGL::GLTextureHandle__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("FrontFace", GL__FrontFace, 0, true, ::app::OpenGL::GLFrontFaceDirection__typeof()),
        ::uNewFunctionVoid("GenerateMipmap", GL__GenerateMipmap, 0, true, ::app::OpenGL::GLTextureTarget__typeof()),
        ::uNewFunction("get_HasGetShaderPrecisionFormat", GL__get_HasGetShaderPrecisionFormat, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetAttribLocation", GL__GetAttribLocation, 0, true, ::app::Uno::Int__typeof(), ::app::OpenGL::GLProgramHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetError", GL__GetError, 0, true, ::app::OpenGL::GLError__typeof()),
        ::uNewFunction("GetFramebufferBinding", GL__GetFramebufferBinding, 0, true, ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunction("GetInteger", GL__GetInteger, 0, true, ::app::Uno::Int4__typeof(), ::app::OpenGL::GLInteger4Name__typeof()),
        ::uNewFunction("GetInteger", GL__GetInteger_1, 0, true, ::app::Uno::Int__typeof(), ::app::OpenGL::GLIntegerName__typeof()),
        ::uNewFunction("GetProgramInfoLog", GL__GetProgramInfoLog, 0, true, ::app::Uno::String__typeof(), ::app::OpenGL::GLProgramHandle__typeof()),
        ::uNewFunction("GetProgramParameter", GL__GetProgramParameter, 0, true, ::app::Uno::Int__typeof(), ::app::OpenGL::GLProgramHandle__typeof(), ::app::OpenGL::GLProgramParameter__typeof()),
        ::uNewFunction("GetRenderbufferBinding", GL__GetRenderbufferBinding, 0, true, ::app::OpenGL::GLRenderbufferHandle__typeof()),
        ::uNewFunction("GetShaderInfoLog", GL__GetShaderInfoLog, 0, true, ::app::Uno::String__typeof(), ::app::OpenGL::GLShaderHandle__typeof()),
        ::uNewFunction("GetShaderParameter", GL__GetShaderParameter, 0, true, ::app::Uno::Int__typeof(), ::app::OpenGL::GLShaderHandle__typeof(), ::app::OpenGL::GLShaderParameter__typeof()),
        ::uNewFunction("GetShaderPrecisionFormat", GL__GetShaderPrecisionFormat, 0, true, ::app::OpenGL::GLShaderPrecisionFormat__typeof(), ::app::OpenGL::GLShaderType__typeof(), ::app::OpenGL::GLShaderPrecision__typeof()),
        ::uNewFunction("GetString", GL__GetString, 0, true, ::app::Uno::String__typeof(), ::app::OpenGL::GLStringName__typeof()),
        ::uNewFunction("GetUniformLocation", GL__GetUniformLocation, 0, true, ::app::Uno::Int__typeof(), ::app::OpenGL::GLProgramHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("LineWidth", GL__LineWidth, 0, true, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("LinkProgram", GL__LinkProgram, 0, true, ::app::OpenGL::GLProgramHandle__typeof()),
        ::uNewFunctionVoid("PixelStore", GL__PixelStore, 0, true, ::app::OpenGL::GLPixelStoreParameter__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("PolygonOffset", GL__PolygonOffset, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("ReadPixels", GL__ReadPixels, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLPixelFormat__typeof(), ::app::OpenGL::GLPixelType__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("RenderbufferStorage", GL__RenderbufferStorage, 0, true, ::app::OpenGL::GLRenderbufferTarget__typeof(), ::app::OpenGL::GLRenderbufferStorage__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Scissor", GL__Scissor, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ShaderSource", GL__ShaderSource, 0, true, ::app::OpenGL::GLShaderHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("TexImage2D", GL__TexImage2D, 0, true, ::app::OpenGL::GLTextureTarget__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLPixelFormat__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLPixelFormat__typeof(), ::app::OpenGL::GLPixelType__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("TexImage2D", GL__TexImage2D_1, 0, true, ::app::OpenGL::GLTextureTarget__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLPixelFormat__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLPixelFormat__typeof(), ::app::OpenGL::GLPixelType__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("TexParameter", GL__TexParameteri, 0, true, ::app::OpenGL::GLTextureTarget__typeof(), ::app::OpenGL::GLTextureParameterName__typeof(), ::app::OpenGL::GLTextureParameterValue__typeof()),
        ::uNewFunctionVoid("Uniform1", GL__Uniform1f, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Uniform1", GL__Uniform1fv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunctionVoid("Uniform1", GL__Uniform1i, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Uniform1", GL__Uniform1iv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewFunctionVoid("Uniform2", GL__Uniform2f, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Uniform2", GL__Uniform2fv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunctionVoid("Uniform2", GL__Uniform2i, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("Uniform2", GL__Uniform2iv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Int2__typeof())),
        ::uNewFunctionVoid("Uniform3", GL__Uniform3f, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("Uniform3", GL__Uniform3fv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float3__typeof())),
        ::uNewFunctionVoid("Uniform3", GL__Uniform3i, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int3__typeof()),
        ::uNewFunctionVoid("Uniform3", GL__Uniform3iv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Int3__typeof())),
        ::uNewFunctionVoid("Uniform4", GL__Uniform4f, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("Uniform4", GL__Uniform4fv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float4__typeof())),
        ::uNewFunctionVoid("Uniform4", GL__Uniform4i, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int4__typeof()),
        ::uNewFunctionVoid("Uniform4", GL__Uniform4iv, 0, true, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Int4__typeof())),
        ::uNewFunctionVoid("UniformMatrix2", GL__UniformMatrix2f, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Float2x2__typeof()),
        ::uNewFunctionVoid("UniformMatrix2", GL__UniformMatrix2fv, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::uGetArrayType(::app::Uno::Float2x2__typeof())),
        ::uNewFunctionVoid("UniformMatrix3", GL__UniformMatrix3f, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Float3x3__typeof()),
        ::uNewFunctionVoid("UniformMatrix3", GL__UniformMatrix3fv, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::uGetArrayType(::app::Uno::Float3x3__typeof())),
        ::uNewFunctionVoid("UniformMatrix4", GL__UniformMatrix4f, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunctionVoid("UniformMatrix4", GL__UniformMatrix4fv, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::uGetArrayType(::app::Uno::Float4x4__typeof())),
        ::uNewFunctionVoid("UseProgram", GL__UseProgram, 0, true, ::app::OpenGL::GLProgramHandle__typeof()),
        ::uNewFunctionVoid("VertexAttribPointer", GL__VertexAttribPointer, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLDataType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Viewport", GL__Viewport, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void GL__ActiveTexture(::uStatic* __this, int texture_)
{
    glActiveTexture(texture_);
}

void GL__AttachShader(::uStatic* __this, ::uUInt program_, ::uUInt shader_)
{
    glAttachShader(program_, shader_);
}

void GL__BindAttribLocation(::uStatic* __this, ::uUInt handle_, int index_, ::uString* name_)
{
    glBindAttribLocation(handle_, index_, uStringToXliString(name_).Ptr());
}

void GL__BindBuffer(::uStatic* __this, int target_, ::uUInt buffer_)
{
    glBindBuffer(target_, buffer_);
}

void GL__BindFramebuffer(::uStatic* __this, int target_, ::uUInt fb_)
{
    glBindFramebuffer(target_, fb_);
}

void GL__BindRenderbuffer(::uStatic* __this, int target_, ::uUInt renderbuffer_)
{
    glBindRenderbuffer(target_, renderbuffer_);
}

void GL__BindTexture(::uStatic* __this, int target_, ::uUInt texture_)
{
    glBindTexture(target_, texture_);
}

void GL__BlendEquation(::uStatic* __this, int mode_)
{
    glBlendEquation(mode_);
}

void GL__BlendEquationSeparate(::uStatic* __this, int modeRgb_, int modeAlpha_)
{
    glBlendEquationSeparate(modeRgb_, modeAlpha_);
}

void GL__BlendFunc(::uStatic* __this, int src_, int dst_)
{
    glBlendFunc(src_, dst_);
}

void GL__BlendFuncSeparate(::uStatic* __this, int srcRGB_, int dstRGB_, int srcAlpha_, int dstAlpha_)
{
    glBlendFuncSeparate(srcRGB_, dstRGB_, srcAlpha_, dstAlpha_);
}

void GL__BufferData(::uStatic* __this, int target_, ::app::Uno::Buffer* data_, int usage_)
{
    glBufferData(target_, U_BUFFER_SIZE(data_), U_BUFFER_PTR(data_), usage_);
}

void GL__BufferDatai(::uStatic* __this, int target_, int sizeInBytes_, int usage_)
{
    glBufferData(target_, sizeInBytes_, NULL, usage_);
}

void GL__BufferSubData(::uStatic* __this, int target_, int offset_, ::app::Uno::Buffer* data_)
{
    glBufferSubData(target_, offset_, U_BUFFER_SIZE(data_), U_BUFFER_PTR(data_));
}

int GL__CheckFramebufferStatus(::uStatic* __this, int target_)
{
    return glCheckFramebufferStatus(target_);
}

void GL__Clear(::uStatic* __this, int mask_)
{
    glClear(mask_);
}

void GL__ClearColor(::uStatic* __this, float red_, float green_, float blue_, float alpha_)
{
    glClearColor(red_, green_, blue_, alpha_);
}

void GL__ClearDepth(::uStatic* __this, float depth_)
{
    #ifdef XLI_GL_DESKTOP
                    glClearDepth((double)depth_);
    #else
                    glClearDepthf(depth_);
    #endif
}

void GL__ColorMask(::uStatic* __this, bool red_, bool green_, bool blue_, bool alpha_)
{
    glColorMask(red_, green_, blue_, alpha_);
}

void GL__CompileShader(::uStatic* __this, ::uUInt shader_)
{
    glCompileShader(shader_);
}

::uUInt GL__CreateBuffer(::uStatic* __this)
{
    GLuint handle;
    glGenBuffers(1, &handle);
    return handle;
}

::uUInt GL__CreateFramebuffer(::uStatic* __this)
{
    GLuint handle;
    glGenFramebuffers(1, &handle);
    return handle;
}

::uUInt GL__CreateProgram(::uStatic* __this)
{
    return glCreateProgram();
}

::uUInt GL__CreateRenderbuffer(::uStatic* __this)
{
    GLuint handle;
    glGenRenderbuffers(1, &handle);
    return handle;
}

::uUInt GL__CreateShader(::uStatic* __this, int type_)
{
    return glCreateShader(type_);
}

::uUInt GL__CreateTexture(::uStatic* __this)
{
    GLuint handle;
    glGenTextures(1, &handle);
    return handle;
}

void GL__CullFace(::uStatic* __this, int mode_)
{
    glCullFace(mode_);
}

void GL__DeleteBuffer(::uStatic* __this, ::uUInt buffer_)
{
    glDeleteBuffers(1, &buffer_);
}

void GL__DeleteFramebuffer(::uStatic* __this, ::uUInt fb_)
{
    glDeleteFramebuffers(1, &fb_);
}

void GL__DeleteProgram(::uStatic* __this, ::uUInt program_)
{
    glDeleteProgram(program_);
}

void GL__DeleteRenderbuffer(::uStatic* __this, ::uUInt renderbuffer_)
{
    glDeleteRenderbuffers(1, &renderbuffer_);
}

void GL__DeleteShader(::uStatic* __this, ::uUInt shader_)
{
    glDeleteShader(shader_);
}

void GL__DeleteTexture(::uStatic* __this, ::uUInt texture_)
{
    glDeleteTextures(1, &texture_);
}

void GL__DepthFunc(::uStatic* __this, int func_)
{
    glDepthFunc(func_);
}

void GL__DepthMask(::uStatic* __this, bool flag_)
{
    glDepthMask(flag_);
}

void GL__DepthRange(::uStatic* __this, float zNear_, float zFar_)
{
    #ifdef XLI_GL_DESKTOP
                    glDepthRange(zNear_, zFar_);
    #else
                    glDepthRangef(zNear_, zFar_);
    #endif
}

void GL__DetachShader(::uStatic* __this, ::uUInt program_, ::uUInt shader_)
{
    glDetachShader(program_, shader_);
}

void GL__Disable(::uStatic* __this, int cap_)
{
    glDisable(cap_);
}

void GL__DisableVertexAttribArray(::uStatic* __this, int index_)
{
    glDisableVertexAttribArray(index_);
}

void GL__DisposeContext(::uStatic* __this)
{
    /*TODO*/
}

void GL__DrawArrays(::uStatic* __this, int mode_, int first_, int count_)
{
    glDrawArrays(mode_, first_, count_);
}

void GL__DrawElements(::uStatic* __this, int mode_, int count_, int type_, int offset_)
{
    glDrawElements(mode_, count_, type_, (const GLvoid*)(size_t)offset_);
}

void GL__Enable(::uStatic* __this, int cap_)
{
    glEnable(cap_);
}

void GL__EnableVertexAttribArray(::uStatic* __this, int index_)
{
    glEnableVertexAttribArray(index_);
}

void GL__FramebufferRenderbuffer(::uStatic* __this, int target_, int attachment_, int renderbuffertarget_, ::uUInt renderbuffer_)
{
    glFramebufferRenderbuffer(target_, attachment_, renderbuffertarget_, renderbuffer_);
}

void GL__FramebufferTexture2D(::uStatic* __this, int target_, int attachment_, int textarget_, ::uUInt texture_, int level_)
{
    glFramebufferTexture2D(target_, attachment_, textarget_, texture_, level_);
}

void GL__FrontFace(::uStatic* __this, int mode_)
{
    glFrontFace(mode_);
}

void GL__GenerateMipmap(::uStatic* __this, int target_)
{
    glGenerateMipmap(target_);
}

bool GL__get_HasGetShaderPrecisionFormat(::uStatic* __this)
{
    #ifdef XLI_GL_DESKTOP
                    return glGetShaderPrecisionFormat != NULL;
    #else
                    return true;
    #endif
}

int GL__GetAttribLocation(::uStatic* __this, ::uUInt program_, ::uString* name_)
{
    return glGetAttribLocation(program_, uStringToXliString(name_).Ptr());
}

int GL__GetError(::uStatic* __this)
{
    return glGetError();
}

::uUInt GL__GetFramebufferBinding(::uStatic* __this)
{
    GLuint result;
    glGetIntegerv(GL_FRAMEBUFFER_BINDING, (GLint*)&result);
    return result;
}

::app::Uno::Int4 GL__GetInteger(::uStatic* __this, int name_)
{
    ::app::Uno::Int4 result;
    glGetIntegerv(name_, (GLint*)&result);
    return result;
}

int GL__GetInteger_1(::uStatic* __this, int name_)
{
    int result;
    glGetIntegerv(name_, (GLint*)&result);
    return result;
}

::uString* GL__GetProgramInfoLog(::uStatic* __this, ::uUInt program_)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetProgramInfoLog(program_, bufSize, &len, buf);
    return uNewStringAnsi(buf, len);
}

int GL__GetProgramParameter(::uStatic* __this, ::uUInt program_, int pname_)
{
    GLint result;
    glGetProgramiv(program_, pname_, &result);
    return result;
}

::uUInt GL__GetRenderbufferBinding(::uStatic* __this)
{
    GLuint result;
    glGetIntegerv(GL_RENDERBUFFER_BINDING, (GLint*)&result);
    return result;
}

::uString* GL__GetShaderInfoLog(::uStatic* __this, ::uUInt shader_)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetShaderInfoLog(shader_, bufSize, &len, buf);
    return uNewStringAnsi(buf, len);
}

int GL__GetShaderParameter(::uStatic* __this, ::uUInt shader_, int pname_)
{
    GLint result;
    glGetShaderiv(shader_, pname_, &result);
    return result;
}

::app::OpenGL::GLShaderPrecisionFormat GL__GetShaderPrecisionFormat(::uStatic* __this, int shaderType_, int precision_)
{
    ::app::OpenGL::GLShaderPrecisionFormat result;
    glGetShaderPrecisionFormat(shaderType_, precision_, &result.RangeMin, &result.Precision);
    return result;
}

::uString* GL__GetString(::uStatic* __this, int name_)
{
    const char* str = (const char*)glGetString(name_);
    if (!str) str = "";
    return ::uNewStringAnsi(str);
}

int GL__GetUniformLocation(::uStatic* __this, ::uUInt program_, ::uString* name_)
{
    return glGetUniformLocation(program_, uStringToXliString(name_).Ptr());
}

void GL__LineWidth(::uStatic* __this, float width_)
{
    glLineWidth(width_);
}

void GL__LinkProgram(::uStatic* __this, ::uUInt program_)
{
    glLinkProgram(program_);
}

void GL__PixelStore(::uStatic* __this, int pname_, int param_)
{
    glPixelStorei(pname_, param_);
}

void GL__PolygonOffset(::uStatic* __this, float factor_, float units_)
{
    glPolygonOffset(factor_, units_);
}

void GL__ReadPixels(::uStatic* __this, int x_, int y_, int width_, int height_, int format_, int type_, ::uArray* data_)
{
    glReadPixels(x_, y_, width_, height_, format_, type_, (uByte*)data_->_ptr);
}

void GL__RenderbufferStorage(::uStatic* __this, int target_, int internalFormat_, int width_, int height_)
{
    glRenderbufferStorage(target_, internalFormat_, width_, height_);
}

void GL__Scissor(::uStatic* __this, int x_, int y_, int width_, int height_)
{
    glScissor(x_, y_, width_, height_);
}

void GL__ShaderSource(::uStatic* __this, ::uUInt shader_, ::uString* source_)
{
    Xli::String source = uStringToXliString(source_);
    
    const char* code[] =
    {
    #ifdef XLI_GL_DESKTOP
        "#version 120\n",
    #else
        "",
    #endif
        source.Ptr(),
    };
    
    GLint len[] =
    {
        (GLint)strlen(code[0]),
        source.Length(),
    };
    
    glShaderSource(shader_, 2, code, len);
}

void GL__TexImage2D(::uStatic* __this, int target_, int level_, int internalFormat_, int width_, int height_, int border_, int format_, int type_, ::app::Uno::Buffer* data_)
{
    glTexImage2D(target_, level_, internalFormat_, width_, height_, border_, format_, type_, data_ ? U_BUFFER_PTR(data_) : NULL);
}

void GL__TexImage2D_1(::uStatic* __this, int target_, int level_, int internalFormat_, int width_, int height_, int border_, int format_, int type_, void* data_)
{
    glTexImage2D(target_, level_, internalFormat_, width_, height_, border_, format_, type_, data_);
}

void GL__TexParameteri(::uStatic* __this, int target_, int pname_, int param_)
{
    glTexParameteri(target_, pname_, param_);
}

void GL__Uniform1f(::uStatic* __this, int location_, float value_)
{
    glUniform1f(location_, value_);
}

void GL__Uniform1fv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform1fv(location_, value_->Length(), (const GLfloat*)value_->Ptr());
}

void GL__Uniform1i(::uStatic* __this, int location_, int value_)
{
    glUniform1i(location_, value_);
}

void GL__Uniform1iv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform1iv(location_, value_->Length(), (const GLint*)value_->Ptr());
}

void GL__Uniform2f(::uStatic* __this, int location_, ::app::Uno::Float2 value_)
{
    glUniform2fv(location_, 1, (const GLfloat*)&value_);
}

void GL__Uniform2fv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform2fv(location_, value_->Length(), (const GLfloat*)value_->Ptr());
}

void GL__Uniform2i(::uStatic* __this, int location_, ::app::Uno::Int2 value_)
{
    glUniform2iv(location_, 1, (const GLint*)&value_);
}

void GL__Uniform2iv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform2iv(location_, value_->Length(), (const GLint*)value_->Ptr());
}

void GL__Uniform3f(::uStatic* __this, int location_, ::app::Uno::Float3 value_)
{
    glUniform3fv(location_, 1, (const GLfloat*)&value_);
}

void GL__Uniform3fv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform3fv(location_, value_->Length(), (const GLfloat*)value_->Ptr());
}

void GL__Uniform3i(::uStatic* __this, int location_, ::app::Uno::Int3 value_)
{
    glUniform3iv(location_, 1, (const GLint*)&value_);
}

void GL__Uniform3iv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform3iv(location_, value_->Length(), (const GLint*)value_->Ptr());
}

void GL__Uniform4f(::uStatic* __this, int location_, ::app::Uno::Float4 value_)
{
    glUniform4fv(location_, 1, (const GLfloat*)&value_);
}

void GL__Uniform4fv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform4fv(location_, value_->Length(), (const GLfloat*)value_->Ptr());
}

void GL__Uniform4i(::uStatic* __this, int location_, ::app::Uno::Int4 value_)
{
    glUniform4iv(location_, 1, (const GLint*)&value_);
}

void GL__Uniform4iv(::uStatic* __this, int location_, ::uArray* value_)
{
    glUniform4iv(location_, value_->Length(), (const GLint*)value_->Ptr());
}

void GL__UniformMatrix2f(::uStatic* __this, int location_, bool transpose_, ::app::Uno::Float2x2 value_)
{
    glUniformMatrix2fv(location_, 1, transpose_, (const GLfloat*)&value_);
}

void GL__UniformMatrix2fv(::uStatic* __this, int location_, bool transpose_, ::uArray* value_)
{
    glUniformMatrix2fv(location_, value_->Length(), transpose_, (const GLfloat*)value_->Ptr());
}

void GL__UniformMatrix3f(::uStatic* __this, int location_, bool transpose_, ::app::Uno::Float3x3 value_)
{
    glUniformMatrix3fv(location_, 1, transpose_, (const GLfloat*)&value_);
}

void GL__UniformMatrix3fv(::uStatic* __this, int location_, bool transpose_, ::uArray* value_)
{
    glUniformMatrix3fv(location_, value_->Length(), transpose_, (const GLfloat*)value_->Ptr());
}

void GL__UniformMatrix4f(::uStatic* __this, int location_, bool transpose_, ::app::Uno::Float4x4 value_)
{
    glUniformMatrix4fv(location_, 1, transpose_, (const GLfloat*)&value_);
}

void GL__UniformMatrix4fv(::uStatic* __this, int location_, bool transpose_, ::uArray* value_)
{
    glUniformMatrix4fv(location_, value_->Length(), transpose_, (const GLfloat*)value_->Ptr());
}

void GL__UseProgram(::uStatic* __this, ::uUInt program_)
{
    glUseProgram(program_);
}

void GL__VertexAttribPointer(::uStatic* __this, int index_, int size_, int type_, bool normalized_, int stride_, int offset_)
{
    glVertexAttribPointer(index_, size_, type_, normalized_, stride_, (const GLvoid*)(size_t)offset_);
}

void GL__Viewport(::uStatic* __this, int x_, int y_, int width_, int height_)
{
    glViewport(x_, y_, width_, height_);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLBlendEquation__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLBlendEquation", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "FuncAdd", 32774LL,
        "FuncSubtract", 32778LL,
        "FuncReverseSubtract", 32779LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLBlendingFactor__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLBlendingFactor", ::app::Uno::Int__typeof(), 11);

    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcColor", 768LL,
        "OneMinusSrcColor", 769LL,
        "SrcAlpha", 770LL,
        "OneMinusSrcAlpha", 771LL,
        "DstAlpha", 772LL,
        "OneMinusDstAlpha", 773LL,
        "DstColor", 774LL,
        "OneMinusDstColor", 775LL,
        "SrcAlphaSaturate", 776LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uUInt GLBufferHandle__Zero;

GLBufferHandle__uType* GLBufferHandle__typeof()
{
    static ::uStaticStrong<GLBufferHandle__uType*> type;
    if (type != NULL) return type;

    type = (GLBufferHandle__uType*)::uAllocStructType(sizeof(GLBufferHandle__uType), "OpenGL.GLBufferHandle", sizeof(::uUInt), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLBufferHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))GLBufferHandle__GetHashCode;

    type->SetFields(1,
        ::uNewField("Zero", &GLBufferHandle__Zero, 0, GLBufferHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

bool GLBufferHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLBufferHandle__typeof(), *__this), obj);
}

int GLBufferHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLBufferHandle__typeof(), *__this));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLBufferTarget__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLBufferTarget", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "ArrayBuffer", 34962LL,
        "ElementArrayBuffer", 34963LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLBufferUsage__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLBufferUsage", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "StreamDraw", 35040LL,
        "StaticDraw", 35044LL,
        "DynamicDraw", 35048LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLClearBufferMask__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLClearBufferMask", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "DepthBufferBit", 256LL,
        "StencilBufferBit", 1024LL,
        "ColorBufferBit", 16384LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLCullFaceMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLCullFaceMode", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "None", 0LL,
        "Front", 1028LL,
        "Back", 1029LL,
        "FrontAndBack", 1032LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLDataType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLDataType", ::app::Uno::Int__typeof(), 7);

    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLDepthFunction__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLDepthFunction", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Never", 512LL,
        "Less", 513LL,
        "Equal", 514LL,
        "Lequal", 515LL,
        "Greater", 516LL,
        "Notequal", 517LL,
        "Gequal", 518LL,
        "Always", 519LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLEnableCap__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLEnableCap", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Blend", 3042LL,
        "DepthTest", 2929LL,
        "CullFace", 2884LL,
        "ScissorTest", 3089LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLError__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLError", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "NoError", 0LL,
        "InvalidEnum", 1280LL,
        "InvalidValue", 1281LL,
        "InvalidOperation", 1282LL,
        "OutOfMemory", 1285LL,
        "InvalidFramebufferOperation", 1286LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLFramebufferAttachment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLFramebufferAttachment", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "ColorAttachment0", 36064LL,
        "DepthAttachment", 36096LL,
        "StencilAttachment", 36128LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uUInt GLFramebufferHandle__Zero;

GLFramebufferHandle__uType* GLFramebufferHandle__typeof()
{
    static ::uStaticStrong<GLFramebufferHandle__uType*> type;
    if (type != NULL) return type;

    type = (GLFramebufferHandle__uType*)::uAllocStructType(sizeof(GLFramebufferHandle__uType), "OpenGL.GLFramebufferHandle", sizeof(::uUInt), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLFramebufferHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))GLFramebufferHandle__GetHashCode;

    type->SetFields(1,
        ::uNewField("Zero", &GLFramebufferHandle__Zero, 0, GLFramebufferHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

bool GLFramebufferHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLFramebufferHandle__typeof(), *__this), obj);
}

int GLFramebufferHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLFramebufferHandle__typeof(), *__this));
}

bool GLFramebufferHandle__op_Inequality(::uStatic* __this, ::uUInt left, ::uUInt right)
{
    return left != right;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLFramebufferStatus__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLFramebufferStatus", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "FramebufferComplete", 36053LL,
        "FramebufferIncompleteAttachment", 36054LL,
        "FramebufferIncompleteMissingAttachment", 36055LL,
        "FramebufferIncompleteDimensions", 36057LL,
        "FramebufferUnsupported", 36061LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLFramebufferTarget__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLFramebufferTarget", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "Framebuffer", 36160LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLFrontFaceDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLFrontFaceDirection", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Cw", 2304LL,
        "Ccw", 2305LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLIndexType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLIndexType", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "UnsignedByte", 5121LL,
        "UnsignedShort", 5123LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLInteger4Name__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLInteger4Name", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "ScissorBox", 3088LL,
        "Viewport", 2978LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLIntegerName__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLIntegerName", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "MaxTextureSize", 3379LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLPixelFormat__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLPixelFormat", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "DepthComponent", 6402LL,
        "Alpha", 6406LL,
        "Bgr", 32992LL,
        "Bgra", 32993LL,
        "Red", 6403LL,
        "Rg", 33319LL,
        "Rgb", 6407LL,
        "Rgba", 6408LL,
        "Luminance", 6409LL,
        "LuminanceAlpha", 6410LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLPixelStoreParameter__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLPixelStoreParameter", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "UnpackAlignment", 3317LL,
        "PackAlignment", 3333LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLPixelType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLPixelType", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL,
        "UnsignedShort4444", 32819LL,
        "UnsignedShort5551", 32820LL,
        "UnsignedShort565", 33635LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLPrimitiveType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLPrimitiveType", ::app::Uno::Int__typeof(), 7);

    type->SetLiterals(
        "Points", 0LL,
        "Lines", 1LL,
        "LineLoop", 2LL,
        "LineStrip", 3LL,
        "Triangles", 4LL,
        "TriangleStrip", 5LL,
        "TriangleFan", 6LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uUInt GLProgramHandle__Zero;

GLProgramHandle__uType* GLProgramHandle__typeof()
{
    static ::uStaticStrong<GLProgramHandle__uType*> type;
    if (type != NULL) return type;

    type = (GLProgramHandle__uType*)::uAllocStructType(sizeof(GLProgramHandle__uType), "OpenGL.GLProgramHandle", sizeof(::uUInt), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLProgramHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))GLProgramHandle__GetHashCode;

    type->SetFields(1,
        ::uNewField("Zero", &GLProgramHandle__Zero, 0, GLProgramHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

bool GLProgramHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLProgramHandle__typeof(), *__this), obj);
}

int GLProgramHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLProgramHandle__typeof(), *__this));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLProgramParameter__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLProgramParameter", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "DeleteStatus", 35712LL,
        "LinkStatus", 35714LL,
        "AttachedShaders", 35717LL,
        "ActiveUniforms", 35718LL,
        "ActiveAttributes", 35721LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uUInt GLRenderbufferHandle__Zero;

GLRenderbufferHandle__uType* GLRenderbufferHandle__typeof()
{
    static ::uStaticStrong<GLRenderbufferHandle__uType*> type;
    if (type != NULL) return type;

    type = (GLRenderbufferHandle__uType*)::uAllocStructType(sizeof(GLRenderbufferHandle__uType), "OpenGL.GLRenderbufferHandle", sizeof(::uUInt), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLRenderbufferHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))GLRenderbufferHandle__GetHashCode;

    type->SetFields(1,
        ::uNewField("Zero", &GLRenderbufferHandle__Zero, 0, GLRenderbufferHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

bool GLRenderbufferHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLRenderbufferHandle__typeof(), *__this), obj);
}

int GLRenderbufferHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLRenderbufferHandle__typeof(), *__this));
}

bool GLRenderbufferHandle__op_Inequality(::uStatic* __this, ::uUInt left, ::uUInt right)
{
    return left != right;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLRenderbufferStorage__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLRenderbufferStorage", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "DepthComponent16", 33189LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLRenderbufferTarget__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLRenderbufferTarget", ::app::Uno::Int__typeof(), 1);

    type->SetLiterals(
        "Renderbuffer", 36161LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uUInt GLShaderHandle__Zero;

GLShaderHandle__uType* GLShaderHandle__typeof()
{
    static ::uStaticStrong<GLShaderHandle__uType*> type;
    if (type != NULL) return type;

    type = (GLShaderHandle__uType*)::uAllocStructType(sizeof(GLShaderHandle__uType), "OpenGL.GLShaderHandle", sizeof(::uUInt), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLShaderHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))GLShaderHandle__GetHashCode;

    type->SetFields(1,
        ::uNewField("Zero", &GLShaderHandle__Zero, 0, GLShaderHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

bool GLShaderHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLShaderHandle__typeof(), *__this), obj);
}

int GLShaderHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLShaderHandle__typeof(), *__this));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLShaderParameter__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLShaderParameter", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "ShaderType", 35663LL,
        "DeleteStatus", 35712LL,
        "CompileStatus", 35713LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLShaderPrecision__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLShaderPrecision", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "LowFloat", 36336LL,
        "MediumFloat", 36337LL,
        "HighFloat", 36338LL,
        "LowInt", 36339LL,
        "MediumInt", 36340LL,
        "HighInt", 36341LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GLShaderPrecisionFormat__uType* GLShaderPrecisionFormat__typeof()
{
    static ::uStaticStrong<GLShaderPrecisionFormat__uType*> type;
    if (type != NULL) return type;

    type = (GLShaderPrecisionFormat__uType*)::uAllocStructType(sizeof(GLShaderPrecisionFormat__uType), "OpenGL.GLShaderPrecisionFormat", sizeof(GLShaderPrecisionFormat), 0, 0, 0);

    type->SetFields(3,
        ::uNewField("Precision", NULL, offsetof(GLShaderPrecisionFormat, Precision), ::app::Uno::Int__typeof()),
        ::uNewField("RangeMax", NULL, offsetof(GLShaderPrecisionFormat, RangeMax), ::app::Uno::Int__typeof()),
        ::uNewField("RangeMin", NULL, offsetof(GLShaderPrecisionFormat, RangeMin), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLShaderType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLShaderType", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "FragmentShader", 35632LL,
        "VertexShader", 35633LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLStringName__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLStringName", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Vendor", 7936LL,
        "Renderer", 7937LL,
        "Version", 7938LL,
        "Extensions", 7939LL,
        "ShadingLanguageVersion", 35724LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uUInt GLTextureHandle__Zero;

GLTextureHandle__uType* GLTextureHandle__typeof()
{
    static ::uStaticStrong<GLTextureHandle__uType*> type;
    if (type != NULL) return type;

    type = (GLTextureHandle__uType*)::uAllocStructType(sizeof(GLTextureHandle__uType), "OpenGL.GLTextureHandle", sizeof(::uUInt), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLTextureHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))GLTextureHandle__GetHashCode;

    type->SetFields(1,
        ::uNewField("Zero", &GLTextureHandle__Zero, 0, GLTextureHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

bool GLTextureHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLTextureHandle__typeof(), *__this), obj);
}

int GLTextureHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLTextureHandle__typeof(), *__this));
}

bool GLTextureHandle__op_Equality(::uStatic* __this, ::uUInt left, ::uUInt right)
{
    return left == right;
}

int GLTextureHandle__op_Explicit(::uStatic* __this, ::uUInt handle)
{
    return handle;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLTextureParameterName__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLTextureParameterName", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "WrapS", 10242LL,
        "WrapT", 10243LL,
        "MagFilter", 10240LL,
        "MinFilter", 10241LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLTextureParameterValue__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLTextureParameterValue", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Repeat", 10497LL,
        "ClampToEdge", 33071LL,
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLTextureTarget__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLTextureTarget", ::app::Uno::Int__typeof(), 9);

    type->SetLiterals(
        "Texture2D", 3553LL,
        "TextureCubeMap", 34067LL,
        "TextureCubeMapPositiveX", 34069LL,
        "TextureCubeMapNegativeX", 34070LL,
        "TextureCubeMapPositiveY", 34071LL,
        "TextureCubeMapNegativeY", 34072LL,
        "TextureCubeMapPositiveZ", 34073LL,
        "TextureCubeMapNegativeZ", 34074LL,
        "TextureExternalOES", 36197LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* GLTextureUnit__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("OpenGL.GLTextureUnit", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Texture0", 33984LL,
        "Texture1", 33985LL,
        "Texture2", 33986LL,
        "Texture3", 33987LL,
        "Texture4", 33988LL,
        "Texture5", 33989LL,
        "Texture6", 33990LL,
        "Texture7", 33991LL);

    ::uRegisterType(type);
    return type;
}

}}
