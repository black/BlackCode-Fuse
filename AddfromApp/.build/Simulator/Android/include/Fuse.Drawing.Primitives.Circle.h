// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct Float2Buffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct UShortBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Circle;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Coverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct FillCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct LimitCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// public sealed class Circle :21
// {
uType* Circle_typeof();
void Circle__ctor__fn(Circle* __this);
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2* extend, ::g::Uno::Float2* center, float* smoothness);
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness);
void Circle__init_DrawCalls_fn(Circle* __this);
void Circle__InitBuffers_fn(Circle* __this);
void Circle__New1_fn(Circle** __retval);
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness);

struct Circle : uObject
{
    uStrong< ::g::Fuse::Drawing::Internal::UShortBuffer*> _bufferIndex;
    uStrong< ::g::Fuse::Drawing::Internal::Float2Buffer*> _bufferVertex;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_22c0272b;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_37e0cc03;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_44028225;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_44238225;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_44c88225;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_492f1061;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_49d1aa95;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_508d0866;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8cc20e6d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8f2093cb;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_95395768;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_95dbf19c;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9cb80e6d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a4b30e6d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a6879bc6;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ad930e6d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_b58e0e6d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_bdee0e6d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c0451d52;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c0451d53;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c5840e6d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ebd684fc;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ec791f30;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f3347d01;
    uStrong< ::g::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::LimitCoverage*> _oneLimitCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    int Draw_BlendDstAlpha_44028225_11_7_25;
    int Draw_BlendDstRgb_44028225_11_5_24;
    int Draw_BlendSrcAlpha_44028225_11_6_23;
    int Draw_BlendSrcRgb_44028225_11_4_22;
    static uSStrong<Circle*> Singleton_;
    static uSStrong<Circle*>& Singleton() { return Circle_typeof()->Init(), Singleton_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2 extend, ::g::Uno::Float2 center, float smoothness);
    void Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness);
    void init_DrawCalls();
    void InitBuffers();
    void Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness);
    static Circle* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
