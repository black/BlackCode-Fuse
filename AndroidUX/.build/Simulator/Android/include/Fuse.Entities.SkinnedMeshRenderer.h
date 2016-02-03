// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.MeshRenderer.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct SkinnedMeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Skinner;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class SkinnedMeshRenderer :2366
// {
::g::Fuse::Entities::MeshRenderer_type* SkinnedMeshRenderer_typeof();
void SkinnedMeshRenderer__ctor_2_fn(SkinnedMeshRenderer* __this);
void SkinnedMeshRenderer__get_Bones_fn(SkinnedMeshRenderer* __this, ::g::Uno::Collections::List** __retval);
void SkinnedMeshRenderer__New2_fn(SkinnedMeshRenderer** __retval);
void SkinnedMeshRenderer__UpdateMesh_fn(SkinnedMeshRenderer* __this);

struct SkinnedMeshRenderer : ::g::Fuse::Entities::MeshRenderer
{
    uStrong< ::g::Fuse::Entities::Skinner*> _assDir;
    uStrong< ::g::Uno::Collections::List*> _bones;

    void ctor_2();
    ::g::Uno::Collections::List* Bones();
    void UpdateMesh();
    static SkinnedMeshRenderer* New2();
};
// }

}}} // ::g::Fuse::Entities
