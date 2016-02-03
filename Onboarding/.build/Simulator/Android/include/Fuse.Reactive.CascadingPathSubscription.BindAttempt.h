// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct CascadingPathSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct CascadingPathSubscription__BindAttempt;}}}
namespace g{namespace Fuse{namespace Reactive{struct InternalPathSubscription;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class CascadingPathSubscription.BindAttempt :2343
// {
uType* CascadingPathSubscription__BindAttempt_typeof();
void CascadingPathSubscription__BindAttempt__ctor__fn(CascadingPathSubscription__BindAttempt* __this, ::g::Fuse::Reactive::CascadingPathSubscription* cps);
void CascadingPathSubscription__BindAttempt__Dispose_fn(CascadingPathSubscription__BindAttempt* __this);
void CascadingPathSubscription__BindAttempt__Fail_fn(CascadingPathSubscription__BindAttempt* __this);
void CascadingPathSubscription__BindAttempt__New1_fn(::g::Fuse::Reactive::CascadingPathSubscription* cps, CascadingPathSubscription__BindAttempt** __retval);
void CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn(CascadingPathSubscription__BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args);
void CascadingPathSubscription__BindAttempt__TryBind_fn(CascadingPathSubscription__BindAttempt* __this);

struct CascadingPathSubscription__BindAttempt : uObject
{
    uStrong< ::g::Fuse::Reactive::CascadingPathSubscription*> _cps;
    uStrong< ::g::Fuse::Node*> _cur;
    uStrong< ::g::Uno::Collections::List*> _dcChangeds;
    bool _isDisposed;
    uStrong< ::g::Fuse::Reactive::InternalPathSubscription*> _ps;

    void ctor_(::g::Fuse::Reactive::CascadingPathSubscription* cps);
    void Dispose();
    void Fail();
    void OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void TryBind();
    static CascadingPathSubscription__BindAttempt* New1(::g::Fuse::Reactive::CascadingPathSubscription* cps);
};
// }

}}} // ::g::Fuse::Reactive
