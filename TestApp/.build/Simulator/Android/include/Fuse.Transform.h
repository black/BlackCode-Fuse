// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Transform;}}

namespace g{
namespace Fuse{

// public abstract class Transform :6032
// {
struct Transform_type : uType
{
    void(*fp_AppendTo)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*);
    void(*fp_get_IsFlat)(::g::Fuse::Transform*, bool*);
    void(*fp_OnAdded)(::g::Fuse::Transform*);
    void(*fp_OnRelativeNodeChanged)(::g::Fuse::Transform*);
    void(*fp_OnRemoved)(::g::Fuse::Transform*);
    void(*fp_PrependTo)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*);
};

Transform_type* Transform_typeof();
void Transform__ctor__fn(Transform* __this);
void Transform__Added_fn(Transform* __this, ::g::Fuse::Node* n);
void Transform__add_MatrixChanged_fn(Transform* __this, uDelegate* value);
void Transform__remove_MatrixChanged_fn(Transform* __this, uDelegate* value);
void Transform__OnAdded_fn(Transform* __this);
void Transform__OnMatrixChanged_fn(Transform* __this);
void Transform__OnRelativeNodeChanged_fn(Transform* __this);
void Transform__OnRemoved_fn(Transform* __this);
void Transform__get_RelativeNode_fn(Transform* __this, ::g::Fuse::Node** __retval);
void Transform__set_RelativeNode_fn(Transform* __this, ::g::Fuse::Node* value);
void Transform__Removed_fn(Transform* __this, ::g::Fuse::Node* n);

struct Transform : uObject
{
    uStrong< ::g::Fuse::Node*> _relativeNode;
    bool AddedByStyle;
    uStrong< ::g::Fuse::Node*> Node;
    uStrong<uDelegate*> MatrixChanged1;

    void ctor_();
    void Added(::g::Fuse::Node* n);
    void AppendTo(::g::Fuse::FastMatrix* matrix, float weight) { (((Transform_type*)__type)->fp_AppendTo)(this, matrix, &weight); }
    bool IsFlat() { bool __retval; return (((Transform_type*)__type)->fp_get_IsFlat)(this, &__retval), __retval; }
    void add_MatrixChanged(uDelegate* value);
    void remove_MatrixChanged(uDelegate* value);
    void OnAdded() { (((Transform_type*)__type)->fp_OnAdded)(this); }
    void OnMatrixChanged();
    void OnRelativeNodeChanged() { (((Transform_type*)__type)->fp_OnRelativeNodeChanged)(this); }
    void OnRemoved() { (((Transform_type*)__type)->fp_OnRemoved)(this); }
    void PrependTo(::g::Fuse::FastMatrix* matrix) { (((Transform_type*)__type)->fp_PrependTo)(this, matrix); }
    ::g::Fuse::Node* RelativeNode();
    void RelativeNode(::g::Fuse::Node* value);
    void Removed(::g::Fuse::Node* n);
    static void OnAdded(Transform* __this) { Transform__OnAdded_fn(__this); }
    static void OnRelativeNodeChanged(Transform* __this) { Transform__OnRelativeNodeChanged_fn(__this); }
    static void OnRemoved(Transform* __this) { Transform__OnRemoved_fn(__this); }
};
// }

}} // ::g::Fuse
