// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MESH_RENDERER_H__
#define __APP_FUSE_ENTITIES_MESH_RENDERER_H__

#include <app/Fuse.Entities.Component.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Fuse { struct DrawArgs; } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct MeshRenderer;

struct MeshRenderer__uType : ::app::Fuse::Entities::Component__uType
{
    void(*__fp_Validate)(MeshRenderer*);
};

MeshRenderer__uType* MeshRenderer__typeof();

void MeshRenderer___ObjInit_1(MeshRenderer* __this);
void MeshRenderer__DrawDepth(MeshRenderer* __this, ::app::Fuse::Drawing::Batching::Batch* batch);
void MeshRenderer__DrawDepthInternal(MeshRenderer* __this, ::app::Fuse::DrawContext* dc);
void MeshRenderer__DrawSelectionCue(MeshRenderer* __this, ::app::Fuse::Drawing::Batching::Batch* batch, bool selected, bool previewSelected, bool selectedSubtree);
void MeshRenderer__DrawSelectionCueInternal(MeshRenderer* __this, bool isSelected, bool isPreviewSelected, bool isSelectedSubtree);
void MeshRenderer__free_DrawCalls(MeshRenderer* __this);
int MeshRenderer__get_HitTestMode(MeshRenderer* __this);
::app::Fuse::Entities::Material* MeshRenderer__get_Material(MeshRenderer* __this);
::app::Fuse::Entities::Mesh* MeshRenderer__get_Mesh(MeshRenderer* __this);
void MeshRenderer__init_DrawCalls(MeshRenderer* __this);
MeshRenderer* MeshRenderer__New_1(::uStatic* __this);
void MeshRenderer__OnAdded(MeshRenderer* __this, ::app::Fuse::Entities::Entity* e);
void MeshRenderer__OnDraw(MeshRenderer* __this, ::uObject* sender, ::app::Fuse::DrawArgs* args);
void MeshRenderer__OnHitTest(MeshRenderer* __this, ::uObject* sender, ::app::Fuse::HitTestContext* args);
void MeshRenderer__OnRemoved(MeshRenderer* __this, ::app::Fuse::Entities::Entity* e);
bool MeshRenderer__RayIntersectObjectSpace(MeshRenderer* __this, ::app::Uno::Geometry::Ray objectSpaceRay, float* distance);
bool MeshRenderer__RayIntersectWorldSpace(MeshRenderer* __this, ::app::Uno::Geometry::Ray worldSpaceRay, float* distance);
void MeshRenderer__set_HitTestMode(MeshRenderer* __this, int value);
void MeshRenderer__set_Material(MeshRenderer* __this, ::app::Fuse::Entities::Material* value);
void MeshRenderer__set_Mesh(MeshRenderer* __this, ::app::Fuse::Entities::Mesh* value);
void MeshRenderer__Validate(MeshRenderer* __this);

struct MeshRenderer : ::app::Fuse::Entities::Component
{
    ::uStrong< ::app::Fuse::Entities::Mesh*> _mesh;
    int _hitTestMode;
    ::uStrong< ::app::Fuse::Entities::Material*> _material;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6d0ca2bb;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_265654da;

    void _ObjInit_1() { MeshRenderer___ObjInit_1(this); }
    void DrawDepth(::app::Fuse::Drawing::Batching::Batch* batch) { MeshRenderer__DrawDepth(this, batch); }
    void DrawDepthInternal(::app::Fuse::DrawContext* dc) { MeshRenderer__DrawDepthInternal(this, dc); }
    void DrawSelectionCue(::app::Fuse::Drawing::Batching::Batch* batch, bool selected, bool previewSelected, bool selectedSubtree) { MeshRenderer__DrawSelectionCue(this, batch, selected, previewSelected, selectedSubtree); }
    void DrawSelectionCueInternal(bool isSelected, bool isPreviewSelected, bool isSelectedSubtree) { MeshRenderer__DrawSelectionCueInternal(this, isSelected, isPreviewSelected, isSelectedSubtree); }
    void free_DrawCalls() { MeshRenderer__free_DrawCalls(this); }
    int HitTestMode() { return MeshRenderer__get_HitTestMode(this); }
    ::app::Fuse::Entities::Material* Material() { return MeshRenderer__get_Material(this); }
    ::app::Fuse::Entities::Mesh* Mesh() { return MeshRenderer__get_Mesh(this); }
    void init_DrawCalls() { MeshRenderer__init_DrawCalls(this); }
    void OnDraw(::uObject* sender, ::app::Fuse::DrawArgs* args) { MeshRenderer__OnDraw(this, sender, args); }
    void OnHitTest(::uObject* sender, ::app::Fuse::HitTestContext* args) { MeshRenderer__OnHitTest(this, sender, args); }
    bool RayIntersectObjectSpace(::app::Uno::Geometry::Ray objectSpaceRay, float* distance);
    bool RayIntersectWorldSpace(::app::Uno::Geometry::Ray worldSpaceRay, float* distance);
    void HitTestMode(int value) { MeshRenderer__set_HitTestMode(this, value); }
    void Material(::app::Fuse::Entities::Material* value) { MeshRenderer__set_Material(this, value); }
    void Mesh(::app::Fuse::Entities::Mesh* value) { MeshRenderer__set_Mesh(this, value); }
    void Validate() { (((MeshRenderer__uType*)this->__obj_type)->__fp_Validate)(this); }
};

}}}

#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {
namespace Entities {

inline bool MeshRenderer::RayIntersectObjectSpace(::app::Uno::Geometry::Ray objectSpaceRay, float* distance) { return MeshRenderer__RayIntersectObjectSpace(this, objectSpaceRay, distance); }
inline bool MeshRenderer::RayIntersectWorldSpace(::app::Uno::Geometry::Ray worldSpaceRay, float* distance) { return MeshRenderer__RayIntersectWorldSpace(this, worldSpaceRay, distance); }

}}}


#endif
