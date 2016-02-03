// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_RENDER_TARGET_H__
#define __APP_UNO_GRAPHICS_RENDER_TARGET_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct TextureCube; } } }

namespace app {
namespace Uno {
namespace Graphics {

struct RenderTarget;

struct RenderTarget__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

RenderTarget__uType* RenderTarget__typeof();

void RenderTarget___ObjInit(RenderTarget* __this);
RenderTarget* RenderTarget__CreateFromTexture2D(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip, bool depth);
RenderTarget* RenderTarget__CreateFromTextureCube(::uStatic* __this, ::app::Uno::Graphics::TextureCube* texture, int face, int mip, bool depth);
void RenderTarget__Dispose(RenderTarget* __this);
::uUInt RenderTarget__get_GLDepthBufferHandle(RenderTarget* __this);
::uUInt RenderTarget__get_GLFramebufferHandle(RenderTarget* __this);
bool RenderTarget__get_HasDepth(RenderTarget* __this);
bool RenderTarget__get_IsDisposed(RenderTarget* __this);
bool RenderTarget__get_OwnsGLDepthBufferHandle(RenderTarget* __this);
bool RenderTarget__get_OwnsGLFramebufferHandle(RenderTarget* __this);
::app::Uno::Int2 RenderTarget__get_Size(RenderTarget* __this);
RenderTarget* RenderTarget__New_1(::uStatic* __this);
void RenderTarget__set_GLDepthBufferHandle(RenderTarget* __this, ::uUInt value);
void RenderTarget__set_GLFramebufferHandle(RenderTarget* __this, ::uUInt value);
void RenderTarget__set_HasDepth(RenderTarget* __this, bool value);
void RenderTarget__set_IsDisposed(RenderTarget* __this, bool value);
void RenderTarget__set_OwnsGLDepthBufferHandle(RenderTarget* __this, bool value);
void RenderTarget__set_OwnsGLFramebufferHandle(RenderTarget* __this, bool value);
void RenderTarget__set_Size(RenderTarget* __this, ::app::Uno::Int2 value);

struct RenderTarget : ::uObject
{
    ::app::Uno::Int2 _Size;
    bool _HasDepth;
    ::uUInt _GLFramebufferHandle;
    ::uUInt _GLDepthBufferHandle;
    bool _OwnsGLFramebufferHandle;
    bool _OwnsGLDepthBufferHandle;
    bool _IsDisposed;

    void _ObjInit() { RenderTarget___ObjInit(this); }
    void Dispose() { RenderTarget__Dispose(this); }
    ::uUInt GLDepthBufferHandle() { return RenderTarget__get_GLDepthBufferHandle(this); }
    ::uUInt GLFramebufferHandle() { return RenderTarget__get_GLFramebufferHandle(this); }
    bool HasDepth() { return RenderTarget__get_HasDepth(this); }
    bool IsDisposed() { return RenderTarget__get_IsDisposed(this); }
    bool OwnsGLDepthBufferHandle() { return RenderTarget__get_OwnsGLDepthBufferHandle(this); }
    bool OwnsGLFramebufferHandle() { return RenderTarget__get_OwnsGLFramebufferHandle(this); }
    ::app::Uno::Int2 Size() { return RenderTarget__get_Size(this); }
    void GLDepthBufferHandle(::uUInt value) { RenderTarget__set_GLDepthBufferHandle(this, value); }
    void GLFramebufferHandle(::uUInt value) { RenderTarget__set_GLFramebufferHandle(this, value); }
    void HasDepth(bool value) { RenderTarget__set_HasDepth(this, value); }
    void IsDisposed(bool value) { RenderTarget__set_IsDisposed(this, value); }
    void OwnsGLDepthBufferHandle(bool value) { RenderTarget__set_OwnsGLDepthBufferHandle(this, value); }
    void OwnsGLFramebufferHandle(bool value) { RenderTarget__set_OwnsGLFramebufferHandle(this, value); }
    void Size(::app::Uno::Int2 value) { RenderTarget__set_Size(this, value); }
};

}}}


#endif
