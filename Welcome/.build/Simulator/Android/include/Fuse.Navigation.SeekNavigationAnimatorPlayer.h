// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct SeekNavigationAnimatorPlayer;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class SeekNavigationAnimatorPlayer :140
// {
struct SeekNavigationAnimatorPlayer_type : uType
{
    ::g::Fuse::Navigation::INavigationAnimatorPlayer interface0;
};

SeekNavigationAnimatorPlayer_type* SeekNavigationAnimatorPlayer_typeof();
void SeekNavigationAnimatorPlayer__ctor__fn(SeekNavigationAnimatorPlayer* __this, uObject* animators, uDelegate* getProgress);
void SeekNavigationAnimatorPlayer__EnsureAtEnd_fn(SeekNavigationAnimatorPlayer* __this);
void SeekNavigationAnimatorPlayer__New1_fn(uObject* animators, uDelegate* getProgress, SeekNavigationAnimatorPlayer** __retval);
void SeekNavigationAnimatorPlayer__Update_fn(SeekNavigationAnimatorPlayer* __this);

struct SeekNavigationAnimatorPlayer : uObject
{
    uStrong<uObject*> _animators;
    uStrong<uDelegate*> _getProgress;
    double _prevProgress;

    void ctor_(uObject* animators, uDelegate* getProgress);
    void EnsureAtEnd();
    void Update();
    static SeekNavigationAnimatorPlayer* New1(uObject* animators, uDelegate* getProgress);
};
// }

}}} // ::g::Fuse::Navigation
