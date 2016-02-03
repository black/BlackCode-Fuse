// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_PLAYER_PART_H__
#define __APP_FUSE_ANIMATIONS_PLAYER_PART_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

struct PlayerPart;

struct PlayerPart__uType : ::uClassType
{
};

PlayerPart__uType* PlayerPart__typeof();

void PlayerPart___ObjInit(PlayerPart* __this, double currentProgress);
void PlayerPart__AlterDuration(PlayerPart* __this, double t);
double PlayerPart__get_Progress(PlayerPart* __this);
void PlayerPart__MarkSource(PlayerPart* __this);
PlayerPart* PlayerPart__New_1(::uStatic* __this, double currentProgress);
void PlayerPart__PlayToEnd(PlayerPart* __this);
void PlayerPart__PlayToProgress(PlayerPart* __this, double progress);
void PlayerPart__PlayToStart(PlayerPart* __this);
void PlayerPart__SeekProgress(PlayerPart* __this, double p);
bool PlayerPart__Step(PlayerPart* __this);

struct PlayerPart : ::uObject
{
    bool IsProgress;
    double Duration;
    bool Animate;
    double Current;
    double Source;
    double Target;
    double SourceTime;

    void _ObjInit(double currentProgress) { PlayerPart___ObjInit(this, currentProgress); }
    void AlterDuration(double t) { PlayerPart__AlterDuration(this, t); }
    double Progress() { return PlayerPart__get_Progress(this); }
    void MarkSource() { PlayerPart__MarkSource(this); }
    void PlayToEnd() { PlayerPart__PlayToEnd(this); }
    void PlayToProgress(double progress) { PlayerPart__PlayToProgress(this, progress); }
    void PlayToStart() { PlayerPart__PlayToStart(this); }
    void SeekProgress(double p) { PlayerPart__SeekProgress(this, p); }
    bool Step() { return PlayerPart__Step(this); }
};

}}}


#endif
