// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.RenderNode.h>
#include <Fuse.IViewport.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Scene;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Platform{struct ClosingEventArgs;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Scene :2126
// {
struct Scene_type : ::g::Fuse::Entities::RenderNode_type
{
    ::g::Fuse::IViewport interface1;
};

Scene_type* Scene_typeof();
void Scene__ctor_2_fn(Scene* __this);
void Scene__get_AlwaysClear_fn(Scene* __this, bool* __retval);
void Scene__set_AlwaysClear_fn(Scene* __this, bool* value);
void Scene__get_AlwaysUseOwnCamera_fn(Scene* __this, bool* __retval);
void Scene__set_AlwaysUseOwnCamera_fn(Scene* __this, bool* value);
void Scene__get_Camera_fn(Scene* __this, ::g::Fuse::Entities::Entity** __retval);
void Scene__set_Camera_fn(Scene* __this, ::g::Fuse::Entities::Entity* value);
void Scene__get_ClearColor_fn(Scene* __this, ::g::Uno::Float4* __retval);
void Scene__set_ClearColor_fn(Scene* __this, ::g::Uno::Float4* value);
void Scene__get_HasCamera_fn(Scene* __this, bool* __retval);
void Scene__New2_fn(Scene** __retval);
void Scene__OnDraw_fn(Scene* __this, ::g::Fuse::DrawContext* dc);
void Scene__OnHitTest_fn(Scene* __this, ::g::Fuse::HitTestContext* args);
void Scene__get_PixelSize_fn(Scene* __this, ::g::Uno::Float2* __retval);
void Scene__get_PointDensity1_fn(Scene* __this, float* __retval);
void Scene__PointToWorldRay_fn(Scene* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void Scene__get_ProjectionTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ProjectionTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_Size_fn(Scene* __this, ::g::Uno::Float2* __retval);
void Scene__get_ViewOrigin_fn(Scene* __this, ::g::Uno::Float3* __retval);
void Scene__get_ViewProjectionTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ViewProjectionTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ViewRange_fn(Scene* __this, ::g::Uno::Float2* __retval);
void Scene__get_ViewTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ViewTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__add_WindowClosed_fn(Scene* __this, uDelegate* value);
void Scene__remove_WindowClosed_fn(Scene* __this, uDelegate* value);
void Scene__add_WindowClosing_fn(Scene* __this, uDelegate* value);
void Scene__remove_WindowClosing_fn(Scene* __this, uDelegate* value);
void Scene__add_WindowResized_fn(Scene* __this, uDelegate* value);
void Scene__remove_WindowResized_fn(Scene* __this, uDelegate* value);
void Scene__WindowToWorldRay_fn(Scene* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Geometry::Ray* __retval);

struct Scene : ::g::Fuse::Entities::RenderNode
{
    bool _AlwaysClear;
    bool _AlwaysUseOwnCamera;
    uStrong< ::g::Fuse::Entities::Entity*> _Camera;
    ::g::Uno::Float4 _ClearColor;

    void ctor_2();
    bool AlwaysClear();
    void AlwaysClear(bool value);
    bool AlwaysUseOwnCamera();
    void AlwaysUseOwnCamera(bool value);
    ::g::Fuse::Entities::Entity* Camera();
    void Camera(::g::Fuse::Entities::Entity* value);
    ::g::Uno::Float4 ClearColor();
    void ClearColor(::g::Uno::Float4 value);
    bool HasCamera();
    ::g::Uno::Float2 PixelSize();
    float PointDensity1();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float4x4 ProjectionTransformInverse();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Float4x4 ViewTransformInverse();
    void add_WindowClosed(uDelegate* value);
    void remove_WindowClosed(uDelegate* value);
    void add_WindowClosing(uDelegate* value);
    void remove_WindowClosing(uDelegate* value);
    void add_WindowResized(uDelegate* value);
    void remove_WindowResized(uDelegate* value);
    static Scene* New2();
};
// }

}}} // ::g::Fuse::Entities
