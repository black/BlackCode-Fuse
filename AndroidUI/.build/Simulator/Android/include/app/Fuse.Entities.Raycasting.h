// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_RAYCASTING_H__
#define __APP_FUSE_ENTITIES_RAYCASTING_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Entities { struct MeshRenderer; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Raycasting__uType : ::uClassType
{
};

Raycasting__uType* Raycasting__typeof();

bool Raycasting__PointToTexcoordSpace(::uStatic* __this, ::app::Fuse::DrawContext* tc, ::app::Fuse::Entities::Entity* e, ::app::Uno::Float2* pointCoord);
bool Raycasting__PointToTexcoordSpace_1(::uStatic* __this, ::app::Fuse::DrawContext* tc, ::app::Fuse::Entities::MeshRenderer* mr, ::app::Uno::Float2* pointCoord, float* minDistance);

}}}


#endif
