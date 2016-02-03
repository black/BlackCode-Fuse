// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_H__
#define __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_H__

#include <app/Fuse.Animations.Animator.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

struct OpenAnimator;

struct OpenAnimator__uType : ::app::Fuse::Animations::Animator__uType
{
};

OpenAnimator__uType* OpenAnimator__typeof();

void OpenAnimator___ObjInit_1(OpenAnimator* __this);
int OpenAnimator__get_AnimatorVariant(OpenAnimator* __this);
double OpenAnimator__get_Duration(OpenAnimator* __this);
bool OpenAnimator__get_HasDuration(OpenAnimator* __this);
double OpenAnimator__GetDelay(OpenAnimator* __this, int dir, double totalDuration);
double OpenAnimator__GetDurationWithDelay(OpenAnimator* __this, int dir);
void OpenAnimator__ResetDuration(OpenAnimator* __this);
void OpenAnimator__set_Duration(OpenAnimator* __this, double value);

struct OpenAnimator : ::app::Fuse::Animations::Animator
{
    double _duration;
    bool _hasDuration;

    void _ObjInit_1() { OpenAnimator___ObjInit_1(this); }
    double Duration() { return OpenAnimator__get_Duration(this); }
    bool HasDuration() { return OpenAnimator__get_HasDuration(this); }
    double GetDelay(int dir, double totalDuration) { return OpenAnimator__GetDelay(this, dir, totalDuration); }
    void ResetDuration() { OpenAnimator__ResetDuration(this); }
    void Duration(double value) { OpenAnimator__set_Duration(this, value); }
};

}}}


#endif
