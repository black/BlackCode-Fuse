// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR_STATE__FUSE_SHEAR_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR_STATE__FUSE_SHEAR_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimator__Fuse_Shear; } } }
namespace app { namespace Fuse { struct Shear; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimatorState__Fuse_Shear;

struct TransformAnimatorState__Fuse_Shear__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

TransformAnimatorState__Fuse_Shear__uType* TransformAnimatorState__Fuse_Shear__typeof();

void TransformAnimatorState__Fuse_Shear___ObjInit_2(TransformAnimatorState__Fuse_Shear* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Shear* animator, ::app::Fuse::Animations::CreateStateParams* p);
void TransformAnimatorState__Fuse_Shear__Disable(TransformAnimatorState__Fuse_Shear* __this);
TransformAnimatorState__Fuse_Shear* TransformAnimatorState__Fuse_Shear__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Shear* animator, ::app::Fuse::Animations::CreateStateParams* p);
void TransformAnimatorState__Fuse_Shear__OnMatrixChanged(TransformAnimatorState__Fuse_Shear* __this, ::app::Fuse::Transform* ignore);
void TransformAnimatorState__Fuse_Shear__SeekValue(TransformAnimatorState__Fuse_Shear* __this, ::app::Uno::Float4 value, float strength);

struct TransformAnimatorState__Fuse_Shear : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::app::Fuse::Animations::TransformAnimator__Fuse_Shear*> Animator_1;
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Shear*> transform;
    ::uStrong< ::uDelegate*> _matAct;
    float _lastStrength;
    bool _inSeek;

    void _ObjInit_2(::app::Fuse::Animations::TransformAnimator__Fuse_Shear* animator, ::app::Fuse::Animations::CreateStateParams* p) { TransformAnimatorState__Fuse_Shear___ObjInit_2(this, animator, p); }
    void OnMatrixChanged(::app::Fuse::Transform* ignore) { TransformAnimatorState__Fuse_Shear__OnMatrixChanged(this, ignore); }
};

}}}


#endif
