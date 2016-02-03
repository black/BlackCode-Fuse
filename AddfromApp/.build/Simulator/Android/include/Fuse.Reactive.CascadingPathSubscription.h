// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Binding;}}}
namespace g{namespace Fuse{namespace Reactive{struct CascadingPathSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct CascadingPathSubscription__BindAttempt;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class CascadingPathSubscription :2315
// {
struct CascadingPathSubscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

CascadingPathSubscription_type* CascadingPathSubscription_typeof();
void CascadingPathSubscription__ctor__fn(CascadingPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path);
void CascadingPathSubscription__Dispose_fn(CascadingPathSubscription* __this);
void CascadingPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path, CascadingPathSubscription** __retval);
void CascadingPathSubscription__RestartBinding_fn(CascadingPathSubscription* __this);

struct CascadingPathSubscription : uObject
{
    uStrong< ::g::Fuse::Reactive::Binding*> _b;
    uStrong<CascadingPathSubscription__BindAttempt*> _bindAttempt;
    uStrong< ::g::Fuse::Node*> _n;
    uStrong<uString*> _path;

    void ctor_(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path);
    void Dispose();
    void RestartBinding();
    static CascadingPathSubscription* New1(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path);
};
// }

}}} // ::g::Fuse::Reactive
