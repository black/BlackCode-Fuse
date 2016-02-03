// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Pointer__PELHolder;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class Pointer.PELHolder :1330
// {
uType* Pointer__PELHolder_typeof();
void Pointer__PELHolder__ctor__fn(Pointer__PELHolder* __this);
void Pointer__PELHolder__New1_fn(Pointer__PELHolder** __retval);

struct Pointer__PELHolder : uObject
{
    uStrong< ::g::Fuse::Node*> Node;
    int Status;

    void ctor_();
    static Pointer__PELHolder* New1();
};
// }

}}} // ::g::Fuse::Input
