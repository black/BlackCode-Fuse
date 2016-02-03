// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_RAYCASTING_ENTITY_VISITOR_H__
#define __APP_FUSE_ENTITIES_RAYCASTING_ENTITY_VISITOR_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Entities { struct MeshRenderer; } } }
namespace app { namespace Fuse { struct DrawContext; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Raycasting_EntityVisitor;

struct Raycasting_EntityVisitor__uType : ::uClassType
{
};

Raycasting_EntityVisitor__uType* Raycasting_EntityVisitor__typeof();

void Raycasting_EntityVisitor___ObjInit(Raycasting_EntityVisitor* __this, ::app::Fuse::DrawContext* tc);
Raycasting_EntityVisitor* Raycasting_EntityVisitor__New_1(::uStatic* __this, ::app::Fuse::DrawContext* tc);
bool Raycasting_EntityVisitor__Visit(Raycasting_EntityVisitor* __this, ::app::Fuse::Entities::Entity* e, ::app::Uno::Float2* p);
void Raycasting_EntityVisitor__VisitMeshRenderer(Raycasting_EntityVisitor* __this, ::app::Fuse::Entities::MeshRenderer* mr);

struct Raycasting_EntityVisitor : ::uObject
{
    bool _foundAnyIntersections;
    float _minDistance;
    ::app::Uno::Float2 _point;
    ::uStrong< ::app::Fuse::DrawContext*> _tc;

    void _ObjInit(::app::Fuse::DrawContext* tc) { Raycasting_EntityVisitor___ObjInit(this, tc); }
    bool Visit(::app::Fuse::Entities::Entity* e, ::app::Uno::Float2* p) { return Raycasting_EntityVisitor__Visit(this, e, p); }
    void VisitMeshRenderer(::app::Fuse::Entities::MeshRenderer* mr) { Raycasting_EntityVisitor__VisitMeshRenderer(this, mr); }
};

}}}


#endif
