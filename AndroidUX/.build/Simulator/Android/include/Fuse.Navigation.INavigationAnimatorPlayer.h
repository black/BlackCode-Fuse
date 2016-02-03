// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface INavigationAnimatorPlayer :19
// {
uInterfaceType* INavigationAnimatorPlayer_typeof();

struct INavigationAnimatorPlayer
{
    void(*fp_EnsureAtEnd)(uObject*);
    void(*fp_Update)(uObject*);
    static void EnsureAtEnd(const uInterface& __this) { __this.VTable<INavigationAnimatorPlayer>()->fp_EnsureAtEnd(__this); }
    static void Update(const uInterface& __this) { __this.VTable<INavigationAnimatorPlayer>()->fp_Update(__this); }
};
// }

}}} // ::g::Fuse::Navigation
