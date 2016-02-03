// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_SEEK_NAVIGATION_ANIMATOR_PLAYER_H__
#define __APP_FUSE_NAVIGATION_SEEK_NAVIGATION_ANIMATOR_PLAYER_H__

#include <app/Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct SeekNavigationAnimatorPlayer;

struct SeekNavigationAnimatorPlayer__uType : ::uClassType
{
    ::app::Fuse::Navigation::INavigationAnimatorPlayer __interface_0;
};

SeekNavigationAnimatorPlayer__uType* SeekNavigationAnimatorPlayer__typeof();

void SeekNavigationAnimatorPlayer___ObjInit(SeekNavigationAnimatorPlayer* __this, ::uObject* animators, ::uDelegate* getProgress);
void SeekNavigationAnimatorPlayer__EnsureAtEnd(SeekNavigationAnimatorPlayer* __this);
SeekNavigationAnimatorPlayer* SeekNavigationAnimatorPlayer__New_1(::uStatic* __this, ::uObject* animators, ::uDelegate* getProgress);
void SeekNavigationAnimatorPlayer__Update(SeekNavigationAnimatorPlayer* __this);

struct SeekNavigationAnimatorPlayer : ::uObject
{
    ::uStrong< ::uObject*> _animators;
    ::uStrong< ::uDelegate*> _getProgress;
    double _prevProgress;

    void _ObjInit(::uObject* animators, ::uDelegate* getProgress) { SeekNavigationAnimatorPlayer___ObjInit(this, animators, getProgress); }
    void EnsureAtEnd() { SeekNavigationAnimatorPlayer__EnsureAtEnd(this); }
    void Update() { SeekNavigationAnimatorPlayer__Update(this); }
};

}}}


#endif
