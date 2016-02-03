// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class Timeline :552
// {
struct Timeline_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IPlayback interface0;
    ::g::Fuse::Triggers::IProgress interface1;
};

Timeline_type* Timeline_typeof();
void Timeline__ctor_2_fn(Timeline* __this);
void Timeline__get_CanPause_fn(Timeline* __this, bool* __retval);
void Timeline__get_CanPlayTo_fn(Timeline* __this, bool* __retval);
void Timeline__get_CanResume_fn(Timeline* __this, bool* __retval);
void Timeline__get_CanStop_fn(Timeline* __this, bool* __retval);
void Timeline__Fuse_Triggers_IProgress_get_Progress_fn(Timeline* __this, double* __retval);
void Timeline__New1_fn(Timeline** __retval);
void Timeline__OnProgressChanged_fn(Timeline* __this);
void Timeline__OnRooted_fn(Timeline* __this, ::g::Fuse::Node* parentNode);
void Timeline__Pause_fn(Timeline* __this);
void Timeline__PlayTo1_fn(Timeline* __this, double* progress);
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__Resume_fn(Timeline* __this);
void Timeline__Stop1_fn(Timeline* __this);
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval);
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value);

struct Timeline : ::g::Fuse::Triggers::Trigger
{
    int _state;
    double _targetProgress;
    uStrong<uDelegate*> ProgressChanged1;

    void ctor_2();
    bool CanPause();
    bool CanPlayTo();
    bool CanResume();
    bool CanStop();
    void Pause();
    void PlayTo1(double progress);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Resume();
    void Stop1();
    double TargetProgress();
    void TargetProgress(double value);
    static Timeline* New1();
};
// }

}}} // ::g::Fuse::Triggers
