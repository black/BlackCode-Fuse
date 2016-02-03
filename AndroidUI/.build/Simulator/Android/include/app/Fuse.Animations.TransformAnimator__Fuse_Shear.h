// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_SHEAR_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_SHEAR_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Shear; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimator__Fuse_Shear;

struct TransformAnimator__Fuse_Shear__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
    void(*__fp_Update)(TransformAnimator__Fuse_Shear*, ::app::Fuse::Node*, ::app::Fuse::Shear*, ::app::Uno::Float4);
};

TransformAnimator__Fuse_Shear__uType* TransformAnimator__Fuse_Shear__typeof();

void TransformAnimator__Fuse_Shear___ObjInit_2(TransformAnimator__Fuse_Shear* __this);
::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Shear__CreateState(TransformAnimator__Fuse_Shear* __this, ::app::Fuse::Animations::CreateStateParams* p);
int TransformAnimator__Fuse_Shear__get_Priority(TransformAnimator__Fuse_Shear* __this);
::app::Fuse::Node* TransformAnimator__Fuse_Shear__get_Target(TransformAnimator__Fuse_Shear* __this);
::app::Uno::Float3 TransformAnimator__Fuse_Shear__get_Vector(TransformAnimator__Fuse_Shear* __this);
float TransformAnimator__Fuse_Shear__get_X(TransformAnimator__Fuse_Shear* __this);
float TransformAnimator__Fuse_Shear__get_Y(TransformAnimator__Fuse_Shear* __this);
float TransformAnimator__Fuse_Shear__get_Z(TransformAnimator__Fuse_Shear* __this);
void TransformAnimator__Fuse_Shear__set_Priority(TransformAnimator__Fuse_Shear* __this, int value);
void TransformAnimator__Fuse_Shear__set_Target(TransformAnimator__Fuse_Shear* __this, ::app::Fuse::Node* value);
void TransformAnimator__Fuse_Shear__set_Vector(TransformAnimator__Fuse_Shear* __this, ::app::Uno::Float3 value);
void TransformAnimator__Fuse_Shear__set_X(TransformAnimator__Fuse_Shear* __this, float value);
void TransformAnimator__Fuse_Shear__set_Y(TransformAnimator__Fuse_Shear* __this, float value);
void TransformAnimator__Fuse_Shear__set_Z(TransformAnimator__Fuse_Shear* __this, float value);

struct TransformAnimator__Fuse_Shear : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Node*> _Target;
    int _Priority;

    void _ObjInit_2() { TransformAnimator__Fuse_Shear___ObjInit_2(this); }
    int Priority() { return TransformAnimator__Fuse_Shear__get_Priority(this); }
    ::app::Fuse::Node* Target() { return TransformAnimator__Fuse_Shear__get_Target(this); }
    ::app::Uno::Float3 Vector();
    float X() { return TransformAnimator__Fuse_Shear__get_X(this); }
    float Y() { return TransformAnimator__Fuse_Shear__get_Y(this); }
    float Z() { return TransformAnimator__Fuse_Shear__get_Z(this); }
    void Priority(int value) { TransformAnimator__Fuse_Shear__set_Priority(this, value); }
    void Target(::app::Fuse::Node* value) { TransformAnimator__Fuse_Shear__set_Target(this, value); }
    void Vector(::app::Uno::Float3 value);
    void X(float value) { TransformAnimator__Fuse_Shear__set_X(this, value); }
    void Y(float value) { TransformAnimator__Fuse_Shear__set_Y(this, value); }
    void Z(float value) { TransformAnimator__Fuse_Shear__set_Z(this, value); }
    void Update(::app::Fuse::Node* elm, ::app::Fuse::Shear* transform, ::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float3 TransformAnimator__Fuse_Shear::Vector() { return TransformAnimator__Fuse_Shear__get_Vector(this); }
inline void TransformAnimator__Fuse_Shear::Vector(::app::Uno::Float3 value) { TransformAnimator__Fuse_Shear__set_Vector(this, value); }
inline void TransformAnimator__Fuse_Shear::Update(::app::Fuse::Node* elm, ::app::Fuse::Shear* transform, ::app::Uno::Float4 value) { (((TransformAnimator__Fuse_Shear__uType*)this->__obj_type)->__fp_Update)(this, elm, transform, value); }

}}}


#endif
