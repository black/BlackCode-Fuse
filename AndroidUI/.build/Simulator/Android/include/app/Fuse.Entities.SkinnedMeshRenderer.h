// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_SKINNED_MESH_RENDERER_H__
#define __APP_FUSE_ENTITIES_SKINNED_MESH_RENDERER_H__

#include <app/Fuse.Entities.MeshRenderer.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Skinner; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entity; } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Entities {

struct SkinnedMeshRenderer;

struct SkinnedMeshRenderer__uType : ::app::Fuse::Entities::MeshRenderer__uType
{
};

SkinnedMeshRenderer__uType* SkinnedMeshRenderer__typeof();

void SkinnedMeshRenderer___ObjInit_2(SkinnedMeshRenderer* __this);
::app::Uno::Collections::List__Fuse_Entities_Entity* SkinnedMeshRenderer__get_Bones(SkinnedMeshRenderer* __this);
::app::Uno::Float4x4 SkinnedMeshRenderer__GetBone(SkinnedMeshRenderer* __this, int index);
SkinnedMeshRenderer* SkinnedMeshRenderer__New_2(::uStatic* __this);
void SkinnedMeshRenderer__UpdateMesh(SkinnedMeshRenderer* __this);

struct SkinnedMeshRenderer : ::app::Fuse::Entities::MeshRenderer
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entity*> _bones;
    ::uStrong< ::app::Fuse::Entities::Skinner*> _assDir;

    void _ObjInit_2() { SkinnedMeshRenderer___ObjInit_2(this); }
    ::app::Uno::Collections::List__Fuse_Entities_Entity* Bones() { return SkinnedMeshRenderer__get_Bones(this); }
    ::app::Uno::Float4x4 GetBone(int index);
    void UpdateMesh() { SkinnedMeshRenderer__UpdateMesh(this); }
};

}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Float4x4 SkinnedMeshRenderer::GetBone(int index) { return SkinnedMeshRenderer__GetBone(this, index); }

}}}


#endif
