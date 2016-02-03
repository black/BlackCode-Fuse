// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IMediaPlayback :113
// {
uInterfaceType* IMediaPlayback_typeof();

struct IMediaPlayback
{
    void(*fp_get_Duration)(uObject*, double*);
    void(*fp_get_Position)(uObject*, double*);
    void(*fp_set_Position)(uObject*, double*);
    void(*fp_get_Progress)(uObject*, double*);
    void(*fp_set_Progress)(uObject*, double*);
    void(*fp_get_Volume)(uObject*, float*);
    void(*fp_set_Volume)(uObject*, float*);
    static double Duration(const uInterface& __this) { double __retval; return __this.VTable<IMediaPlayback>()->fp_get_Duration(__this, &__retval), __retval; }
    static double Position(const uInterface& __this) { double __retval; return __this.VTable<IMediaPlayback>()->fp_get_Position(__this, &__retval), __retval; }
    static void Position(const uInterface& __this, double value) { __this.VTable<IMediaPlayback>()->fp_set_Position(__this, &value); }
    static double Progress(const uInterface& __this) { double __retval; return __this.VTable<IMediaPlayback>()->fp_get_Progress(__this, &__retval), __retval; }
    static void Progress(const uInterface& __this, double value) { __this.VTable<IMediaPlayback>()->fp_set_Progress(__this, &value); }
    static float Volume(const uInterface& __this) { float __retval; return __this.VTable<IMediaPlayback>()->fp_get_Volume(__this, &__retval), __retval; }
    static void Volume(const uInterface& __this, float value) { __this.VTable<IMediaPlayback>()->fp_set_Volume(__this, &value); }
};
// }

}}} // ::g::Fuse::Triggers
