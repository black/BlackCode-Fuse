// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_SCENE_H__
#define __APP_FUSE_ENTITIES_SCENE_H__

#include <app/Fuse.Entities.RenderNode.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Scene;

struct Scene__uType : ::app::Fuse::Entities::RenderNode__uType
{
    ::app::Fuse::IViewport __interface_1;
};

Scene__uType* Scene__typeof();

void Scene___ObjInit_2(Scene* __this);
void Scene__add_WindowClosed(Scene* __this, ::uDelegate* value);
void Scene__add_WindowClosing(Scene* __this, ::uDelegate* value);
void Scene__add_WindowResized(Scene* __this, ::uDelegate* value);
bool Scene__get_AlwaysClear(Scene* __this);
bool Scene__get_AlwaysUseOwnCamera(Scene* __this);
::app::Fuse::Entities::Entity* Scene__get_Camera(Scene* __this);
::app::Uno::Float4 Scene__get_ClearColor(Scene* __this);
bool Scene__get_HasCamera(Scene* __this);
::app::Uno::Float2 Scene__get_PixelSize(Scene* __this);
float Scene__get_PointDensity_1(Scene* __this);
::app::Uno::Float4x4 Scene__get_ProjectionTransform(Scene* __this);
::app::Uno::Float4x4 Scene__get_ProjectionTransformInverse(Scene* __this);
::app::Uno::Float2 Scene__get_Size(Scene* __this);
::app::Uno::Float3 Scene__get_ViewOrigin(Scene* __this);
::app::Uno::Float4x4 Scene__get_ViewProjectionTransform(Scene* __this);
::app::Uno::Float4x4 Scene__get_ViewProjectionTransformInverse(Scene* __this);
::app::Uno::Float2 Scene__get_ViewRange(Scene* __this);
::app::Uno::Float4x4 Scene__get_ViewTransform(Scene* __this);
::app::Uno::Float4x4 Scene__get_ViewTransformInverse(Scene* __this);
Scene* Scene__New_2(::uStatic* __this);
void Scene__OnDraw(Scene* __this, ::app::Fuse::DrawContext* dc);
void Scene__OnHitTest(Scene* __this, ::app::Fuse::HitTestContext* args);
::app::Uno::Geometry::Ray Scene__PointToWorldRay(Scene* __this, ::app::Uno::Float2 pointPos);
void Scene__remove_WindowClosed(Scene* __this, ::uDelegate* value);
void Scene__remove_WindowClosing(Scene* __this, ::uDelegate* value);
void Scene__remove_WindowResized(Scene* __this, ::uDelegate* value);
void Scene__set_AlwaysClear(Scene* __this, bool value);
void Scene__set_AlwaysUseOwnCamera(Scene* __this, bool value);
void Scene__set_Camera(Scene* __this, ::app::Fuse::Entities::Entity* value);
void Scene__set_ClearColor(Scene* __this, ::app::Uno::Float4 value);
::app::Uno::Geometry::Ray Scene__WindowToWorldRay(Scene* __this, ::app::Uno::Float2 windowCoord);

struct Scene : ::app::Fuse::Entities::RenderNode
{
    ::uStrong< ::app::Fuse::Entities::Entity*> _Camera;
    bool _AlwaysUseOwnCamera;
    bool _AlwaysClear;
    ::app::Uno::Float4 _ClearColor;

    void _ObjInit_2() { Scene___ObjInit_2(this); }
    void add_WindowClosed(::uDelegate* value) { Scene__add_WindowClosed(this, value); }
    void add_WindowClosing(::uDelegate* value) { Scene__add_WindowClosing(this, value); }
    void add_WindowResized(::uDelegate* value) { Scene__add_WindowResized(this, value); }
    bool AlwaysClear() { return Scene__get_AlwaysClear(this); }
    bool AlwaysUseOwnCamera() { return Scene__get_AlwaysUseOwnCamera(this); }
    ::app::Fuse::Entities::Entity* Camera() { return Scene__get_Camera(this); }
    ::app::Uno::Float4 ClearColor();
    bool HasCamera() { return Scene__get_HasCamera(this); }
    ::app::Uno::Float2 PixelSize();
    float PointDensity_1() { return Scene__get_PointDensity_1(this); }
    ::app::Uno::Float4x4 ProjectionTransform();
    ::app::Uno::Float4x4 ProjectionTransformInverse();
    ::app::Uno::Float2 Size();
    ::app::Uno::Float3 ViewOrigin();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float4x4 ViewProjectionTransformInverse();
    ::app::Uno::Float2 ViewRange();
    ::app::Uno::Float4x4 ViewTransform();
    ::app::Uno::Float4x4 ViewTransformInverse();
    ::app::Uno::Geometry::Ray PointToWorldRay(::app::Uno::Float2 pointPos);
    void remove_WindowClosed(::uDelegate* value) { Scene__remove_WindowClosed(this, value); }
    void remove_WindowClosing(::uDelegate* value) { Scene__remove_WindowClosing(this, value); }
    void remove_WindowResized(::uDelegate* value) { Scene__remove_WindowResized(this, value); }
    void AlwaysClear(bool value) { Scene__set_AlwaysClear(this, value); }
    void AlwaysUseOwnCamera(bool value) { Scene__set_AlwaysUseOwnCamera(this, value); }
    void Camera(::app::Fuse::Entities::Entity* value) { Scene__set_Camera(this, value); }
    void ClearColor(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Float4 Scene::ClearColor() { return Scene__get_ClearColor(this); }
inline ::app::Uno::Float2 Scene::PixelSize() { return Scene__get_PixelSize(this); }
inline ::app::Uno::Float4x4 Scene::ProjectionTransform() { return Scene__get_ProjectionTransform(this); }
inline ::app::Uno::Float4x4 Scene::ProjectionTransformInverse() { return Scene__get_ProjectionTransformInverse(this); }
inline ::app::Uno::Float2 Scene::Size() { return Scene__get_Size(this); }
inline ::app::Uno::Float3 Scene::ViewOrigin() { return Scene__get_ViewOrigin(this); }
inline ::app::Uno::Float4x4 Scene::ViewProjectionTransform() { return Scene__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float4x4 Scene::ViewProjectionTransformInverse() { return Scene__get_ViewProjectionTransformInverse(this); }
inline ::app::Uno::Float2 Scene::ViewRange() { return Scene__get_ViewRange(this); }
inline ::app::Uno::Float4x4 Scene::ViewTransform() { return Scene__get_ViewTransform(this); }
inline ::app::Uno::Float4x4 Scene::ViewTransformInverse() { return Scene__get_ViewTransformInverse(this); }
inline ::app::Uno::Geometry::Ray Scene::PointToWorldRay(::app::Uno::Float2 pointPos) { return Scene__PointToWorldRay(this, pointPos); }
inline void Scene::ClearColor(::app::Uno::Float4 value) { Scene__set_ClearColor(this, value); }

}}}


#endif
