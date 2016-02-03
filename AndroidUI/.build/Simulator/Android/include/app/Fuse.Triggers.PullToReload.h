// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_PULL_TO_RELOAD_H__
#define __APP_FUSE_TRIGGERS_PULL_TO_RELOAD_H__

#include <app/Fuse.Triggers.ScrollingAnimation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { namespace Triggers { struct StateGroup; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct PullToReload;

struct PullToReload__uType : ::app::Fuse::Triggers::ScrollingAnimation__uType
{
};

PullToReload__uType* PullToReload__typeof();

void PullToReload___ObjInit_3(PullToReload* __this);
void PullToReload__add_ReloadHandler(PullToReload* __this, ::uDelegate* value);
bool PullToReload__get_IsLoading(PullToReload* __this);
::app::Fuse::Triggers::State* PullToReload__get_Loading(PullToReload* __this);
::app::Fuse::Triggers::State* PullToReload__get_PulledPastThreshold(PullToReload* __this);
::app::Fuse::Triggers::State* PullToReload__get_Pulling(PullToReload* __this);
::app::Fuse::Triggers::State* PullToReload__get_Rest(PullToReload* __this);
void PullToReload__InitializeUX(PullToReload* __this);
PullToReload* PullToReload__New_2(::uStatic* __this);
void PullToReload__OnRooted(PullToReload* __this, ::app::Fuse::Node* elm);
void PullToReload__OnUnrooted(PullToReload* __this, ::app::Fuse::Node* elm);
void PullToReload__ReachThreshold(PullToReload* __this);
void PullToReload__ReleasePull(PullToReload* __this);
void PullToReload__remove_ReloadHandler(PullToReload* __this, ::uDelegate* value);
::app::Fuse::Triggers::State* PullToReload__Replace(PullToReload* __this, ::app::Fuse::Triggers::State* state, ::app::Fuse::Triggers::State* value);
void PullToReload__set_IsLoading(PullToReload* __this, bool value);
void PullToReload__set_Loading(PullToReload* __this, ::app::Fuse::Triggers::State* value);
void PullToReload__set_PulledPastThreshold(PullToReload* __this, ::app::Fuse::Triggers::State* value);
void PullToReload__set_Pulling(PullToReload* __this, ::app::Fuse::Triggers::State* value);
void PullToReload__set_Rest(PullToReload* __this, ::app::Fuse::Triggers::State* value);
void PullToReload__StartPull(PullToReload* __this);

struct PullToReload : ::app::Fuse::Triggers::ScrollingAnimation
{
    ::uStrong< ::app::Fuse::Triggers::StateGroup*> StateGroup;
    ::uStrong< ::app::Fuse::Triggers::State*> _rest;
    ::uStrong< ::app::Fuse::Triggers::State*> _pulling;
    ::uStrong< ::app::Fuse::Triggers::State*> _pulledPastThreshold;
    ::uStrong< ::app::Fuse::Triggers::State*> _loading;
    bool _isLoading;
    bool _internLoading;
    bool threshold;
    ::uStrong< ::uDelegate*> ReloadHandler;

    void _ObjInit_3() { PullToReload___ObjInit_3(this); }
    void add_ReloadHandler(::uDelegate* value) { PullToReload__add_ReloadHandler(this, value); }
    bool IsLoading() { return PullToReload__get_IsLoading(this); }
    ::app::Fuse::Triggers::State* Loading() { return PullToReload__get_Loading(this); }
    ::app::Fuse::Triggers::State* PulledPastThreshold() { return PullToReload__get_PulledPastThreshold(this); }
    ::app::Fuse::Triggers::State* Pulling() { return PullToReload__get_Pulling(this); }
    ::app::Fuse::Triggers::State* Rest() { return PullToReload__get_Rest(this); }
    void InitializeUX() { PullToReload__InitializeUX(this); }
    void ReachThreshold() { PullToReload__ReachThreshold(this); }
    void ReleasePull() { PullToReload__ReleasePull(this); }
    void remove_ReloadHandler(::uDelegate* value) { PullToReload__remove_ReloadHandler(this, value); }
    ::app::Fuse::Triggers::State* Replace(::app::Fuse::Triggers::State* state, ::app::Fuse::Triggers::State* value) { return PullToReload__Replace(this, state, value); }
    void IsLoading(bool value) { PullToReload__set_IsLoading(this, value); }
    void Loading(::app::Fuse::Triggers::State* value) { PullToReload__set_Loading(this, value); }
    void PulledPastThreshold(::app::Fuse::Triggers::State* value) { PullToReload__set_PulledPastThreshold(this, value); }
    void Pulling(::app::Fuse::Triggers::State* value) { PullToReload__set_Pulling(this, value); }
    void Rest(::app::Fuse::Triggers::State* value) { PullToReload__set_Rest(this, value); }
    void StartPull() { PullToReload__StartPull(this); }
};

}}}


#endif
