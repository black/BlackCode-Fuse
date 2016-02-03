// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRACK_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_TRACK_ANIMATOR_STATE_H__

#include <app/Fuse.Animations.AnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct TrackAnimator; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TrackAnimatorState;

struct TrackAnimatorState__uType : ::app::Fuse::Animations::AnimatorState__uType
{
    void(*__fp_SeekObjectValue)(TrackAnimatorState*, ::uObject*, float);
    void(*__fp_SeekValue)(TrackAnimatorState*, ::app::Uno::Float4, float);
};

TrackAnimatorState__uType* TrackAnimatorState__typeof();

void TrackAnimatorState___ObjInit_1(TrackAnimatorState* __this, ::app::Fuse::Animations::TrackAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode);
double TrackAnimatorState__get_Duration(TrackAnimatorState* __this);
int TrackAnimatorState__get_Easing(TrackAnimatorState* __this);
bool TrackAnimatorState__get_IsBackward(TrackAnimatorState* __this);
void TrackAnimatorState__SeekObjectValue(TrackAnimatorState* __this, ::uObject* value, float strength);
bool TrackAnimatorState__SeekProgress(TrackAnimatorState* __this, double progress, double interval, int dir, double strength);
bool TrackAnimatorState__SeekTime(TrackAnimatorState* __this, double elapsed, double interval, int dir, double strength);
void TrackAnimatorState__SeekValue(TrackAnimatorState* __this, ::app::Uno::Float4 value, float strength);

struct TrackAnimatorState : ::app::Fuse::Animations::AnimatorState
{
    ::uStrong< ::app::Fuse::Animations::TrackAnimator*> Animator;
    ::uStrong< ::uObject*> _continuousProvider;
    ::uStrong< ::uObject*> _discreteProvider;

    void _ObjInit_1(::app::Fuse::Animations::TrackAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode) { TrackAnimatorState___ObjInit_1(this, animator, p, useNode); }
    double Duration() { return TrackAnimatorState__get_Duration(this); }
    int Easing() { return TrackAnimatorState__get_Easing(this); }
    bool IsBackward() { return TrackAnimatorState__get_IsBackward(this); }
    void SeekObjectValue(::uObject* value, float strength) { (((TrackAnimatorState__uType*)this->__obj_type)->__fp_SeekObjectValue)(this, value, strength); }
    void SeekValue(::app::Uno::Float4 value, float strength);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline void TrackAnimatorState::SeekValue(::app::Uno::Float4 value, float strength) { (((TrackAnimatorState__uType*)this->__obj_type)->__fp_SeekValue)(this, value, strength); }

}}}


#endif
