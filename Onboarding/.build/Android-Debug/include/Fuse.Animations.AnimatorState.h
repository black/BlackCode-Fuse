// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class AnimatorState :52
// {
struct AnimatorState_type : uType
{
    void(*fp_Disable)(::g::Fuse::Animations::AnimatorState*);
    void(*fp_SeekProgress)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, bool*);
    void(*fp_SeekTime)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, bool*);
};

AnimatorState_type* AnimatorState_typeof();
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode);
void AnimatorState__Disable_fn(AnimatorState* __this);

struct AnimatorState : uObject
{
    uStrong< ::g::Fuse::Node*> Node;
    double TotalDuration;
    int Variant;

    void ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode);
    void Disable() { (((AnimatorState_type*)__type)->fp_Disable)(this); }
    bool SeekProgress(double progress, double interval, int dir, double strength) { bool __retval; return (((AnimatorState_type*)__type)->fp_SeekProgress)(this, &progress, &interval, &dir, &strength, &__retval), __retval; }
    bool SeekTime(double nominal, double interval, int dir, double strength) { bool __retval; return (((AnimatorState_type*)__type)->fp_SeekTime)(this, &nominal, &interval, &dir, &strength, &__retval), __retval; }
    static void Disable(AnimatorState* __this) { AnimatorState__Disable_fn(__this); }
};
// }

}}} // ::g::Fuse::Animations
