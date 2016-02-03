// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct SubscriptionSetExclusive;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class SubscriptionSetExclusive :2167
// {
uType* SubscriptionSetExclusive_typeof();
void SubscriptionSetExclusive__ctor__fn(SubscriptionSetExclusive* __this, ::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue);
void SubscriptionSetExclusive__New1_fn(::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue, SubscriptionSetExclusive** __retval);
void SubscriptionSetExclusive__Run_fn(SubscriptionSetExclusive* __this);

struct SubscriptionSetExclusive : uObject
{
    uStrong<uObject*> _newValue;
    uStrong< ::g::Fuse::Reactive::ObservableSubscription*> _subscription;

    void ctor_(::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue);
    void Run();
    static SubscriptionSetExclusive* New1(::g::Fuse::Reactive::ObservableSubscription* subscription, uObject* newValue);
};
// }

}}} // ::g::Fuse::Reactive
