// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Video{struct Scale9Rectangle;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Video{

// internal sealed class Scale9Rectangle :880
// {
uType* Scale9Rectangle_typeof();
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this);
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4* margin, bool* flip);
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this);
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval);

struct Scale9Rectangle : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c0892878;
    uStrong<uArray*> Draw_indices_c0892878_1_2_12;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> Draw_xv_c0892878_1_3_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_xv_c0892878_1_3_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_yv_c0892878_1_4_6;
    static uSStrong<Scale9Rectangle*> Impl_;
    static uSStrong<Scale9Rectangle*>& Impl() { return Scale9Rectangle_typeof()->Init(), Impl_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4 margin, bool flip);
    void init_DrawCalls();
    static Scale9Rectangle* New1();
};
// }

}}} // ::g::Fuse::Video
