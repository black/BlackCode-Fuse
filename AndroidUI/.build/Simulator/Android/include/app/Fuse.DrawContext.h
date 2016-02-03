// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAW_CONTEXT_H__
#define __APP_FUSE_DRAW_CONTEXT_H__

#include <app/Uno.Int4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
#include <Uno/GraphicsContext.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct RenderTargetEntry; } }
namespace app { namespace Uno { namespace Collections { struct HashSet__Fuse_IFlush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_IViewport; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_RenderTargetEntry; } } }
namespace app { namespace Uno { namespace Collections { struct List__int4; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Graphics_PolygonFace; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Fuse {

struct DrawContext;

extern ::uStaticStrong< DrawContext*> DrawContext___current;

struct DrawContext__uType : ::uClassType
{
};

DrawContext__uType* DrawContext__typeof();

void DrawContext___ObjInit(DrawContext* __this, ::uObject* viewport);
void DrawContext__AddFlushListener(DrawContext* __this, ::uObject* f);
void DrawContext__CaptureRootbuffer(DrawContext* __this);
void DrawContext__CheckGLError(DrawContext* __this, ::uString* filePath, int lineNumber, ::uString* memberName);
void DrawContext__Clear(DrawContext* __this, ::app::Uno::Float4 color, float depth);
void DrawContext__Flush(DrawContext* __this);
int DrawContext__get_CullFace(DrawContext* __this);
DrawContext* DrawContext__get_Current(::uStatic* __this);
::uUInt DrawContext__get_GLFramebuffer(DrawContext* __this);
::app::Uno::Int4 DrawContext__get_GLScissor(DrawContext* __this);
::app::Uno::Int2 DrawContext__get_GLViewportPixelSize(DrawContext* __this);
::app::Uno::Float2 DrawContext__get_GLViewportPointSize(DrawContext* __this);
bool DrawContext__get_IsCaching(DrawContext* __this);
::app::Uno::Graphics::RenderTarget* DrawContext__get_RenderTarget(DrawContext* __this);
::app::Uno::Recti DrawContext__get_Scissor(DrawContext* __this);
::uObject* DrawContext__get_Viewport(DrawContext* __this);
float DrawContext__get_ViewportPointDensity(DrawContext* __this);
::app::Uno::Float4x4 DrawContext__GetLocalToClipTransform(DrawContext* __this, ::app::Fuse::Node* n);
::app::Fuse::RenderTargetEntry* DrawContext__GetRenderTargetEntry(DrawContext* __this);
void DrawContext__GLInconsistent(DrawContext* __this, ::uString* msg);
void DrawContext__MakeCurrent(DrawContext* __this);
DrawContext* DrawContext__New_1(::uStatic* __this, ::uObject* viewport);
void DrawContext__PopCullFace(DrawContext* __this);
void DrawContext__PopRenderTarget(DrawContext* __this);
void DrawContext__PopRenderTargetViewport(DrawContext* __this);
void DrawContext__PopScissor(DrawContext* __this);
void DrawContext__PopViewport(DrawContext* __this);
void DrawContext__PushCullFace(DrawContext* __this, int cf);
void DrawContext__PushRenderTarget(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb);
void DrawContext__PushRenderTarget_1(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* rt);
void DrawContext__PushRenderTarget_2(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glscissor);
void DrawContext__PushRenderTargetViewport(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb, ::uObject* frustum);
void DrawContext__PushScissor(DrawContext* __this, ::app::Uno::Recti scissor);
void DrawContext__PushViewport(DrawContext* __this, ::uObject* v);
void DrawContext__ReleaseRootbuffer(DrawContext* __this);
void DrawContext__set_GLFramebuffer(DrawContext* __this, ::uUInt value);
void DrawContext__set_GLScissor(DrawContext* __this, ::app::Uno::Int4 value);
void DrawContext__set_GLViewportPixelSize(DrawContext* __this, ::app::Uno::Int2 value);
void DrawContext__set_IsCaching(DrawContext* __this, bool value);
void DrawContext__set_Scissor(DrawContext* __this, ::app::Uno::Recti value);

struct DrawContext : ::uObject
{
    ::uStrong< ::uObject*> _viewport;
    ::uStrong< ::app::Uno::Collections::List__Fuse_IViewport*> _viewports;
    ::uGraphicsContext _handle;
    ::uStrong< ::app::Uno::Graphics::RenderTarget*> _rootbuffer;
    ::uStrong< ::app::Uno::Graphics::RenderTarget*> _renderTarget;
    ::uStrong< ::app::Uno::Collections::HashSet__Fuse_IFlush*> flushSet;
    ::uStrong< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*> _renderTargets;
    ::uUInt _glFramebuffer;
    ::app::Uno::Int4 _glScissor;
    ::uStrong< ::app::Uno::Collections::List__int4*> _glScissors;
    ::app::Uno::Int4 _glViewport;
    ::uStrong< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*> _cullFaces;
    int _cullFace;
    bool _IsCaching;

    void _ObjInit(::uObject* viewport) { DrawContext___ObjInit(this, viewport); }
    void AddFlushListener(::uObject* f) { DrawContext__AddFlushListener(this, f); }
    void CaptureRootbuffer() { DrawContext__CaptureRootbuffer(this); }
    void CheckGLError(::uString* filePath, int lineNumber, ::uString* memberName) { DrawContext__CheckGLError(this, filePath, lineNumber, memberName); }
    void Clear(::app::Uno::Float4 color, float depth);
    void Flush() { DrawContext__Flush(this); }
    int CullFace() { return DrawContext__get_CullFace(this); }
    ::uUInt GLFramebuffer() { return DrawContext__get_GLFramebuffer(this); }
    ::app::Uno::Int4 GLScissor();
    ::app::Uno::Int2 GLViewportPixelSize();
    ::app::Uno::Float2 GLViewportPointSize();
    bool IsCaching() { return DrawContext__get_IsCaching(this); }
    ::app::Uno::Graphics::RenderTarget* RenderTarget() { return DrawContext__get_RenderTarget(this); }
    ::app::Uno::Recti Scissor();
    ::uObject* Viewport() { return DrawContext__get_Viewport(this); }
    float ViewportPointDensity() { return DrawContext__get_ViewportPointDensity(this); }
    ::app::Uno::Float4x4 GetLocalToClipTransform(::app::Fuse::Node* n);
    ::app::Fuse::RenderTargetEntry* GetRenderTargetEntry() { return DrawContext__GetRenderTargetEntry(this); }
    void GLInconsistent(::uString* msg) { DrawContext__GLInconsistent(this, msg); }
    void MakeCurrent() { DrawContext__MakeCurrent(this); }
    void PopCullFace() { DrawContext__PopCullFace(this); }
    void PopRenderTarget() { DrawContext__PopRenderTarget(this); }
    void PopRenderTargetViewport() { DrawContext__PopRenderTargetViewport(this); }
    void PopScissor() { DrawContext__PopScissor(this); }
    void PopViewport() { DrawContext__PopViewport(this); }
    void PushCullFace(int cf) { DrawContext__PushCullFace(this, cf); }
    void PushRenderTarget(::app::Uno::Graphics::Framebuffer* fb) { DrawContext__PushRenderTarget(this, fb); }
    void PushRenderTarget_1(::app::Uno::Graphics::RenderTarget* rt) { DrawContext__PushRenderTarget_1(this, rt); }
    void PushRenderTarget_2(::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glscissor);
    void PushRenderTargetViewport(::app::Uno::Graphics::Framebuffer* fb, ::uObject* frustum) { DrawContext__PushRenderTargetViewport(this, fb, frustum); }
    void PushScissor(::app::Uno::Recti scissor);
    void PushViewport(::uObject* v) { DrawContext__PushViewport(this, v); }
    void ReleaseRootbuffer() { DrawContext__ReleaseRootbuffer(this); }
    void GLFramebuffer(::uUInt value) { DrawContext__set_GLFramebuffer(this, value); }
    void GLScissor(::app::Uno::Int4 value);
    void GLViewportPixelSize(::app::Uno::Int2 value);
    void IsCaching(bool value) { DrawContext__set_IsCaching(this, value); }
    void Scissor(::app::Uno::Recti value);
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Recti.h>

namespace app {
namespace Fuse {

inline void DrawContext::Clear(::app::Uno::Float4 color, float depth) { DrawContext__Clear(this, color, depth); }
inline ::app::Uno::Int4 DrawContext::GLScissor() { return DrawContext__get_GLScissor(this); }
inline ::app::Uno::Int2 DrawContext::GLViewportPixelSize() { return DrawContext__get_GLViewportPixelSize(this); }
inline ::app::Uno::Float2 DrawContext::GLViewportPointSize() { return DrawContext__get_GLViewportPointSize(this); }
inline ::app::Uno::Recti DrawContext::Scissor() { return DrawContext__get_Scissor(this); }
inline ::app::Uno::Float4x4 DrawContext::GetLocalToClipTransform(::app::Fuse::Node* n) { return DrawContext__GetLocalToClipTransform(this, n); }
inline void DrawContext::PushRenderTarget_2(::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glscissor) { DrawContext__PushRenderTarget_2(this, rt, viewportPixelSize, glscissor); }
inline void DrawContext::PushScissor(::app::Uno::Recti scissor) { DrawContext__PushScissor(this, scissor); }
inline void DrawContext::GLScissor(::app::Uno::Int4 value) { DrawContext__set_GLScissor(this, value); }
inline void DrawContext::GLViewportPixelSize(::app::Uno::Int2 value) { DrawContext__set_GLViewportPixelSize(this, value); }
inline void DrawContext::Scissor(::app::Uno::Recti value) { DrawContext__set_Scissor(this, value); }

}}


#endif
