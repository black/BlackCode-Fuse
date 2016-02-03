// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_SUBSCRIPTION_SET_EXCLUSIVE_H__
#define __APP_FUSE_REACTIVE_SUBSCRIPTION_SET_EXCLUSIVE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct ObservableSubscription; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct SubscriptionSetExclusive;

struct SubscriptionSetExclusive__uType : ::uClassType
{
};

SubscriptionSetExclusive__uType* SubscriptionSetExclusive__typeof();

void SubscriptionSetExclusive___ObjInit(SubscriptionSetExclusive* __this, ::app::Fuse::Reactive::ObservableSubscription* subscription, ::uObject* newValue);
SubscriptionSetExclusive* SubscriptionSetExclusive__New_1(::uStatic* __this, ::app::Fuse::Reactive::ObservableSubscription* subscription, ::uObject* newValue);
void SubscriptionSetExclusive__Run(SubscriptionSetExclusive* __this);

struct SubscriptionSetExclusive : ::uObject
{
    ::uStrong< ::uObject*> _newValue;
    ::uStrong< ::app::Fuse::Reactive::ObservableSubscription*> _subscription;

    void _ObjInit(::app::Fuse::Reactive::ObservableSubscription* subscription, ::uObject* newValue) { SubscriptionSetExclusive___ObjInit(this, subscription, newValue); }
    void Run() { SubscriptionSetExclusive__Run(this); }
};

}}}


#endif
