// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface INavigationAnimator :12
// {
uInterfaceType* INavigationAnimator_typeof();

struct INavigationAnimator
{
    void(*fp_Update)(uObject*, double*, double*);
    static void Update(const uInterface& __this, double progress, double prevProgress) { __this.VTable<INavigationAnimator>()->fp_Update(__this, &progress, &prevProgress); }
};
// }

}}} // ::g::Fuse::Navigation
