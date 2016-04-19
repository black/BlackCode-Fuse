// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <posix_mutex.h>
#include <posix_thread.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.POSIXMutex.h>
#include <Uno.Threading.POSIXThread.h>
#include <Uno.Threading.Thread.h>
#include <Uno.ULong.h>
static uString* STRINGS[3];
static uType* TYPES[6];

namespace g{
namespace Uno{
namespace Threading{

// C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\$.uno(541)
// -----------------------------------------------------------

// public sealed class ConcurrentQueue<T> :541
// {
ConcurrentQueue_type* ConcurrentQueue_typeof()
{
    static uSStrong<ConcurrentQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(ConcurrentQueue_type);
    type = (ConcurrentQueue_type*)uClassType::New("Uno.Threading.ConcurrentQueue`1", options);
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ConcurrentQueue__Dispose_fn;
    ::TYPES[0] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Collections.Queue`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ConcurrentQueue_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::ConcurrentQueue, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Threading::ConcurrentQueue, _queue), 0);
    return type;
}

// public ConcurrentQueue() :546
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public void Dispose() :592
void ConcurrentQueue__Dispose_fn(ConcurrentQueue* __this)
{
    __this->Dispose();
}

// public void Enqueue(T item) :552
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    try
    {
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), item);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
}

// public ConcurrentQueue New() :546
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& item) :558
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret = false;
    item.Default(__types[0]);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    try
    {
        if (uPtr(__this->_queue)->Count() > 0)
        {
            item.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
            ret = true;
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
    return *__retval = ret, void();
}

// public ConcurrentQueue() [instance] :546
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
}

// public void Dispose() [instance] :592
void ConcurrentQueue::Dispose()
{
    uPtr(_mutex)->Dispose();
}

// public ConcurrentQueue New() [static] :546
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\$.uno(197)
// -----------------------------------------------------------

// public abstract interface IDispatcher :197
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.IDispatcher", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\$.uno(512)
// -----------------------------------------------------------

// public sealed class LockGuard :512
// {
LockGuard_type* LockGuard_typeof()
{
    static uSStrong<LockGuard_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LockGuard);
    options.TypeSize = sizeof(LockGuard_type);
    type = (LockGuard_type*)uClassType::New("Uno.Threading.LockGuard", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))LockGuard__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LockGuard_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::LockGuard, _mutex), 0);
    return type;
}

// private LockGuard(Uno.Threading.Mutex mutex) :516
void LockGuard__ctor__fn(LockGuard* __this, ::g::Uno::Threading::Mutex* mutex)
{
    __this->ctor_(mutex);
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) :522
void LockGuard__Acquire_fn(::g::Uno::Threading::Mutex* mutex, uObject** __retval)
{
    *__retval = LockGuard::Acquire(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) :516
void LockGuard__New1_fn(::g::Uno::Threading::Mutex* mutex, LockGuard** __retval)
{
    *__retval = LockGuard::New1(mutex);
}

// private void Uno.IDisposable.Dispose() :527
void LockGuard__Uno_IDisposable_Dispose_fn(LockGuard* __this)
{
    uPtr(__this->_mutex)->Unlock();
}

// private LockGuard(Uno.Threading.Mutex mutex) [instance] :516
void LockGuard::ctor_(::g::Uno::Threading::Mutex* mutex)
{
    _mutex = mutex;
    uPtr(_mutex)->Lock();
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) [static] :522
uObject* LockGuard::Acquire(::g::Uno::Threading::Mutex* mutex)
{
    return (uObject*)LockGuard::New1(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) [static] :516
LockGuard* LockGuard::New1(::g::Uno::Threading::Mutex* mutex)
{
    LockGuard* obj1 = (LockGuard*)uNew(LockGuard_typeof());
    obj1->ctor_(mutex);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\$.uno(264)
// -----------------------------------------------------------

// public abstract class Mutex :264
// {
Mutex_type* Mutex_typeof()
{
    static uSStrong<Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mutex);
    options.TypeSize = sizeof(Mutex_type);
    type = (Mutex_type*)uClassType::New("Uno.Threading.Mutex", options);
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mutex_type, interface0));
    return type;
}

// protected generated Mutex() :264
void Mutex__ctor__fn(Mutex* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.Mutex Create() :266
void Mutex__Create_fn(Mutex** __retval)
{
    *__retval = Mutex::Create();
}

// protected generated Mutex() [instance] :264
void Mutex::ctor_()
{
}

// public static Uno.Threading.Mutex Create() [static] :266
Mutex* Mutex::Create()
{
    return ::g::Uno::Threading::POSIXMutex::New1();
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\Implementation\Cpp\$.uno(76)
// -----------------------------------------------------------------------------

// internal sealed extern class POSIXMutex :76
// {
::g::Uno::Threading::Mutex_type* POSIXMutex_typeof()
{
    static uSStrong< ::g::Uno::Threading::Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(POSIXMutex);
    options.TypeSize = sizeof(::g::Uno::Threading::Mutex_type);
    type = (::g::Uno::Threading::Mutex_type*)uClassType::New("Uno.Threading.POSIXMutex", options);
    type->SetBase(::g::Uno::Threading::Mutex_typeof());
    type->fp_ctor_ = (void*)POSIXMutex__New1_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Dispose_fn;
    type->fp_Lock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Lock_fn;
    type->fp_Unlock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Unlock_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))POSIXMutex__Dispose_fn;
    ::TYPES[2] = ::g::Uno::IntPtr_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Mutex_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::POSIXMutex, _handle), 0);
    return type;
}

// public POSIXMutex() :80
void POSIXMutex__ctor_1_fn(POSIXMutex* __this)
{
    __this->ctor_1();
}

// public override sealed void Dispose() :101
void POSIXMutex__Dispose_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Inequality(__this->_handle, ::g::Uno::IntPtr::Zero()))
    {
        free_mutex(__this->_handle);
        __this->_handle = ::g::Uno::IntPtr::Zero();
    }
}

// public override sealed void Lock() :85
void POSIXMutex__Lock_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero()))
        U_THROW(::g::Uno::Exception::New1());

    pthread_mutex_lock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex New() :80
void POSIXMutex__New1_fn(POSIXMutex** __retval)
{
    *__retval = POSIXMutex::New1();
}

// public override sealed void Unlock() :93
void POSIXMutex__Unlock_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero()))
        U_THROW(::g::Uno::Exception::New1());

    pthread_mutex_unlock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex() [instance] :80
void POSIXMutex::ctor_1()
{
    ctor_();
    _handle = init_mutex();
}

// public POSIXMutex New() [static] :80
POSIXMutex* POSIXMutex::New1()
{
    POSIXMutex* obj1 = (POSIXMutex*)uNew(POSIXMutex_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\Implementation\Cpp\$.uno(250)
// ------------------------------------------------------------------------------

// internal sealed extern class POSIXThread :250
// {
// static POSIXThread() :250
static void POSIXThread__cctor__fn(uType* __type)
{
    POSIXThread::_callbacks_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Uno.Action>*/]));
}

//  ~POSIXThread() :261
static void POSIXThread__Finalize_fn(POSIXThread* __this)
{
}

::g::Uno::Threading::Thread_type* POSIXThread_typeof()
{
    static uSStrong< ::g::Uno::Threading::Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(POSIXThread);
    options.TypeSize = sizeof(::g::Uno::Threading::Thread_type);
    type = (::g::Uno::Threading::Thread_type*)uClassType::New("Uno.Threading.POSIXThread", options);
    type->SetBase(::g::Uno::Threading::Thread_typeof());
    type->fp_cctor_ = POSIXThread__cctor__fn;
    type->fp_Finalize = (void(*)(uObject*))POSIXThread__Finalize_fn;
    type->fp_Join = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Join_fn;
    type->fp_Start = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Start_fn;
    ::STRINGS[1] = uString::Const("Cannot join unstarted thread");
    ::STRINGS[2] = uString::Const("Cannot start throw more than once");
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[4] = ::g::Uno::ULong_typeof();
    ::TYPES[5] = ::g::Uno::Threading::Thread_typeof();
    type->SetFields(1,
        ::g::Uno::ULong_typeof(), offsetof(::g::Uno::Threading::POSIXThread, _posixHandle), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Uno::Threading::POSIXThread::_callbacks_, uFieldFlagsStatic);
    return type;
}

// public POSIXThread(Uno.Action callback) :255
void POSIXThread__ctor_1_fn(POSIXThread* __this, uDelegate* callback)
{
    __this->ctor_1(callback);
}

// public override sealed void Join() :291
void POSIXThread__Join_fn(POSIXThread* __this)
{
    if (__this->_posixHandle == 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Cannot join...*/]));

    __this->JoinImpl(__this->_posixHandle);
}

// private void JoinImpl(ulong handle) :299
void POSIXThread__JoinImpl_fn(POSIXThread* __this, uint64_t* handle)
{
    __this->JoinImpl(*handle);
}

// public POSIXThread New(Uno.Action callback) :255
void POSIXThread__New1_fn(uDelegate* callback, POSIXThread** __retval)
{
    *__retval = POSIXThread::New1(callback);
}

// public static void Sleep(int millis) :318
void POSIXThread__Sleep1_fn(int* millis)
{
    POSIXThread::Sleep1(*millis);
}

// private static void SleepImpl(ulong microSeconds) :324
void POSIXThread__SleepImpl_fn(uint64_t* microSeconds)
{
    POSIXThread::SleepImpl(*microSeconds);
}

// public override sealed void Start() :272
void POSIXThread__Start_fn(POSIXThread* __this)
{
    __this->StartImpl(&__this->_posixHandle, __this->_callback);
}

// private void StartImpl(ulong& handle, Uno.Action callback) :280
void POSIXThread__StartImpl_fn(POSIXThread* __this, uint64_t* handle, uDelegate* callback)
{
    __this->StartImpl(handle, callback);
}

uSStrong< ::g::Uno::Collections::List*> POSIXThread::_callbacks_;

// public POSIXThread(Uno.Action callback) [instance] :255
void POSIXThread::ctor_1(uDelegate* callback)
{
    _posixHandle = 0ULL;
    ctor_(callback);
}

// private void JoinImpl(ulong handle) [instance] :299
void POSIXThread::JoinImpl(uint64_t handle)
{
    int result = pthread_join(((pthread_t)handle), NULL);
}

// private void StartImpl(ulong& handle, Uno.Action callback) [instance] :280
void POSIXThread::StartImpl(uint64_t* handle, uDelegate* callback)
{
    if (*handle != 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Cannot star...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(POSIXThread::_callbacks()), callback);
    int result = thread_start(handle, callback);
}

// public POSIXThread New(Uno.Action callback) [static] :255
POSIXThread* POSIXThread::New1(uDelegate* callback)
{
    POSIXThread* obj1 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj1->ctor_1(callback);
    return obj1;
}

// public static void Sleep(int millis) [static] :318
void POSIXThread::Sleep1(int millis)
{
    POSIXThread_typeof()->Init();
    uint64_t microSeconds = (uint64_t)millis * 1000ULL;
    POSIXThread::SleepImpl(microSeconds);
}

// private static void SleepImpl(ulong microSeconds) [static] :324
void POSIXThread::SleepImpl(uint64_t microSeconds)
{
    POSIXThread_typeof()->Init();
    thread_sleep(microSeconds);
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\$.uno(305)
// -----------------------------------------------------------

// public abstract class Thread :305
// {
Thread_type* Thread_typeof()
{
    static uSStrong<Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(Thread_type);
    type = (Thread_type*)uClassType::New("Uno.Threading.Thread", options);
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::Thread, _callback), 0);
    return type;
}

// protected Thread(Uno.Action callback) :333
void Thread__ctor__fn(Thread* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public static Uno.Threading.Thread Create(Uno.Action callback) :308
void Thread__Create_fn(uDelegate* callback, Thread** __retval)
{
    *__retval = Thread::Create(callback);
}

// public static void Sleep(int millis) :342
void Thread__Sleep_fn(int* millis)
{
    Thread::Sleep(*millis);
}

// protected Thread(Uno.Action callback) [instance] :333
void Thread::ctor_(uDelegate* callback)
{
    _callback = callback;
}

// public static Uno.Threading.Thread Create(Uno.Action callback) [static] :308
Thread* Thread::Create(uDelegate* callback)
{
    return ::g::Uno::Threading::POSIXThread::New1(callback);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}

// public static void Sleep(int millis) [static] :342
void Thread::Sleep(int millis)
{
    ::g::Uno::Threading::POSIXThread::Sleep1(millis);
    return;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

}}} // ::g::Uno::Threading
