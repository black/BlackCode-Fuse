// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface KeyframeTrack :2771
// {
uInterfaceType* KeyframeTrack_typeof();

struct KeyframeTrack
{
    void(*fp_get_Interpolation)(uObject*, int*);
    void(*fp_set_Interpolation)(uObject*, int*);
    void(*fp_get_Keyframes)(uObject*, uObject**);
    static int Interpolation(const uInterface& __this) { int __retval; return __this.VTable<KeyframeTrack>()->fp_get_Interpolation(__this, &__retval), __retval; }
    static void Interpolation(const uInterface& __this, int value) { __this.VTable<KeyframeTrack>()->fp_set_Interpolation(__this, &value); }
    static uObject* Keyframes(const uInterface& __this) { uObject* __retval; return __this.VTable<KeyframeTrack>()->fp_get_Keyframes(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
