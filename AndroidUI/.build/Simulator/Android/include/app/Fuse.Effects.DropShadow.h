// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_DROP_SHADOW_H__
#define __APP_FUSE_EFFECTS_DROP_SHADOW_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Effects { struct EffectHelpers; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct DropShadow;

struct DropShadow__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

DropShadow__uType* DropShadow__typeof();

void DropShadow___ObjInit_2(DropShadow* __this);
void DropShadow__free_DrawCalls(DropShadow* __this);
bool DropShadow__get_Active(DropShadow* __this);
float DropShadow__get_Angle(DropShadow* __this);
::app::Uno::Float4 DropShadow__get_Color(DropShadow* __this);
float DropShadow__get_Distance(DropShadow* __this);
::app::Uno::Float2 DropShadow__get_Offset(DropShadow* __this);
float DropShadow__get_Padding(DropShadow* __this);
float DropShadow__get_Radius(DropShadow* __this);
float DropShadow__get_Sigma(DropShadow* __this);
float DropShadow__get_Size(DropShadow* __this);
float DropShadow__get_Spread(DropShadow* __this);
void DropShadow__init_DrawCalls(DropShadow* __this);
::app::Uno::Rect DropShadow__ModifyRenderBounds(DropShadow* __this, ::app::Uno::Rect inBounds);
DropShadow* DropShadow__New_1(::uStatic* __this);
void DropShadow__OnRender(DropShadow* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);
void DropShadow__set_Angle(DropShadow* __this, float value);
void DropShadow__set_Color(DropShadow* __this, ::app::Uno::Float4 value);
void DropShadow__set_Distance(DropShadow* __this, float value);
void DropShadow__set_Size(DropShadow* __this, float value);
void DropShadow__set_Spread(DropShadow* __this, float value);

struct DropShadow : ::app::Fuse::Effects::BasicEffect
{
    float _size;
    float _angle;
    float _distance;
    float _spread;
    ::app::Uno::Float4 _color;
    ::uStrong< ::app::Fuse::Effects::EffectHelpers*> _helpers;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_5f9c2c70_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_5f9c2c70_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_5f9c2c70_4_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5f9c2c70;

    void _ObjInit_2() { DropShadow___ObjInit_2(this); }
    void free_DrawCalls() { DropShadow__free_DrawCalls(this); }
    float Angle() { return DropShadow__get_Angle(this); }
    ::app::Uno::Float4 Color();
    float Distance() { return DropShadow__get_Distance(this); }
    ::app::Uno::Float2 Offset();
    float Padding() { return DropShadow__get_Padding(this); }
    float Radius() { return DropShadow__get_Radius(this); }
    float Sigma() { return DropShadow__get_Sigma(this); }
    float Size() { return DropShadow__get_Size(this); }
    float Spread() { return DropShadow__get_Spread(this); }
    void init_DrawCalls() { DropShadow__init_DrawCalls(this); }
    void Angle(float value) { DropShadow__set_Angle(this, value); }
    void Color(::app::Uno::Float4 value);
    void Distance(float value) { DropShadow__set_Distance(this, value); }
    void Size(float value) { DropShadow__set_Size(this, value); }
    void Spread(float value) { DropShadow__set_Spread(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Effects {

inline ::app::Uno::Float4 DropShadow::Color() { return DropShadow__get_Color(this); }
inline ::app::Uno::Float2 DropShadow::Offset() { return DropShadow__get_Offset(this); }
inline void DropShadow::Color(::app::Uno::Float4 value) { DropShadow__set_Color(this, value); }

}}}


#endif
