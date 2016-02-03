// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract interface IResizeMode :2400
// {
uInterfaceType* IResizeMode_typeof();

struct IResizeMode
{
    void(*fp_GetSizeChange)(uObject*, ::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*);
    static bool GetSizeChange(const uInterface& __this, ::g::Fuse::Node* nr, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize) { bool __retval; return __this.VTable<IResizeMode>()->fp_GetSizeChange(__this, nr, baseSize, deltaSize, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
