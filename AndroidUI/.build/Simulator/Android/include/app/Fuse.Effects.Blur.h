// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_BLUR_H__
#define __APP_FUSE_EFFECTS_BLUR_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Effects { struct EffectHelpers; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Blur;

struct Blur__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

Blur__uType* Blur__typeof();

void Blur___ObjInit_2(Blur* __this);
void Blur__free_DrawCalls(Blur* __this);
float Blur__get_Padding(Blur* __this);
float Blur__get_Radius(Blur* __this);
float Blur__get_Sigma(Blur* __this);
void Blur__init_DrawCalls(Blur* __this);
::app::Uno::Rect Blur__ModifyRenderBounds(Blur* __this, ::app::Uno::Rect inBounds);
Blur* Blur__New_1(::uStatic* __this);
void Blur__OnRender(Blur* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);
void Blur__set_Radius(Blur* __this, float value);

struct Blur : ::app::Fuse::Effects::BasicEffect
{
    float _radius;
    ::uStrong< ::app::Fuse::Effects::EffectHelpers*> _helpers;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_71e4915d_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_71e4915d_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_71e4915d_4_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_71e4915d;

    void _ObjInit_2() { Blur___ObjInit_2(this); }
    void free_DrawCalls() { Blur__free_DrawCalls(this); }
    float Padding() { return Blur__get_Padding(this); }
    float Radius() { return Blur__get_Radius(this); }
    float Sigma() { return Blur__get_Sigma(this); }
    void init_DrawCalls() { Blur__init_DrawCalls(this); }
    void Radius(float value) { Blur__set_Radius(this, value); }
};

}}}


#endif
