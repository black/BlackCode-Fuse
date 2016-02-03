// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct GoBack;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class GoBack :2073
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof();
void GoBack__ctor_2_fn(GoBack* __this);
void GoBack__New1_fn(GoBack** __retval);
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node);

struct GoBack : ::g::Fuse::Navigation::BackForwardNavigationTriggerAction
{
    void ctor_2();
    static GoBack* New1();
};
// }

}}} // ::g::Fuse::Navigation
