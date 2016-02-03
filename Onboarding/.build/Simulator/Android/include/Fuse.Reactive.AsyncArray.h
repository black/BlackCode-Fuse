// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IAsyncArray.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct AsyncArray;}}}
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class AsyncArray :8
// {
struct AsyncArray_type : uType
{
    ::g::Fuse::Reactive::IAsyncArray interface0;
    ::g::Uno::IDisposable interface1;
};

AsyncArray_type* AsyncArray_typeof();
void AsyncArray__ctor__fn(AsyncArray* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr);
void AsyncArray__get_Array_fn(AsyncArray* __this, ::g::Fuse::Scripting::Array** __retval);
void AsyncArray__Dispose_fn(AsyncArray* __this);
void AsyncArray__DoDispose_fn(AsyncArray* __this);
void AsyncArray__Enum_fn(AsyncArray* __this, ::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback);
void AsyncArray__Equals_fn(AsyncArray* __this, uObject* obj, bool* __retval);
void AsyncArray__GetHashCode_fn(AsyncArray* __this, int* __retval);
void AsyncArray__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, AsyncArray** __retval);

struct AsyncArray : uObject
{
    uStrong< ::g::Fuse::Scripting::Array*> _arr;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr);
    ::g::Fuse::Scripting::Array* Array();
    void Dispose();
    void DoDispose();
    void Enum(::g::Fuse::Reactive::Dispatcher* thread, uDelegate* callback);
    static AsyncArray* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr);
};
// }

}}} // ::g::Fuse::Reactive
