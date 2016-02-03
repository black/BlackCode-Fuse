// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_GRAPHICS_CONTEXT_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_GRAPHICS_CONTEXT_IMPL_H__

#include <Uno.h>
#include <Uno/GraphicsContext.h>
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct GraphicsContextImpl__uType : ::uClassType
{
};

GraphicsContextImpl__uType* GraphicsContextImpl__typeof();

::uUInt GraphicsContextImpl__GetBackbufferGLHandle(::uStatic* __this, ::uGraphicsContext handle_);
::app::Uno::Int2 GraphicsContextImpl__GetBackbufferOffset(::uStatic* __this, ::uGraphicsContext handle);
::app::Uno::Recti GraphicsContextImpl__GetBackbufferScissor(::uStatic* __this, ::uGraphicsContext handle);
::app::Uno::Int2 GraphicsContextImpl__GetBackbufferSize(::uStatic* __this, ::uGraphicsContext handle);
::uGraphicsContext GraphicsContextImpl__GetInstance(::uStatic* __this);
int GraphicsContextImpl__GetRealBackbufferHeight(::uStatic* __this, ::uGraphicsContext handle);

}}}}


#endif
