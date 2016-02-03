// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class CreateStateParams :39
// {
uType* CreateStateParams_typeof();
void CreateStateParams__ctor__fn(CreateStateParams* __this);
void CreateStateParams__New1_fn(CreateStateParams** __retval);

struct CreateStateParams : uObject
{
    uStrong< ::g::Fuse::Node*> Attached;
    double TotalDuration;
    int Variant;

    void ctor_();
    static CreateStateParams* New1();
};
// }

}}} // ::g::Fuse::Animations
