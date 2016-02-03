// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_TIMELINE_H__
#define __APP_FUSE_TRIGGERS_TIMELINE_H__

#include <app/Fuse.Triggers.IPlayback.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct Timeline;

struct Timeline__uType : ::app::Fuse::Triggers::Trigger__uType
{
    ::app::Fuse::Triggers::IPlayback __interface_0;
    ::app::Fuse::Triggers::IProgress __interface_1;
};

Timeline__uType* Timeline__typeof();

void Timeline___ObjInit_2(Timeline* __this);
void Timeline__add_ProgressChanged(Timeline* __this, ::uDelegate* value);
double Timeline__Fuse_Triggers_IProgress_get_Progress(Timeline* __this);
bool Timeline__get_CanPause(Timeline* __this);
bool Timeline__get_CanPlayTo(Timeline* __this);
bool Timeline__get_CanResume(Timeline* __this);
bool Timeline__get_CanStop(Timeline* __this);
double Timeline__get_TargetProgress(Timeline* __this);
Timeline* Timeline__New_1(::uStatic* __this);
void Timeline__OnProgressChanged(Timeline* __this);
void Timeline__OnRooted(Timeline* __this, ::app::Fuse::Node* elm);
void Timeline__Pause(Timeline* __this);
void Timeline__PlayTo_1(Timeline* __this, double progress);
void Timeline__remove_ProgressChanged(Timeline* __this, ::uDelegate* value);
void Timeline__Resume(Timeline* __this);
void Timeline__set_TargetProgress(Timeline* __this, double value);
void Timeline__Stop_1(Timeline* __this);

struct Timeline : ::app::Fuse::Triggers::Trigger
{
    int _state;
    double _targetProgress;
    ::uStrong< ::uDelegate*> ProgressChanged;

    void _ObjInit_2() { Timeline___ObjInit_2(this); }
    void add_ProgressChanged(::uDelegate* value) { Timeline__add_ProgressChanged(this, value); }
    bool CanPause() { return Timeline__get_CanPause(this); }
    bool CanPlayTo() { return Timeline__get_CanPlayTo(this); }
    bool CanResume() { return Timeline__get_CanResume(this); }
    bool CanStop() { return Timeline__get_CanStop(this); }
    double TargetProgress() { return Timeline__get_TargetProgress(this); }
    void Pause() { Timeline__Pause(this); }
    void PlayTo_1(double progress) { Timeline__PlayTo_1(this, progress); }
    void remove_ProgressChanged(::uDelegate* value) { Timeline__remove_ProgressChanged(this, value); }
    void Resume() { Timeline__Resume(this); }
    void TargetProgress(double value) { Timeline__set_TargetProgress(this, value); }
    void Stop_1() { Timeline__Stop_1(this); }
};

}}}


#endif
