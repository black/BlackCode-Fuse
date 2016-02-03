// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_FILTERS_BLUR_H__
#define __APP_FUSE_ENTITIES_FILTERS_BLUR_H__

#include <app/Fuse.Entities.RenderNode.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Entities {
namespace Filters {

struct Blur;

struct Blur__uType : ::app::Fuse::Entities::RenderNode__uType
{
};

Blur__uType* Blur__typeof();

void Blur___ObjInit_2(Blur* __this);
void Blur__DirectionalBlur(Blur* __this, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir);
void Blur__free_DrawCalls(Blur* __this);
::app::Uno::Float4 Blur__get_ClearColor(Blur* __this);
bool Blur__get_Glow(Blur* __this);
int Blur__get_Passes(Blur* __this);
float Blur__get_Quality(Blur* __this);
void Blur__init_DrawCalls(Blur* __this);
Blur* Blur__New_2(::uStatic* __this);
void Blur__OnDraw(Blur* __this, ::app::Fuse::DrawContext* dc);
void Blur__set_ClearColor(Blur* __this, ::app::Uno::Float4 value);
void Blur__set_Glow(Blur* __this, bool value);
void Blur__set_Passes(Blur* __this, int value);
void Blur__set_Quality(Blur* __this, float value);

struct Blur : ::app::Fuse::Entities::RenderNode
{
    float _quality;
    int _passes;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> DirectionalBlur_VertexData_4fa3ba3f_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DirectionalBlur_VertexData_4fa3ba3f_2_5_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_4fa3ba3f;
    ::app::Uno::Float4 _ClearColor;
    bool _Glow;

    void _ObjInit_2() { Blur___ObjInit_2(this); }
    void DirectionalBlur(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir);
    void free_DrawCalls() { Blur__free_DrawCalls(this); }
    ::app::Uno::Float4 ClearColor();
    bool Glow() { return Blur__get_Glow(this); }
    int Passes() { return Blur__get_Passes(this); }
    float Quality() { return Blur__get_Quality(this); }
    void init_DrawCalls() { Blur__init_DrawCalls(this); }
    void ClearColor(::app::Uno::Float4 value);
    void Glow(bool value) { Blur__set_Glow(this, value); }
    void Passes(int value) { Blur__set_Passes(this, value); }
    void Quality(float value) { Blur__set_Quality(this, value); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Filters {

inline void Blur::DirectionalBlur(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir) { Blur__DirectionalBlur(this, tex, dir); }
inline ::app::Uno::Float4 Blur::ClearColor() { return Blur__get_ClearColor(this); }
inline void Blur::ClearColor(::app::Uno::Float4 value) { Blur__set_ClearColor(this, value); }

}}}}


#endif
