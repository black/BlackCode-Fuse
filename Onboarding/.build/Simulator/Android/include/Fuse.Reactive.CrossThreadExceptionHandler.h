// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct CrossThreadExceptionHandler;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class CrossThreadExceptionHandler :1529
// {
uType* CrossThreadExceptionHandler_typeof();
void CrossThreadExceptionHandler__ctor__fn(CrossThreadExceptionHandler* __this);
void CrossThreadExceptionHandler__CheckAndThrow_fn(CrossThreadExceptionHandler* __this);
void CrossThreadExceptionHandler__New1_fn(CrossThreadExceptionHandler** __retval);
void CrossThreadExceptionHandler__SetException_fn(CrossThreadExceptionHandler* __this, ::g::Uno::Exception* e);

struct CrossThreadExceptionHandler : uObject
{
    uStrong< ::g::Uno::Collections::Queue*> _exceptionQueue;
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;

    void ctor_();
    void CheckAndThrow();
    void SetException(::g::Uno::Exception* e);
    static CrossThreadExceptionHandler* New1();
};
// }

}}} // ::g::Fuse::Reactive
