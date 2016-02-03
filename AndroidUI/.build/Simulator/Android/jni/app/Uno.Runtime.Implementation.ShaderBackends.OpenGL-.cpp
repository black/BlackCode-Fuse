#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLBlendEquation.h>
#include <app/OpenGL.GLBlendingFactor.h>
#include <app/OpenGL.GLBufferHandle.h>
#include <app/OpenGL.GLBufferTarget.h>
#include <app/OpenGL.GLBufferUsage.h>
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
#include <app/OpenGL.GLPixelFormat.h>
#include <app/OpenGL.GLPixelType.h>
#include <app/OpenGL.GLPrimitiveType.h>
#include <app/OpenGL.GLProgramHandle.h>
#include <app/OpenGL.GLProgramParameter.h>
#include <app/OpenGL.GLRenderbufferHandle.h>
#include <app/OpenGL.GLRenderbufferStorage.h>
#include <app/OpenGL.GLRenderbufferTarget.h>
#include <app/OpenGL.GLShaderHandle.h>
#include <app/OpenGL.GLShaderParameter.h>
#include <app/OpenGL.GLShaderType.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/OpenGL.GLTextureParameterName.h>
#include <app/OpenGL.GLTextureParameterValue.h>
#include <app/OpenGL.GLTextureTarget.h>
#include <app/OpenGL.GLTextureUnit.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Runtime_Implementation_-2891cd12.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.BlendEquation.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.CompareFunc.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.PolygonWinding.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.TextureAddressMode.h>
#include <app/Uno.Graphics.TextureFilter.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Graphics.VideoTexture.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GLCompiledProgram__uType* GLCompiledProgram__typeof()
{
    static ::uStaticStrong<GLCompiledProgram__uType*> type;
    if (type != NULL) return type;

    type = (GLCompiledProgram__uType*)::uAllocClassType(sizeof(GLCompiledProgram__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram", false, 1, 1, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))GLCompiledProgram__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(GLCompiledProgram__uType, __interface_0));

    type->SetStrongRefs(
        "_locations", offsetof(GLCompiledProgram, _locations));

    type->SetFields(3,
        ::uNewField("_fsHandle", NULL, offsetof(GLCompiledProgram, _fsHandle), ::app::OpenGL::GLShaderHandle__typeof()),
        ::uNewField("_locations", NULL, offsetof(GLCompiledProgram, _locations), ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("_vsHandle", NULL, offsetof(GLCompiledProgram, _vsHandle), ::app::OpenGL::GLShaderHandle__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", GLCompiledProgram__Dispose, 0, false),
        ::uNewFunction("get_GLProgramHandle", GLCompiledProgram__get_GLProgramHandle, 0, false, ::app::OpenGL::GLProgramHandle__typeof()),
        ::uNewFunction("get_LocationCount", GLCompiledProgram__get_LocationCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetLocation", GLCompiledProgram__GetLocation, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_GLProgramHandle", GLCompiledProgram__set_GLProgramHandle, 0, false, ::app::OpenGL::GLProgramHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GLCompiledProgram___ObjInit(GLCompiledProgram* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    __this->_vsHandle = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CompileShader(NULL, 35633, vsSource);
    __this->_fsHandle = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CompileShader(NULL, 35632, fsSource);
    __this->GLProgramHandle(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__LinkProgram(NULL, __this->_vsHandle, __this->_fsHandle));
    __this->_locations = ::uNewArray(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(constAttribAndUniformNames)->Length());

    for (int i = 0; i < constCount; i++)
    {
        ::uPtr< ::uArray*>(__this->_locations)->Item< int>(i) = -1;
    }

    for (int i = constCount; i < (constCount + attribCount); i++)
    {
        ::uPtr< ::uArray*>(__this->_locations)->Item< int>(i) = ::app::OpenGL::GL__GetAttribLocation(NULL, __this->GLProgramHandle(), constAttribAndUniformNames->Item< ::uString*>(i));
    }

    for (int i = constCount + attribCount; i < constAttribAndUniformNames->Length(); i++)
    {
        ::uPtr< ::uArray*>(__this->_locations)->Item< int>(i) = ::app::OpenGL::GL__GetUniformLocation(NULL, __this->GLProgramHandle(), constAttribAndUniformNames->Item< ::uString*>(i));
    }
}

void GLCompiledProgram__Dispose(GLCompiledProgram* __this)
{
    ::app::OpenGL::GL__UseProgram(NULL, ::app::OpenGL::GLProgramHandle__Zero);
    ::app::OpenGL::GL__DetachShader(NULL, __this->GLProgramHandle(), __this->_vsHandle);
    ::app::OpenGL::GL__DetachShader(NULL, __this->GLProgramHandle(), __this->_fsHandle);
    ::app::OpenGL::GL__DeleteProgram(NULL, __this->GLProgramHandle());
    ::app::OpenGL::GL__DeleteShader(NULL, __this->_vsHandle);
    ::app::OpenGL::GL__DeleteShader(NULL, __this->_fsHandle);
}

::uUInt GLCompiledProgram__get_GLProgramHandle(GLCompiledProgram* __this)
{
    return __this->_GLProgramHandle;
}

int GLCompiledProgram__get_LocationCount(GLCompiledProgram* __this)
{
    return ::uPtr< ::uArray*>(__this->_locations)->Length();
}

int GLCompiledProgram__GetLocation(GLCompiledProgram* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_locations)->Item< int>(index);
}

GLCompiledProgram* GLCompiledProgram__New_1(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    GLCompiledProgram* inst = (GLCompiledProgram*)::uAllocObject(sizeof(GLCompiledProgram), GLCompiledProgram__typeof());
    inst->_ObjInit(vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
    return inst;
}

void GLCompiledProgram__set_GLProgramHandle(GLCompiledProgram* __this, ::uUInt value)
{
    __this->_GLProgramHandle = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__int*> GLDrawCall___boundAttributes;
int GLDrawCall___currentTextureUnit;

GLDrawCall__uType* GLDrawCall__typeof()
{
    static ::uStaticStrong<GLDrawCall__uType*> type;
    if (type != NULL) return type;

    type = (GLDrawCall__uType*)::uAllocStructType(sizeof(GLDrawCall__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall", sizeof(GLDrawCall), 0, 3, 0);

    type->SetStrongRefs(
        "_compiledProgram", offsetof(GLDrawCall, _compiledProgram),
        "_constValues", offsetof(GLDrawCall, _constValues),
        "_Program", offsetof(GLDrawCall, _Program));

    type->SetFields(15,
        ::uNewField("_blendDstAlpha", NULL, offsetof(GLDrawCall, _blendDstAlpha), ::app::OpenGL::GLBlendingFactor__typeof()),
        ::uNewField("_blendDstRgb", NULL, offsetof(GLDrawCall, _blendDstRgb), ::app::OpenGL::GLBlendingFactor__typeof()),
        ::uNewField("_blendEqAlpha", NULL, offsetof(GLDrawCall, _blendEqAlpha), ::app::OpenGL::GLBlendEquation__typeof()),
        ::uNewField("_blendEqRgb", NULL, offsetof(GLDrawCall, _blendEqRgb), ::app::OpenGL::GLBlendEquation__typeof()),
        ::uNewField("_blendSrcAlpha", NULL, offsetof(GLDrawCall, _blendSrcAlpha), ::app::OpenGL::GLBlendingFactor__typeof()),
        ::uNewField("_blendSrcRgb", NULL, offsetof(GLDrawCall, _blendSrcRgb), ::app::OpenGL::GLBlendingFactor__typeof()),
        ::uNewField("_boundAttributes", &GLDrawCall___boundAttributes, 0, ::app::Uno::Collections::List__int__typeof()),
        ::uNewField("_compiledProgram", NULL, offsetof(GLDrawCall, _compiledProgram), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof()),
        ::uNewField("_compiledProgramDirty", NULL, offsetof(GLDrawCall, _compiledProgramDirty), ::app::Uno::Bool__typeof()),
        ::uNewField("_constValues", NULL, offsetof(GLDrawCall, _constValues), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("_cullFace", NULL, offsetof(GLDrawCall, _cullFace), ::app::OpenGL::GLCullFaceMode__typeof()),
        ::uNewField("_currentTextureUnit", &GLDrawCall___currentTextureUnit, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_depthFunc", NULL, offsetof(GLDrawCall, _depthFunc), ::app::OpenGL::GLDepthFunction__typeof()),
        ::uNewField("_frontFace", NULL, offsetof(GLDrawCall, _frontFace), ::app::OpenGL::GLFrontFaceDirection__typeof()),
        ::uNewField("_primitiveType", NULL, offsetof(GLDrawCall, _primitiveType), ::app::OpenGL::GLPrimitiveType__typeof()));

    type->SetFunctions(68,
        ::uNewFunctionVoid("Attrib", GLDrawCall__Attrib, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLDataType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Graphics::VertexBuffer__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Attrib", GLDrawCall__Attrib_1, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::VertexAttributeType__typeof(), ::app::Uno::Graphics::VertexBuffer__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Begin", GLDrawCall__Begin, 0, false),
        ::uNewFunctionVoid("Const", GLDrawCall__Const, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Const", GLDrawCall__Const_1, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ConstInternal", GLDrawCall__ConstInternal, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("DisableSampler", GLDrawCall__DisableSampler, 0, false, ::app::Uno::Int__typeof(), ::app::OpenGL::GLTextureTarget__typeof()),
        ::uNewFunctionVoid("Draw", GLDrawCall__Draw, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::IndexType__typeof(), ::app::Uno::Graphics::IndexBuffer__typeof()),
        ::uNewFunctionVoid("DrawArrays", GLDrawCall__DrawArrays, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("DrawElements", GLDrawCall__DrawElements, 0, false, ::app::Uno::Int__typeof(), ::app::OpenGL::GLIndexType__typeof(), ::app::Uno::Graphics::IndexBuffer__typeof()),
        ::uNewFunctionVoid("End", GLDrawCall__End, 0, false),
        ::uNewFunction("get_BaseVertex", GLDrawCall__get_BaseVertex, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_BlendDstAlpha", GLDrawCall__get_BlendDstAlpha, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunction("get_BlendDstRgb", GLDrawCall__get_BlendDstRgb, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunction("get_BlendEnabled", GLDrawCall__get_BlendEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_BlendEquationAlpha", GLDrawCall__get_BlendEquationAlpha, 0, false, ::app::Uno::Graphics::BlendEquation__typeof()),
        ::uNewFunction("get_BlendEquationRgb", GLDrawCall__get_BlendEquationRgb, 0, false, ::app::Uno::Graphics::BlendEquation__typeof()),
        ::uNewFunction("get_BlendSrcAlpha", GLDrawCall__get_BlendSrcAlpha, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunction("get_BlendSrcRgb", GLDrawCall__get_BlendSrcRgb, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunction("get_CullFace", GLDrawCall__get_CullFace, 0, false, ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunction("get_DepthFunc", GLDrawCall__get_DepthFunc, 0, false, ::app::Uno::Graphics::CompareFunc__typeof()),
        ::uNewFunction("get_DepthTestEnabled", GLDrawCall__get_DepthTestEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_LineWidth", GLDrawCall__get_LineWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_PolygonWinding", GLDrawCall__get_PolygonWinding, 0, false, ::app::Uno::Graphics::PolygonWinding__typeof()),
        ::uNewFunction("get_PrimitiveType", GLDrawCall__get_PrimitiveType, 0, false, ::app::Uno::Graphics::PrimitiveType__typeof()),
        ::uNewFunction("get_Program", GLDrawCall__get_Program, 0, false, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()),
        ::uNewFunction("get_WriteAlpha", GLDrawCall__get_WriteAlpha, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_WriteBlue", GLDrawCall__get_WriteBlue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_WriteDepth", GLDrawCall__get_WriteDepth, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_WriteGreen", GLDrawCall__get_WriteGreen, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_WriteRed", GLDrawCall__get_WriteRed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", GLDrawCall__New_1, 0, true, GLDrawCall__typeof(), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()),
        ::uNewFunctionVoid("Sampler", GLDrawCall__Sampler, 0, false, ::app::Uno::Int__typeof(), ::app::OpenGL::GLTextureTarget__typeof(), ::app::OpenGL::GLTextureHandle__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Sampler", GLDrawCall__Sampler_1, 0, false, ::app::Uno::Int__typeof(), ::app::OpenGL::GLTextureTarget__typeof(), ::app::OpenGL::GLTextureHandle__typeof(), ::app::Uno::Graphics::SamplerState__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Sampler", GLDrawCall__Sampler_2, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunctionVoid("Sampler", GLDrawCall__Sampler_3, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Graphics::SamplerState__typeof()),
        ::uNewFunctionVoid("Sampler", GLDrawCall__Sampler_6, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Graphics::VideoTexture__typeof()),
        ::uNewFunctionVoid("set_BaseVertex", GLDrawCall__set_BaseVertex, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_BlendDstAlpha", GLDrawCall__set_BlendDstAlpha, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunctionVoid("set_BlendDstRgb", GLDrawCall__set_BlendDstRgb, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunctionVoid("set_BlendEnabled", GLDrawCall__set_BlendEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_BlendEquationAlpha", GLDrawCall__set_BlendEquationAlpha, 0, false, ::app::Uno::Graphics::BlendEquation__typeof()),
        ::uNewFunctionVoid("set_BlendEquationRgb", GLDrawCall__set_BlendEquationRgb, 0, false, ::app::Uno::Graphics::BlendEquation__typeof()),
        ::uNewFunctionVoid("set_BlendSrcAlpha", GLDrawCall__set_BlendSrcAlpha, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunctionVoid("set_BlendSrcRgb", GLDrawCall__set_BlendSrcRgb, 0, false, ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunctionVoid("set_CullFace", GLDrawCall__set_CullFace, 0, false, ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunctionVoid("set_DepthFunc", GLDrawCall__set_DepthFunc, 0, false, ::app::Uno::Graphics::CompareFunc__typeof()),
        ::uNewFunctionVoid("set_DepthTestEnabled", GLDrawCall__set_DepthTestEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_LineWidth", GLDrawCall__set_LineWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_PolygonWinding", GLDrawCall__set_PolygonWinding, 0, false, ::app::Uno::Graphics::PolygonWinding__typeof()),
        ::uNewFunctionVoid("set_PrimitiveType", GLDrawCall__set_PrimitiveType, 0, false, ::app::Uno::Graphics::PrimitiveType__typeof()),
        ::uNewFunctionVoid("set_Program", GLDrawCall__set_Program, 0, false, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()),
        ::uNewFunctionVoid("set_WriteAlpha", GLDrawCall__set_WriteAlpha, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_WriteBlue", GLDrawCall__set_WriteBlue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_WriteDepth", GLDrawCall__set_WriteDepth, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_WriteGreen", GLDrawCall__set_WriteGreen, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_WriteRed", GLDrawCall__set_WriteRed, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform, 0, false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float4x4__typeof())),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_11, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_12, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_13, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float2x2__typeof()),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_14, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_16, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_17, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_3, 0, false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float4__typeof())),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_5, 0, false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunctionVoid("Uniform", GLDrawCall__Uniform_6, 0, false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunctionVoid("Use", GLDrawCall__Use, 0, false));

    ::uRegisterType(type);
    return type;
}

void GLDrawCall___ObjInit(GLDrawCall* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program)
{
    int ind_123;
    int ind_124;
    bool ind_125 = bool();
    bool ind_126 = bool();
    bool ind_127 = bool();
    bool ind_128 = bool();
    *__this = ::uDefault< GLDrawCall>();

    if (GLDrawCall___boundAttributes == NULL)
    {
        GLDrawCall___boundAttributes = ::app::Uno::Collections::List__int__New_1(NULL);
    }

    __this->_constValues = ::uNewArray(::app::Uno::String__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(program)->ConstantCount());
    __this->Program(program);
    __this->BlendEnabled(false);
    __this->BlendEquationRgb((__this->BlendEquationAlpha(0), 0));
    __this->BlendSrcRgb((ind_123 = (ind_124 = (__this->BlendDstAlpha(1), 1), __this->BlendDstRgb(ind_124), ind_124), __this->BlendSrcAlpha(ind_123), ind_123));
    __this->WriteRed((ind_125 = (ind_126 = (ind_127 = (ind_128 = (__this->DepthTestEnabled(true), true), __this->WriteDepth(ind_128), ind_128), __this->WriteAlpha(ind_127), ind_127), __this->WriteBlue(ind_126), ind_126), __this->WriteGreen(ind_125), ind_125));
    __this->LineWidth(1.0f);
    __this->DepthFunc(2);
    __this->CullFace(2);
    __this->PolygonWinding(1);
    __this->PrimitiveType(1);
    __this->BaseVertex(0);
}

void GLDrawCall__Attrib(GLDrawCall* __this, int index, int componentCount, int componentType, bool normalized, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset)
{
    if (buf == NULL)
    {
        return;
    }

    int location = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index);

    if (location < 0)
    {
        return;
    }

    ::app::OpenGL::GL__EnableVertexAttribArray(NULL, location);
    ::app::OpenGL::GL__BindBuffer(NULL, 34962, ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(buf)->GLBufferHandle());
    ::app::OpenGL::GL__VertexAttribPointer(NULL, location, componentCount, componentType, normalized, stride, offset);
    ::app::OpenGL::GL__BindBuffer(NULL, 34962, ::app::OpenGL::GLBufferHandle__Zero);
    ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Add(location);
}

void GLDrawCall__Attrib_1(GLDrawCall* __this, int index, int type, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset)
{
    int componentCount = int();
    int componentType;
    bool normalized = bool();
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLVertexAttributeType(NULL, type, &componentCount, &componentType, &normalized);
    __this->Attrib(index, componentCount, componentType, normalized, buf, stride, offset);
}

void GLDrawCall__Begin(GLDrawCall* __this)
{
    if (__this->BlendEnabled())
    {
        ::app::OpenGL::GL__Enable(NULL, 3042);
        ::app::OpenGL::GL__BlendFuncSeparate(NULL, __this->_blendSrcRgb, __this->_blendDstRgb, __this->_blendSrcAlpha, __this->_blendDstAlpha);
    }
    else
    {
        ::app::OpenGL::GL__Disable(NULL, 3042);
    }

    if (__this->LineWidth() != 1.0f)
    {
        ::app::OpenGL::GL__LineWidth(NULL, __this->LineWidth());
    }

    if (__this->DepthTestEnabled())
    {
        ::app::OpenGL::GL__Enable(NULL, 2929);
        ::app::OpenGL::GL__DepthFunc(NULL, __this->_depthFunc);
    }
    else
    {
        ::app::OpenGL::GL__Disable(NULL, 2929);
    }

    if (__this->_cullFace != 0)
    {
        ::app::OpenGL::GL__Enable(NULL, 2884);
        ::app::OpenGL::GL__CullFace(NULL, __this->_cullFace);
        ::app::OpenGL::GL__FrontFace(NULL, __this->_frontFace);
    }
    else
    {
        ::app::OpenGL::GL__Disable(NULL, 2884);
    }

    ::app::OpenGL::GL__DepthMask(NULL, __this->WriteDepth());
    ::app::OpenGL::GL__ColorMask(NULL, __this->WriteRed(), __this->WriteGreen(), __this->WriteBlue(), __this->WriteAlpha());
}

void GLDrawCall__Const(GLDrawCall* __this, int index, bool value)
{
    __this->ConstInternal(index, value ? ::uGetConstString("true") : ::uGetConstString("false"));
}

void GLDrawCall__Const_1(GLDrawCall* __this, int index, int value)
{
    __this->ConstInternal(index, ::app::Uno::Int::ToString(value));
}

void GLDrawCall__ConstInternal(GLDrawCall* __this, int index, ::uString* value)
{
    if ((__this->_constValues != NULL) && ::app::Uno::String__op_Inequality(NULL, ::uPtr< ::uArray*>(__this->_constValues)->Item< ::uString*>(index), value))
    {
        ::uPtr< ::uArray*>(__this->_constValues)->ItemStrong< ::uString*>(index) = value;
        __this->_compiledProgramDirty = true;
    }
}

void GLDrawCall__DisableSampler(GLDrawCall* __this, int index, int target)
{
    ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + GLDrawCall___currentTextureUnit);
    ::app::OpenGL::GL__BindTexture(NULL, target, ::app::OpenGL::GLTextureHandle__Zero);
    GLDrawCall___currentTextureUnit++;
}

void GLDrawCall__Draw(GLDrawCall* __this, int count, int type, ::app::Uno::Graphics::IndexBuffer* buf)
{
    if (type == 0)
    {
        __this->DrawArrays(count);
    }
    else
    {
        __this->DrawElements(count, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLIndexType(NULL, type), buf);
    }
}

void GLDrawCall__DrawArrays(GLDrawCall* __this, int count)
{
    __this->Begin();
    ::app::OpenGL::GL__DrawArrays(NULL, __this->_primitiveType, __this->BaseVertex(), count);
    __this->End();
}

void GLDrawCall__DrawElements(GLDrawCall* __this, int count, int type, ::app::Uno::Graphics::IndexBuffer* buf)
{
    __this->Begin();
    ::app::OpenGL::GL__BindBuffer(NULL, 34963, ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(buf)->GLBufferHandle());
    ::app::OpenGL::GL__DrawElements(NULL, __this->_primitiveType, count, type, __this->BaseVertex());
    ::app::OpenGL::GL__BindBuffer(NULL, 34963, ::app::OpenGL::GLBufferHandle__Zero);
    __this->End();
}

void GLDrawCall__End(GLDrawCall* __this)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Count(); i++)
    {
        ::app::OpenGL::GL__DisableVertexAttribArray(NULL, ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Item(i));
    }

    for (int i = 0; i < GLDrawCall___currentTextureUnit; i++)
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + i);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }

    if (__this->LineWidth() != 1.0f)
    {
        ::app::OpenGL::GL__LineWidth(NULL, 1.0f);
    }

    ::app::OpenGL::GL__DepthMask(NULL, true);
    ::app::OpenGL::GL__ColorMask(NULL, true, true, true, true);
    ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Clear();
    GLDrawCall___currentTextureUnit = 0;
}

int GLDrawCall__get_BaseVertex(GLDrawCall* __this)
{
    return __this->_BaseVertex;
}

int GLDrawCall__get_BlendDstAlpha(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendDstAlpha);
}

int GLDrawCall__get_BlendDstRgb(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendDstRgb);
}

bool GLDrawCall__get_BlendEnabled(GLDrawCall* __this)
{
    return __this->_BlendEnabled;
}

int GLDrawCall__get_BlendEquationAlpha(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendEquation(NULL, __this->_blendEqAlpha);
}

int GLDrawCall__get_BlendEquationRgb(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendEquation(NULL, __this->_blendEqRgb);
}

int GLDrawCall__get_BlendSrcAlpha(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendSrcAlpha);
}

int GLDrawCall__get_BlendSrcRgb(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendSrcRgb);
}

int GLDrawCall__get_CullFace(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsPolygonFace(NULL, __this->_cullFace);
}

int GLDrawCall__get_DepthFunc(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsCompareFunc(NULL, __this->_depthFunc);
}

bool GLDrawCall__get_DepthTestEnabled(GLDrawCall* __this)
{
    return __this->_DepthTestEnabled;
}

float GLDrawCall__get_LineWidth(GLDrawCall* __this)
{
    return __this->_LineWidth;
}

int GLDrawCall__get_PolygonWinding(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsPolygonWinding(NULL, __this->_frontFace);
}

int GLDrawCall__get_PrimitiveType(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsPrimitiveType(NULL, __this->_primitiveType);
}

::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* GLDrawCall__get_Program(GLDrawCall* __this)
{
    return __this->_Program;
}

bool GLDrawCall__get_WriteAlpha(GLDrawCall* __this)
{
    return __this->_WriteAlpha;
}

bool GLDrawCall__get_WriteBlue(GLDrawCall* __this)
{
    return __this->_WriteBlue;
}

bool GLDrawCall__get_WriteDepth(GLDrawCall* __this)
{
    return __this->_WriteDepth;
}

bool GLDrawCall__get_WriteGreen(GLDrawCall* __this)
{
    return __this->_WriteGreen;
}

bool GLDrawCall__get_WriteRed(GLDrawCall* __this)
{
    return __this->_WriteRed;
}

GLDrawCall GLDrawCall__New_1(::uStatic* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program)
{
    GLDrawCall inst = ::uDefault< GLDrawCall>();
    inst._ObjInit(program);
    return inst;
}

void GLDrawCall__Sampler(GLDrawCall* __this, int index, int target, ::uUInt handle, bool supportsMipmap)
{
    int location = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index);
    ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + GLDrawCall___currentTextureUnit);
    ::app::OpenGL::GL__BindTexture(NULL, target, handle);
    ::app::OpenGL::GL__TexParameteri(NULL, target, 10240, 9729);

    if (supportsMipmap)
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, 9987);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, 10497);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, 10497);
    }
    else
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, 33071);
    }

    ::app::OpenGL::GL__Uniform1i(NULL, location, GLDrawCall___currentTextureUnit++);
}

void GLDrawCall__Sampler_1(GLDrawCall* __this, int index, int target, ::uUInt handle, ::app::Uno::Graphics::SamplerState state, bool supportsMipmap)
{
    int location = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index);
    ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + GLDrawCall___currentTextureUnit);
    ::app::OpenGL::GL__BindTexture(NULL, target, handle);
    ::app::OpenGL::GL__TexParameteri(NULL, target, 10240, state.MagFilter);

    if (supportsMipmap)
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, state.MinFilter);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, state.AddressU);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, state.AddressV);
    }
    else
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, state.MinFilterNoMipmap());
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, 33071);
    }

    ::app::OpenGL::GL__Uniform1i(NULL, location, GLDrawCall___currentTextureUnit++);
}

void GLDrawCall__Sampler_2(GLDrawCall* __this, int index, ::app::Uno::Graphics::Texture2D* value)
{
    if (value != NULL)
    {
        __this->Sampler(index, 3553, ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->GLTextureHandle(), ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->SupportsMipmap());
    }
    else
    {
        __this->DisableSampler(index, 3553);
    }
}

void GLDrawCall__Sampler_3(GLDrawCall* __this, int index, ::app::Uno::Graphics::Texture2D* value, ::app::Uno::Graphics::SamplerState state)
{
    if (value != NULL)
    {
        __this->Sampler_1(index, 3553, ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->GLTextureHandle(), state, ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->SupportsMipmap());
    }
    else
    {
        __this->DisableSampler(index, 3553);
    }
}

void GLDrawCall__Sampler_6(GLDrawCall* __this, int index, ::app::Uno::Graphics::VideoTexture* value)
{
    if (value != NULL)
    {
        __this->Sampler(index, 36197, ::uPtr< ::app::Uno::Graphics::VideoTexture*>(value)->GLTextureHandle(), ::uPtr< ::app::Uno::Graphics::VideoTexture*>(value)->SupportsMipmap);
    }
    else
    {
        __this->DisableSampler(index, 36197);
    }
}

void GLDrawCall__set_BaseVertex(GLDrawCall* __this, int value)
{
    __this->_BaseVertex = value;
}

void GLDrawCall__set_BlendDstAlpha(GLDrawCall* __this, int value)
{
    __this->_blendDstAlpha = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

void GLDrawCall__set_BlendDstRgb(GLDrawCall* __this, int value)
{
    __this->_blendDstRgb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

void GLDrawCall__set_BlendEnabled(GLDrawCall* __this, bool value)
{
    __this->_BlendEnabled = value;
}

void GLDrawCall__set_BlendEquationAlpha(GLDrawCall* __this, int value)
{
    __this->_blendEqAlpha = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendEquation(NULL, value);
}

void GLDrawCall__set_BlendEquationRgb(GLDrawCall* __this, int value)
{
    __this->_blendEqRgb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendEquation(NULL, value);
}

void GLDrawCall__set_BlendSrcAlpha(GLDrawCall* __this, int value)
{
    __this->_blendSrcAlpha = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

void GLDrawCall__set_BlendSrcRgb(GLDrawCall* __this, int value)
{
    __this->_blendSrcRgb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

void GLDrawCall__set_CullFace(GLDrawCall* __this, int value)
{
    __this->_cullFace = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLCullFaceMode(NULL, value);
}

void GLDrawCall__set_DepthFunc(GLDrawCall* __this, int value)
{
    __this->_depthFunc = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLDepthFunction(NULL, value);
}

void GLDrawCall__set_DepthTestEnabled(GLDrawCall* __this, bool value)
{
    __this->_DepthTestEnabled = value;
}

void GLDrawCall__set_LineWidth(GLDrawCall* __this, float value)
{
    __this->_LineWidth = value;
}

void GLDrawCall__set_PolygonWinding(GLDrawCall* __this, int value)
{
    __this->_frontFace = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLFrontFaceDirection(NULL, value);
}

void GLDrawCall__set_PrimitiveType(GLDrawCall* __this, int value)
{
    __this->_primitiveType = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLPrimitiveType(NULL, value);
}

void GLDrawCall__set_Program(GLDrawCall* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value)
{
    __this->_Program = value;
}

void GLDrawCall__set_WriteAlpha(GLDrawCall* __this, bool value)
{
    __this->_WriteAlpha = value;
}

void GLDrawCall__set_WriteBlue(GLDrawCall* __this, bool value)
{
    __this->_WriteBlue = value;
}

void GLDrawCall__set_WriteDepth(GLDrawCall* __this, bool value)
{
    __this->_WriteDepth = value;
}

void GLDrawCall__set_WriteGreen(GLDrawCall* __this, bool value)
{
    __this->_WriteGreen = value;
}

void GLDrawCall__set_WriteRed(GLDrawCall* __this, bool value)
{
    __this->_WriteRed = value;
}

void GLDrawCall__Uniform(GLDrawCall* __this, int index, ::uArray* value)
{
    ::app::OpenGL::GL__UniformMatrix4fv(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), false, value);
}

void GLDrawCall__Uniform_11(GLDrawCall* __this, int index, float value)
{
    ::app::OpenGL::GL__Uniform1f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_12(GLDrawCall* __this, int index, ::app::Uno::Float2 value)
{
    ::app::OpenGL::GL__Uniform2f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_13(GLDrawCall* __this, int index, ::app::Uno::Float2x2 value)
{
    ::app::OpenGL::GL__UniformMatrix2f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), false, value);
}

void GLDrawCall__Uniform_14(GLDrawCall* __this, int index, ::app::Uno::Float3 value)
{
    ::app::OpenGL::GL__Uniform3f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_16(GLDrawCall* __this, int index, ::app::Uno::Float4 value)
{
    ::app::OpenGL::GL__Uniform4f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_17(GLDrawCall* __this, int index, ::app::Uno::Float4x4 value)
{
    ::app::OpenGL::GL__UniformMatrix4f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), false, value);
}

void GLDrawCall__Uniform_3(GLDrawCall* __this, int index, ::uArray* value)
{
    ::app::OpenGL::GL__Uniform4fv(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_5(GLDrawCall* __this, int index, ::uArray* value)
{
    ::app::OpenGL::GL__Uniform2fv(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_6(GLDrawCall* __this, int index, ::uArray* value)
{
    ::app::OpenGL::GL__Uniform1fv(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Use(GLDrawCall* __this)
{
    if (__this->Program() == NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Draw statements may not be used from the constructor of the containing class.")));
    }

    if (__this->_compiledProgramDirty || (__this->_compiledProgram == NULL))
    {
        __this->_compiledProgram = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(__this->Program())->GetCompiledProgram(__this->_constValues);
        __this->_compiledProgramDirty = false;
    }

    ::app::OpenGL::GL__UseProgram(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GLProgramHandle());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GLException__uType* GLException__typeof()
{
    static ::uStaticStrong<GLException__uType*> type;
    if (type != NULL) return type;

    type = (GLException__uType*)::uAllocClassType(sizeof(GLException__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GLException__New_3, 0, true, GLException__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void GLException___ObjInit_2(GLException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

GLException* GLException__New_3(::uStatic* __this, ::uString* message)
{
    GLException* inst = (GLException*)::uAllocObject(sizeof(GLException), GLException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GLHelpers__uType* GLHelpers__typeof()
{
    static ::uStaticStrong<GLHelpers__uType*> type;
    if (type != NULL) return type;

    type = (GLHelpers__uType*)::uAllocClassType(sizeof(GLHelpers__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers");

    type->SetFunctions(9,
        ::uNewFunctionVoid("CheckError", GLHelpers__CheckError, 0, true),
        ::uNewFunctionVoid("CheckFramebufferStatus", GLHelpers__CheckFramebufferStatus, 0, true),
        ::uNewFunction("CompileShader", GLHelpers__CompileShader, 0, true, ::app::OpenGL::GLShaderHandle__typeof(), ::app::OpenGL::GLShaderType__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("CreateDepthBuffer", GLHelpers__CreateDepthBuffer, 0, true, ::app::OpenGL::GLRenderbufferHandle__typeof(), ::app::Uno::Int2__typeof()),
        ::uNewFunction("CreateRenderTarget", GLHelpers__CreateRenderTarget, 0, true, ::app::Uno::Graphics::RenderTarget__typeof(), ::app::OpenGL::GLTextureTarget__typeof(), ::app::OpenGL::GLTextureHandle__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("CreateRenderTarget", GLHelpers__CreateRenderTarget_1, 0, true, ::app::Uno::Graphics::RenderTarget__typeof(), ::app::OpenGL::GLTextureTarget__typeof(), ::app::OpenGL::GLTextureHandle__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int2__typeof(), ::app::OpenGL::GLRenderbufferHandle__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("LinkProgram", GLHelpers__LinkProgram, 0, true, ::app::OpenGL::GLProgramHandle__typeof(), ::app::OpenGL::GLShaderHandle__typeof(), ::app::OpenGL::GLShaderHandle__typeof()),
        ::uNewFunctionVoid("TexImage2DFromBuffer", GLHelpers__TexImage2DFromBuffer, 0, true, ::app::OpenGL::GLTextureTarget__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("TexImage2DFromIntPtr", GLHelpers__TexImage2DFromIntPtr, 0, true, ::app::OpenGL::GLTextureTarget__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::IntPtr__typeof()));

    ::uRegisterType(type);
    return type;
}

void GLHelpers__CheckError(::uStatic* __this)
{
    int err = ::app::OpenGL::GL__GetError(NULL);

    if (err != 0)
    {
        ::app::Uno::Diagnostics::Debug__Log_4(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("GL error ("), ::app::Uno::Int::ToString(err)), ::uGetConstString(")")), 3);
    }
}

void GLHelpers__CheckFramebufferStatus(::uStatic* __this)
{
    int status = ::app::OpenGL::GL__CheckFramebufferStatus(NULL, 36160);

    if (status != 36053)
    {
        ::app::Uno::Diagnostics::Debug__Log_4(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Incomplete GL framebuffer ("), ::uBox< int>(::app::OpenGL::GLFramebufferStatus__typeof(), status)), ::uGetConstString(")")), 3);
    }
}

::uUInt GLHelpers__CompileShader(::uStatic* __this, int type, ::uString* source)
{
    ::uUInt handle = ::app::OpenGL::GL__CreateShader(NULL, type);
    GLHelpers__CheckError(NULL);
    ::app::OpenGL::GL__ShaderSource(NULL, handle, source);
    ::app::OpenGL::GL__CompileShader(NULL, handle);

    if (::app::OpenGL::GL__GetShaderParameter(NULL, handle, 35713) != 1)
    {
        ::uString* log = ::app::OpenGL::GL__GetShaderInfoLog(NULL, handle);
        U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Error compiling shader ("), ::uBox< int>(::app::OpenGL::GLShaderType__typeof(), type)), ::uGetConstString("):\n\n")), log), ::uGetConstString("\n\nSource:\n\n")), source)));
    }

    GLHelpers__CheckError(NULL);
    return handle;
}

::uUInt GLHelpers__CreateDepthBuffer(::uStatic* __this, ::app::Uno::Int2 size)
{
    ::uUInt prevHandle = ::app::OpenGL::GL__GetRenderbufferBinding(NULL);
    ::uUInt handle = ::app::OpenGL::GL__CreateRenderbuffer(NULL);
    ::app::OpenGL::GL__BindRenderbuffer(NULL, 36161, handle);
    ::app::OpenGL::GL__RenderbufferStorage(NULL, 36161, 33189, size.X, size.Y);
    ::app::OpenGL::GL__BindRenderbuffer(NULL, 36161, prevHandle);
    return handle;
}

::app::Uno::Graphics::RenderTarget* GLHelpers__CreateRenderTarget(::uStatic* __this, int colorTarget, ::uUInt colorBuffer, int mip, ::app::Uno::Int2 size, bool depth)
{
    return GLHelpers__CreateRenderTarget_1(NULL, colorTarget, colorBuffer, mip, size, depth ? GLHelpers__CreateDepthBuffer(NULL, size) : ::app::OpenGL::GLRenderbufferHandle__Zero, true);
}

::app::Uno::Graphics::RenderTarget* GLHelpers__CreateRenderTarget_1(::uStatic* __this, int colorTarget, ::uUInt colorBuffer, int mip, ::app::Uno::Int2 size, ::uUInt depthBuffer, bool ownsDepthBuffer)
{
    ::app::Uno::Graphics::RenderTarget* result = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    ::uUInt prevHandle = ::app::OpenGL::GL__GetFramebufferBinding(NULL);
    ::uUInt handle = ::app::OpenGL::GL__CreateFramebuffer(NULL);
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(result)->GLFramebufferHandle(handle);
    result->OwnsGLFramebufferHandle(true);
    result->Size(size);
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, handle);
    ::app::OpenGL::GL__FramebufferTexture2D(NULL, 36160, 36064, colorTarget, colorBuffer, mip);

    if (::app::OpenGL::GLRenderbufferHandle__op_Inequality(NULL, depthBuffer, ::app::OpenGL::GLRenderbufferHandle__Zero))
    {
        ::app::OpenGL::GL__FramebufferRenderbuffer(NULL, 36160, 36096, 36161, depthBuffer);
        ::uPtr< ::app::Uno::Graphics::RenderTarget*>(result)->GLDepthBufferHandle(depthBuffer);
        result->OwnsGLDepthBufferHandle(ownsDepthBuffer);
        result->HasDepth(true);
    }

    GLHelpers__CheckFramebufferStatus(NULL);
    GLHelpers__CheckError(NULL);
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, prevHandle);
    return result;
}

::uUInt GLHelpers__LinkProgram(::uStatic* __this, ::uUInt vertexShader, ::uUInt fragmentShader)
{
    ::uUInt handle = ::app::OpenGL::GL__CreateProgram(NULL);
    ::app::OpenGL::GL__AttachShader(NULL, handle, vertexShader);
    ::app::OpenGL::GL__AttachShader(NULL, handle, fragmentShader);
    ::app::OpenGL::GL__LinkProgram(NULL, handle);

    if (::app::OpenGL::GL__GetProgramParameter(NULL, handle, 35714) != 1)
    {
        ::uString* log = ::app::OpenGL::GL__GetProgramInfoLog(NULL, handle);
        U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Error linking shader program:\n\n"), log)));
    }

    ::app::OpenGL::GL__UseProgram(NULL, handle);
    GLHelpers__CheckError(NULL);
    return handle;
}

void GLHelpers__TexImage2DFromBuffer(::uStatic* __this, int target, int w, int h, int mip, int format, ::app::Uno::Buffer* data)
{
    switch (format)
    {
        case 1:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6409, w, h, 0, 6409, 5121, data);
            break;
        }
        case 2:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6410, w, h, 0, 6410, 5121, data);
            break;
        }
        case 3:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6408, w, h, 0, 6408, 5121, data);
            break;
        }
        case 4:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6408, w, h, 0, 6408, 32819, data);
            break;
        }
        case 5:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6408, w, h, 0, 6408, 32820, data);
            break;
        }
        case 6:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6407, w, h, 0, 6407, 33635, data);
            break;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported texture format")));
        }
    }
}

void GLHelpers__TexImage2DFromIntPtr(::uStatic* __this, int target, int w, int h, int mip, int format, void* data)
{
    switch (format)
    {
        case 1:
        {
            ::app::OpenGL::GL__TexImage2D_1(NULL, target, mip, 6409, w, h, 0, 6409, 5121, data);
            break;
        }
        case 2:
        {
            ::app::OpenGL::GL__TexImage2D_1(NULL, target, mip, 6410, w, h, 0, 6410, 5121, data);
            break;
        }
        case 3:
        {
            ::app::OpenGL::GL__TexImage2D_1(NULL, target, mip, 6408, w, h, 0, 6408, 5121, data);
            break;
        }
        case 4:
        {
            ::app::OpenGL::GL__TexImage2D_1(NULL, target, mip, 6408, w, h, 0, 6408, 32819, data);
            break;
        }
        case 5:
        {
            ::app::OpenGL::GL__TexImage2D_1(NULL, target, mip, 6408, w, h, 0, 6408, 32820, data);
            break;
        }
        case 6:
        {
            ::app::OpenGL::GL__TexImage2D_1(NULL, target, mip, 6407, w, h, 0, 6407, 33635, data);
            break;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported texture format")));
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GLInterop__uType* GLInterop__typeof()
{
    static ::uStaticStrong<GLInterop__uType*> type;
    if (type != NULL) return type;

    type = (GLInterop__uType*)::uAllocClassType(sizeof(GLInterop__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop");

    type->SetFunctions(15,
        ::uNewFunction("ToGLBlendEquation", GLInterop__ToGLBlendEquation, 0, true, ::app::OpenGL::GLBlendEquation__typeof(), ::app::Uno::Graphics::BlendEquation__typeof()),
        ::uNewFunction("ToGLBlendingFactor", GLInterop__ToGLBlendingFactor, 0, true, ::app::OpenGL::GLBlendingFactor__typeof(), ::app::Uno::Graphics::BlendOperand__typeof()),
        ::uNewFunction("ToGLBufferUsage", GLInterop__ToGLBufferUsage, 0, true, ::app::OpenGL::GLBufferUsage__typeof(), ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewFunction("ToGLCullFaceMode", GLInterop__ToGLCullFaceMode, 0, true, ::app::OpenGL::GLCullFaceMode__typeof(), ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunction("ToGLDepthFunction", GLInterop__ToGLDepthFunction, 0, true, ::app::OpenGL::GLDepthFunction__typeof(), ::app::Uno::Graphics::CompareFunc__typeof()),
        ::uNewFunction("ToGLFrontFaceDirection", GLInterop__ToGLFrontFaceDirection, 0, true, ::app::OpenGL::GLFrontFaceDirection__typeof(), ::app::Uno::Graphics::PolygonWinding__typeof()),
        ::uNewFunction("ToGLIndexType", GLInterop__ToGLIndexType, 0, true, ::app::OpenGL::GLIndexType__typeof(), ::app::Uno::Graphics::IndexType__typeof()),
        ::uNewFunction("ToGLPrimitiveType", GLInterop__ToGLPrimitiveType, 0, true, ::app::OpenGL::GLPrimitiveType__typeof(), ::app::Uno::Graphics::PrimitiveType__typeof()),
        ::uNewFunctionVoid("ToGLVertexAttributeType", GLInterop__ToGLVertexAttributeType, 0, true, ::app::Uno::Graphics::VertexAttributeType__typeof(), ::app::Uno::Int__typeof(), ::app::OpenGL::GLDataType__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ToUnoGraphicsBlendEquation", GLInterop__ToUnoGraphicsBlendEquation, 0, true, ::app::Uno::Graphics::BlendEquation__typeof(), ::app::OpenGL::GLBlendEquation__typeof()),
        ::uNewFunction("ToUnoGraphicsBlendOperand", GLInterop__ToUnoGraphicsBlendOperand, 0, true, ::app::Uno::Graphics::BlendOperand__typeof(), ::app::OpenGL::GLBlendingFactor__typeof()),
        ::uNewFunction("ToUnoGraphicsCompareFunc", GLInterop__ToUnoGraphicsCompareFunc, 0, true, ::app::Uno::Graphics::CompareFunc__typeof(), ::app::OpenGL::GLDepthFunction__typeof()),
        ::uNewFunction("ToUnoGraphicsPolygonFace", GLInterop__ToUnoGraphicsPolygonFace, 0, true, ::app::Uno::Graphics::PolygonFace__typeof(), ::app::OpenGL::GLCullFaceMode__typeof()),
        ::uNewFunction("ToUnoGraphicsPolygonWinding", GLInterop__ToUnoGraphicsPolygonWinding, 0, true, ::app::Uno::Graphics::PolygonWinding__typeof(), ::app::OpenGL::GLFrontFaceDirection__typeof()),
        ::uNewFunction("ToUnoGraphicsPrimitiveType", GLInterop__ToUnoGraphicsPrimitiveType, 0, true, ::app::Uno::Graphics::PrimitiveType__typeof(), ::app::OpenGL::GLPrimitiveType__typeof()));

    ::uRegisterType(type);
    return type;
}

int GLInterop__ToGLBlendEquation(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 32774;
        }
        case 1:
        {
            return 32778;
        }
        case 2:
        {
            return 32779;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend equation")));
        }
    }
}

int GLInterop__ToGLBlendingFactor(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 770;
        }
        case 3:
        {
            return 771;
        }
        case 4:
        {
            return 768;
        }
        case 5:
        {
            return 769;
        }
        case 6:
        {
            return 772;
        }
        case 7:
        {
            return 773;
        }
        case 8:
        {
            return 774;
        }
        case 9:
        {
            return 775;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend operand")));
        }
    }
}

int GLInterop__ToGLBufferUsage(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 35044;
        }
        case 1:
        {
            return 35048;
        }
        case 2:
        {
            return 35040;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported buffer usage")));
        }
    }
}

int GLInterop__ToGLCullFaceMode(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            return 1028;
        }
        case 2:
        {
            return 1029;
        }
        case 3:
        {
            return 1032;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon face")));
        }
    }
}

int GLInterop__ToGLDepthFunction(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 519;
        }
        case 1:
        {
            return 513;
        }
        case 2:
        {
            return 515;
        }
        case 3:
        {
            return 514;
        }
        case 4:
        {
            return 517;
        }
        case 5:
        {
            return 518;
        }
        case 6:
        {
            return 516;
        }
        case 7:
        {
            return 512;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported compare func")));
        }
    }
}

int GLInterop__ToGLFrontFaceDirection(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 2304;
        }
        case 1:
        {
            return 2305;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon winding")));
        }
    }
}

int GLInterop__ToGLIndexType(::uStatic* __this, int x)
{
    switch (x)
    {
        case 1:
        {
            return 5121;
        }
        case 2:
        {
            return 5123;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported index type")));
        }
    }
}

int GLInterop__ToGLPrimitiveType(::uStatic* __this, int x)
{
    switch (x)
    {
        case 1:
        {
            return 4;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 0;
        }
        case 4:
        {
            return 5;
        }
        case 5:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported primitive type")));
        }
    }
}

void GLInterop__ToGLVertexAttributeType(::uStatic* __this, int x, int* componentCount, int* componentType, bool* normalized)
{
    switch (x)
    {
        case 1:
        {
            *componentType = 5126;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 2:
        {
            *componentType = 5126;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 3:
        {
            *componentType = 5126;
            *componentCount = 3;
            *normalized = false;
            break;
        }
        case 4:
        {
            *componentType = 5126;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 5:
        {
            *componentType = 5122;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 6:
        {
            *componentType = 5122;
            *componentCount = 1;
            *normalized = true;
            break;
        }
        case 7:
        {
            *componentType = 5122;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 8:
        {
            *componentType = 5122;
            *componentCount = 2;
            *normalized = true;
            break;
        }
        case 9:
        {
            *componentType = 5122;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 10:
        {
            *componentType = 5122;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 11:
        {
            *componentType = 5123;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 12:
        {
            *componentType = 5123;
            *componentCount = 1;
            *normalized = true;
            break;
        }
        case 13:
        {
            *componentType = 5123;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 14:
        {
            *componentType = 5123;
            *componentCount = 2;
            *normalized = true;
            break;
        }
        case 15:
        {
            *componentType = 5123;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 16:
        {
            *componentType = 5123;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 17:
        {
            *componentType = 5120;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 18:
        {
            *componentType = 5120;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 19:
        {
            *componentType = 5121;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 20:
        {
            *componentType = 5121;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported vertex attribute type")));
        }
    }
}

int GLInterop__ToUnoGraphicsBlendEquation(::uStatic* __this, int x)
{
    switch (x)
    {
        case 32774:
        {
            return 0;
        }
        case 32778:
        {
            return 1;
        }
        case 32779:
        {
            return 2;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend equation")));
        }
    }
}

int GLInterop__ToUnoGraphicsBlendOperand(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            return 1;
        }
        case 770:
        {
            return 2;
        }
        case 771:
        {
            return 3;
        }
        case 768:
        {
            return 4;
        }
        case 769:
        {
            return 5;
        }
        case 772:
        {
            return 6;
        }
        case 773:
        {
            return 7;
        }
        case 774:
        {
            return 8;
        }
        case 775:
        {
            return 9;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend operand")));
        }
    }
}

int GLInterop__ToUnoGraphicsCompareFunc(::uStatic* __this, int x)
{
    switch (x)
    {
        case 519:
        {
            return 0;
        }
        case 513:
        {
            return 1;
        }
        case 515:
        {
            return 2;
        }
        case 514:
        {
            return 3;
        }
        case 517:
        {
            return 4;
        }
        case 518:
        {
            return 5;
        }
        case 516:
        {
            return 6;
        }
        case 512:
        {
            return 7;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported compare func")));
        }
    }
}

int GLInterop__ToUnoGraphicsPolygonFace(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1028:
        {
            return 1;
        }
        case 1029:
        {
            return 2;
        }
        case 1032:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon face")));
        }
    }
}

int GLInterop__ToUnoGraphicsPolygonWinding(::uStatic* __this, int x)
{
    switch (x)
    {
        case 2304:
        {
            return 0;
        }
        case 2305:
        {
            return 1;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon winding")));
        }
    }
}

int GLInterop__ToUnoGraphicsPrimitiveType(::uStatic* __this, int x)
{
    switch (x)
    {
        case 4:
        {
            return 1;
        }
        case 1:
        {
            return 2;
        }
        case 0:
        {
            return 3;
        }
        case 5:
        {
            return 4;
        }
        case 3:
        {
            return 5;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Unsupported primitive type")));
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GLProgram__uType* GLProgram__typeof()
{
    static ::uStaticStrong<GLProgram__uType*> type;
    if (type != NULL) return type;

    type = (GLProgram__uType*)::uAllocClassType(sizeof(GLProgram__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram", false, 0, 5, 0);

    type->SetStrongRefs(
        "_cachedPrograms", offsetof(GLProgram, _cachedPrograms),
        "_constAttribAndUniformNames", offsetof(GLProgram, _constAttribAndUniformNames),
        "_fsSource", offsetof(GLProgram, _fsSource),
        "_singleProgram", offsetof(GLProgram, _singleProgram),
        "_vsSource", offsetof(GLProgram, _vsSource));

    type->SetFields(7,
        ::uNewField("_attribCount", NULL, offsetof(GLProgram, _attribCount), ::app::Uno::Int__typeof()),
        ::uNewField("_cachedPrograms", NULL, offsetof(GLProgram, _cachedPrograms), ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()),
        ::uNewField("_constAttribAndUniformNames", NULL, offsetof(GLProgram, _constAttribAndUniformNames), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("_constCount", NULL, offsetof(GLProgram, _constCount), ::app::Uno::Int__typeof()),
        ::uNewField("_fsSource", NULL, offsetof(GLProgram, _fsSource), ::app::Uno::String__typeof()),
        ::uNewField("_singleProgram", NULL, offsetof(GLProgram, _singleProgram), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof()),
        ::uNewField("_vsSource", NULL, offsetof(GLProgram, _vsSource), ::app::Uno::String__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("Create", GLProgram__Create, 0, true, GLProgram__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunction("get_ConstantCount", GLProgram__get_ConstantCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetCompiledProgram", GLProgram__GetCompiledProgram, 0, false, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof(), ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunction("GetCompiledProgramInternal", GLProgram__GetCompiledProgramInternal, 0, false, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof(), ::uGetArrayType(::app::Uno::String__typeof())));

    ::uRegisterType(type);
    return type;
}

void GLProgram___ObjInit(GLProgram* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    __this->_vsSource = vsSource;
    __this->_fsSource = fsSource;
    __this->_constCount = constCount;
    __this->_attribCount = attribCount;
    __this->_constAttribAndUniformNames = constAttribAndUniformNames;
}

GLProgram* GLProgram__Create(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    return GLProgram__New_1(NULL, vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
}

int GLProgram__get_ConstantCount(GLProgram* __this)
{
    return __this->_constCount;
}

::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram__GetCompiledProgram(GLProgram* __this, ::uArray* constStrings)
{
    if (::uPtr< ::uArray*>(constStrings)->Length() == 0)
    {
        if (__this->_singleProgram == NULL)
        {
            __this->_singleProgram = __this->GetCompiledProgramInternal(constStrings);
        }

        return __this->_singleProgram;
    }

    ::uString* key = ::app::Uno::String__Join(NULL, ::uGetConstString(":"), constStrings);

    if (__this->_cachedPrograms == NULL)
    {
        __this->_cachedPrograms = ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(NULL);
    }

    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* result;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_cachedPrograms)->TryGetValue(key, &result))
    {
        result = __this->GetCompiledProgramInternal(constStrings);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_cachedPrograms)->Add(key, result);
    }

    return result;
}

::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram__GetCompiledProgramInternal(GLProgram* __this, ::uArray* constStrings)
{
    ::uString* vsPrefix = ::uGetConstString("#ifdef GL_ES\nprecision highp float;\n#endif\n");
    ::uString* fsPrefix = ::uGetConstString("#ifdef GL_ES\n#extension GL_OES_standard_derivatives : enable\n");
    fsPrefix = ::app::Uno::String__op_Addition_2(NULL, fsPrefix, ::uGetConstString("#extension GL_OES_EGL_image_external : enable\n"));
    fsPrefix = ::app::Uno::String__op_Addition_2(NULL, fsPrefix, ::uGetConstString("# ifdef GL_FRAGMENT_PRECISION_HIGH\nprecision highp float;\n# else\nprecision mediump float;\n# endif\n#endif\n"));
    ::uString* defines = ::uGetConstString("");

    for (int i = 0; i < ::uPtr< ::uArray*>(constStrings)->Length(); i++)
    {
        defines = ::app::Uno::String__op_Addition_2(NULL, defines, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("#define "), ::uPtr< ::uArray*>(__this->_constAttribAndUniformNames)->Item< ::uString*>(i)), ::uGetConstString(" ")), ::uPtr< ::uArray*>(constStrings)->Item< ::uString*>(i)), ::uGetConstString("\n")));
    }

    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__New_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, vsPrefix, defines), __this->_vsSource), ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, fsPrefix, defines), __this->_fsSource), __this->_constCount, __this->_attribCount, __this->_constAttribAndUniformNames);
}

GLProgram* GLProgram__New_1(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    GLProgram* inst = (GLProgram*)::uAllocObject(sizeof(GLProgram), GLProgram__typeof());
    inst->_ObjInit(vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
    return inst;
}

}}}}}}
