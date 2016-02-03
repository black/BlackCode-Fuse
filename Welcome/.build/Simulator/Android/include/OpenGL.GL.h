// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace OpenGL{struct GL;}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float2x2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace OpenGL{

// public static extern class GL :9
// {
uClassType* GL_typeof();
void GL__ActiveTexture_fn(int* texture_);
void GL__AttachShader_fn(uint32_t* program_, uint32_t* shader_);
void GL__BindBuffer_fn(int* target_, uint32_t* buffer_);
void GL__BindFramebuffer_fn(int* target_, uint32_t* fb_);
void GL__BindRenderbuffer_fn(int* target_, uint32_t* renderbuffer_);
void GL__BindTexture_fn(int* target_, uint32_t* texture_);
void GL__BlendFuncSeparate_fn(int* srcRGB_, int* dstRGB_, int* srcAlpha_, int* dstAlpha_);
void GL__BufferData_fn(int* target_, int* sizeInBytes_, int* usage_);
void GL__BufferData1_fn(int* target_, ::g::Uno::Buffer* data_, int* usage_);
void GL__BufferSubData_fn(int* target_, int* offset_, ::g::Uno::Buffer* data_);
void GL__CheckFramebufferStatus_fn(int* target_, int* __retval);
void GL__Clear_fn(int* mask_);
void GL__ClearColor_fn(float* red_, float* green_, float* blue_, float* alpha_);
void GL__ClearDepth_fn(float* depth_);
void GL__ColorMask_fn(bool* red_, bool* green_, bool* blue_, bool* alpha_);
void GL__CompileShader_fn(uint32_t* shader_);
void GL__CreateBuffer_fn(uint32_t* __retval);
void GL__CreateFramebuffer_fn(uint32_t* __retval);
void GL__CreateProgram_fn(uint32_t* __retval);
void GL__CreateRenderbuffer_fn(uint32_t* __retval);
void GL__CreateShader_fn(int* type_, uint32_t* __retval);
void GL__CreateTexture_fn(uint32_t* __retval);
void GL__CullFace_fn(int* mode_);
void GL__DeleteBuffer_fn(uint32_t* buffer_);
void GL__DeleteFramebuffer_fn(uint32_t* fb_);
void GL__DeleteProgram_fn(uint32_t* program_);
void GL__DeleteRenderbuffer_fn(uint32_t* renderbuffer_);
void GL__DeleteShader_fn(uint32_t* shader_);
void GL__DeleteTexture_fn(uint32_t* texture_);
void GL__DepthFunc_fn(int* func_);
void GL__DepthMask_fn(bool* flag_);
void GL__DetachShader_fn(uint32_t* program_, uint32_t* shader_);
void GL__Disable_fn(int* cap_);
void GL__DisableVertexAttribArray_fn(int* index_);
void GL__DrawArrays_fn(int* mode_, int* first_, int* count_);
void GL__DrawElements_fn(int* mode_, int* count_, int* type_, int* offset_);
void GL__Enable_fn(int* cap_);
void GL__EnableVertexAttribArray_fn(int* index_);
void GL__FramebufferRenderbuffer_fn(int* target_, int* attachment_, int* renderbuffertarget_, uint32_t* renderbuffer_);
void GL__FramebufferTexture2D_fn(int* target_, int* attachment_, int* textarget_, uint32_t* texture_, int* level_);
void GL__FrontFace_fn(int* mode_);
void GL__GenerateMipmap_fn(int* target_);
void GL__GetAttribLocation_fn(uint32_t* program_, uString* name_, int* __retval);
void GL__GetError_fn(int* __retval);
void GL__GetFramebufferBinding_fn(uint32_t* __retval);
void GL__GetInteger_fn(int* name_, ::g::Uno::Int4* __retval);
void GL__GetInteger1_fn(int* name_, int* __retval);
void GL__GetProgramInfoLog_fn(uint32_t* program_, uString** __retval);
void GL__GetProgramParameter_fn(uint32_t* program_, int* pname_, int* __retval);
void GL__GetRenderbufferBinding_fn(uint32_t* __retval);
void GL__GetShaderInfoLog_fn(uint32_t* shader_, uString** __retval);
void GL__GetShaderParameter_fn(uint32_t* shader_, int* pname_, int* __retval);
void GL__GetUniformLocation_fn(uint32_t* program_, uString* name_, int* __retval);
void GL__LineWidth_fn(float* width_);
void GL__LinkProgram_fn(uint32_t* program_);
void GL__RenderbufferStorage_fn(int* target_, int* internalFormat_, int* width_, int* height_);
void GL__Scissor_fn(int* x_, int* y_, int* width_, int* height_);
void GL__ShaderSource_fn(uint32_t* shader_, uString* source_);
void GL__TexImage2D_fn(int* target_, int* level_, int* internalFormat_, int* width_, int* height_, int* border_, int* format_, int* type_, ::g::Uno::Buffer* data_);
void GL__TexParameter_fn(int* target_, int* pname_, int* param_);
void GL__Uniform1_fn(int* location_, float* value_);
void GL__Uniform11_fn(int* location_, uArray* value_);
void GL__Uniform12_fn(int* location_, int* value_);
void GL__Uniform2_fn(int* location_, ::g::Uno::Float2* value_);
void GL__Uniform21_fn(int* location_, uArray* value_);
void GL__Uniform3_fn(int* location_, ::g::Uno::Float3* value_);
void GL__Uniform4_fn(int* location_, ::g::Uno::Float4* value_);
void GL__Uniform41_fn(int* location_, uArray* value_);
void GL__UniformMatrix2_fn(int* location_, bool* transpose_, ::g::Uno::Float2x2* value_);
void GL__UniformMatrix4_fn(int* location_, bool* transpose_, ::g::Uno::Float4x4* value_);
void GL__UniformMatrix41_fn(int* location_, bool* transpose_, uArray* value_);
void GL__UseProgram_fn(uint32_t* program_);
void GL__VertexAttribPointer_fn(int* index_, int* size_, int* type_, bool* normalized_, int* stride_, int* offset_);
void GL__Viewport_fn(int* x_, int* y_, int* width_, int* height_);

struct GL : uObject
{
    static void ActiveTexture(int texture_);
    static void AttachShader(uint32_t program_, uint32_t shader_);
    static void BindBuffer(int target_, uint32_t buffer_);
    static void BindFramebuffer(int target_, uint32_t fb_);
    static void BindRenderbuffer(int target_, uint32_t renderbuffer_);
    static void BindTexture(int target_, uint32_t texture_);
    static void BlendFuncSeparate(int srcRGB_, int dstRGB_, int srcAlpha_, int dstAlpha_);
    static void BufferData(int target_, int sizeInBytes_, int usage_);
    static void BufferData1(int target_, ::g::Uno::Buffer* data_, int usage_);
    static void BufferSubData(int target_, int offset_, ::g::Uno::Buffer* data_);
    static int CheckFramebufferStatus(int target_);
    static void Clear(int mask_);
    static void ClearColor(float red_, float green_, float blue_, float alpha_);
    static void ClearDepth(float depth_);
    static void ColorMask(bool red_, bool green_, bool blue_, bool alpha_);
    static void CompileShader(uint32_t shader_);
    static uint32_t CreateBuffer();
    static uint32_t CreateFramebuffer();
    static uint32_t CreateProgram();
    static uint32_t CreateRenderbuffer();
    static uint32_t CreateShader(int type_);
    static uint32_t CreateTexture();
    static void CullFace(int mode_);
    static void DeleteBuffer(uint32_t buffer_);
    static void DeleteFramebuffer(uint32_t fb_);
    static void DeleteProgram(uint32_t program_);
    static void DeleteRenderbuffer(uint32_t renderbuffer_);
    static void DeleteShader(uint32_t shader_);
    static void DeleteTexture(uint32_t texture_);
    static void DepthFunc(int func_);
    static void DepthMask(bool flag_);
    static void DetachShader(uint32_t program_, uint32_t shader_);
    static void Disable(int cap_);
    static void DisableVertexAttribArray(int index_);
    static void DrawArrays(int mode_, int first_, int count_);
    static void DrawElements(int mode_, int count_, int type_, int offset_);
    static void Enable(int cap_);
    static void EnableVertexAttribArray(int index_);
    static void FramebufferRenderbuffer(int target_, int attachment_, int renderbuffertarget_, uint32_t renderbuffer_);
    static void FramebufferTexture2D(int target_, int attachment_, int textarget_, uint32_t texture_, int level_);
    static void FrontFace(int mode_);
    static void GenerateMipmap(int target_);
    static int GetAttribLocation(uint32_t program_, uString* name_);
    static int GetError();
    static uint32_t GetFramebufferBinding();
    static ::g::Uno::Int4 GetInteger(int name_);
    static int GetInteger1(int name_);
    static uString* GetProgramInfoLog(uint32_t program_);
    static int GetProgramParameter(uint32_t program_, int pname_);
    static uint32_t GetRenderbufferBinding();
    static uString* GetShaderInfoLog(uint32_t shader_);
    static int GetShaderParameter(uint32_t shader_, int pname_);
    static int GetUniformLocation(uint32_t program_, uString* name_);
    static void LineWidth(float width_);
    static void LinkProgram(uint32_t program_);
    static void RenderbufferStorage(int target_, int internalFormat_, int width_, int height_);
    static void Scissor(int x_, int y_, int width_, int height_);
    static void ShaderSource(uint32_t shader_, uString* source_);
    static void TexImage2D(int target_, int level_, int internalFormat_, int width_, int height_, int border_, int format_, int type_, ::g::Uno::Buffer* data_);
    static void TexParameter(int target_, int pname_, int param_);
    static void Uniform1(int location_, float value_);
    static void Uniform11(int location_, uArray* value_);
    static void Uniform12(int location_, int value_);
    static void Uniform2(int location_, ::g::Uno::Float2 value_);
    static void Uniform21(int location_, uArray* value_);
    static void Uniform3(int location_, ::g::Uno::Float3 value_);
    static void Uniform4(int location_, ::g::Uno::Float4 value_);
    static void Uniform41(int location_, uArray* value_);
    static void UniformMatrix2(int location_, bool transpose_, ::g::Uno::Float2x2 value_);
    static void UniformMatrix4(int location_, bool transpose_, ::g::Uno::Float4x4 value_);
    static void UniformMatrix41(int location_, bool transpose_, uArray* value_);
    static void UseProgram(uint32_t program_);
    static void VertexAttribPointer(int index_, int size_, int type_, bool normalized_, int stride_, int offset_);
    static void Viewport(int x_, int y_, int width_, int height_);
};
// }

}} // ::g::OpenGL
