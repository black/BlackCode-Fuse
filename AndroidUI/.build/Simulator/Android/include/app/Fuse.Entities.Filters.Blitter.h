// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_FILTERS_BLITTER_H__
#define __APP_FUSE_ENTITIES_FILTERS_BLITTER_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Entities {
namespace Filters {

struct Blitter;

extern ::uStaticStrong< Blitter*> Blitter___instance;

struct Blitter__uType : ::uClassType
{
};

Blitter__uType* Blitter__typeof();

void Blitter___ObjInit(Blitter* __this);
void Blitter__Blit(Blitter* __this, ::app::Uno::Graphics::Texture2D* tex, bool blend);
void Blitter__free_DrawCalls(Blitter* __this);
Blitter* Blitter__get_Instance(::uStatic* __this);
void Blitter__init_DrawCalls(Blitter* __this);
Blitter* Blitter__New_1(::uStatic* __this);

struct Blitter : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> Blit_VertexData_68768587_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Blit_VertexData_68768587_2_5_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_68768587;

    void _ObjInit() { Blitter___ObjInit(this); }
    void Blit(::app::Uno::Graphics::Texture2D* tex, bool blend) { Blitter__Blit(this, tex, blend); }
    void free_DrawCalls() { Blitter__free_DrawCalls(this); }
    void init_DrawCalls() { Blitter__init_DrawCalls(this); }
};

}}}}


#endif
