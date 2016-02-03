// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE__FUSE_CAMERA_PICTURE_RESULT_H__
#define __APP_UNO_THREADING_FUTURE__FUSE_CAMERA_PICTURE_RESULT_H__

#include <app/Uno.Threading.Future.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct PictureResult; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Fuse_Camera_PictureResult_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Uno_Exception_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Future__Fuse_Camera_PictureResult;

struct Future__Fuse_Camera_PictureResult__uType : ::app::Uno::Threading::Future__uType
{
};

Future__Fuse_Camera_PictureResult__uType* Future__Fuse_Camera_PictureResult__typeof();

void Future__Fuse_Camera_PictureResult___ObjInit_1(Future__Fuse_Camera_PictureResult* __this);
void Future__Fuse_Camera_PictureResult___ObjInit_2(Future__Fuse_Camera_PictureResult* __this, ::uObject* dispatcher);
void Future__Fuse_Camera_PictureResult__Cancel(Future__Fuse_Camera_PictureResult* __this, bool shutdownGracefully);
Future__Fuse_Camera_PictureResult* Future__Fuse_Camera_PictureResult__Catch(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* failure);
void Future__Fuse_Camera_PictureResult__InternalReject(Future__Fuse_Camera_PictureResult* __this, ::app::Uno::Exception* reason);
void Future__Fuse_Camera_PictureResult__InternalResolve(Future__Fuse_Camera_PictureResult* __this, ::app::Fuse::Camera::PictureResult* result);
void Future__Fuse_Camera_PictureResult__Invoke__Fuse_Camera_PictureResult(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Fuse::Camera::PictureResult* arg);
void Future__Fuse_Camera_PictureResult__Invoke__Uno_Exception(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Uno::Exception* arg);
Future__Fuse_Camera_PictureResult* Future__Fuse_Camera_PictureResult__Then(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action);
Future__Fuse_Camera_PictureResult* Future__Fuse_Camera_PictureResult__Then_1(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* fulfilled, ::uDelegate* rejected);
void Future__Fuse_Camera_PictureResult__Wait(Future__Fuse_Camera_PictureResult* __this);

struct Future__Fuse_Camera_PictureResult : ::app::Uno::Threading::Future
{
    ::uStrong< ::app::Fuse::Camera::PictureResult*> Result;
    ::uStrong< ::app::Uno::Exception*> Reason;
    ::uStrong< ::uObject*> _dispatcher;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*> _catchables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*> _thenables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*> _chainables;

    void _ObjInit_1() { Future__Fuse_Camera_PictureResult___ObjInit_1(this); }
    void _ObjInit_2(::uObject* dispatcher) { Future__Fuse_Camera_PictureResult___ObjInit_2(this, dispatcher); }
    Future__Fuse_Camera_PictureResult* Catch(::uDelegate* failure) { return Future__Fuse_Camera_PictureResult__Catch(this, failure); }
    void InternalReject(::app::Uno::Exception* reason) { Future__Fuse_Camera_PictureResult__InternalReject(this, reason); }
    void InternalResolve(::app::Fuse::Camera::PictureResult* result) { Future__Fuse_Camera_PictureResult__InternalResolve(this, result); }
    void Invoke__Fuse_Camera_PictureResult(::uDelegate* action, ::app::Fuse::Camera::PictureResult* arg) { Future__Fuse_Camera_PictureResult__Invoke__Fuse_Camera_PictureResult(this, action, arg); }
    void Invoke__Uno_Exception(::uDelegate* action, ::app::Uno::Exception* arg) { Future__Fuse_Camera_PictureResult__Invoke__Uno_Exception(this, action, arg); }
    Future__Fuse_Camera_PictureResult* Then(::uDelegate* action) { return Future__Fuse_Camera_PictureResult__Then(this, action); }
    Future__Fuse_Camera_PictureResult* Then_1(::uDelegate* fulfilled, ::uDelegate* rejected) { return Future__Fuse_Camera_PictureResult__Then_1(this, fulfilled, rejected); }
};

}}}


#endif
