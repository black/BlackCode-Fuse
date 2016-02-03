// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Meshes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_MESHES_MESH_GENERATOR_H__
#define __APP_FUSE_DRAWING_MESHES_MESH_GENERATOR_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Meshes {

struct MeshGenerator__uType : ::uClassType
{
};

MeshGenerator__uType* MeshGenerator__typeof();

::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateCone(::uStatic* __this, float height, float radius, int horizontalTessellation, int verticalTessellation);
::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateCube(::uStatic* __this, ::app::Uno::Float3 pivot, float halfExtent);
::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateCylinder(::uStatic* __this, float height, float radius, int horizontalTessellation, int verticalTessellation);
::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateSphere(::uStatic* __this, ::app::Uno::Float3 pivot, float radius, int slices, int stacks);

}}}}


#endif
