// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MODEL_MESH_HELPERS_H__
#define __APP_FUSE_ENTITIES_MODEL_MESH_HELPERS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { namespace Geometry { struct Sphere; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct ModelMeshHelpers__uType : ::uClassType
{
};

ModelMeshHelpers__uType* ModelMeshHelpers__typeof();

::app::Uno::Geometry::Box ModelMeshHelpers__CalculateAABB(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh);
::app::Uno::Geometry::Sphere ModelMeshHelpers__CalculateBoundingSphere(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* modelMesh);

}}}


#endif
