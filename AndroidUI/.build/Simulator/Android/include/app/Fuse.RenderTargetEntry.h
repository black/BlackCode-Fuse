// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RENDER_TARGET_ENTRY_H__
#define __APP_FUSE_RENDER_TARGET_ENTRY_H__

#include <app/Uno.Int2.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }

namespace app {
namespace Fuse {

struct RenderTargetEntry;

struct RenderTargetEntry__uType : ::uClassType
{
};

RenderTargetEntry__uType* RenderTargetEntry__typeof();

void RenderTargetEntry___ObjInit(RenderTargetEntry* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glScissor, ::uUInt handle);
RenderTargetEntry* RenderTargetEntry__New_1(::uStatic* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glScissor, ::uUInt handle);

struct RenderTargetEntry : ::uObject
{
    ::uUInt GLFramebuffer;
    ::uStrong< ::app::Uno::Graphics::RenderTarget*> RenderTarget;
    ::app::Uno::Int2 GLViewportPixelSize;
    ::app::Uno::Int4 GLScissor;

    void _ObjInit(::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glScissor, ::uUInt handle) { RenderTargetEntry___ObjInit(this, rt, viewportPixelSize, glScissor, handle); }
};

}}


#endif
