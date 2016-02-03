// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// internal sealed class SwipeRegion :663
// {
uType* SwipeRegion_typeof();
void SwipeRegion__ctor__fn(SwipeRegion* __this);
void SwipeRegion__ActivateStrength_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval);
void SwipeRegion__add_ActivationChanged_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__remove_ActivationChanged_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval);
void SwipeRegion__DoRevertActive_fn(SwipeRegion* __this);
void SwipeRegion__DoSwiped_fn(SwipeRegion* __this);
void SwipeRegion__InteractProgress_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, double* startProgress);
void SwipeRegion__IsPointInside_fn(SwipeRegion* __this, ::g::Fuse::Elements::Element* prime, ::g::Uno::Float2* coord, bool* __retval);
void SwipeRegion__get_IsSelectable_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__get_IsStatic_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__New1_fn(SwipeRegion** __retval);
void SwipeRegion__OnActivationChanged_fn(SwipeRegion* __this, bool* value, uObject* origin);
void SwipeRegion__get_Progress_fn(SwipeRegion* __this, double* __retval);
void SwipeRegion__add_ProgressChanged_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__remove_ProgressChanged_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval);
void SwipeRegion__ScalarValue_fn(SwipeRegion* __this, ::g::Uno::Float2* x, float* __retval);
void SwipeRegion__SetProgress_fn(SwipeRegion* __this, double* value, bool* interacting);
void SwipeRegion__add_Swiped_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__remove_Swiped_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__VectorAngle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval);
void SwipeRegion__VectorProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void SwipeRegion__VectorRejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);

struct SwipeRegion : uObject
{
    double _progress;
    bool _wasActive;
    float ActivationThreshold;
    int Area;
    ::g::Uno::Float4 AreaVector;
    float AreaVectorDistance;
    float DeactivationThreshold;
    ::g::Uno::Float2 Direction;
    bool IsInterruptible;
    double Length;
    uStrong< ::g::Fuse::Elements::Element*> LengthElement;
    uStrong<uObject*> PointBody1D;
    int Priority;
    float Range;
    bool RevertActive;
    double TimeMultiplier;
    bool TriggerSwipe;
    uStrong<uDelegate*> ActivationChanged1;
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> Swiped1;

    void ctor_();
    float ActivateStrength(::g::Uno::Float2 diff);
    void add_ActivationChanged(uDelegate* value);
    void remove_ActivationChanged(uDelegate* value);
    void DoRevertActive();
    void DoSwiped();
    void InteractProgress(::g::Uno::Float2 diff, double startProgress);
    bool IsPointInside(::g::Fuse::Elements::Element* prime, ::g::Uno::Float2 coord);
    bool IsSelectable();
    bool IsStatic();
    void OnActivationChanged(bool value, uObject* origin);
    double Progress();
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    float ScalarValue(::g::Uno::Float2 x);
    void SetProgress(double value, bool interacting);
    void add_Swiped(uDelegate* value);
    void remove_Swiped(uDelegate* value);
    static float DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p);
    static SwipeRegion* New1();
    static float ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static float VectorAngle(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float2 VectorProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float2 VectorRejection(::g::Uno::Float2 a, ::g::Uno::Float2 b);
};
// }

}}}} // ::g::Fuse::Gestures::Internal
