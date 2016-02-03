// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_PROGRESS_TIMER_H__
#define __APP_FUSE_NAVIGATION_PROGRESS_TIMER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct ProgressSpan; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct ProgressTimer;

struct ProgressTimer__uType : ::uClassType
{
};

ProgressTimer__uType* ProgressTimer__typeof();

void ProgressTimer___ObjInit(ProgressTimer* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
double ProgressTimer__Ease(ProgressTimer* __this, double progress);
double ProgressTimer__get_EasedNormalizedProgress(ProgressTimer* __this);
double ProgressTimer__get_EasedProgress(ProgressTimer* __this);
double ProgressTimer__get_NormalizedProgress(ProgressTimer* __this);
double ProgressTimer__get_Progress(ProgressTimer* __this);
::app::Fuse::Navigation::ProgressSpan* ProgressTimer__get_ProgressSpan(ProgressTimer* __this);
double ProgressTimer__get_TimeLeft(ProgressTimer* __this);
int ProgressTimer__get_Variant(ProgressTimer* __this);
ProgressTimer* ProgressTimer__New_1(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
ProgressTimer* ProgressTimer__Start(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant);
void ProgressTimer__Update(ProgressTimer* __this);

struct ProgressTimer : ::uObject
{
    double _duration;
    ::uStrong< ::app::Fuse::Navigation::ProgressSpan*> _progressSpan;
    int _easing;
    int _variant;
    double _elapsedTime;

    void _ObjInit(double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant) { ProgressTimer___ObjInit(this, duration, progressSpan, easing, variant); }
    double Ease(double progress) { return ProgressTimer__Ease(this, progress); }
    double EasedNormalizedProgress() { return ProgressTimer__get_EasedNormalizedProgress(this); }
    double EasedProgress() { return ProgressTimer__get_EasedProgress(this); }
    double NormalizedProgress() { return ProgressTimer__get_NormalizedProgress(this); }
    double Progress() { return ProgressTimer__get_Progress(this); }
    ::app::Fuse::Navigation::ProgressSpan* ProgressSpan() { return ProgressTimer__get_ProgressSpan(this); }
    double TimeLeft() { return ProgressTimer__get_TimeLeft(this); }
    int Variant() { return ProgressTimer__get_Variant(this); }
    void Update() { ProgressTimer__Update(this); }
};

}}}


#endif
