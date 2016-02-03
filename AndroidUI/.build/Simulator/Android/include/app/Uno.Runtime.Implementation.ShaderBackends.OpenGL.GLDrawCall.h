// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_DRAW_CALL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_DRAW_CALL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__int; } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct SamplerState; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct VideoTexture; } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLCompiledProgram; } } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLProgram; } } } } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float2x2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

struct GLDrawCall;

extern ::uStaticStrong< ::app::Uno::Collections::List__int*> GLDrawCall___boundAttributes;
extern int GLDrawCall___currentTextureUnit;

struct GLDrawCall__uType : ::uStructType
{
};

GLDrawCall__uType* GLDrawCall__typeof();

void GLDrawCall___ObjInit(GLDrawCall* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program);
void GLDrawCall__Attrib(GLDrawCall* __this, int index, int componentCount, int componentType, bool normalized, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset);
void GLDrawCall__Attrib_1(GLDrawCall* __this, int index, int type, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset);
void GLDrawCall__Begin(GLDrawCall* __this);
void GLDrawCall__Const(GLDrawCall* __this, int index, bool value);
void GLDrawCall__Const_1(GLDrawCall* __this, int index, int value);
void GLDrawCall__ConstInternal(GLDrawCall* __this, int index, ::uString* value);
void GLDrawCall__DisableSampler(GLDrawCall* __this, int index, int target);
void GLDrawCall__Draw(GLDrawCall* __this, int count, int type, ::app::Uno::Graphics::IndexBuffer* buf);
void GLDrawCall__DrawArrays(GLDrawCall* __this, int count);
void GLDrawCall__DrawElements(GLDrawCall* __this, int count, int type, ::app::Uno::Graphics::IndexBuffer* buf);
void GLDrawCall__End(GLDrawCall* __this);
int GLDrawCall__get_BaseVertex(GLDrawCall* __this);
int GLDrawCall__get_BlendDstAlpha(GLDrawCall* __this);
int GLDrawCall__get_BlendDstRgb(GLDrawCall* __this);
bool GLDrawCall__get_BlendEnabled(GLDrawCall* __this);
int GLDrawCall__get_BlendEquationAlpha(GLDrawCall* __this);
int GLDrawCall__get_BlendEquationRgb(GLDrawCall* __this);
int GLDrawCall__get_BlendSrcAlpha(GLDrawCall* __this);
int GLDrawCall__get_BlendSrcRgb(GLDrawCall* __this);
int GLDrawCall__get_CullFace(GLDrawCall* __this);
int GLDrawCall__get_DepthFunc(GLDrawCall* __this);
bool GLDrawCall__get_DepthTestEnabled(GLDrawCall* __this);
float GLDrawCall__get_LineWidth(GLDrawCall* __this);
int GLDrawCall__get_PolygonWinding(GLDrawCall* __this);
int GLDrawCall__get_PrimitiveType(GLDrawCall* __this);
::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* GLDrawCall__get_Program(GLDrawCall* __this);
bool GLDrawCall__get_WriteAlpha(GLDrawCall* __this);
bool GLDrawCall__get_WriteBlue(GLDrawCall* __this);
bool GLDrawCall__get_WriteDepth(GLDrawCall* __this);
bool GLDrawCall__get_WriteGreen(GLDrawCall* __this);
bool GLDrawCall__get_WriteRed(GLDrawCall* __this);
GLDrawCall GLDrawCall__New_1(::uStatic* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program);
void GLDrawCall__Sampler(GLDrawCall* __this, int index, int target, ::uUInt handle, bool supportsMipmap);
void GLDrawCall__Sampler_1(GLDrawCall* __this, int index, int target, ::uUInt handle, ::app::Uno::Graphics::SamplerState state, bool supportsMipmap);
void GLDrawCall__Sampler_2(GLDrawCall* __this, int index, ::app::Uno::Graphics::Texture2D* value);
void GLDrawCall__Sampler_3(GLDrawCall* __this, int index, ::app::Uno::Graphics::Texture2D* value, ::app::Uno::Graphics::SamplerState state);
void GLDrawCall__Sampler_6(GLDrawCall* __this, int index, ::app::Uno::Graphics::VideoTexture* value);
void GLDrawCall__set_BaseVertex(GLDrawCall* __this, int value);
void GLDrawCall__set_BlendDstAlpha(GLDrawCall* __this, int value);
void GLDrawCall__set_BlendDstRgb(GLDrawCall* __this, int value);
void GLDrawCall__set_BlendEnabled(GLDrawCall* __this, bool value);
void GLDrawCall__set_BlendEquationAlpha(GLDrawCall* __this, int value);
void GLDrawCall__set_BlendEquationRgb(GLDrawCall* __this, int value);
void GLDrawCall__set_BlendSrcAlpha(GLDrawCall* __this, int value);
void GLDrawCall__set_BlendSrcRgb(GLDrawCall* __this, int value);
void GLDrawCall__set_CullFace(GLDrawCall* __this, int value);
void GLDrawCall__set_DepthFunc(GLDrawCall* __this, int value);
void GLDrawCall__set_DepthTestEnabled(GLDrawCall* __this, bool value);
void GLDrawCall__set_LineWidth(GLDrawCall* __this, float value);
void GLDrawCall__set_PolygonWinding(GLDrawCall* __this, int value);
void GLDrawCall__set_PrimitiveType(GLDrawCall* __this, int value);
void GLDrawCall__set_Program(GLDrawCall* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value);
void GLDrawCall__set_WriteAlpha(GLDrawCall* __this, bool value);
void GLDrawCall__set_WriteBlue(GLDrawCall* __this, bool value);
void GLDrawCall__set_WriteDepth(GLDrawCall* __this, bool value);
void GLDrawCall__set_WriteGreen(GLDrawCall* __this, bool value);
void GLDrawCall__set_WriteRed(GLDrawCall* __this, bool value);
void GLDrawCall__Uniform(GLDrawCall* __this, int index, ::uArray* value);
void GLDrawCall__Uniform_11(GLDrawCall* __this, int index, float value);
void GLDrawCall__Uniform_12(GLDrawCall* __this, int index, ::app::Uno::Float2 value);
void GLDrawCall__Uniform_13(GLDrawCall* __this, int index, ::app::Uno::Float2x2 value);
void GLDrawCall__Uniform_14(GLDrawCall* __this, int index, ::app::Uno::Float3 value);
void GLDrawCall__Uniform_16(GLDrawCall* __this, int index, ::app::Uno::Float4 value);
void GLDrawCall__Uniform_17(GLDrawCall* __this, int index, ::app::Uno::Float4x4 value);
void GLDrawCall__Uniform_3(GLDrawCall* __this, int index, ::uArray* value);
void GLDrawCall__Uniform_5(GLDrawCall* __this, int index, ::uArray* value);
void GLDrawCall__Uniform_6(GLDrawCall* __this, int index, ::uArray* value);
void GLDrawCall__Use(GLDrawCall* __this);

struct GLDrawCall
{
    ::uStrong< ::uArray*> _constValues;
    bool _compiledProgramDirty;
    ::uStrong< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*> _compiledProgram;
    int _blendEqRgb;
    int _blendEqAlpha;
    int _blendSrcRgb;
    int _blendSrcAlpha;
    int _blendDstRgb;
    int _blendDstAlpha;
    int _depthFunc;
    int _primitiveType;
    int _cullFace;
    int _frontFace;
    ::uStrong< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> _Program;
    bool _WriteDepth;
    bool _WriteAlpha;
    bool _WriteBlue;
    bool _WriteGreen;
    bool _WriteRed;
    bool _DepthTestEnabled;
    bool _BlendEnabled;
    int _BaseVertex;
    float _LineWidth;

    void _ObjInit(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program) { GLDrawCall___ObjInit(this, program); }
    void Attrib(int index, int componentCount, int componentType, bool normalized, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset) { GLDrawCall__Attrib(this, index, componentCount, componentType, normalized, buf, stride, offset); }
    void Attrib_1(int index, int type, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset) { GLDrawCall__Attrib_1(this, index, type, buf, stride, offset); }
    void Begin() { GLDrawCall__Begin(this); }
    void Const(int index, bool value) { GLDrawCall__Const(this, index, value); }
    void Const_1(int index, int value) { GLDrawCall__Const_1(this, index, value); }
    void ConstInternal(int index, ::uString* value) { GLDrawCall__ConstInternal(this, index, value); }
    void DisableSampler(int index, int target) { GLDrawCall__DisableSampler(this, index, target); }
    void Draw(int count, int type, ::app::Uno::Graphics::IndexBuffer* buf) { GLDrawCall__Draw(this, count, type, buf); }
    void DrawArrays(int count) { GLDrawCall__DrawArrays(this, count); }
    void DrawElements(int count, int type, ::app::Uno::Graphics::IndexBuffer* buf) { GLDrawCall__DrawElements(this, count, type, buf); }
    void End() { GLDrawCall__End(this); }
    int BaseVertex() { return GLDrawCall__get_BaseVertex(this); }
    int BlendDstAlpha() { return GLDrawCall__get_BlendDstAlpha(this); }
    int BlendDstRgb() { return GLDrawCall__get_BlendDstRgb(this); }
    bool BlendEnabled() { return GLDrawCall__get_BlendEnabled(this); }
    int BlendEquationAlpha() { return GLDrawCall__get_BlendEquationAlpha(this); }
    int BlendEquationRgb() { return GLDrawCall__get_BlendEquationRgb(this); }
    int BlendSrcAlpha() { return GLDrawCall__get_BlendSrcAlpha(this); }
    int BlendSrcRgb() { return GLDrawCall__get_BlendSrcRgb(this); }
    int CullFace() { return GLDrawCall__get_CullFace(this); }
    int DepthFunc() { return GLDrawCall__get_DepthFunc(this); }
    bool DepthTestEnabled() { return GLDrawCall__get_DepthTestEnabled(this); }
    float LineWidth() { return GLDrawCall__get_LineWidth(this); }
    int PolygonWinding() { return GLDrawCall__get_PolygonWinding(this); }
    int PrimitiveType() { return GLDrawCall__get_PrimitiveType(this); }
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* Program() { return GLDrawCall__get_Program(this); }
    bool WriteAlpha() { return GLDrawCall__get_WriteAlpha(this); }
    bool WriteBlue() { return GLDrawCall__get_WriteBlue(this); }
    bool WriteDepth() { return GLDrawCall__get_WriteDepth(this); }
    bool WriteGreen() { return GLDrawCall__get_WriteGreen(this); }
    bool WriteRed() { return GLDrawCall__get_WriteRed(this); }
    void Sampler(int index, int target, ::uUInt handle, bool supportsMipmap) { GLDrawCall__Sampler(this, index, target, handle, supportsMipmap); }
    void Sampler_1(int index, int target, ::uUInt handle, ::app::Uno::Graphics::SamplerState state, bool supportsMipmap);
    void Sampler_2(int index, ::app::Uno::Graphics::Texture2D* value) { GLDrawCall__Sampler_2(this, index, value); }
    void Sampler_3(int index, ::app::Uno::Graphics::Texture2D* value, ::app::Uno::Graphics::SamplerState state);
    void Sampler_6(int index, ::app::Uno::Graphics::VideoTexture* value) { GLDrawCall__Sampler_6(this, index, value); }
    void BaseVertex(int value) { GLDrawCall__set_BaseVertex(this, value); }
    void BlendDstAlpha(int value) { GLDrawCall__set_BlendDstAlpha(this, value); }
    void BlendDstRgb(int value) { GLDrawCall__set_BlendDstRgb(this, value); }
    void BlendEnabled(bool value) { GLDrawCall__set_BlendEnabled(this, value); }
    void BlendEquationAlpha(int value) { GLDrawCall__set_BlendEquationAlpha(this, value); }
    void BlendEquationRgb(int value) { GLDrawCall__set_BlendEquationRgb(this, value); }
    void BlendSrcAlpha(int value) { GLDrawCall__set_BlendSrcAlpha(this, value); }
    void BlendSrcRgb(int value) { GLDrawCall__set_BlendSrcRgb(this, value); }
    void CullFace(int value) { GLDrawCall__set_CullFace(this, value); }
    void DepthFunc(int value) { GLDrawCall__set_DepthFunc(this, value); }
    void DepthTestEnabled(bool value) { GLDrawCall__set_DepthTestEnabled(this, value); }
    void LineWidth(float value) { GLDrawCall__set_LineWidth(this, value); }
    void PolygonWinding(int value) { GLDrawCall__set_PolygonWinding(this, value); }
    void PrimitiveType(int value) { GLDrawCall__set_PrimitiveType(this, value); }
    void Program(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value) { GLDrawCall__set_Program(this, value); }
    void WriteAlpha(bool value) { GLDrawCall__set_WriteAlpha(this, value); }
    void WriteBlue(bool value) { GLDrawCall__set_WriteBlue(this, value); }
    void WriteDepth(bool value) { GLDrawCall__set_WriteDepth(this, value); }
    void WriteGreen(bool value) { GLDrawCall__set_WriteGreen(this, value); }
    void WriteRed(bool value) { GLDrawCall__set_WriteRed(this, value); }
    void Uniform(int index, ::uArray* value) { GLDrawCall__Uniform(this, index, value); }
    void Uniform_11(int index, float value) { GLDrawCall__Uniform_11(this, index, value); }
    void Uniform_12(int index, ::app::Uno::Float2 value);
    void Uniform_13(int index, ::app::Uno::Float2x2 value);
    void Uniform_14(int index, ::app::Uno::Float3 value);
    void Uniform_16(int index, ::app::Uno::Float4 value);
    void Uniform_17(int index, ::app::Uno::Float4x4 value);
    void Uniform_3(int index, ::uArray* value) { GLDrawCall__Uniform_3(this, index, value); }
    void Uniform_5(int index, ::uArray* value) { GLDrawCall__Uniform_5(this, index, value); }
    void Uniform_6(int index, ::uArray* value) { GLDrawCall__Uniform_6(this, index, value); }
    void Use() { GLDrawCall__Use(this); }
};

}}}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.SamplerState.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

inline void GLDrawCall::Sampler_1(int index, int target, ::uUInt handle, ::app::Uno::Graphics::SamplerState state, bool supportsMipmap) { GLDrawCall__Sampler_1(this, index, target, handle, state, supportsMipmap); }
inline void GLDrawCall::Sampler_3(int index, ::app::Uno::Graphics::Texture2D* value, ::app::Uno::Graphics::SamplerState state) { GLDrawCall__Sampler_3(this, index, value, state); }
inline void GLDrawCall::Uniform_12(int index, ::app::Uno::Float2 value) { GLDrawCall__Uniform_12(this, index, value); }
inline void GLDrawCall::Uniform_13(int index, ::app::Uno::Float2x2 value) { GLDrawCall__Uniform_13(this, index, value); }
inline void GLDrawCall::Uniform_14(int index, ::app::Uno::Float3 value) { GLDrawCall__Uniform_14(this, index, value); }
inline void GLDrawCall::Uniform_16(int index, ::app::Uno::Float4 value) { GLDrawCall__Uniform_16(this, index, value); }
inline void GLDrawCall::Uniform_17(int index, ::app::Uno::Float4x4 value) { GLDrawCall__Uniform_17(this, index, value); }

}}}}}}


#endif
