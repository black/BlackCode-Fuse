// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_VIEWPORT_H__
#define __APP_FUSE_ELEMENTS_VIEWPORT_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FrustumViewport; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Elements {

struct Viewport;

struct Viewport__uType : ::app::Fuse::Elements::Element__uType
{
    ::app::Fuse::IViewport __interface_6;
};

Viewport__uType* Viewport__typeof();

void Viewport___ObjInit_2(Viewport* __this);
void Viewport__ArrangePaddingBox(Viewport* __this, ::app::Uno::Float2 size);
void Viewport__free_DrawCalls(Viewport* __this);
int Viewport__get_CullFace(Viewport* __this);
bool Viewport__get_Flatten(Viewport* __this);
::uObject* Viewport__get_Frustum(Viewport* __this);
bool Viewport__get_HasCullFace(Viewport* __this);
::app::Fuse::NodeBounds* Viewport__get_HitTestBounds(Viewport* __this);
float Viewport__get_Perspective(Viewport* __this);
::app::Uno::Float2 Viewport__get_PixelSize(Viewport* __this);
float Viewport__get_PointDensity_1(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ProjectionTransform(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ProjectionTransformInverse(Viewport* __this);
::app::Fuse::Node* Viewport__get_RootNode(Viewport* __this);
::app::Uno::Float2 Viewport__get_Size(Viewport* __this);
int Viewport__get_SubNodeCount(Viewport* __this);
::app::Uno::Float3 Viewport__get_ViewOrigin(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ViewProjectionTransform(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ViewProjectionTransformInverse(Viewport* __this);
::app::Uno::Float2 Viewport__get_ViewRange(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ViewTransform(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ViewTransformInverse(Viewport* __this);
::app::Uno::Float2 Viewport__GetContentSize(Viewport* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Fuse::Node* Viewport__GetSubNode(Viewport* __this, int index);
void Viewport__init_DrawCalls(Viewport* __this);
Viewport* Viewport__New_1(::uStatic* __this);
void Viewport__OnDraw(Viewport* __this, ::app::Fuse::DrawContext* dc);
void Viewport__OnHitTestChildren(Viewport* __this, ::app::Fuse::HitTestContext* htc);
::app::Uno::Geometry::Ray Viewport__PointToWorldRay(Viewport* __this, ::app::Uno::Float2 pointPos);
void Viewport__set_CullFace(Viewport* __this, int value);
void Viewport__set_Flatten(Viewport* __this, bool value);
void Viewport__set_Frustum(Viewport* __this, ::uObject* value);
void Viewport__set_Perspective(Viewport* __this, float value);
void Viewport__set_RootNode(Viewport* __this, ::app::Fuse::Node* value);
void Viewport__UpdateFrustum(Viewport* __this);

struct Viewport : ::app::Fuse::Elements::Element
{
    int _cullFace;
    bool _hasCullFace;
    ::uStrong< ::app::Fuse::FrustumViewport*> _frustumViewport;
    ::uStrong< ::app::Fuse::Node*> _rootNode;
    ::uStrong< ::uObject*> _frustum;
    float _perspective;
    bool _flatten;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnDraw_VertexData_a781a46e_7_2_1;
    ::app::Uno::Float4x4 OnDraw_LocalTransform_a781a46e_4_8_2;
    ::app::Uno::Float4x4 OnDraw_LocalTransform_a781a46e_4_8_3;
    ::app::Uno::Float4x4 OnDraw_LocalTransform_a781a46e_4_8_4;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a781a46e;

    void _ObjInit_2() { Viewport___ObjInit_2(this); }
    void free_DrawCalls() { Viewport__free_DrawCalls(this); }
    int CullFace() { return Viewport__get_CullFace(this); }
    bool Flatten() { return Viewport__get_Flatten(this); }
    ::uObject* Frustum() { return Viewport__get_Frustum(this); }
    bool HasCullFace() { return Viewport__get_HasCullFace(this); }
    float Perspective() { return Viewport__get_Perspective(this); }
    ::app::Uno::Float2 PixelSize();
    float PointDensity_1() { return Viewport__get_PointDensity_1(this); }
    ::app::Uno::Float4x4 ProjectionTransform();
    ::app::Uno::Float4x4 ProjectionTransformInverse();
    ::app::Fuse::Node* RootNode() { return Viewport__get_RootNode(this); }
    ::app::Uno::Float2 Size();
    ::app::Uno::Float3 ViewOrigin();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float4x4 ViewProjectionTransformInverse();
    ::app::Uno::Float2 ViewRange();
    ::app::Uno::Float4x4 ViewTransform();
    ::app::Uno::Float4x4 ViewTransformInverse();
    void init_DrawCalls() { Viewport__init_DrawCalls(this); }
    ::app::Uno::Geometry::Ray PointToWorldRay(::app::Uno::Float2 pointPos);
    void CullFace(int value) { Viewport__set_CullFace(this, value); }
    void Flatten(bool value) { Viewport__set_Flatten(this, value); }
    void Frustum(::uObject* value) { Viewport__set_Frustum(this, value); }
    void Perspective(float value) { Viewport__set_Perspective(this, value); }
    void RootNode(::app::Fuse::Node* value) { Viewport__set_RootNode(this, value); }
    void UpdateFrustum() { Viewport__UpdateFrustum(this); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float2 Viewport::PixelSize() { return Viewport__get_PixelSize(this); }
inline ::app::Uno::Float4x4 Viewport::ProjectionTransform() { return Viewport__get_ProjectionTransform(this); }
inline ::app::Uno::Float4x4 Viewport::ProjectionTransformInverse() { return Viewport__get_ProjectionTransformInverse(this); }
inline ::app::Uno::Float2 Viewport::Size() { return Viewport__get_Size(this); }
inline ::app::Uno::Float3 Viewport::ViewOrigin() { return Viewport__get_ViewOrigin(this); }
inline ::app::Uno::Float4x4 Viewport::ViewProjectionTransform() { return Viewport__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float4x4 Viewport::ViewProjectionTransformInverse() { return Viewport__get_ViewProjectionTransformInverse(this); }
inline ::app::Uno::Float2 Viewport::ViewRange() { return Viewport__get_ViewRange(this); }
inline ::app::Uno::Float4x4 Viewport::ViewTransform() { return Viewport__get_ViewTransform(this); }
inline ::app::Uno::Float4x4 Viewport::ViewTransformInverse() { return Viewport__get_ViewTransformInverse(this); }
inline ::app::Uno::Geometry::Ray Viewport::PointToWorldRay(::app::Uno::Float2 pointPos) { return Viewport__PointToWorldRay(this, pointPos); }

}}}


#endif
