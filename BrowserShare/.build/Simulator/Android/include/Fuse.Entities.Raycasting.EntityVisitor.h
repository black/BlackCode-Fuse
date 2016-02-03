// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Raycasting__EntityVisitor;}}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{
namespace Entities{

// private sealed class Raycasting.EntityVisitor :1813
// {
uType* Raycasting__EntityVisitor_typeof();
void Raycasting__EntityVisitor__ctor__fn(Raycasting__EntityVisitor* __this, ::g::Fuse::DrawContext* tc);
void Raycasting__EntityVisitor__New1_fn(::g::Fuse::DrawContext* tc, Raycasting__EntityVisitor** __retval);
void Raycasting__EntityVisitor__Visit_fn(Raycasting__EntityVisitor* __this, ::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* p, bool* __retval);
void Raycasting__EntityVisitor__VisitMeshRenderer_fn(Raycasting__EntityVisitor* __this, ::g::Fuse::Entities::MeshRenderer* mr);

struct Raycasting__EntityVisitor : uObject
{
    bool _foundAnyIntersections;
    float _minDistance;
    ::g::Uno::Float2 _point;
    uStrong< ::g::Fuse::DrawContext*> _tc;

    void ctor_(::g::Fuse::DrawContext* tc);
    bool Visit(::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* p);
    void VisitMeshRenderer(::g::Fuse::Entities::MeshRenderer* mr);
    static Raycasting__EntityVisitor* New1(::g::Fuse::DrawContext* tc);
};
// }

}}} // ::g::Fuse::Entities
