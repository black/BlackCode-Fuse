// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_SCALING_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_SCALING_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Scaling; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimator__Fuse_Scaling;

struct TransformAnimator__Fuse_Scaling__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
    void(*__fp_Update)(TransformAnimator__Fuse_Scaling*, ::app::Fuse::Node*, ::app::Fuse::Scaling*, ::app::Uno::Float4);
};

TransformAnimator__Fuse_Scaling__uType* TransformAnimator__Fuse_Scaling__typeof();

void TransformAnimator__Fuse_Scaling___ObjInit_2(TransformAnimator__Fuse_Scaling* __this);
::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Scaling__CreateState(TransformAnimator__Fuse_Scaling* __this, ::app::Fuse::Animations::CreateStateParams* p);
int TransformAnimator__Fuse_Scaling__get_Priority(TransformAnimator__Fuse_Scaling* __this);
::app::Fuse::Node* TransformAnimator__Fuse_Scaling__get_Target(TransformAnimator__Fuse_Scaling* __this);
::app::Uno::Float3 TransformAnimator__Fuse_Scaling__get_Vector(TransformAnimator__Fuse_Scaling* __this);
float TransformAnimator__Fuse_Scaling__get_X(TransformAnimator__Fuse_Scaling* __this);
float TransformAnimator__Fuse_Scaling__get_Y(TransformAnimator__Fuse_Scaling* __this);
float TransformAnimator__Fuse_Scaling__get_Z(TransformAnimator__Fuse_Scaling* __this);
void TransformAnimator__Fuse_Scaling__set_Priority(TransformAnimator__Fuse_Scaling* __this, int value);
void TransformAnimator__Fuse_Scaling__set_Target(TransformAnimator__Fuse_Scaling* __this, ::app::Fuse::Node* value);
void TransformAnimator__Fuse_Scaling__set_Vector(TransformAnimator__Fuse_Scaling* __this, ::app::Uno::Float3 value);
void TransformAnimator__Fuse_Scaling__set_X(TransformAnimator__Fuse_Scaling* __this, float value);
void TransformAnimator__Fuse_Scaling__set_Y(TransformAnimator__Fuse_Scaling* __this, float value);
void TransformAnimator__Fuse_Scaling__set_Z(TransformAnimator__Fuse_Scaling* __this, float value);

struct TransformAnimator__Fuse_Scaling : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Node*> _Target;
    int _Priority;

    void _ObjInit_2() { TransformAnimator__Fuse_Scaling___ObjInit_2(this); }
    int Priority() { return TransformAnimator__Fuse_Scaling__get_Priority(this); }
    ::app::Fuse::Node* Target() { return TransformAnimator__Fuse_Scaling__get_Target(this); }
    ::app::Uno::Float3 Vector();
    float X() { return TransformAnimator__Fuse_Scaling__get_X(this); }
    float Y() { return TransformAnimator__Fuse_Scaling__get_Y(this); }
    float Z() { return TransformAnimator__Fuse_Scaling__get_Z(this); }
    void Priority(int value) { TransformAnimator__Fuse_Scaling__set_Priority(this, value); }
    void Target(::app::Fuse::Node* value) { TransformAnimator__Fuse_Scaling__set_Target(this, value); }
    void Vector(::app::Uno::Float3 value);
    void X(float value) { TransformAnimator__Fuse_Scaling__set_X(this, value); }
    void Y(float value) { TransformAnimator__Fuse_Scaling__set_Y(this, value); }
    void Z(float value) { TransformAnimator__Fuse_Scaling__set_Z(this, value); }
    void Update(::app::Fuse::Node* elm, ::app::Fuse::Scaling* transform, ::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float3 TransformAnimator__Fuse_Scaling::Vector() { return TransformAnimator__Fuse_Scaling__get_Vector(this); }
inline void TransformAnimator__Fuse_Scaling::Vector(::app::Uno::Float3 value) { TransformAnimator__Fuse_Scaling__set_Vector(this, value); }
inline void TransformAnimator__Fuse_Scaling::Update(::app::Fuse::Node* elm, ::app::Fuse::Scaling* transform, ::app::Uno::Float4 value) { (((TransformAnimator__Fuse_Scaling__uType*)this->__obj_type)->__fp_Update)(this, elm, transform, value); }

}}}


#endif
