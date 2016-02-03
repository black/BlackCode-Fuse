// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IViewport.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Elements{struct Viewport;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class Viewport :4522
// {
struct Viewport_type : ::g::Fuse::Elements::Element_type
{
    ::g::Fuse::IViewport interface6;
};

Viewport_type* Viewport_typeof();
void Viewport__ctor_2_fn(Viewport* __this);
void Viewport__ArrangePaddingBox_fn(Viewport* __this, ::g::Uno::Float2* size, int* flags);
void Viewport__get_CullFace_fn(Viewport* __this, int* __retval);
void Viewport__set_CullFace_fn(Viewport* __this, int* value);
void Viewport__get_Flatten_fn(Viewport* __this, bool* __retval);
void Viewport__set_Flatten_fn(Viewport* __this, bool* value);
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval);
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value);
void Viewport__GetContentSize_fn(Viewport* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Viewport__GetSubNode_fn(Viewport* __this, int* index, ::g::Fuse::Node** __retval);
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval);
void Viewport__get_HitTestBounds_fn(Viewport* __this, ::g::Fuse::NodeBounds** __retval);
void Viewport__init_DrawCalls_fn(Viewport* __this);
void Viewport__New1_fn(Viewport** __retval);
void Viewport__OnDraw_fn(Viewport* __this, ::g::Fuse::DrawContext* dc);
void Viewport__OnHitTestChildren_fn(Viewport* __this, ::g::Fuse::HitTestContext* htc);
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval);
void Viewport__set_Perspective_fn(Viewport* __this, float* value);
void Viewport__get_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_PointDensity1_fn(Viewport* __this, float* __retval);
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void Viewport__get_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_RootNode_fn(Viewport* __this, ::g::Fuse::Node** __retval);
void Viewport__set_RootNode_fn(Viewport* __this, ::g::Fuse::Node* value);
void Viewport__get_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_SubNodeCount_fn(Viewport* __this, int* __retval);
void Viewport__UpdateFrustum_fn(Viewport* __this);
void Viewport__get_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval);
void Viewport__get_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ViewProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__get_ViewTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);

struct Viewport : ::g::Fuse::Elements::Element
{
    int _cullFace;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a781a46e;
    bool _flatten;
    uStrong<uObject*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    bool _hasCullFace;
    float _perspective;
    uStrong< ::g::Fuse::Node*> _rootNode;
    ::g::Uno::Float4x4 OnDraw_LocalTransform_a781a46e_4_8_2;
    ::g::Uno::Float4x4 OnDraw_LocalTransform_a781a46e_4_8_3;
    ::g::Uno::Float4x4 OnDraw_LocalTransform_a781a46e_4_8_4;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnDraw_VertexData_a781a46e_7_2_1;

    void ctor_2();
    int CullFace();
    void CullFace(int value);
    bool Flatten();
    void Flatten(bool value);
    uObject* Frustum();
    void Frustum(uObject* value);
    bool HasCullFace();
    void init_DrawCalls();
    float Perspective();
    void Perspective(float value);
    ::g::Uno::Float2 PixelSize();
    float PointDensity1();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float4x4 ProjectionTransformInverse();
    ::g::Fuse::Node* RootNode();
    void RootNode(::g::Fuse::Node* value);
    ::g::Uno::Float2 Size();
    void UpdateFrustum();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Float4x4 ViewTransformInverse();
    static Viewport* New1();
};
// }

}}} // ::g::Fuse::Elements
