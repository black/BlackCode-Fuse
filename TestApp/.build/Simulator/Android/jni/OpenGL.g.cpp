// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GL.h>
#include <OpenGL.GLBlendEquation.h>
#include <OpenGL.GLBlendingFactor.h>
#include <OpenGL.GLBufferHandle.h>
#include <OpenGL.GLBufferTarget.h>
#include <OpenGL.GLBufferUsage.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLCullFaceMode.h>
#include <OpenGL.GLDataType.h>
#include <OpenGL.GLDepthFunction.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferAttachment.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferStatus.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLFrontFaceDirection.h>
#include <OpenGL.GLIndexType.h>
#include <OpenGL.GLInteger4Name.h>
#include <OpenGL.GLIntegerName.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLPrimitiveType.h>
#include <OpenGL.GLProgramHandle.h>
#include <OpenGL.GLProgramParameter.h>
#include <OpenGL.GLRenderbufferHandle.h>
#include <OpenGL.GLRenderbufferStorage.h>
#include <OpenGL.GLRenderbufferTarget.h>
#include <OpenGL.GLShaderHandle.h>
#include <OpenGL.GLShaderParameter.h>
#include <OpenGL.GLShaderType.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureParameterName.h>
#include <OpenGL.GLTextureParameterValue.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGL.GLTextureUnit.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Int4.h>
#include <Uno.String.h>
#include <Uno/XliInterop.h>
#include <XliGL/GL.h>

namespace g{
namespace OpenGL{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(9)
// -----------------------------------------------------------------

// public static extern class GL :9
// {
uClassType* GL_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OpenGL.GL", options);
    type->Reflection.SetFunctions(74,
        new uFunction("ActiveTexture", NULL, (void*)GL__ActiveTexture_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureUnit_typeof()),
        new uFunction("AttachShader", NULL, (void*)GL__AttachShader_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("BindBuffer", NULL, (void*)GL__BindBuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLBufferTarget_typeof(), ::g::OpenGL::GLBufferHandle_typeof()),
        new uFunction("BindFramebuffer", NULL, (void*)GL__BindFramebuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferHandle_typeof()),
        new uFunction("BindRenderbuffer", NULL, (void*)GL__BindRenderbuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("BindTexture", NULL, (void*)GL__BindTexture_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureHandle_typeof()),
        new uFunction("BlendFuncSeparate", NULL, (void*)GL__BlendFuncSeparate_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof()),
        new uFunction("BufferData", NULL, (void*)GL__BufferData_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLBufferUsage_typeof()),
        new uFunction("BufferData", NULL, (void*)GL__BufferData1_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Buffer_typeof(), ::g::OpenGL::GLBufferUsage_typeof()),
        new uFunction("BufferSubData", NULL, (void*)GL__BufferSubData_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("CheckFramebufferStatus", NULL, (void*)GL__CheckFramebufferStatus_fn, 0, true, ::g::OpenGL::GLFramebufferStatus_typeof(), 1, ::g::OpenGL::GLFramebufferTarget_typeof()),
        new uFunction("Clear", NULL, (void*)GL__Clear_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLClearBufferMask_typeof()),
        new uFunction("ClearColor", NULL, (void*)GL__ClearColor_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("ClearDepth", NULL, (void*)GL__ClearDepth_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ColorMask", NULL, (void*)GL__ColorMask_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("CompileShader", NULL, (void*)GL__CompileShader_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("CreateBuffer", NULL, (void*)GL__CreateBuffer_fn, 0, true, ::g::OpenGL::GLBufferHandle_typeof(), 0),
        new uFunction("CreateFramebuffer", NULL, (void*)GL__CreateFramebuffer_fn, 0, true, ::g::OpenGL::GLFramebufferHandle_typeof(), 0),
        new uFunction("CreateProgram", NULL, (void*)GL__CreateProgram_fn, 0, true, ::g::OpenGL::GLProgramHandle_typeof(), 0),
        new uFunction("CreateRenderbuffer", NULL, (void*)GL__CreateRenderbuffer_fn, 0, true, ::g::OpenGL::GLRenderbufferHandle_typeof(), 0),
        new uFunction("CreateShader", NULL, (void*)GL__CreateShader_fn, 0, true, ::g::OpenGL::GLShaderHandle_typeof(), 1, ::g::OpenGL::GLShaderType_typeof()),
        new uFunction("CreateTexture", NULL, (void*)GL__CreateTexture_fn, 0, true, ::g::OpenGL::GLTextureHandle_typeof(), 0),
        new uFunction("CullFace", NULL, (void*)GL__CullFace_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLCullFaceMode_typeof()),
        new uFunction("DeleteBuffer", NULL, (void*)GL__DeleteBuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLBufferHandle_typeof()),
        new uFunction("DeleteFramebuffer", NULL, (void*)GL__DeleteFramebuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLFramebufferHandle_typeof()),
        new uFunction("DeleteProgram", NULL, (void*)GL__DeleteProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("DeleteRenderbuffer", NULL, (void*)GL__DeleteRenderbuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("DeleteShader", NULL, (void*)GL__DeleteShader_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("DeleteTexture", NULL, (void*)GL__DeleteTexture_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureHandle_typeof()),
        new uFunction("DepthFunc", NULL, (void*)GL__DepthFunc_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLDepthFunction_typeof()),
        new uFunction("DepthMask", NULL, (void*)GL__DepthMask_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("DetachShader", NULL, (void*)GL__DetachShader_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("Disable", NULL, (void*)GL__Disable_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLEnableCap_typeof()),
        new uFunction("DisableVertexAttribArray", NULL, (void*)GL__DisableVertexAttribArray_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("DrawArrays", NULL, (void*)GL__DrawArrays_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLPrimitiveType_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("DrawElements", NULL, (void*)GL__DrawElements_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLPrimitiveType_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLIndexType_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Enable", NULL, (void*)GL__Enable_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLEnableCap_typeof()),
        new uFunction("EnableVertexAttribArray", NULL, (void*)GL__EnableVertexAttribArray_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("FramebufferRenderbuffer", NULL, (void*)GL__FramebufferRenderbuffer_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferAttachment_typeof(), ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("FramebufferTexture2D", NULL, (void*)GL__FramebufferTexture2D_fn, 0, true, uVoid_typeof(), 5, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferAttachment_typeof(), ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureHandle_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("FrontFace", NULL, (void*)GL__FrontFace_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLFrontFaceDirection_typeof()),
        new uFunction("GenerateMipmap", NULL, (void*)GL__GenerateMipmap_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureTarget_typeof()),
        new uFunction("GetAttribLocation", NULL, (void*)GL__GetAttribLocation_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetError", NULL, (void*)GL__GetError_fn, 0, true, ::g::OpenGL::GLError_typeof(), 0),
        new uFunction("GetFramebufferBinding", NULL, (void*)GL__GetFramebufferBinding_fn, 0, true, ::g::OpenGL::GLFramebufferHandle_typeof(), 0),
        new uFunction("GetInteger", NULL, (void*)GL__GetInteger_fn, 0, true, ::g::Uno::Int4_typeof(), 1, ::g::OpenGL::GLInteger4Name_typeof()),
        new uFunction("GetInteger", NULL, (void*)GL__GetInteger1_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::OpenGL::GLIntegerName_typeof()),
        new uFunction("GetProgramInfoLog", NULL, (void*)GL__GetProgramInfoLog_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("GetProgramParameter", NULL, (void*)GL__GetProgramParameter_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLProgramParameter_typeof()),
        new uFunction("GetRenderbufferBinding", NULL, (void*)GL__GetRenderbufferBinding_fn, 0, true, ::g::OpenGL::GLRenderbufferHandle_typeof(), 0),
        new uFunction("GetShaderInfoLog", NULL, (void*)GL__GetShaderInfoLog_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("GetShaderParameter", NULL, (void*)GL__GetShaderParameter_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLShaderHandle_typeof(), ::g::OpenGL::GLShaderParameter_typeof()),
        new uFunction("GetUniformLocation", NULL, (void*)GL__GetUniformLocation_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LineWidth", NULL, (void*)GL__LineWidth_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("LinkProgram", NULL, (void*)GL__LinkProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("RenderbufferStorage", NULL, (void*)GL__RenderbufferStorage_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferStorage_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Scissor", NULL, (void*)GL__Scissor_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ShaderSource", NULL, (void*)GL__ShaderSource_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLShaderHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TexImage2D", NULL, (void*)GL__TexImage2D_fn, 0, true, uVoid_typeof(), 9, ::g::OpenGL::GLTextureTarget_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::OpenGL::GLPixelType_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("TexParameter", NULL, (void*)GL__TexParameter_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureParameterName_typeof(), ::g::OpenGL::GLTextureParameterValue_typeof()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform1_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform11_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()->Array()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform12_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Uniform2", NULL, (void*)GL__Uniform2_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Uniform2", NULL, (void*)GL__Uniform21_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()->Array()),
        new uFunction("Uniform3", NULL, (void*)GL__Uniform3_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Uniform4", NULL, (void*)GL__Uniform4_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction("Uniform4", NULL, (void*)GL__Uniform41_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()->Array()),
        new uFunction("UniformMatrix2", NULL, (void*)GL__UniformMatrix2_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float2x2_typeof()),
        new uFunction("UniformMatrix4", NULL, (void*)GL__UniformMatrix4_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("UniformMatrix4", NULL, (void*)GL__UniformMatrix41_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float4x4_typeof()->Array()),
        new uFunction("UseProgram", NULL, (void*)GL__UseProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("VertexAttribPointer", NULL, (void*)GL__VertexAttribPointer_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLDataType_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Viewport", NULL, (void*)GL__Viewport_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern void ActiveTexture(OpenGL.GLTextureUnit texture) :163
void GL__ActiveTexture_fn(int* texture_)
{
    GL::ActiveTexture(*texture_);
}

// public static extern void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :188
void GL__AttachShader_fn(uint32_t* program_, uint32_t* shader_)
{
    GL::AttachShader(*program_, *shader_);
}

// public static extern void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) :108
void GL__BindBuffer_fn(int* target_, uint32_t* buffer_)
{
    GL::BindBuffer(*target_, *buffer_);
}

// public static extern void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) :128
void GL__BindFramebuffer_fn(int* target_, uint32_t* fb_)
{
    GL::BindFramebuffer(*target_, *fb_);
}

// public static extern void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) :148
void GL__BindRenderbuffer_fn(int* target_, uint32_t* renderbuffer_)
{
    GL::BindRenderbuffer(*target_, *renderbuffer_);
}

// public static extern void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) :165
void GL__BindTexture_fn(int* target_, uint32_t* texture_)
{
    GL::BindTexture(*target_, *texture_);
}

// public static extern void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) :68
void GL__BlendFuncSeparate_fn(int* srcRGB_, int* dstRGB_, int* srcAlpha_, int* dstAlpha_)
{
    GL::BlendFuncSeparate(*srcRGB_, *dstRGB_, *srcAlpha_, *dstAlpha_);
}

// public static extern void BufferData(OpenGL.GLBufferTarget target, int sizeInBytes, OpenGL.GLBufferUsage usage) :110
void GL__BufferData_fn(int* target_, int* sizeInBytes_, int* usage_)
{
    GL::BufferData(*target_, *sizeInBytes_, *usage_);
}

// public static extern void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) :112
void GL__BufferData1_fn(int* target_, ::g::Uno::Buffer* data_, int* usage_)
{
    GL::BufferData1(*target_, data_, *usage_);
}

// public static extern void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) :114
void GL__BufferSubData_fn(int* target_, int* offset_, ::g::Uno::Buffer* data_)
{
    GL::BufferSubData(*target_, *offset_, data_);
}

// public static extern OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) :130
void GL__CheckFramebufferStatus_fn(int* target_, int* __retval)
{
    *__retval = GL::CheckFramebufferStatus(*target_);
}

// public static extern void Clear(OpenGL.GLClearBufferMask mask) :40
void GL__Clear_fn(int* mask_)
{
    GL::Clear(*mask_);
}

// public static extern void ClearColor(float red, float green, float blue, float alpha) :42
void GL__ClearColor_fn(float* red_, float* green_, float* blue_, float* alpha_)
{
    GL::ClearColor(*red_, *green_, *blue_, *alpha_);
}

// public static extern void ClearDepth(float depth) :44
void GL__ClearDepth_fn(float* depth_)
{
    GL::ClearDepth(*depth_);
}

// public static extern void ColorMask(bool red, bool green, bool blue, bool alpha) :48
void GL__ColorMask_fn(bool* red_, bool* green_, bool* blue_, bool* alpha_)
{
    GL::ColorMask(*red_, *green_, *blue_, *alpha_);
}

// public static extern void CompileShader(OpenGL.GLShaderHandle shader) :192
void GL__CompileShader_fn(uint32_t* shader_)
{
    GL::CompileShader(*shader_);
}

// public static extern OpenGL.GLBufferHandle CreateBuffer() :116
void GL__CreateBuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateBuffer();
}

// public static extern OpenGL.GLFramebufferHandle CreateFramebuffer() :132
void GL__CreateFramebuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateFramebuffer();
}

// public static extern OpenGL.GLProgramHandle CreateProgram() :194
void GL__CreateProgram_fn(uint32_t* __retval)
{
    *__retval = GL::CreateProgram();
}

// public static extern OpenGL.GLRenderbufferHandle CreateRenderbuffer() :150
void GL__CreateRenderbuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateRenderbuffer();
}

// public static extern OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) :196
void GL__CreateShader_fn(int* type_, uint32_t* __retval)
{
    *__retval = GL::CreateShader(*type_);
}

// public static extern OpenGL.GLTextureHandle CreateTexture() :169
void GL__CreateTexture_fn(uint32_t* __retval)
{
    *__retval = GL::CreateTexture();
}

// public static extern void CullFace(OpenGL.GLCullFaceMode mode) :86
void GL__CullFace_fn(int* mode_)
{
    GL::CullFace(*mode_);
}

// public static extern void DeleteBuffer(OpenGL.GLBufferHandle buffer) :118
void GL__DeleteBuffer_fn(uint32_t* buffer_)
{
    GL::DeleteBuffer(*buffer_);
}

// public static extern void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) :134
void GL__DeleteFramebuffer_fn(uint32_t* fb_)
{
    GL::DeleteFramebuffer(*fb_);
}

// public static extern void DeleteProgram(OpenGL.GLProgramHandle program) :198
void GL__DeleteProgram_fn(uint32_t* program_)
{
    GL::DeleteProgram(*program_);
}

// public static extern void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) :152
void GL__DeleteRenderbuffer_fn(uint32_t* renderbuffer_)
{
    GL::DeleteRenderbuffer(*renderbuffer_);
}

// public static extern void DeleteShader(OpenGL.GLShaderHandle shader) :200
void GL__DeleteShader_fn(uint32_t* shader_)
{
    GL::DeleteShader(*shader_);
}

// public static extern void DeleteTexture(OpenGL.GLTextureHandle texture) :171
void GL__DeleteTexture_fn(uint32_t* texture_)
{
    GL::DeleteTexture(*texture_);
}

// public static extern void DepthFunc(OpenGL.GLDepthFunction func) :70
void GL__DepthFunc_fn(int* func_)
{
    GL::DepthFunc(*func_);
}

// public static extern void DepthMask(bool flag) :50
void GL__DepthMask_fn(bool* flag_)
{
    GL::DepthMask(*flag_);
}

// public static extern void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :202
void GL__DetachShader_fn(uint32_t* program_, uint32_t* shader_)
{
    GL::DetachShader(*program_, *shader_);
}

// public static extern void Disable(OpenGL.GLEnableCap cap) :21
void GL__Disable_fn(int* cap_)
{
    GL::Disable(*cap_);
}

// public static extern void DisableVertexAttribArray(int index) :235
void GL__DisableVertexAttribArray_fn(int* index_)
{
    GL::DisableVertexAttribArray(*index_);
}

// public static extern void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) :304
void GL__DrawArrays_fn(int* mode_, int* first_, int* count_)
{
    GL::DrawArrays(*mode_, *first_, *count_);
}

// public static extern void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) :306
void GL__DrawElements_fn(int* mode_, int* count_, int* type_, int* offset_)
{
    GL::DrawElements(*mode_, *count_, *type_, *offset_);
}

// public static extern void Enable(OpenGL.GLEnableCap cap) :23
void GL__Enable_fn(int* cap_)
{
    GL::Enable(*cap_);
}

// public static extern void EnableVertexAttribArray(int index) :237
void GL__EnableVertexAttribArray_fn(int* index_)
{
    GL::EnableVertexAttribArray(*index_);
}

// public static extern void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) :138
void GL__FramebufferRenderbuffer_fn(int* target_, int* attachment_, int* renderbuffertarget_, uint32_t* renderbuffer_)
{
    GL::FramebufferRenderbuffer(*target_, *attachment_, *renderbuffertarget_, *renderbuffer_);
}

// public static extern void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) :136
void GL__FramebufferTexture2D_fn(int* target_, int* attachment_, int* textarget_, uint32_t* texture_, int* level_)
{
    GL::FramebufferTexture2D(*target_, *attachment_, *textarget_, *texture_, *level_);
}

// public static extern void FrontFace(OpenGL.GLFrontFaceDirection mode) :88
void GL__FrontFace_fn(int* mode_)
{
    GL::FrontFace(*mode_);
}

// public static extern void GenerateMipmap(OpenGL.GLTextureTarget target) :173
void GL__GenerateMipmap_fn(int* target_)
{
    GL::GenerateMipmap(*target_);
}

// public static extern int GetAttribLocation(OpenGL.GLProgramHandle program, string name) :243
void GL__GetAttribLocation_fn(uint32_t* program_, uString* name_, int* __retval)
{
    *__retval = GL::GetAttribLocation(*program_, name_);
}

// public static extern OpenGL.GLError GetError() :27
void GL__GetError_fn(int* __retval)
{
    *__retval = GL::GetError();
}

// public static extern OpenGL.GLFramebufferHandle GetFramebufferBinding() :142
void GL__GetFramebufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetFramebufferBinding();
}

// public static extern int4 GetInteger(OpenGL.GLInteger4Name name) :16
void GL__GetInteger_fn(int* name_, ::g::Uno::Int4* __retval)
{
    *__retval = GL::GetInteger(*name_);
}

// public static extern int GetInteger(OpenGL.GLIntegerName name) :14
void GL__GetInteger1_fn(int* name_, int* __retval)
{
    *__retval = GL::GetInteger1(*name_);
}

// public static extern string GetProgramInfoLog(OpenGL.GLProgramHandle program) :208
void GL__GetProgramInfoLog_fn(uint32_t* program_, uString** __retval)
{
    *__retval = GL::GetProgramInfoLog(*program_);
}

// public static extern int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) :206
void GL__GetProgramParameter_fn(uint32_t* program_, int* pname_, int* __retval)
{
    *__retval = GL::GetProgramParameter(*program_, *pname_);
}

// public static extern OpenGL.GLRenderbufferHandle GetRenderbufferBinding() :158
void GL__GetRenderbufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetRenderbufferBinding();
}

// public static extern string GetShaderInfoLog(OpenGL.GLShaderHandle shader) :212
void GL__GetShaderInfoLog_fn(uint32_t* shader_, uString** __retval)
{
    *__retval = GL::GetShaderInfoLog(*shader_);
}

// public static extern int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) :210
void GL__GetShaderParameter_fn(uint32_t* shader_, int* pname_, int* __retval)
{
    *__retval = GL::GetShaderParameter(*shader_, *pname_);
}

// public static extern int GetUniformLocation(OpenGL.GLProgramHandle program, string name) :247
void GL__GetUniformLocation_fn(uint32_t* program_, uString* name_, int* __retval)
{
    *__retval = GL::GetUniformLocation(*program_, name_);
}

// public static extern void LineWidth(float width) :90
void GL__LineWidth_fn(float* width_)
{
    GL::LineWidth(*width_);
}

// public static extern void LinkProgram(OpenGL.GLProgramHandle program) :220
void GL__LinkProgram_fn(uint32_t* program_)
{
    GL::LinkProgram(*program_);
}

// public static extern void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) :156
void GL__RenderbufferStorage_fn(int* target_, int* internalFormat_, int* width_, int* height_)
{
    GL::RenderbufferStorage(*target_, *internalFormat_, *width_, *height_);
}

// public static extern void Scissor(int x, int y, int width, int height) :100
void GL__Scissor_fn(int* x_, int* y_, int* width_, int* height_)
{
    GL::Scissor(*x_, *y_, *width_, *height_);
}

// public static extern void ShaderSource(OpenGL.GLShaderHandle shader, string source) :222
void GL__ShaderSource_fn(uint32_t* shader_, uString* source_)
{
    GL::ShaderSource(*shader_, source_);
}

// public static extern void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) :177
void GL__TexImage2D_fn(int* target_, int* level_, int* internalFormat_, int* width_, int* height_, int* border_, int* format_, int* type_, ::g::Uno::Buffer* data_)
{
    GL::TexImage2D(*target_, *level_, *internalFormat_, *width_, *height_, *border_, *format_, *type_, data_);
}

// public static extern void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) :181
void GL__TexParameter_fn(int* target_, int* pname_, int* param_)
{
    GL::TexParameter(*target_, *pname_, *param_);
}

// public static extern void Uniform1(int location, float value) :261
void GL__Uniform1_fn(int* location_, float* value_)
{
    GL::Uniform1(*location_, *value_);
}

// public static extern void Uniform1(int location, float[] value) :283
void GL__Uniform11_fn(int* location_, uArray* value_)
{
    GL::Uniform11(*location_, value_);
}

// public static extern void Uniform1(int location, int value) :253
void GL__Uniform12_fn(int* location_, int* value_)
{
    GL::Uniform12(*location_, *value_);
}

// public static extern void Uniform2(int location, float2 value) :263
void GL__Uniform2_fn(int* location_, ::g::Uno::Float2* value_)
{
    GL::Uniform2(*location_, *value_);
}

// public static extern void Uniform2(int location, float2[] value) :285
void GL__Uniform21_fn(int* location_, uArray* value_)
{
    GL::Uniform21(*location_, value_);
}

// public static extern void Uniform3(int location, float3 value) :265
void GL__Uniform3_fn(int* location_, ::g::Uno::Float3* value_)
{
    GL::Uniform3(*location_, *value_);
}

// public static extern void Uniform4(int location, float4 value) :267
void GL__Uniform4_fn(int* location_, ::g::Uno::Float4* value_)
{
    GL::Uniform4(*location_, *value_);
}

// public static extern void Uniform4(int location, float4[] value) :289
void GL__Uniform41_fn(int* location_, uArray* value_)
{
    GL::Uniform41(*location_, value_);
}

// public static extern void UniformMatrix2(int location, bool transpose, float2x2 value) :269
void GL__UniformMatrix2_fn(int* location_, bool* transpose_, ::g::Uno::Float2x2* value_)
{
    GL::UniformMatrix2(*location_, *transpose_, *value_);
}

// public static extern void UniformMatrix4(int location, bool transpose, float4x4 value) :273
void GL__UniformMatrix4_fn(int* location_, bool* transpose_, ::g::Uno::Float4x4* value_)
{
    GL::UniformMatrix4(*location_, *transpose_, *value_);
}

// public static extern void UniformMatrix4(int location, bool transpose, float4x4[] value) :295
void GL__UniformMatrix41_fn(int* location_, bool* transpose_, uArray* value_)
{
    GL::UniformMatrix41(*location_, *transpose_, value_);
}

// public static extern void UseProgram(OpenGL.GLProgramHandle program) :224
void GL__UseProgram_fn(uint32_t* program_)
{
    GL::UseProgram(*program_);
}

// public static extern void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) :298
void GL__VertexAttribPointer_fn(int* index_, int* size_, int* type_, bool* normalized_, int* stride_, int* offset_)
{
    GL::VertexAttribPointer(*index_, *size_, *type_, *normalized_, *stride_, *offset_);
}

// public static extern void Viewport(int x, int y, int width, int height) :102
void GL__Viewport_fn(int* x_, int* y_, int* width_, int* height_)
{
    GL::Viewport(*x_, *y_, *width_, *height_);
}

// public static extern void ActiveTexture(OpenGL.GLTextureUnit texture) [static] :163
void GL::ActiveTexture(int texture_)
{
    glActiveTexture(texture_);
}

// public static extern void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :188
void GL::AttachShader(uint32_t program_, uint32_t shader_)
{
    glAttachShader(program_, shader_);
}

// public static extern void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) [static] :108
void GL::BindBuffer(int target_, uint32_t buffer_)
{
    glBindBuffer(target_, buffer_);
}

// public static extern void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) [static] :128
void GL::BindFramebuffer(int target_, uint32_t fb_)
{
    glBindFramebuffer(target_, fb_);
}

// public static extern void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) [static] :148
void GL::BindRenderbuffer(int target_, uint32_t renderbuffer_)
{
    glBindRenderbuffer(target_, renderbuffer_);
}

// public static extern void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) [static] :165
void GL::BindTexture(int target_, uint32_t texture_)
{
    glBindTexture(target_, texture_);
}

// public static extern void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) [static] :68
void GL::BlendFuncSeparate(int srcRGB_, int dstRGB_, int srcAlpha_, int dstAlpha_)
{
    glBlendFuncSeparate(srcRGB_, dstRGB_, srcAlpha_, dstAlpha_);
}

// public static extern void BufferData(OpenGL.GLBufferTarget target, int sizeInBytes, OpenGL.GLBufferUsage usage) [static] :110
void GL::BufferData(int target_, int sizeInBytes_, int usage_)
{
    glBufferData(target_, sizeInBytes_, NULL, usage_);
}

// public static extern void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) [static] :112
void GL::BufferData1(int target_, ::g::Uno::Buffer* data_, int usage_)
{
    glBufferData(target_, U_BUFFER_SIZE(data_), U_BUFFER_PTR(data_), usage_);
}

// public static extern void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) [static] :114
void GL::BufferSubData(int target_, int offset_, ::g::Uno::Buffer* data_)
{
    glBufferSubData(target_, offset_, U_BUFFER_SIZE(data_), U_BUFFER_PTR(data_));
}

// public static extern OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) [static] :130
int GL::CheckFramebufferStatus(int target_)
{
    return glCheckFramebufferStatus(target_);
}

// public static extern void Clear(OpenGL.GLClearBufferMask mask) [static] :40
void GL::Clear(int mask_)
{
    glClear(mask_);
}

// public static extern void ClearColor(float red, float green, float blue, float alpha) [static] :42
void GL::ClearColor(float red_, float green_, float blue_, float alpha_)
{
    glClearColor(red_, green_, blue_, alpha_);
}

// public static extern void ClearDepth(float depth) [static] :44
void GL::ClearDepth(float depth_)
{
    #ifdef XLI_GL_DESKTOP
                    glClearDepth((double)depth_);
    #else
                    glClearDepthf(depth_);
    #endif
}

// public static extern void ColorMask(bool red, bool green, bool blue, bool alpha) [static] :48
void GL::ColorMask(bool red_, bool green_, bool blue_, bool alpha_)
{
    glColorMask(red_, green_, blue_, alpha_);
}

// public static extern void CompileShader(OpenGL.GLShaderHandle shader) [static] :192
void GL::CompileShader(uint32_t shader_)
{
    glCompileShader(shader_);
}

// public static extern OpenGL.GLBufferHandle CreateBuffer() [static] :116
uint32_t GL::CreateBuffer()
{
    GLuint handle;
    glGenBuffers(1, &handle);
    return handle;
}

// public static extern OpenGL.GLFramebufferHandle CreateFramebuffer() [static] :132
uint32_t GL::CreateFramebuffer()
{
    GLuint handle;
    glGenFramebuffers(1, &handle);
    return handle;
}

// public static extern OpenGL.GLProgramHandle CreateProgram() [static] :194
uint32_t GL::CreateProgram()
{
    return glCreateProgram();
}

// public static extern OpenGL.GLRenderbufferHandle CreateRenderbuffer() [static] :150
uint32_t GL::CreateRenderbuffer()
{
    GLuint handle;
    glGenRenderbuffers(1, &handle);
    return handle;
}

// public static extern OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) [static] :196
uint32_t GL::CreateShader(int type_)
{
    return glCreateShader(type_);
}

// public static extern OpenGL.GLTextureHandle CreateTexture() [static] :169
uint32_t GL::CreateTexture()
{
    GLuint handle;
    glGenTextures(1, &handle);
    return handle;
}

// public static extern void CullFace(OpenGL.GLCullFaceMode mode) [static] :86
void GL::CullFace(int mode_)
{
    glCullFace(mode_);
}

// public static extern void DeleteBuffer(OpenGL.GLBufferHandle buffer) [static] :118
void GL::DeleteBuffer(uint32_t buffer_)
{
    glDeleteBuffers(1, &buffer_);
}

// public static extern void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) [static] :134
void GL::DeleteFramebuffer(uint32_t fb_)
{
    glDeleteFramebuffers(1, &fb_);
}

// public static extern void DeleteProgram(OpenGL.GLProgramHandle program) [static] :198
void GL::DeleteProgram(uint32_t program_)
{
    glDeleteProgram(program_);
}

// public static extern void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) [static] :152
void GL::DeleteRenderbuffer(uint32_t renderbuffer_)
{
    glDeleteRenderbuffers(1, &renderbuffer_);
}

// public static extern void DeleteShader(OpenGL.GLShaderHandle shader) [static] :200
void GL::DeleteShader(uint32_t shader_)
{
    glDeleteShader(shader_);
}

// public static extern void DeleteTexture(OpenGL.GLTextureHandle texture) [static] :171
void GL::DeleteTexture(uint32_t texture_)
{
    glDeleteTextures(1, &texture_);
}

// public static extern void DepthFunc(OpenGL.GLDepthFunction func) [static] :70
void GL::DepthFunc(int func_)
{
    glDepthFunc(func_);
}

// public static extern void DepthMask(bool flag) [static] :50
void GL::DepthMask(bool flag_)
{
    glDepthMask(flag_);
}

// public static extern void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :202
void GL::DetachShader(uint32_t program_, uint32_t shader_)
{
    glDetachShader(program_, shader_);
}

// public static extern void Disable(OpenGL.GLEnableCap cap) [static] :21
void GL::Disable(int cap_)
{
    glDisable(cap_);
}

// public static extern void DisableVertexAttribArray(int index) [static] :235
void GL::DisableVertexAttribArray(int index_)
{
    glDisableVertexAttribArray(index_);
}

// public static extern void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) [static] :304
void GL::DrawArrays(int mode_, int first_, int count_)
{
    glDrawArrays(mode_, first_, count_);
}

// public static extern void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) [static] :306
void GL::DrawElements(int mode_, int count_, int type_, int offset_)
{
    glDrawElements(mode_, count_, type_, (const GLvoid*)(size_t)offset_);
}

// public static extern void Enable(OpenGL.GLEnableCap cap) [static] :23
void GL::Enable(int cap_)
{
    glEnable(cap_);
}

// public static extern void EnableVertexAttribArray(int index) [static] :237
void GL::EnableVertexAttribArray(int index_)
{
    glEnableVertexAttribArray(index_);
}

// public static extern void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) [static] :138
void GL::FramebufferRenderbuffer(int target_, int attachment_, int renderbuffertarget_, uint32_t renderbuffer_)
{
    glFramebufferRenderbuffer(target_, attachment_, renderbuffertarget_, renderbuffer_);
}

// public static extern void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) [static] :136
void GL::FramebufferTexture2D(int target_, int attachment_, int textarget_, uint32_t texture_, int level_)
{
    glFramebufferTexture2D(target_, attachment_, textarget_, texture_, level_);
}

// public static extern void FrontFace(OpenGL.GLFrontFaceDirection mode) [static] :88
void GL::FrontFace(int mode_)
{
    glFrontFace(mode_);
}

// public static extern void GenerateMipmap(OpenGL.GLTextureTarget target) [static] :173
void GL::GenerateMipmap(int target_)
{
    glGenerateMipmap(target_);
}

// public static extern int GetAttribLocation(OpenGL.GLProgramHandle program, string name) [static] :243
int GL::GetAttribLocation(uint32_t program_, uString* name_)
{
    return glGetAttribLocation(program_, uStringToXliString(name_).Ptr());
}

// public static extern OpenGL.GLError GetError() [static] :27
int GL::GetError()
{
    return glGetError();
}

// public static extern OpenGL.GLFramebufferHandle GetFramebufferBinding() [static] :142
uint32_t GL::GetFramebufferBinding()
{
    GLuint result;
    glGetIntegerv(GL_FRAMEBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static extern int4 GetInteger(OpenGL.GLInteger4Name name) [static] :16
::g::Uno::Int4 GL::GetInteger(int name_)
{
    ::g::Uno::Int4 result;
    glGetIntegerv(name_, (GLint*)&result);
    return result;
}

// public static extern int GetInteger(OpenGL.GLIntegerName name) [static] :14
int GL::GetInteger1(int name_)
{
    int result;
    glGetIntegerv(name_, (GLint*)&result);
    return result;
}

// public static extern string GetProgramInfoLog(OpenGL.GLProgramHandle program) [static] :208
uString* GL::GetProgramInfoLog(uint32_t program_)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetProgramInfoLog(program_, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static extern int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) [static] :206
int GL::GetProgramParameter(uint32_t program_, int pname_)
{
    GLint result;
    glGetProgramiv(program_, pname_, &result);
    return result;
}

// public static extern OpenGL.GLRenderbufferHandle GetRenderbufferBinding() [static] :158
uint32_t GL::GetRenderbufferBinding()
{
    GLuint result;
    glGetIntegerv(GL_RENDERBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static extern string GetShaderInfoLog(OpenGL.GLShaderHandle shader) [static] :212
uString* GL::GetShaderInfoLog(uint32_t shader_)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetShaderInfoLog(shader_, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static extern int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) [static] :210
int GL::GetShaderParameter(uint32_t shader_, int pname_)
{
    GLint result;
    glGetShaderiv(shader_, pname_, &result);
    return result;
}

// public static extern int GetUniformLocation(OpenGL.GLProgramHandle program, string name) [static] :247
int GL::GetUniformLocation(uint32_t program_, uString* name_)
{
    return glGetUniformLocation(program_, uStringToXliString(name_).Ptr());
}

// public static extern void LineWidth(float width) [static] :90
void GL::LineWidth(float width_)
{
    glLineWidth(width_);
}

// public static extern void LinkProgram(OpenGL.GLProgramHandle program) [static] :220
void GL::LinkProgram(uint32_t program_)
{
    glLinkProgram(program_);
}

// public static extern void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) [static] :156
void GL::RenderbufferStorage(int target_, int internalFormat_, int width_, int height_)
{
    glRenderbufferStorage(target_, internalFormat_, width_, height_);
}

// public static extern void Scissor(int x, int y, int width, int height) [static] :100
void GL::Scissor(int x_, int y_, int width_, int height_)
{
    glScissor(x_, y_, width_, height_);
}

// public static extern void ShaderSource(OpenGL.GLShaderHandle shader, string source) [static] :222
void GL::ShaderSource(uint32_t shader_, uString* source_)
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

// public static extern void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) [static] :177
void GL::TexImage2D(int target_, int level_, int internalFormat_, int width_, int height_, int border_, int format_, int type_, ::g::Uno::Buffer* data_)
{
    glTexImage2D(target_, level_, internalFormat_, width_, height_, border_, format_, type_, data_ ? U_BUFFER_PTR(data_) : NULL);
}

// public static extern void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) [static] :181
void GL::TexParameter(int target_, int pname_, int param_)
{
    glTexParameteri(target_, pname_, param_);
}

// public static extern void Uniform1(int location, float value) [static] :261
void GL::Uniform1(int location_, float value_)
{
    glUniform1f(location_, value_);
}

// public static extern void Uniform1(int location, float[] value) [static] :283
void GL::Uniform11(int location_, uArray* value_)
{
    glUniform1fv(location_, value_->Length(), (const GLfloat*)value_->Ptr());
}

// public static extern void Uniform1(int location, int value) [static] :253
void GL::Uniform12(int location_, int value_)
{
    glUniform1i(location_, value_);
}

// public static extern void Uniform2(int location, float2 value) [static] :263
void GL::Uniform2(int location_, ::g::Uno::Float2 value_)
{
    glUniform2fv(location_, 1, (const GLfloat*)&value_);
}

// public static extern void Uniform2(int location, float2[] value) [static] :285
void GL::Uniform21(int location_, uArray* value_)
{
    glUniform2fv(location_, value_->Length(), (const GLfloat*)value_->Ptr());
}

// public static extern void Uniform3(int location, float3 value) [static] :265
void GL::Uniform3(int location_, ::g::Uno::Float3 value_)
{
    glUniform3fv(location_, 1, (const GLfloat*)&value_);
}

// public static extern void Uniform4(int location, float4 value) [static] :267
void GL::Uniform4(int location_, ::g::Uno::Float4 value_)
{
    glUniform4fv(location_, 1, (const GLfloat*)&value_);
}

// public static extern void Uniform4(int location, float4[] value) [static] :289
void GL::Uniform41(int location_, uArray* value_)
{
    glUniform4fv(location_, value_->Length(), (const GLfloat*)value_->Ptr());
}

// public static extern void UniformMatrix2(int location, bool transpose, float2x2 value) [static] :269
void GL::UniformMatrix2(int location_, bool transpose_, ::g::Uno::Float2x2 value_)
{
    glUniformMatrix2fv(location_, 1, transpose_, (const GLfloat*)&value_);
}

// public static extern void UniformMatrix4(int location, bool transpose, float4x4 value) [static] :273
void GL::UniformMatrix4(int location_, bool transpose_, ::g::Uno::Float4x4 value_)
{
    glUniformMatrix4fv(location_, 1, transpose_, (const GLfloat*)&value_);
}

// public static extern void UniformMatrix4(int location, bool transpose, float4x4[] value) [static] :295
void GL::UniformMatrix41(int location_, bool transpose_, uArray* value_)
{
    glUniformMatrix4fv(location_, value_->Length(), transpose_, (const GLfloat*)value_->Ptr());
}

// public static extern void UseProgram(OpenGL.GLProgramHandle program) [static] :224
void GL::UseProgram(uint32_t program_)
{
    glUseProgram(program_);
}

// public static extern void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) [static] :298
void GL::VertexAttribPointer(int index_, int size_, int type_, bool normalized_, int stride_, int offset_)
{
    glVertexAttribPointer(index_, size_, type_, normalized_, stride_, (const GLvoid*)(size_t)offset_);
}

// public static extern void Viewport(int x, int y, int width, int height) [static] :102
void GL::Viewport(int x_, int y_, int width_, int height_)
{
    glViewport(x_, y_, width_, height_);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(573)
// -------------------------------------------------------------------

// public extern enum GLBlendEquation :573
uEnumType* GLBlendEquation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendEquation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "FuncAdd", 32774LL,
        "FuncSubtract", 32778LL,
        "FuncReverseSubtract", 32779LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(580)
// -------------------------------------------------------------------

// public extern enum GLBlendingFactor :580
uEnumType* GLBlendingFactor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendingFactor", ::g::Uno::Int_typeof(), 11);
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
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(340)
// -------------------------------------------------------------------

// public extern struct GLBufferHandle :340
// {
uStructType* GLBufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLBufferHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLBufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLBufferHandle__GetHashCode_fn;
    type->SetFields(0,
        GLBufferHandle_typeof(), (uintptr_t)&::g::OpenGL::GLBufferHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :371
void GLBufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLBufferHandle_typeof(), *__this, U_ALLOCA(GLBufferHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :365
void GLBufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLBufferHandle_typeof(), *__this, U_ALLOCA(GLBufferHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLBufferHandle::Zero_;
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(412)
// -------------------------------------------------------------------

// public extern enum GLBufferTarget :412
uEnumType* GLBufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferTarget", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ArrayBuffer", 34962LL,
        "ElementArrayBuffer", 34963LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(418)
// -------------------------------------------------------------------

// public extern enum GLBufferUsage :418
uEnumType* GLBufferUsage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferUsage", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "StreamDraw", 35040LL,
        "StaticDraw", 35044LL,
        "DynamicDraw", 35048LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(631)
// -------------------------------------------------------------------

// public extern enum GLClearBufferMask :631
uEnumType* GLClearBufferMask_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLClearBufferMask", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DepthBufferBit", 256LL,
        "StencilBufferBit", 1024LL,
        "ColorBufferBit", 16384LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(492)
// -------------------------------------------------------------------

// public extern enum GLCullFaceMode :492
uEnumType* GLCullFaceMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLCullFaceMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Front", 1028LL,
        "Back", 1029LL,
        "FrontAndBack", 1032LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(517)
// -------------------------------------------------------------------

// public extern enum GLDataType :517
uEnumType* GLDataType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDataType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(480)
// -------------------------------------------------------------------

// public extern enum GLDepthFunction :480
uEnumType* GLDepthFunction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDepthFunction", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Never", 512LL,
        "Less", 513LL,
        "Equal", 514LL,
        "Lequal", 515LL,
        "Greater", 516LL,
        "Notequal", 517LL,
        "Gequal", 518LL,
        "Always", 519LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(472)
// -------------------------------------------------------------------

// public extern enum GLEnableCap :472
uEnumType* GLEnableCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLEnableCap", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Blend", 3042LL,
        "DepthTest", 2929LL,
        "CullFace", 2884LL,
        "ScissorTest", 3089LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(612)
// -------------------------------------------------------------------

// public extern enum GLError :612
uEnumType* GLError_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLError", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "NoError", 0LL,
        "InvalidEnum", 1280LL,
        "InvalidValue", 1281LL,
        "InvalidOperation", 1282LL,
        "OutOfMemory", 1285LL,
        "InvalidFramebufferOperation", 1286LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(595)
// -------------------------------------------------------------------

// public extern enum GLFramebufferAttachment :595
uEnumType* GLFramebufferAttachment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferAttachment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ColorAttachment0", 36064LL,
        "DepthAttachment", 36096LL,
        "StencilAttachment", 36128LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(673)
// -------------------------------------------------------------------

// public extern struct GLFramebufferHandle :673
// {
uStructType* GLFramebufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLFramebufferHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLFramebufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLFramebufferHandle__GetHashCode_fn;
    type->SetFields(0,
        GLFramebufferHandle_typeof(), (uintptr_t)&::g::OpenGL::GLFramebufferHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :704
void GLFramebufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLFramebufferHandle_typeof(), *__this, U_ALLOCA(GLFramebufferHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :698
void GLFramebufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLFramebufferHandle_typeof(), *__this, U_ALLOCA(GLFramebufferHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) :682
void GLFramebufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLFramebufferHandle::op_Inequality(*left, *right);
}

uint32_t GLFramebufferHandle::Zero_;

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) [static] :682
bool GLFramebufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(622)
// -------------------------------------------------------------------

// public extern enum GLFramebufferStatus :622
uEnumType* GLFramebufferStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferStatus", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "FramebufferComplete", 36053LL,
        "FramebufferIncompleteAttachment", 36054LL,
        "FramebufferIncompleteMissingAttachment", 36055LL,
        "FramebufferIncompleteDimensions", 36057LL,
        "FramebufferUnsupported", 36061LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(602)
// -------------------------------------------------------------------

// public extern enum GLFramebufferTarget :602
uEnumType* GLFramebufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Framebuffer", 36160LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(500)
// -------------------------------------------------------------------

// public extern enum GLFrontFaceDirection :500
uEnumType* GLFrontFaceDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFrontFaceDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Cw", 2304LL,
        "Ccw", 2305LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(528)
// -------------------------------------------------------------------

// public extern enum GLIndexType :528
uEnumType* GLIndexType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIndexType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "UnsignedByte", 5121LL,
        "UnsignedShort", 5123LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(390)
// -------------------------------------------------------------------

// public extern enum GLInteger4Name :390
uEnumType* GLInteger4Name_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLInteger4Name", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ScissorBox", 3088LL,
        "Viewport", 2978LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(385)
// -------------------------------------------------------------------

// public extern enum GLIntegerName :385
uEnumType* GLIntegerName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIntegerName", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "MaxTextureSize", 3379LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(534)
// -------------------------------------------------------------------

// public extern enum GLPixelFormat :534
uEnumType* GLPixelFormat_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelFormat", ::g::Uno::Int_typeof(), 10);
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
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(548)
// -------------------------------------------------------------------

// public extern enum GLPixelType :548
uEnumType* GLPixelType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelType", ::g::Uno::Int_typeof(), 10);
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
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(506)
// -------------------------------------------------------------------

// public extern enum GLPrimitiveType :506
uEnumType* GLPrimitiveType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPrimitiveType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Points", 0LL,
        "Lines", 1LL,
        "LineLoop", 2LL,
        "LineStrip", 3LL,
        "Triangles", 4LL,
        "TriangleStrip", 5LL,
        "TriangleFan", 6LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(720)
// -------------------------------------------------------------------

// public extern struct GLProgramHandle :720
// {
uStructType* GLProgramHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLProgramHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLProgramHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLProgramHandle__GetHashCode_fn;
    type->SetFields(0,
        GLProgramHandle_typeof(), (uintptr_t)&::g::OpenGL::GLProgramHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :751
void GLProgramHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLProgramHandle_typeof(), *__this, U_ALLOCA(GLProgramHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :745
void GLProgramHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLProgramHandle_typeof(), *__this, U_ALLOCA(GLProgramHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLProgramHandle::Zero_;
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(645)
// -------------------------------------------------------------------

// public extern enum GLProgramParameter :645
uEnumType* GLProgramParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLProgramParameter", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "DeleteStatus", 35712LL,
        "LinkStatus", 35714LL,
        "AttachedShaders", 35717LL,
        "ActiveUniforms", 35718LL,
        "ActiveAttributes", 35721LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(767)
// -------------------------------------------------------------------

// public extern struct GLRenderbufferHandle :767
// {
uStructType* GLRenderbufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLRenderbufferHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLRenderbufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLRenderbufferHandle__GetHashCode_fn;
    type->SetFields(0,
        GLRenderbufferHandle_typeof(), (uintptr_t)&::g::OpenGL::GLRenderbufferHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :798
void GLRenderbufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLRenderbufferHandle_typeof(), *__this, U_ALLOCA(GLRenderbufferHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :792
void GLRenderbufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLRenderbufferHandle_typeof(), *__this, U_ALLOCA(GLRenderbufferHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) :776
void GLRenderbufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLRenderbufferHandle::op_Inequality(*left, *right);
}

uint32_t GLRenderbufferHandle::Zero_;

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) [static] :776
bool GLRenderbufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(568)
// -------------------------------------------------------------------

// public extern enum GLRenderbufferStorage :568
uEnumType* GLRenderbufferStorage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferStorage", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "DepthComponent16", 33189LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(607)
// -------------------------------------------------------------------

// public extern enum GLRenderbufferTarget :607
uEnumType* GLRenderbufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Renderbuffer", 36161LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(814)
// -------------------------------------------------------------------

// public extern struct GLShaderHandle :814
// {
uStructType* GLShaderHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLShaderHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLShaderHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLShaderHandle__GetHashCode_fn;
    type->SetFields(0,
        GLShaderHandle_typeof(), (uintptr_t)&::g::OpenGL::GLShaderHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :845
void GLShaderHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLShaderHandle_typeof(), *__this, U_ALLOCA(GLShaderHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :839
void GLShaderHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLShaderHandle_typeof(), *__this, U_ALLOCA(GLShaderHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLShaderHandle::Zero_;
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(638)
// -------------------------------------------------------------------

// public extern enum GLShaderParameter :638
uEnumType* GLShaderParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderParameter", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ShaderType", 35663LL,
        "DeleteStatus", 35712LL,
        "CompileStatus", 35713LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(396)
// -------------------------------------------------------------------

// public extern enum GLShaderType :396
uEnumType* GLShaderType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "FragmentShader", 35632LL,
        "VertexShader", 35633LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(883)
// -------------------------------------------------------------------

// public extern struct GLTextureHandle :883
// {
uStructType* GLTextureHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLTextureHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLTextureHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLTextureHandle__GetHashCode_fn;
    type->SetFields(0,
        GLTextureHandle_typeof(), (uintptr_t)&::g::OpenGL::GLTextureHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :914
void GLTextureHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLTextureHandle_typeof(), *__this, U_ALLOCA(GLTextureHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :908
void GLTextureHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLTextureHandle_typeof(), *__this, U_ALLOCA(GLTextureHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

// public static operator ==(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) :887
void GLTextureHandle__op_Equality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLTextureHandle::op_Equality(*left, *right);
}

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) :897
void GLTextureHandle__op_Explicit1_fn(uint32_t* handle, int* __retval)
{
    *__retval = GLTextureHandle::op_Explicit1(*handle);
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) :892
void GLTextureHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLTextureHandle::op_Inequality(*left, *right);
}

uint32_t GLTextureHandle::Zero_;

// public static operator ==(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) [static] :887
bool GLTextureHandle::op_Equality(uint32_t left, uint32_t right)
{
    return left == right;
}

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) [static] :897
int GLTextureHandle::op_Explicit1(uint32_t handle)
{
    return handle;
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) [static] :892
bool GLTextureHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(450)
// -------------------------------------------------------------------

// public extern enum GLTextureParameterName :450
uEnumType* GLTextureParameterName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterName", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "WrapS", 10242LL,
        "WrapT", 10243LL,
        "MagFilter", 10240LL,
        "MinFilter", 10241LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(458)
// -------------------------------------------------------------------

// public extern enum GLTextureParameterValue :458
uEnumType* GLTextureParameterValue_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterValue", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Repeat", 10497LL,
        "ClampToEdge", 33071LL,
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(437)
// -------------------------------------------------------------------

// public extern enum GLTextureTarget :437
uEnumType* GLTextureTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureTarget", ::g::Uno::Int_typeof(), 9);
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
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\OpenGL\$.uno(425)
// -------------------------------------------------------------------

// public extern enum GLTextureUnit :425
uEnumType* GLTextureUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureUnit", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Texture0", 33984LL,
        "Texture1", 33985LL,
        "Texture2", 33986LL,
        "Texture3", 33987LL,
        "Texture4", 33988LL,
        "Texture5", 33989LL,
        "Texture6", 33990LL,
        "Texture7", 33991LL);
    return type;
}

}} // ::g::OpenGL
