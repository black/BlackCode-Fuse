// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_H__
#define __APP_OPEN_G_L_G_L_H__

#include <Uno.h>
namespace app { namespace OpenGL { struct GLShaderPrecisionFormat; } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float2x2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Int3; } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace OpenGL {

struct GL__uType : ::uClassType
{
};

GL__uType* GL__typeof();

void GL__ActiveTexture(::uStatic* __this, int texture_);
void GL__AttachShader(::uStatic* __this, ::uUInt program_, ::uUInt shader_);
void GL__BindAttribLocation(::uStatic* __this, ::uUInt handle_, int index_, ::uString* name_);
void GL__BindBuffer(::uStatic* __this, int target_, ::uUInt buffer_);
void GL__BindFramebuffer(::uStatic* __this, int target_, ::uUInt fb_);
void GL__BindRenderbuffer(::uStatic* __this, int target_, ::uUInt renderbuffer_);
void GL__BindTexture(::uStatic* __this, int target_, ::uUInt texture_);
void GL__BlendEquation(::uStatic* __this, int mode_);
void GL__BlendEquationSeparate(::uStatic* __this, int modeRgb_, int modeAlpha_);
void GL__BlendFunc(::uStatic* __this, int src_, int dst_);
void GL__BlendFuncSeparate(::uStatic* __this, int srcRGB_, int dstRGB_, int srcAlpha_, int dstAlpha_);
void GL__BufferData(::uStatic* __this, int target_, ::app::Uno::Buffer* data_, int usage_);
void GL__BufferDatai(::uStatic* __this, int target_, int sizeInBytes_, int usage_);
void GL__BufferSubData(::uStatic* __this, int target_, int offset_, ::app::Uno::Buffer* data_);
int GL__CheckFramebufferStatus(::uStatic* __this, int target_);
void GL__Clear(::uStatic* __this, int mask_);
void GL__ClearColor(::uStatic* __this, float red_, float green_, float blue_, float alpha_);
void GL__ClearDepth(::uStatic* __this, float depth_);
void GL__ColorMask(::uStatic* __this, bool red_, bool green_, bool blue_, bool alpha_);
void GL__CompileShader(::uStatic* __this, ::uUInt shader_);
::uUInt GL__CreateBuffer(::uStatic* __this);
::uUInt GL__CreateFramebuffer(::uStatic* __this);
::uUInt GL__CreateProgram(::uStatic* __this);
::uUInt GL__CreateRenderbuffer(::uStatic* __this);
::uUInt GL__CreateShader(::uStatic* __this, int type_);
::uUInt GL__CreateTexture(::uStatic* __this);
void GL__CullFace(::uStatic* __this, int mode_);
void GL__DeleteBuffer(::uStatic* __this, ::uUInt buffer_);
void GL__DeleteFramebuffer(::uStatic* __this, ::uUInt fb_);
void GL__DeleteProgram(::uStatic* __this, ::uUInt program_);
void GL__DeleteRenderbuffer(::uStatic* __this, ::uUInt renderbuffer_);
void GL__DeleteShader(::uStatic* __this, ::uUInt shader_);
void GL__DeleteTexture(::uStatic* __this, ::uUInt texture_);
void GL__DepthFunc(::uStatic* __this, int func_);
void GL__DepthMask(::uStatic* __this, bool flag_);
void GL__DepthRange(::uStatic* __this, float zNear_, float zFar_);
void GL__DetachShader(::uStatic* __this, ::uUInt program_, ::uUInt shader_);
void GL__Disable(::uStatic* __this, int cap_);
void GL__DisableVertexAttribArray(::uStatic* __this, int index_);
void GL__DisposeContext(::uStatic* __this);
void GL__DrawArrays(::uStatic* __this, int mode_, int first_, int count_);
void GL__DrawElements(::uStatic* __this, int mode_, int count_, int type_, int offset_);
void GL__Enable(::uStatic* __this, int cap_);
void GL__EnableVertexAttribArray(::uStatic* __this, int index_);
void GL__FramebufferRenderbuffer(::uStatic* __this, int target_, int attachment_, int renderbuffertarget_, ::uUInt renderbuffer_);
void GL__FramebufferTexture2D(::uStatic* __this, int target_, int attachment_, int textarget_, ::uUInt texture_, int level_);
void GL__FrontFace(::uStatic* __this, int mode_);
void GL__GenerateMipmap(::uStatic* __this, int target_);
bool GL__get_HasGetShaderPrecisionFormat(::uStatic* __this);
int GL__GetAttribLocation(::uStatic* __this, ::uUInt program_, ::uString* name_);
int GL__GetError(::uStatic* __this);
::uUInt GL__GetFramebufferBinding(::uStatic* __this);
::app::Uno::Int4 GL__GetInteger(::uStatic* __this, int name_);
int GL__GetInteger_1(::uStatic* __this, int name_);
::uString* GL__GetProgramInfoLog(::uStatic* __this, ::uUInt program_);
int GL__GetProgramParameter(::uStatic* __this, ::uUInt program_, int pname_);
::uUInt GL__GetRenderbufferBinding(::uStatic* __this);
::uString* GL__GetShaderInfoLog(::uStatic* __this, ::uUInt shader_);
int GL__GetShaderParameter(::uStatic* __this, ::uUInt shader_, int pname_);
::app::OpenGL::GLShaderPrecisionFormat GL__GetShaderPrecisionFormat(::uStatic* __this, int shaderType_, int precision_);
::uString* GL__GetString(::uStatic* __this, int name_);
int GL__GetUniformLocation(::uStatic* __this, ::uUInt program_, ::uString* name_);
void GL__LineWidth(::uStatic* __this, float width_);
void GL__LinkProgram(::uStatic* __this, ::uUInt program_);
void GL__PixelStore(::uStatic* __this, int pname_, int param_);
void GL__PolygonOffset(::uStatic* __this, float factor_, float units_);
void GL__ReadPixels(::uStatic* __this, int x_, int y_, int width_, int height_, int format_, int type_, ::uArray* data_);
void GL__RenderbufferStorage(::uStatic* __this, int target_, int internalFormat_, int width_, int height_);
void GL__Scissor(::uStatic* __this, int x_, int y_, int width_, int height_);
void GL__ShaderSource(::uStatic* __this, ::uUInt shader_, ::uString* source_);
void GL__TexImage2D(::uStatic* __this, int target_, int level_, int internalFormat_, int width_, int height_, int border_, int format_, int type_, ::app::Uno::Buffer* data_);
void GL__TexImage2D_1(::uStatic* __this, int target_, int level_, int internalFormat_, int width_, int height_, int border_, int format_, int type_, void* data_);
void GL__TexParameteri(::uStatic* __this, int target_, int pname_, int param_);
void GL__Uniform1f(::uStatic* __this, int location_, float value_);
void GL__Uniform1fv(::uStatic* __this, int location_, ::uArray* value_);
void GL__Uniform1i(::uStatic* __this, int location_, int value_);
void GL__Uniform1iv(::uStatic* __this, int location_, ::uArray* value_);
void GL__Uniform2f(::uStatic* __this, int location_, ::app::Uno::Float2 value_);
void GL__Uniform2fv(::uStatic* __this, int location_, ::uArray* value_);
void GL__Uniform2i(::uStatic* __this, int location_, ::app::Uno::Int2 value_);
void GL__Uniform2iv(::uStatic* __this, int location_, ::uArray* value_);
void GL__Uniform3f(::uStatic* __this, int location_, ::app::Uno::Float3 value_);
void GL__Uniform3fv(::uStatic* __this, int location_, ::uArray* value_);
void GL__Uniform3i(::uStatic* __this, int location_, ::app::Uno::Int3 value_);
void GL__Uniform3iv(::uStatic* __this, int location_, ::uArray* value_);
void GL__Uniform4f(::uStatic* __this, int location_, ::app::Uno::Float4 value_);
void GL__Uniform4fv(::uStatic* __this, int location_, ::uArray* value_);
void GL__Uniform4i(::uStatic* __this, int location_, ::app::Uno::Int4 value_);
void GL__Uniform4iv(::uStatic* __this, int location_, ::uArray* value_);
void GL__UniformMatrix2f(::uStatic* __this, int location_, bool transpose_, ::app::Uno::Float2x2 value_);
void GL__UniformMatrix2fv(::uStatic* __this, int location_, bool transpose_, ::uArray* value_);
void GL__UniformMatrix3f(::uStatic* __this, int location_, bool transpose_, ::app::Uno::Float3x3 value_);
void GL__UniformMatrix3fv(::uStatic* __this, int location_, bool transpose_, ::uArray* value_);
void GL__UniformMatrix4f(::uStatic* __this, int location_, bool transpose_, ::app::Uno::Float4x4 value_);
void GL__UniformMatrix4fv(::uStatic* __this, int location_, bool transpose_, ::uArray* value_);
void GL__UseProgram(::uStatic* __this, ::uUInt program_);
void GL__VertexAttribPointer(::uStatic* __this, int index_, int size_, int type_, bool normalized_, int stride_, int offset_);
void GL__Viewport(::uStatic* __this, int x_, int y_, int width_, int height_);

}}


#endif
