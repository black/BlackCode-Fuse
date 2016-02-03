// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_BLITTER_H__
#define __APP_FUSE_I_O_S_BLITTER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace iOS {

struct Blitter;

extern ::uStaticStrong< Blitter*> Blitter__Singleton;

struct Blitter__uType : ::uClassType
{
};

Blitter__uType* Blitter__typeof();

void Blitter___ObjInit(Blitter* __this);
void Blitter___TypeInit(::uStatic* __this);
void Blitter__Blit(Blitter* __this, ::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform);
void Blitter__free_DrawCalls(Blitter* __this);
void Blitter__init_DrawCalls(Blitter* __this);
Blitter* Blitter__New_1(::uStatic* __this);

struct Blitter : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Blit_v_3aa4251e_1_7_1;
    ::uStrong< ::uArray*> Blit_verts_3aa4251e_1_6_6;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_3aa4251e;

    void _ObjInit() { Blitter___ObjInit(this); }
    void Blit(::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform);
    void free_DrawCalls() { Blitter__free_DrawCalls(this); }
    void init_DrawCalls() { Blitter__init_DrawCalls(this); }
};

}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace iOS {

inline void Blitter::Blit(::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform) { Blitter__Blit(this, vt, pos, size, localToClipTransform); }

}}}


#endif
