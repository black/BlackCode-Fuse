// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface INavigationAnimator :12
// {
uInterfaceType* INavigationAnimator_typeof();

struct INavigationAnimator
{
    void(*fp_get_Index)(uObject*, int*);
    void(*fp_get_Node)(uObject*, ::g::Fuse::Node**);
    void(*fp_Update)(uObject*, double*, double*);
    static int Index(const uInterface& __this) { int __retval; return __this.VTable<INavigationAnimator>()->fp_get_Index(__this, &__retval), __retval; }
    static ::g::Fuse::Node* Node(const uInterface& __this) { ::g::Fuse::Node* __retval; return __this.VTable<INavigationAnimator>()->fp_get_Node(__this, &__retval), __retval; }
    static void Update(const uInterface& __this, double progress, double prevProgress) { __this.VTable<INavigationAnimator>()->fp_Update(__this, &progress, &prevProgress); }
};
// }

}}} // ::g::Fuse::Navigation
