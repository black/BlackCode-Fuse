// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_BLITTER_H__
#define __APP_FUSE_ANDROID_BLITTER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct VideoTexture; } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Android {

struct Blitter;

extern ::uStaticStrong< Blitter*> Blitter__Singleton;

struct Blitter__uType : ::uClassType
{
};

Blitter__uType* Blitter__typeof();

void Blitter___ObjInit(Blitter* __this);
void Blitter___TypeInit(::uStatic* __this);
void Blitter__Blit(Blitter* __this, ::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Float2 extent);
void Blitter__Blit_1(Blitter* __this, ::app::Uno::Graphics::VideoTexture* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform);
void Blitter__free_DrawCalls(Blitter* __this);
void Blitter__init_DrawCalls(Blitter* __this);
Blitter* Blitter__New_1(::uStatic* __this);

struct Blitter : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Blit_v_9662c2a9_1_7_1;
    ::uStrong< ::uArray*> Blit_verts_9662c2a9_1_6_5;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Blit_v_fc927db0_1_7_1;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9662c2a9;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_fc927db0;

    void _ObjInit() { Blitter___ObjInit(this); }
    void Blit(::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Float2 extent);
    void Blit_1(::app::Uno::Graphics::VideoTexture* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform);
    void free_DrawCalls() { Blitter__free_DrawCalls(this); }
    void init_DrawCalls() { Blitter__init_DrawCalls(this); }
};

}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Android {

inline void Blitter::Blit(::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Float2 extent) { Blitter__Blit(this, vt, pos, size, localToClipTransform, extent); }
inline void Blitter::Blit_1(::app::Uno::Graphics::VideoTexture* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform) { Blitter__Blit_1(this, vt, pos, size, localToClipTransform); }

}}}


#endif
