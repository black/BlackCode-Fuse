// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_RENDER_TO_TEXTURE_H__
#define __APP_FUSE_ENTITIES_RENDER_TO_TEXTURE_H__

#include <app/Fuse.Entities.RenderNode.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct RenderToTexture;

struct RenderToTexture__uType : ::app::Fuse::Entities::RenderNode__uType
{
};

RenderToTexture__uType* RenderToTexture__typeof();

void RenderToTexture___ObjInit_2(RenderToTexture* __this);
void RenderToTexture__BlitFlipped(RenderToTexture* __this, ::app::Uno::Graphics::Texture2D* tex);
void RenderToTexture__free_DrawCalls(RenderToTexture* __this);
bool RenderToTexture__get_Clear(RenderToTexture* __this);
::app::Uno::Float4 RenderToTexture__get_ClearColor(RenderToTexture* __this);
float RenderToTexture__get_ClearDepth(RenderToTexture* __this);
bool RenderToTexture__get_DepthBuffer(RenderToTexture* __this);
::app::Fuse::Entities::Entity* RenderToTexture__get_EventRaycastTarget(RenderToTexture* __this);
bool RenderToTexture__get_FlipVertically(RenderToTexture* __this);
int RenderToTexture__get_PixelFormat(RenderToTexture* __this);
::app::Uno::Int2 RenderToTexture__get_Resolution(RenderToTexture* __this);
::app::Uno::Graphics::Texture2D* RenderToTexture__get_Result(RenderToTexture* __this);
void RenderToTexture__init_DrawCalls(RenderToTexture* __this);
RenderToTexture* RenderToTexture__New_2(::uStatic* __this);
void RenderToTexture__OnDraw(RenderToTexture* __this, ::app::Fuse::DrawContext* dc);
void RenderToTexture__set_Clear(RenderToTexture* __this, bool value);
void RenderToTexture__set_ClearColor(RenderToTexture* __this, ::app::Uno::Float4 value);
void RenderToTexture__set_ClearDepth(RenderToTexture* __this, float value);
void RenderToTexture__set_DepthBuffer(RenderToTexture* __this, bool value);
void RenderToTexture__set_EventRaycastTarget(RenderToTexture* __this, ::app::Fuse::Entities::Entity* value);
void RenderToTexture__set_FlipVertically(RenderToTexture* __this, bool value);
void RenderToTexture__set_PixelFormat(RenderToTexture* __this, int value);
void RenderToTexture__set_Resolution(RenderToTexture* __this, ::app::Uno::Int2 value);

struct RenderToTexture : ::app::Fuse::Entities::RenderNode
{
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> fb;
    ::app::Uno::Int2 resolution;
    int format;
    bool depth;
    ::uStrong< ::app::Fuse::Entities::Entity*> raycastTarget;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> BlitFlipped_VertexData_606d3302_7_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> BlitFlipped_VertexData_606d3302_7_5_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_606d3302;
    bool _Clear;
    ::app::Uno::Float4 _ClearColor;
    float _ClearDepth;
    bool _FlipVertically;

    void _ObjInit_2() { RenderToTexture___ObjInit_2(this); }
    void BlitFlipped(::app::Uno::Graphics::Texture2D* tex) { RenderToTexture__BlitFlipped(this, tex); }
    void free_DrawCalls() { RenderToTexture__free_DrawCalls(this); }
    bool Clear() { return RenderToTexture__get_Clear(this); }
    ::app::Uno::Float4 ClearColor() { return RenderToTexture__get_ClearColor(this); }
    float ClearDepth() { return RenderToTexture__get_ClearDepth(this); }
    bool DepthBuffer() { return RenderToTexture__get_DepthBuffer(this); }
    ::app::Fuse::Entities::Entity* EventRaycastTarget() { return RenderToTexture__get_EventRaycastTarget(this); }
    bool FlipVertically() { return RenderToTexture__get_FlipVertically(this); }
    int PixelFormat() { return RenderToTexture__get_PixelFormat(this); }
    ::app::Uno::Int2 Resolution() { return RenderToTexture__get_Resolution(this); }
    ::app::Uno::Graphics::Texture2D* Result() { return RenderToTexture__get_Result(this); }
    void init_DrawCalls() { RenderToTexture__init_DrawCalls(this); }
    void Clear(bool value) { RenderToTexture__set_Clear(this, value); }
    void ClearColor(::app::Uno::Float4 value) { RenderToTexture__set_ClearColor(this, value); }
    void ClearDepth(float value) { RenderToTexture__set_ClearDepth(this, value); }
    void DepthBuffer(bool value) { RenderToTexture__set_DepthBuffer(this, value); }
    void EventRaycastTarget(::app::Fuse::Entities::Entity* value) { RenderToTexture__set_EventRaycastTarget(this, value); }
    void FlipVertically(bool value) { RenderToTexture__set_FlipVertically(this, value); }
    void PixelFormat(int value) { RenderToTexture__set_PixelFormat(this, value); }
    void Resolution(::app::Uno::Int2 value) { RenderToTexture__set_Resolution(this, value); }
};

}}}


#endif
