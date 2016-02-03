// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR_STATE__FUSE_SCALING_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR_STATE__FUSE_SCALING_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimator__Fuse_Scaling; } } }
namespace app { namespace Fuse { struct Scaling; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimatorState__Fuse_Scaling;

struct TransformAnimatorState__Fuse_Scaling__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

TransformAnimatorState__Fuse_Scaling__uType* TransformAnimatorState__Fuse_Scaling__typeof();

void TransformAnimatorState__Fuse_Scaling___ObjInit_2(TransformAnimatorState__Fuse_Scaling* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling* animator, ::app::Fuse::Animations::CreateStateParams* p);
void TransformAnimatorState__Fuse_Scaling__Disable(TransformAnimatorState__Fuse_Scaling* __this);
TransformAnimatorState__Fuse_Scaling* TransformAnimatorState__Fuse_Scaling__New_1(::uStatic* __this, ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling* animator, ::app::Fuse::Animations::CreateStateParams* p);
void TransformAnimatorState__Fuse_Scaling__OnMatrixChanged(TransformAnimatorState__Fuse_Scaling* __this, ::app::Fuse::Transform* ignore);
void TransformAnimatorState__Fuse_Scaling__SeekValue(TransformAnimatorState__Fuse_Scaling* __this, ::app::Uno::Float4 value, float strength);

struct TransformAnimatorState__Fuse_Scaling : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*> Animator_1;
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Scaling*> transform;
    ::uStrong< ::uDelegate*> _matAct;
    float _lastStrength;
    bool _inSeek;

    void _ObjInit_2(::app::Fuse::Animations::TransformAnimator__Fuse_Scaling* animator, ::app::Fuse::Animations::CreateStateParams* p) { TransformAnimatorState__Fuse_Scaling___ObjInit_2(this, animator, p); }
    void OnMatrixChanged(::app::Fuse::Transform* ignore) { TransformAnimatorState__Fuse_Scaling__OnMatrixChanged(this, ignore); }
};

}}}


#endif
