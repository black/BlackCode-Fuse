// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Component.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{struct DrawArgs;}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public class MeshRenderer :1347
// {
struct MeshRenderer_type : ::g::Fuse::Entities::Component_type
{
    void(*fp_Validate)(::g::Fuse::Entities::MeshRenderer*);
};

MeshRenderer_type* MeshRenderer_typeof();
void MeshRenderer__ctor_1_fn(MeshRenderer* __this);
void MeshRenderer__DrawDepth_fn(MeshRenderer* __this, ::g::Fuse::Drawing::Batching::Batch* batch);
void MeshRenderer__DrawDepthInternal_fn(MeshRenderer* __this, ::g::Fuse::DrawContext* dc);
void MeshRenderer__DrawSelectionCue_fn(MeshRenderer* __this, ::g::Fuse::Drawing::Batching::Batch* batch, bool* selected, bool* previewSelected, bool* selectedSubtree);
void MeshRenderer__DrawSelectionCueInternal_fn(MeshRenderer* __this, bool* isSelected, bool* isPreviewSelected, bool* isSelectedSubtree);
void MeshRenderer__get_HitTestMode_fn(MeshRenderer* __this, int* __retval);
void MeshRenderer__set_HitTestMode_fn(MeshRenderer* __this, int* value);
void MeshRenderer__init_DrawCalls_fn(MeshRenderer* __this);
void MeshRenderer__get_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material** __retval);
void MeshRenderer__set_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material* value);
void MeshRenderer__get_Mesh_fn(MeshRenderer* __this, ::g::Fuse::Entities::Mesh** __retval);
void MeshRenderer__set_Mesh_fn(MeshRenderer* __this, ::g::Fuse::Entities::Mesh* value);
void MeshRenderer__New1_fn(MeshRenderer** __retval);
void MeshRenderer__OnAdded_fn(MeshRenderer* __this, ::g::Fuse::Entities::Entity* e);
void MeshRenderer__OnDraw_fn(MeshRenderer* __this, uObject* sender, ::g::Fuse::DrawArgs* args);
void MeshRenderer__OnHitTest_fn(MeshRenderer* __this, uObject* sender, ::g::Fuse::HitTestContext* args);
void MeshRenderer__OnRemoved_fn(MeshRenderer* __this, ::g::Fuse::Entities::Entity* e);
void MeshRenderer__RayIntersectObjectSpace_fn(MeshRenderer* __this, ::g::Uno::Geometry::Ray* objectSpaceRay, float* distance, bool* __retval);
void MeshRenderer__RayIntersectWorldSpace_fn(MeshRenderer* __this, ::g::Uno::Geometry::Ray* worldSpaceRay, float* distance, bool* __retval);
void MeshRenderer__Validate_fn(MeshRenderer* __this);

struct MeshRenderer : ::g::Fuse::Entities::Component
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_265654da;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6d0ca2bb;
    int _hitTestMode;
    uStrong< ::g::Fuse::Entities::Material*> _material;
    uStrong< ::g::Fuse::Entities::Mesh*> _mesh;

    void ctor_1();
    void DrawDepth(::g::Fuse::Drawing::Batching::Batch* batch);
    void DrawDepthInternal(::g::Fuse::DrawContext* dc);
    void DrawSelectionCue(::g::Fuse::Drawing::Batching::Batch* batch, bool selected, bool previewSelected, bool selectedSubtree);
    void DrawSelectionCueInternal(bool isSelected, bool isPreviewSelected, bool isSelectedSubtree);
    int HitTestMode();
    void HitTestMode(int value);
    void init_DrawCalls();
    ::g::Fuse::Entities::Material* Material();
    void Material(::g::Fuse::Entities::Material* value);
    ::g::Fuse::Entities::Mesh* Mesh();
    void Mesh(::g::Fuse::Entities::Mesh* value);
    void OnDraw(uObject* sender, ::g::Fuse::DrawArgs* args);
    void OnHitTest(uObject* sender, ::g::Fuse::HitTestContext* args);
    bool RayIntersectObjectSpace(::g::Uno::Geometry::Ray objectSpaceRay, float* distance);
    bool RayIntersectWorldSpace(::g::Uno::Geometry::Ray worldSpaceRay, float* distance);
    void Validate() { (((MeshRenderer_type*)__type)->fp_Validate)(this); }
    static MeshRenderer* New1();
    static void Validate(MeshRenderer* __this) { MeshRenderer__Validate_fn(__this); }
};
// }

}}} // ::g::Fuse::Entities
