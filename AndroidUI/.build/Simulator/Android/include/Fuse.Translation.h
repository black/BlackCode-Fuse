// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Transform.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public sealed class Translation :6373
// {
::g::Fuse::Transform_type* Translation_typeof();
void Translation__ctor_1_fn(Translation* __this);
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Translation__CheckSubscription_fn(Translation* __this);
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval);
void Translation__New1_fn(Translation** __retval);
void Translation__OnAdded_fn(Translation* __this);
void Translation__OnPlaced_fn(Translation* __this, uObject* sender, uObject* args);
void Translation__OnRelativeNodeChanged_fn(Translation* __this);
void Translation__OnRemoved_fn(Translation* __this);
void Translation__OnRooted_fn(Translation* __this, uObject* sender, uObject* args);
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m);
void Translation__get_RelativeTo_fn(Translation* __this, uObject** __retval);
void Translation__set_RelativeTo_fn(Translation* __this, uObject* value);
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval);
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value);
void Translation__get_X_fn(Translation* __this, float* __retval);
void Translation__set_X_fn(Translation* __this, float* value);
void Translation__get_XY_fn(Translation* __this, ::g::Uno::Float2* __retval);
void Translation__set_XY_fn(Translation* __this, ::g::Uno::Float2* value);
void Translation__get_Y_fn(Translation* __this, float* __retval);
void Translation__set_Y_fn(Translation* __this, float* value);
void Translation__get_Z_fn(Translation* __this, float* __retval);
void Translation__set_Z_fn(Translation* __this, float* value);

struct Translation : ::g::Fuse::Transform
{
    uStrong<uObject*> _relativeTo;
    uStrong< ::g::Fuse::Node*> _rootedSubscribed;
    uStrong<uObject*> _subscribed;
    float _x;
    float _y;
    float _z;

    void ctor_1();
    void CheckSubscription();
    void OnPlaced(uObject* sender, uObject* args);
    void OnRooted(uObject* sender, uObject* args);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    ::g::Uno::Float3 Vector();
    void Vector(::g::Uno::Float3 value);
    float X();
    void X(float value);
    ::g::Uno::Float2 XY();
    void XY(::g::Uno::Float2 value);
    float Y();
    void Y(float value);
    float Z();
    void Z(float value);
    static Translation* New1();
};
// }

}} // ::g::Fuse
