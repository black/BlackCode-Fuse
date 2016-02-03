// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}
namespace g{namespace Fuse{namespace Reactive{struct EnumArray;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class EnumArray :48
// {
uType* EnumArray_typeof();
void EnumArray__ctor__fn(EnumArray* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback);
void EnumArray__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback, EnumArray** __retval);
void EnumArray__Run_fn(EnumArray* __this);

struct EnumArray : uObject
{
    uStrong< ::g::Fuse::Scripting::Array*> _array;
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Reactive::Dispatcher*> _thread;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback);
    void Run();
    static EnumArray* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* array, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Reactive
