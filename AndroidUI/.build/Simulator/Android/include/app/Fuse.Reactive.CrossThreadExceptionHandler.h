// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_CROSS_THREAD_EXCEPTION_HANDLER_H__
#define __APP_FUSE_REACTIVE_CROSS_THREAD_EXCEPTION_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Exception; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct CrossThreadExceptionHandler;

struct CrossThreadExceptionHandler__uType : ::uClassType
{
};

CrossThreadExceptionHandler__uType* CrossThreadExceptionHandler__typeof();

void CrossThreadExceptionHandler___ObjInit(CrossThreadExceptionHandler* __this);
void CrossThreadExceptionHandler__CheckAndThrow(CrossThreadExceptionHandler* __this);
CrossThreadExceptionHandler* CrossThreadExceptionHandler__New_1(::uStatic* __this);
void CrossThreadExceptionHandler__SetException(CrossThreadExceptionHandler* __this, ::app::Uno::Exception* e);

struct CrossThreadExceptionHandler : ::uObject
{
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Exception*> _exceptionQueue;

    void _ObjInit() { CrossThreadExceptionHandler___ObjInit(this); }
    void CheckAndThrow() { CrossThreadExceptionHandler__CheckAndThrow(this); }
    void SetException(::app::Uno::Exception* e) { CrossThreadExceptionHandler__SetException(this, e); }
};

}}}


#endif
