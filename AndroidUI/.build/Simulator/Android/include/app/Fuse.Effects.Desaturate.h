// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_DESATURATE_H__
#define __APP_FUSE_EFFECTS_DESATURATE_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Desaturate;

struct Desaturate__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

Desaturate__uType* Desaturate__typeof();

void Desaturate___ObjInit_2(Desaturate* __this);
void Desaturate__free_DrawCalls(Desaturate* __this);
float Desaturate__get_Amount(Desaturate* __this);
void Desaturate__init_DrawCalls(Desaturate* __this);
Desaturate* Desaturate__New_1(::uStatic* __this);
void Desaturate__OnRender(Desaturate* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);
void Desaturate__set_Amount(Desaturate* __this, float value);

struct Desaturate : ::app::Fuse::Effects::BasicEffect
{
    float _amount;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_86b72be7_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_86b72be7_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_86b72be7_4_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_86b72be7;

    void _ObjInit_2() { Desaturate___ObjInit_2(this); }
    void free_DrawCalls() { Desaturate__free_DrawCalls(this); }
    float Amount() { return Desaturate__get_Amount(this); }
    void init_DrawCalls() { Desaturate__init_DrawCalls(this); }
    void Amount(float value) { Desaturate__set_Amount(this, value); }
};

}}}


#endif
