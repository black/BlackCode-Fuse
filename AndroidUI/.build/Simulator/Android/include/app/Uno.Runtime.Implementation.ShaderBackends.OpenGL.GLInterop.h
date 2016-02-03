// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_INTEROP_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_INTEROP_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

struct GLInterop__uType : ::uClassType
{
};

GLInterop__uType* GLInterop__typeof();

int GLInterop__ToGLBlendEquation(::uStatic* __this, int x);
int GLInterop__ToGLBlendingFactor(::uStatic* __this, int x);
int GLInterop__ToGLBufferUsage(::uStatic* __this, int x);
int GLInterop__ToGLCullFaceMode(::uStatic* __this, int x);
int GLInterop__ToGLDepthFunction(::uStatic* __this, int x);
int GLInterop__ToGLFrontFaceDirection(::uStatic* __this, int x);
int GLInterop__ToGLIndexType(::uStatic* __this, int x);
int GLInterop__ToGLPrimitiveType(::uStatic* __this, int x);
void GLInterop__ToGLVertexAttributeType(::uStatic* __this, int x, int* componentCount, int* componentType, bool* normalized);
int GLInterop__ToUnoGraphicsBlendEquation(::uStatic* __this, int x);
int GLInterop__ToUnoGraphicsBlendOperand(::uStatic* __this, int x);
int GLInterop__ToUnoGraphicsCompareFunc(::uStatic* __this, int x);
int GLInterop__ToUnoGraphicsPolygonFace(::uStatic* __this, int x);
int GLInterop__ToUnoGraphicsPolygonWinding(::uStatic* __this, int x);
int GLInterop__ToUnoGraphicsPrimitiveType(::uStatic* __this, int x);

}}}}}}


#endif
