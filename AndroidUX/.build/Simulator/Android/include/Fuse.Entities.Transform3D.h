// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Transform.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Transform3D;}}}
namespace g{namespace Fuse{struct FastMatrix;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Transform3D :2606
// {
::g::Fuse::Transform_type* Transform3D_typeof();
void Transform3D__ctor_1_fn(Transform3D* __this);
void Transform3D__ctor_2_fn(Transform3D* __this, ::g::Uno::Float3* pos, ::g::Uno::Float4* rot, ::g::Uno::Float3* scale1);
void Transform3D__AppendTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Transform3D__Clone_fn(Transform3D* __this, Transform3D** __retval);
void Transform3D__get_Entity_fn(Transform3D* __this, ::g::Fuse::Entities::Entity** __retval);
void Transform3D__set_Entity_fn(Transform3D* __this, ::g::Fuse::Entities::Entity* value);
void Transform3D__InvalidateLocal_fn(Transform3D* __this);
void Transform3D__get_IsFlat_fn(Transform3D* __this, bool* __retval);
void Transform3D__LookAt_fn(Transform3D* __this, ::g::Uno::Float3* worldTarget, ::g::Uno::Float3* worldUp);
void Transform3D__New1_fn(Transform3D** __retval);
void Transform3D__New2_fn(::g::Uno::Float3* pos, ::g::Uno::Float4* rot, ::g::Uno::Float3* scale1, Transform3D** __retval);
void Transform3D__OnAdded_fn(Transform3D* __this);
void Transform3D__OnRemoved_fn(Transform3D* __this);
void Transform3D__get_Position_fn(Transform3D* __this, ::g::Uno::Float3* __retval);
void Transform3D__set_Position_fn(Transform3D* __this, ::g::Uno::Float3* value);
void Transform3D__PrependTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m);
void Transform3D__get_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* __retval);
void Transform3D__set_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* value);
void Transform3D__get_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* __retval);
void Transform3D__set_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* value);
void Transform3D__get_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* __retval);
void Transform3D__set_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* value);

struct Transform3D : ::g::Fuse::Transform
{
    ::g::Uno::Float3 position;
    ::g::Uno::Float3 rotationDegrees;
    ::g::Uno::Float4 rotationQuaternion;
    ::g::Uno::Float3 scale;
    uStrong< ::g::Fuse::Entities::Entity*> _Entity;

    void ctor_1();
    void ctor_2(::g::Uno::Float3 pos, ::g::Uno::Float4 rot, ::g::Uno::Float3 scale1);
    Transform3D* Clone();
    ::g::Fuse::Entities::Entity* Entity();
    void Entity(::g::Fuse::Entities::Entity* value);
    void InvalidateLocal();
    void LookAt(::g::Uno::Float3 worldTarget, ::g::Uno::Float3 worldUp);
    ::g::Uno::Float3 Position();
    void Position(::g::Uno::Float3 value);
    ::g::Uno::Float3 RotationDegrees();
    void RotationDegrees(::g::Uno::Float3 value);
    ::g::Uno::Float4 RotationQuaternion();
    void RotationQuaternion(::g::Uno::Float4 value);
    ::g::Uno::Float3 Scaling();
    void Scaling(::g::Uno::Float3 value);
    static Transform3D* New1();
    static Transform3D* New2(::g::Uno::Float3 pos, ::g::Uno::Float4 rot, ::g::Uno::Float3 scale1);
};
// }

}}} // ::g::Fuse::Entities
