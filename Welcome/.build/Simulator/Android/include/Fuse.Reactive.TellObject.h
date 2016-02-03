// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}
namespace g{namespace Fuse{namespace Reactive{struct TellObject;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class TellObject :298
// {
uType* TellObject_typeof();
void TellObject__ctor__fn(TellObject* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback);
void TellObject__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback, TellObject** __retval);
void TellObject__Run_fn(TellObject* __this);

struct TellObject : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong<uDelegate*> _failCallback;
    uStrong<uString*> _key;
    uStrong< ::g::Fuse::Scripting::Object*> _object;
    uStrong< ::g::Fuse::Reactive::Dispatcher*> _thread;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback);
    void Run();
    static TellObject* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uString* key, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, uDelegate* failCallback);
};
// }

}}} // ::g::Fuse::Reactive
