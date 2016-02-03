// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Entities{namespace Filters{struct Blitter;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Filters{

// internal sealed class Blitter :123
// {
uType* Blitter_typeof();
void Blitter__ctor__fn(Blitter* __this);
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* tex, bool* blend);
void Blitter__init_DrawCalls_fn(Blitter* __this);
void Blitter__get_Instance_fn(Blitter** __retval);
void Blitter__New1_fn(Blitter** __retval);

struct Blitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_68768587;
    static uSStrong<Blitter*> _instance_;
    static uSStrong<Blitter*>& _instance() { return _instance_; }
    uStrong< ::g::Uno::Graphics::IndexBuffer*> Blit_VertexData_68768587_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_VertexData_68768587_2_5_3;

    void ctor_();
    void Blit(::g::Uno::Graphics::Texture2D* tex, bool blend);
    void init_DrawCalls();
    static Blitter* New1();
    static Blitter* Instance();
};
// }

}}}} // ::g::Fuse::Entities::Filters
