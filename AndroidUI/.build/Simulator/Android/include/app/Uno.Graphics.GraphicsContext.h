// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_GRAPHICS_CONTEXT_H__
#define __APP_UNO_GRAPHICS_GRAPHICS_CONTEXT_H__

#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno.h>
#include <Uno/GraphicsContext.h>
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {
namespace Graphics {

struct GraphicsContext;

struct GraphicsContext__uType : ::uClassType
{
};

GraphicsContext__uType* GraphicsContext__typeof();

void GraphicsContext___ObjInit(GraphicsContext* __this);
void GraphicsContext__Clear(GraphicsContext* __this, ::app::Uno::Float4 color, float depth);
void GraphicsContext__ForceResetState(GraphicsContext* __this);
::app::Uno::Graphics::RenderTarget* GraphicsContext__get_Backbuffer(GraphicsContext* __this);
::app::Uno::Graphics::RenderTarget* GraphicsContext__get_RenderTarget(GraphicsContext* __this);
::app::Uno::Recti GraphicsContext__get_Scissor(GraphicsContext* __this);
::app::Uno::Recti GraphicsContext__get_Viewport(GraphicsContext* __this);
GraphicsContext* GraphicsContext__New_1(::uStatic* __this);
void GraphicsContext__set_Scissor(GraphicsContext* __this, ::app::Uno::Recti value);
void GraphicsContext__set_Viewport(GraphicsContext* __this, ::app::Uno::Recti value);
void GraphicsContext__SetRenderTarget(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget);
void GraphicsContext__SetRenderTarget_1(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget, ::app::Uno::Recti viewport, ::app::Uno::Recti scissor);
void GraphicsContext__UpdateBackbuffer(GraphicsContext* __this);

struct GraphicsContext : ::uObject
{
    ::uGraphicsContext _handle;
    ::app::Uno::Recti _viewport;
    ::app::Uno::Recti _scissor;
    ::uStrong< ::app::Uno::Graphics::RenderTarget*> _backbuffer;
    ::uStrong< ::app::Uno::Graphics::RenderTarget*> _renderTarget;
    bool _scissorEnabled;

    void _ObjInit() { GraphicsContext___ObjInit(this); }
    void Clear(::app::Uno::Float4 color, float depth);
    void ForceResetState() { GraphicsContext__ForceResetState(this); }
    ::app::Uno::Graphics::RenderTarget* Backbuffer() { return GraphicsContext__get_Backbuffer(this); }
    ::app::Uno::Graphics::RenderTarget* RenderTarget() { return GraphicsContext__get_RenderTarget(this); }
    ::app::Uno::Recti Scissor();
    ::app::Uno::Recti Viewport();
    void Scissor(::app::Uno::Recti value);
    void Viewport(::app::Uno::Recti value);
    void SetRenderTarget(::app::Uno::Graphics::RenderTarget* renderTarget) { GraphicsContext__SetRenderTarget(this, renderTarget); }
    void SetRenderTarget_1(::app::Uno::Graphics::RenderTarget* renderTarget, ::app::Uno::Recti viewport, ::app::Uno::Recti scissor);
    void UpdateBackbuffer() { GraphicsContext__UpdateBackbuffer(this); }
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Uno {
namespace Graphics {

inline void GraphicsContext::Clear(::app::Uno::Float4 color, float depth) { GraphicsContext__Clear(this, color, depth); }
inline ::app::Uno::Recti GraphicsContext::Scissor() { return GraphicsContext__get_Scissor(this); }
inline ::app::Uno::Recti GraphicsContext::Viewport() { return GraphicsContext__get_Viewport(this); }
inline void GraphicsContext::Scissor(::app::Uno::Recti value) { GraphicsContext__set_Scissor(this, value); }
inline void GraphicsContext::Viewport(::app::Uno::Recti value) { GraphicsContext__set_Viewport(this, value); }
inline void GraphicsContext::SetRenderTarget_1(::app::Uno::Graphics::RenderTarget* renderTarget, ::app::Uno::Recti viewport, ::app::Uno::Recti scissor) { GraphicsContext__SetRenderTarget_1(this, renderTarget, viewport, scissor); }

}}}


#endif
