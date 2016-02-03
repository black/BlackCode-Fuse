// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Geometry.Box.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public sealed class NodeBounds :4289
// {
uType* NodeBounds_typeof();
void NodeBounds__ctor__fn(NodeBounds* __this);
void NodeBounds__AddPoint_fn(NodeBounds* __this, ::g::Uno::Float2* pt, NodeBounds** __retval);
void NodeBounds__AddPoint1_fn(NodeBounds* __this, ::g::Uno::Float3* pt, NodeBounds** __retval);
void NodeBounds__AddRect_fn(NodeBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, NodeBounds** __retval);
void NodeBounds__get_AxisMax_fn(NodeBounds* __this, ::g::Uno::Float3* __retval);
void NodeBounds__get_AxisMin_fn(NodeBounds* __this, ::g::Uno::Float3* __retval);
void NodeBounds__Box_fn(::g::Uno::Geometry::Box* a, NodeBounds** __retval);
void NodeBounds__ContainsPoint_fn(NodeBounds* __this, ::g::Uno::Float2* pt, bool* __retval);
void NodeBounds__get_Empty_fn(NodeBounds** __retval);
void NodeBounds__get_Infinite_fn(NodeBounds** __retval);
void NodeBounds__IntersectsRay_fn(NodeBounds* __this, ::g::Uno::Geometry::Ray* ray, bool* __retval);
void NodeBounds__get_IsEmpty_fn(NodeBounds* __this, bool* __retval);
void NodeBounds__get_IsFlat_fn(NodeBounds* __this, bool* __retval);
void NodeBounds__get_IsInfinite_fn(NodeBounds* __this, bool* __retval);
void NodeBounds__Merge_fn(NodeBounds* __this, NodeBounds* nb, ::g::Fuse::FastMatrix* trans, NodeBounds** __retval);
void NodeBounds__MergeChild_fn(NodeBounds* __this, ::g::Fuse::Node* child, NodeBounds* nb, NodeBounds** __retval);
void NodeBounds__New1_fn(NodeBounds** __retval);
void NodeBounds__Point_fn(::g::Uno::Float3* pt, NodeBounds** __retval);
void NodeBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, NodeBounds** __retval);
void NodeBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, NodeBounds** __retval);

struct NodeBounds : uObject
{
    ::g::Uno::Geometry::Box _box;
    static uSStrong<NodeBounds*> _empty_;
    static uSStrong<NodeBounds*>& _empty() { return NodeBounds_typeof()->Init(), _empty_; }
    static uSStrong<NodeBounds*> _infinite_;
    static uSStrong<NodeBounds*>& _infinite() { return NodeBounds_typeof()->Init(), _infinite_; }
    bool _isEmpty;
    bool _isInfinite;

    void ctor_();
    NodeBounds* AddPoint(::g::Uno::Float2 pt);
    NodeBounds* AddPoint1(::g::Uno::Float3 pt);
    NodeBounds* AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx);
    ::g::Uno::Float3 AxisMax();
    ::g::Uno::Float3 AxisMin();
    bool ContainsPoint(::g::Uno::Float2 pt);
    bool IntersectsRay(::g::Uno::Geometry::Ray ray);
    bool IsEmpty();
    bool IsFlat();
    bool IsInfinite();
    NodeBounds* Merge(NodeBounds* nb, ::g::Fuse::FastMatrix* trans);
    NodeBounds* MergeChild(::g::Fuse::Node* child, NodeBounds* nb);
    static NodeBounds* Box(::g::Uno::Geometry::Box a);
    static NodeBounds* New1();
    static NodeBounds* Point(::g::Uno::Float3 pt);
    static NodeBounds* Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static NodeBounds* Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static NodeBounds* Empty();
    static NodeBounds* Infinite();
};
// }

}} // ::g::Fuse
