// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Meshes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_MESHES_MESH_TOOLS_H__
#define __APP_FUSE_DRAWING_MESHES_MESH_TOOLS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Meshes {

struct MeshTools__uType : ::uClassType
{
};

MeshTools__uType* MeshTools__typeof();

::app::Uno::Content::Models::ModelMesh* MeshTools__CalculateNormals(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* mesh);
::app::Uno::Content::Models::ModelMesh* MeshTools__CalculateTangentsAndBinormals(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m);

}}}}


#endif
