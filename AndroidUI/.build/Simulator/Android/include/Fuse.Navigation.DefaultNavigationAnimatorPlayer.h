// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct DefaultNavigationAnimatorPlayer;}}}
namespace g{namespace Fuse{namespace Navigation{struct ProgressTimer;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class DefaultNavigationAnimatorPlayer :90
// {
struct DefaultNavigationAnimatorPlayer_type : uType
{
    ::g::Fuse::Navigation::INavigationAnimatorPlayer interface0;
};

DefaultNavigationAnimatorPlayer_type* DefaultNavigationAnimatorPlayer_typeof();
void DefaultNavigationAnimatorPlayer__ctor__fn(DefaultNavigationAnimatorPlayer* __this, ::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback);
void DefaultNavigationAnimatorPlayer__EnsureAtEnd_fn(DefaultNavigationAnimatorPlayer* __this);
void DefaultNavigationAnimatorPlayer__New1_fn(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback, DefaultNavigationAnimatorPlayer** __retval);
void DefaultNavigationAnimatorPlayer__Update_fn(DefaultNavigationAnimatorPlayer* __this);

struct DefaultNavigationAnimatorPlayer : uObject
{
    uStrong<uObject*> _animators;
    uStrong<uDelegate*> _doneCallback;
    uStrong<uDelegate*> _progressSetCallback;
    uStrong< ::g::Fuse::Navigation::ProgressTimer*> _progressTimer;

    void ctor_(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback);
    void EnsureAtEnd();
    void Update();
    static DefaultNavigationAnimatorPlayer* New1(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback);
};
// }

}}} // ::g::Fuse::Navigation
