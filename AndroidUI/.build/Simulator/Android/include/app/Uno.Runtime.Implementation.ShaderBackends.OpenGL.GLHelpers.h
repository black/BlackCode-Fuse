// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_HELPERS_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_HELPERS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

struct GLHelpers__uType : ::uClassType
{
};

GLHelpers__uType* GLHelpers__typeof();

void GLHelpers__CheckError(::uStatic* __this);
void GLHelpers__CheckFramebufferStatus(::uStatic* __this);
::uUInt GLHelpers__CompileShader(::uStatic* __this, int type, ::uString* source);
::uUInt GLHelpers__CreateDepthBuffer(::uStatic* __this, ::app::Uno::Int2 size);
::app::Uno::Graphics::RenderTarget* GLHelpers__CreateRenderTarget(::uStatic* __this, int colorTarget, ::uUInt colorBuffer, int mip, ::app::Uno::Int2 size, bool depth);
::app::Uno::Graphics::RenderTarget* GLHelpers__CreateRenderTarget_1(::uStatic* __this, int colorTarget, ::uUInt colorBuffer, int mip, ::app::Uno::Int2 size, ::uUInt depthBuffer, bool ownsDepthBuffer);
::uUInt GLHelpers__LinkProgram(::uStatic* __this, ::uUInt vertexShader, ::uUInt fragmentShader);
void GLHelpers__TexImage2DFromBuffer(::uStatic* __this, int target, int w, int h, int mip, int format, ::app::Uno::Buffer* data);
void GLHelpers__TexImage2DFromIntPtr(::uStatic* __this, int target, int w, int h, int mip, int format, void* data);

}}}}}}


#endif
