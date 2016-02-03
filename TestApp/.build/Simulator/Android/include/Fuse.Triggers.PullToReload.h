// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.ScrollingAnimation.h>
namespace g{namespace Fuse{namespace Triggers{struct PullToReload;}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class PullToReload :112
// {
::g::Fuse::Triggers::Trigger_type* PullToReload_typeof();
void PullToReload__ctor_3_fn(PullToReload* __this);
void PullToReload__InitializeUX_fn(PullToReload* __this);
void PullToReload__get_IsLoading_fn(PullToReload* __this, bool* __retval);
void PullToReload__set_IsLoading_fn(PullToReload* __this, bool* value);
void PullToReload__get_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__New2_fn(PullToReload** __retval);
void PullToReload__OnRooted_fn(PullToReload* __this, ::g::Fuse::Node* parentNode);
void PullToReload__OnUnrooted_fn(PullToReload* __this, ::g::Fuse::Node* parentNode);
void PullToReload__get_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__get_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__ReachThreshold_fn(PullToReload* __this);
void PullToReload__ReleasePull_fn(PullToReload* __this);
void PullToReload__add_ReloadHandler_fn(PullToReload* __this, uDelegate* value);
void PullToReload__remove_ReloadHandler_fn(PullToReload* __this, uDelegate* value);
void PullToReload__Replace_fn(PullToReload* __this, ::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value, ::g::Fuse::Triggers::State** __retval);
void PullToReload__get_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__StartPull_fn(PullToReload* __this);

struct PullToReload : ::g::Fuse::Triggers::ScrollingAnimation
{
    bool _internLoading;
    bool _isLoading;
    uStrong< ::g::Fuse::Triggers::State*> _loading;
    uStrong< ::g::Fuse::Triggers::State*> _pulledPastThreshold;
    uStrong< ::g::Fuse::Triggers::State*> _pulling;
    uStrong< ::g::Fuse::Triggers::State*> _rest;
    uStrong< ::g::Fuse::Triggers::StateGroup*> StateGroup;
    bool threshold;
    uStrong<uDelegate*> ReloadHandler1;

    void ctor_3();
    void InitializeUX();
    bool IsLoading();
    void IsLoading(bool value);
    ::g::Fuse::Triggers::State* Loading();
    void Loading(::g::Fuse::Triggers::State* value);
    ::g::Fuse::Triggers::State* PulledPastThreshold();
    void PulledPastThreshold(::g::Fuse::Triggers::State* value);
    ::g::Fuse::Triggers::State* Pulling();
    void Pulling(::g::Fuse::Triggers::State* value);
    void ReachThreshold();
    void ReleasePull();
    void add_ReloadHandler(uDelegate* value);
    void remove_ReloadHandler(uDelegate* value);
    ::g::Fuse::Triggers::State* Replace(::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value);
    ::g::Fuse::Triggers::State* Rest();
    void Rest(::g::Fuse::Triggers::State* value);
    void StartPull();
    static PullToReload* New2();
};
// }

}}} // ::g::Fuse::Triggers
