// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_UPDATE_SEEK_ARGS_H__
#define __APP_FUSE_NAVIGATION_UPDATE_SEEK_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct UpdateSeekArgs;

struct UpdateSeekArgs__uType : ::uClassType
{
};

UpdateSeekArgs__uType* UpdateSeekArgs__typeof();

void UpdateSeekArgs___ObjInit(UpdateSeekArgs* __this, float delta, float distance, float scale, double time);
float UpdateSeekArgs__get_Delta(UpdateSeekArgs* __this);
float UpdateSeekArgs__get_Distance(UpdateSeekArgs* __this);
float UpdateSeekArgs__get_RelativeDelta(UpdateSeekArgs* __this);
float UpdateSeekArgs__get_RelativeDistance(UpdateSeekArgs* __this);
UpdateSeekArgs* UpdateSeekArgs__New_1(::uStatic* __this, float delta, float distance, float scale, double time);
void UpdateSeekArgs__set_Delta(UpdateSeekArgs* __this, float value);
void UpdateSeekArgs__set_Distance(UpdateSeekArgs* __this, float value);

struct UpdateSeekArgs : ::uObject
{
    float _scale;
    double _time;
    float _Delta;
    float _Distance;

    void _ObjInit(float delta, float distance, float scale, double time) { UpdateSeekArgs___ObjInit(this, delta, distance, scale, time); }
    float Delta() { return UpdateSeekArgs__get_Delta(this); }
    float Distance() { return UpdateSeekArgs__get_Distance(this); }
    float RelativeDelta() { return UpdateSeekArgs__get_RelativeDelta(this); }
    float RelativeDistance() { return UpdateSeekArgs__get_RelativeDistance(this); }
    void Delta(float value) { UpdateSeekArgs__set_Delta(this, value); }
    void Distance(float value) { UpdateSeekArgs__set_Distance(this, value); }
};

}}}


#endif
