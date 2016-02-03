// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
#include <Uno/GraphicsContext.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct GraphicsContextImpl;}}}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class GraphicsContextImpl :331
// {
uClassType* GraphicsContextImpl_typeof();
void GraphicsContextImpl__GetBackbufferGLHandle_fn(uGraphicsContext* handle_, uint32_t* __retval);
void GraphicsContextImpl__GetBackbufferOffset_fn(uGraphicsContext* handle, ::g::Uno::Int2* __retval);
void GraphicsContextImpl__GetBackbufferScissor_fn(uGraphicsContext* handle, ::g::Uno::Recti* __retval);
void GraphicsContextImpl__GetBackbufferSize_fn(uGraphicsContext* handle, ::g::Uno::Int2* __retval);
void GraphicsContextImpl__GetInstance_fn(uGraphicsContext* __retval);
void GraphicsContextImpl__GetRealBackbufferHeight_fn(uGraphicsContext* handle, int* __retval);

struct GraphicsContextImpl : uObject
{
    static uint32_t GetBackbufferGLHandle(uGraphicsContext handle_);
    static ::g::Uno::Int2 GetBackbufferOffset(uGraphicsContext handle);
    static ::g::Uno::Recti GetBackbufferScissor(uGraphicsContext handle);
    static ::g::Uno::Int2 GetBackbufferSize(uGraphicsContext handle);
    static uGraphicsContext GetInstance();
    static int GetRealBackbufferHeight(uGraphicsContext handle);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
