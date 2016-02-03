// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace iOS{struct Blitter;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace iOS{

// internal sealed class Blitter :1288
// {
uType* Blitter_typeof();
void Blitter__ctor__fn(Blitter* __this);
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform);
void Blitter__init_DrawCalls_fn(Blitter* __this);
void Blitter__New1_fn(Blitter** __retval);

struct Blitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_3aa4251e;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_v_3aa4251e_1_7_1;
    uStrong<uArray*> Blit_verts_3aa4251e_1_6_6;
    static uSStrong<Blitter*> Singleton_;
    static uSStrong<Blitter*>& Singleton() { return Blitter_typeof()->Init(), Singleton_; }

    void ctor_();
    void Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform);
    void init_DrawCalls();
    static Blitter* New1();
};
// }

}}} // ::g::Fuse::iOS
