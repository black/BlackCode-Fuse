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
    void(*fp_get_Progress)(uObject*, double*);
    void(*fp_set_Progress)(uObject*, double*);
    static double Progress(const uInterface& __this) { double __retval; return __this.VTable<IMediaPlayback>()->fp_get_Progress(__this, &__retval), __retval; }
    static void Progress(const uInterface& __this, double value) { __this.VTable<IMediaPlayback>()->fp_set_Progress(__this, &value); }
};
// }

}}} // ::g::Fuse::Triggers
