// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Elements{struct Cache;}}}
namespace g{namespace Fuse{namespace Elements{struct CacheHelper;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class CacheHelper :289
// {
uType* CacheHelper_typeof();
void CacheHelper__ctor__fn(CacheHelper* __this);
void CacheHelper__Blit_fn(CacheHelper* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float* opacity);
void CacheHelper__init_DrawCalls_fn(CacheHelper* __this);
void CacheHelper__New1_fn(CacheHelper** __retval);

struct CacheHelper : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ac95a784;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_Coord_ac95a784_1_1_1;
    uStrong<uArray*> Blit_Vertices_ac95a784_1_0_7;

    void ctor_();
    void Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float opacity);
    void init_DrawCalls();
    static CacheHelper* New1();
};
// }

}}} // ::g::Fuse::Elements
