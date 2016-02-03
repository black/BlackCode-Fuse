// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Primitives\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PRIMITIVES_CIRCLE_H__
#define __APP_FUSE_DRAWING_PRIMITIVES_CIRCLE_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct Float2Buffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct UShortBuffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct Coverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct FillCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct LimitCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct StrokeCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

struct Circle;

extern ::uStaticStrong< Circle*> Circle__Singleton;

struct Circle__uType : ::uClassType
{
};

Circle__uType* Circle__typeof();

void Circle___ObjInit(Circle* __this);
void Circle___TypeInit(::uStatic* __this);
void Circle__Draw(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness);
void Circle__Fill(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness);
void Circle__free_DrawCalls(Circle* __this);
void Circle__init_DrawCalls(Circle* __this);
void Circle__InitBuffers(Circle* __this);
Circle* Circle__New_1(::uStatic* __this);
void Circle__Stroke(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness);

struct Circle : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Primitives::LimitCoverage*> _oneLimitCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    ::uStrong< ::app::Fuse::Drawing::Internal::Float2Buffer*> _bufferVertex;
    ::uStrong< ::app::Fuse::Drawing::Internal::UShortBuffer*> _bufferIndex;
    int Draw_BlendSrcRgb_44028225_11_4_22;
    int Draw_BlendSrcAlpha_44028225_11_6_23;
    int Draw_BlendDstRgb_44028225_11_5_24;
    int Draw_BlendDstAlpha_44028225_11_7_25;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8cc20e6d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a4b30e6d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9cb80e6d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_b58e0e6d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ad930e6d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c5840e6d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_bdee0e6d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c0451d53;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c0451d52;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_44028225;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_44238225;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_44c88225;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ebd684fc;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_492f1061;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a6879bc6;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_37e0cc03;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_95395768;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_22c0272b;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_49d1aa95;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ec791f30;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8f2093cb;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_508d0866;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f3347d01;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_95dbf19c;

    void _ObjInit() { Circle___ObjInit(this); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness);
    void Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness);
    void free_DrawCalls() { Circle__free_DrawCalls(this); }
    void init_DrawCalls() { Circle__init_DrawCalls(this); }
    void InitBuffers() { Circle__InitBuffers(this); }
    void Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

inline void Circle::Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness) { Circle__Draw(this, dc, node, radius, brush, cover, limit, extend, center, smoothness); }
inline void Circle::Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness) { Circle__Fill(this, dc, node, radius, brush, center, smoothness); }
inline void Circle::Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness) { Circle__Stroke(this, dc, node, radius, stroke, center, smoothness); }

}}}}


#endif
