// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINEAR_GRADIENT_DRAWABLE_H__
#define __APP_FUSE_DRAWING_LINEAR_GRADIENT_DRAWABLE_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LinearGradientDrawable;

extern ::uStaticStrong< LinearGradientDrawable*> LinearGradientDrawable__Singleton;

struct LinearGradientDrawable__uType : ::uClassType
{
};

LinearGradientDrawable__uType* LinearGradientDrawable__typeof();

void LinearGradientDrawable___ObjInit(LinearGradientDrawable* __this);
void LinearGradientDrawable___TypeInit(::uStatic* __this);
::app::Uno::Float2 LinearGradientDrawable__FillBuffer(LinearGradientDrawable* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::LinearGradient* lg, ::app::Uno::Graphics::Framebuffer* fb);
::uArray* LinearGradientDrawable__FillBuffer_Colors_3cb3c708_1_6_6(::uStatic* __this, int Colors_1_6_4, ::uArray* Colors_1_6_5);
::uArray* LinearGradientDrawable__FillBuffer_Offsets_3cb3c708_1_5_4(::uStatic* __this, int Offsets_1_5_1, ::uArray* Offsets_1_5_2);
void LinearGradientDrawable__free_DrawCalls(LinearGradientDrawable* __this);
void LinearGradientDrawable__init_DrawCalls(LinearGradientDrawable* __this);
LinearGradientDrawable* LinearGradientDrawable__New_1(::uStatic* __this);

struct LinearGradientDrawable : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> FillBuffer_TexCoord_3cb3c708_1_1_1;
    ::uStrong< ::uArray*> FillBuffer_Vertices_3cb3c708_1_0_9;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_3cb3c708;

    void _ObjInit() { LinearGradientDrawable___ObjInit(this); }
    ::app::Uno::Float2 FillBuffer(::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::LinearGradient* lg, ::app::Uno::Graphics::Framebuffer* fb) { return LinearGradientDrawable__FillBuffer(this, dc, lg, fb); }
    void free_DrawCalls() { LinearGradientDrawable__free_DrawCalls(this); }
    void init_DrawCalls() { LinearGradientDrawable__init_DrawCalls(this); }
};

}}}


#endif
