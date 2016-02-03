#include <android_semaphore.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.NotImplementedException.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.AndroidSemaphore.h>
#include <app/Uno.Threading.Future.h>
#include <app/Uno.Threading.FutureState.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <app/Uno.Threading.Mutex.h>
#include <app/Uno.Threading.POSIXMutex.h>
#include <app/Uno.Threading.PosixSemaphore.h>
#include <app/Uno.Threading.POSIXThread.h>
#include <app/Uno.Threading.Semaphore.h>
#include <app/Uno.Threading.SyncDispatcher.h>
#include <app/Uno.Threading.Thread.h>
#include <app/Uno.ULong.h>
#include <posix_mutex.h>
#include <posix_thread.h>

namespace app {
namespace Uno {
namespace Threading {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidSemaphore__uType* AndroidSemaphore__typeof()
{
    static ::uStaticStrong<AndroidSemaphore__uType*> type;
    if (type != NULL) return type;

    type = (AndroidSemaphore__uType*)::uAllocClassType(sizeof(AndroidSemaphore__uType), "Uno.Threading.AndroidSemaphore", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::PosixSemaphore__typeof());
    type->__fp_CreateSemaphore = (void*(*)(::app::Uno::Threading::PosixSemaphore*, int, int))AndroidSemaphore__CreateSemaphore;
    type->__fp_FreeSemaphore = (void(*)(::app::Uno::Threading::PosixSemaphore*, void*))AndroidSemaphore__FreeSemaphore;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AndroidSemaphore__New_1, 0, true, AndroidSemaphore__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void AndroidSemaphore___ObjInit_2(AndroidSemaphore* __this, int initialCount, int maxCount)
{
    ::app::Uno::Threading::PosixSemaphore___ObjInit_1(__this, initialCount, maxCount);
}

void* AndroidSemaphore__CreateSemaphore(AndroidSemaphore* __this, int initialCount, int maxCount)
{
    return init_semaphore(initialCount, maxCount);
}

void AndroidSemaphore__FreeSemaphore(AndroidSemaphore* __this, void* handle)
{
    free_semaphore((sem_t*)handle);
}

AndroidSemaphore* AndroidSemaphore__New_1(::uStatic* __this, int initialCount, int maxCount)
{
    AndroidSemaphore* inst = (AndroidSemaphore*)::uAllocObject(sizeof(AndroidSemaphore), AndroidSemaphore__typeof());
    inst->_ObjInit_2(initialCount, maxCount);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future__uType* Future__typeof()
{
    static ::uStaticStrong<Future__uType*> type;
    if (type != NULL) return type;

    type = (Future__uType*)::uAllocClassType(sizeof(Future__uType), "Uno.Threading.Future", false, 0, 0, 0);

    type->SetFunctions(4,
        ::uNewFunctionVoid("Cancel", type->__fp_Cancel, offsetof(Future__uType, __fp_Cancel), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_State", Future__get_State, 0, false, ::app::Uno::Threading::FutureState__typeof()),
        ::uNewFunctionVoid("set_State", Future__set_State, 0, false, ::app::Uno::Threading::FutureState__typeof()),
        ::uNewFunctionVoid("Wait", type->__fp_Wait, offsetof(Future__uType, __fp_Wait), false));

    ::uRegisterType(type);
    return type;
}

void Future___ObjInit(Future* __this)
{
}

int Future__get_State(Future* __this)
{
    return __this->_State;
}

void Future__set_State(Future* __this, int value)
{
    __this->_State = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FutureState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Threading.FutureState", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDispatcher__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Threading.IDispatcher");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Mutex__uType* Mutex__typeof()
{
    static ::uStaticStrong<Mutex__uType*> type;
    if (type != NULL) return type;

    type = (Mutex__uType*)::uAllocClassType(sizeof(Mutex__uType), "Uno.Threading.Mutex", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction("Create", Mutex__Create, 0, true, Mutex__typeof()),
        ::uNewFunctionVoid("Lock", type->__fp_Lock, offsetof(Mutex__uType, __fp_Lock), false),
        ::uNewFunctionVoid("Unlock", type->__fp_Unlock, offsetof(Mutex__uType, __fp_Unlock), false));

    ::uRegisterType(type);
    return type;
}

void Mutex___ObjInit(Mutex* __this)
{
}

Mutex* Mutex__Create(::uStatic* __this)
{
    {
        return (Mutex*)::app::Uno::Threading::POSIXMutex__New_1(NULL);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Feature not supported in this backend")));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

POSIXMutex__uType* POSIXMutex__typeof()
{
    static ::uStaticStrong<POSIXMutex__uType*> type;
    if (type != NULL) return type;

    type = (POSIXMutex__uType*)::uAllocClassType(sizeof(POSIXMutex__uType), "Uno.Threading.POSIXMutex", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Mutex__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))POSIXMutex__Finalize;
    type->__fp_Lock = (void(*)(::app::Uno::Threading::Mutex*))POSIXMutex__Lock;
    type->__fp_Unlock = (void(*)(::app::Uno::Threading::Mutex*))POSIXMutex__Unlock;

    type->SetFields(1,
        ::uNewField("_handle", NULL, offsetof(POSIXMutex, _handle), ::app::Uno::IntPtr__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("FreeMutex", POSIXMutex__FreeMutex, 0, false, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("LockImpl", POSIXMutex__LockImpl, 0, false, ::app::Uno::IntPtr__typeof()),
        ::uNewFunction(".ctor", POSIXMutex__New_1, 0, true, POSIXMutex__typeof()),
        ::uNewFunctionVoid("UnlockImpl", POSIXMutex__UnlockImpl, 0, false, ::app::Uno::IntPtr__typeof()));

    ::uRegisterType(type);
    return type;
}

void POSIXMutex__Finalize(POSIXMutex* __this)
{
    if (::app::Uno::IntPtr__op_Inequality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        __this->FreeMutex(__this->_handle);
    }
}

void POSIXMutex___ObjInit_1(POSIXMutex* __this)
{
    ::app::Uno::Threading::Mutex___ObjInit(__this);
    __this->_handle = init_mutex();
}

void POSIXMutex__FreeMutex(POSIXMutex* __this, void* handle)
{
    free_mutex(handle);
}

void POSIXMutex__Lock(POSIXMutex* __this)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    __this->LockImpl(__this->_handle);
}

void POSIXMutex__LockImpl(POSIXMutex* __this, void* handle)
{
    pthread_mutex_lock( (pthread_mutex_t*)handle );
}

POSIXMutex* POSIXMutex__New_1(::uStatic* __this)
{
    POSIXMutex* inst = (POSIXMutex*)::uAllocObject(sizeof(POSIXMutex), POSIXMutex__typeof());
    inst->_ObjInit_1();
    return inst;
}

void POSIXMutex__Unlock(POSIXMutex* __this)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    __this->UnlockImpl(__this->_handle);
}

void POSIXMutex__UnlockImpl(POSIXMutex* __this, void* handle)
{
    pthread_mutex_unlock( (pthread_mutex_t*)handle );
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PosixSemaphore__uType* PosixSemaphore__typeof()
{
    static ::uStaticStrong<PosixSemaphore__uType*> type;
    if (type != NULL) return type;

    type = (PosixSemaphore__uType*)::uAllocClassType(sizeof(PosixSemaphore__uType), "Uno.Threading.PosixSemaphore", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Semaphore__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))PosixSemaphore__Finalize;
    type->__fp_Release = (int(*)(::app::Uno::Threading::Semaphore*))PosixSemaphore__Release;
    type->__fp_Release_1 = (int(*)(::app::Uno::Threading::Semaphore*, int))PosixSemaphore__Release_1;
    type->__fp_WaitOne = (bool(*)(::app::Uno::Threading::Semaphore*))PosixSemaphore__WaitOne;
    type->__fp_WaitOne_1 = (bool(*)(::app::Uno::Threading::Semaphore*, int))PosixSemaphore__WaitOne_1;

    type->SetFields(3,
        ::uNewField("_currentCount", NULL, offsetof(PosixSemaphore, _currentCount), ::app::Uno::Int__typeof()),
        ::uNewField("_handle", NULL, offsetof(PosixSemaphore, _handle), ::app::Uno::IntPtr__typeof()),
        ::uNewField("_maxCount", NULL, offsetof(PosixSemaphore, _maxCount), ::app::Uno::Int__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("CreateSemaphore", type->__fp_CreateSemaphore, offsetof(PosixSemaphore__uType, __fp_CreateSemaphore), false, ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("DecrementCounter", PosixSemaphore__DecrementCounter, 0, false),
        ::uNewFunctionVoid("FreeSemaphore", type->__fp_FreeSemaphore, offsetof(PosixSemaphore__uType, __fp_FreeSemaphore), false, ::app::Uno::IntPtr__typeof()),
        ::uNewFunctionVoid("IncrementCounter", PosixSemaphore__IncrementCounter, 0, false),
        ::uNewFunction("ReleaseImpl", PosixSemaphore__ReleaseImpl, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("WaitOneImpl", PosixSemaphore__WaitOneImpl, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof()),
        ::uNewFunction("WaitOneImpl", PosixSemaphore__WaitOneImpl_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::IntPtr__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void PosixSemaphore__Finalize(PosixSemaphore* __this)
{
    if (::app::Uno::IntPtr__op_Inequality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        __this->FreeSemaphore(__this->_handle);
    }
}

void PosixSemaphore___ObjInit_1(PosixSemaphore* __this, int initialCount, int maxCount)
{
    ::app::Uno::Threading::Semaphore___ObjInit(__this);
    __this->_currentCount = initialCount;
    __this->_maxCount = maxCount;
    __this->_handle = __this->CreateSemaphore(initialCount, maxCount);
}

void PosixSemaphore__DecrementCounter(PosixSemaphore* __this)
{
    __this->_currentCount--;
}

void PosixSemaphore__IncrementCounter(PosixSemaphore* __this)
{
    __this->_currentCount++;
}

int PosixSemaphore__Release(PosixSemaphore* __this)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return __this->ReleaseImpl(__this->_handle, 1);
}

int PosixSemaphore__Release_1(PosixSemaphore* __this, int releaseCount)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return __this->ReleaseImpl(__this->_handle, releaseCount);
}

int PosixSemaphore__ReleaseImpl(PosixSemaphore* __this, void* handle, int releaseCount)
{
    if ((releaseCount + __this->_currentCount) > __this->_maxCount)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Adding the specified count to the semaphore would cause it to exceed its maximum count")));
    }

    int retCount = __this->_currentCount;

    for (int i = 0; i < releaseCount; i++)
    {
        bool res = sem_post((sem_t*)handle) == 0;

        if (res)
        {
            __this->IncrementCounter();
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Unable to release semaphore")));
        }
    }

    return retCount;
}

bool PosixSemaphore__WaitOne(PosixSemaphore* __this)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return __this->WaitOneImpl(__this->_handle);
}

bool PosixSemaphore__WaitOne_1(PosixSemaphore* __this, int timeoutMillis)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    return __this->WaitOneImpl_1(__this->_handle, timeoutMillis);
}

bool PosixSemaphore__WaitOneImpl(PosixSemaphore* __this, void* handle)
{
    bool res = sem_wait((sem_t *)handle) == 0;

    if (res)
    {
        __this->DecrementCounter();
    }

    return res;
}

bool PosixSemaphore__WaitOneImpl_1(PosixSemaphore* __this, void* handle, int timeoutMillis)
{
    int elapsedTime = 0;
    bool res = false;

    while (!res && (elapsedTime < timeoutMillis))
    {
        res = sem_trywait((sem_t *)handle) == 0;

        if (!res)
        {
            elapsedTime = elapsedTime + 100;
            ::app::Uno::Threading::Thread__Sleep(NULL, 100);
        }
    }

    if (res)
    {
        __this->DecrementCounter();
    }

    return res;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__Uno_Action*> POSIXThread___callbacks;

POSIXThread__uType* POSIXThread__typeof()
{
    static ::uStaticStrong<POSIXThread__uType*> type;
    if (type != NULL) return type;

    type = (POSIXThread__uType*)::uAllocClassType(sizeof(POSIXThread__uType), "Uno.Threading.POSIXThread", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Thread__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))POSIXThread__Finalize;
    type->__fp_get_IsBackground = (bool(*)(::app::Uno::Threading::Thread*))POSIXThread__get_IsBackground;
    type->__fp_Join = (void(*)(::app::Uno::Threading::Thread*))POSIXThread__Join;
    type->__fp_set_IsBackground = (void(*)(::app::Uno::Threading::Thread*, bool))POSIXThread__set_IsBackground;
    type->__fp_Start = (void(*)(::app::Uno::Threading::Thread*))POSIXThread__Start;

    type->SetFields(2,
        ::uNewField("_callbacks", &POSIXThread___callbacks, 0, ::app::Uno::Collections::List__Uno_Action__typeof()),
        ::uNewField("_posixHandle", NULL, offsetof(POSIXThread, _posixHandle), ::app::Uno::ULong__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("JoinImpl", POSIXThread__JoinImpl, 0, false, ::app::Uno::ULong__typeof()),
        ::uNewFunction(".ctor", POSIXThread__New_1, 0, true, POSIXThread__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("Sleep", POSIXThread__Sleep_1, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SleepImpl", POSIXThread__SleepImpl, 0, true, ::app::Uno::ULong__typeof()),
        ::uNewFunctionVoid("StartImpl", POSIXThread__StartImpl, 0, false, ::app::Uno::ULong__typeof(), ::app::Uno::Action__typeof()));

    ::uRegisterType(type);
    return type;
}

void POSIXThread__Finalize(POSIXThread* __this)
{
}

void POSIXThread___ObjInit_1(POSIXThread* __this, ::uDelegate* callback)
{
    __this->_posixHandle = 0ull;
    ::app::Uno::Threading::Thread___ObjInit(__this, callback);
}

void POSIXThread___TypeInit(::uStatic* __this)
{
    POSIXThread___callbacks = ::app::Uno::Collections::List__Uno_Action__New_1(NULL);
}

bool POSIXThread__get_IsBackground(POSIXThread* __this)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void POSIXThread__Join(POSIXThread* __this)
{
    if (__this->_posixHandle == 0ull)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot join unstarted thread")));
    }

    __this->JoinImpl(__this->_posixHandle);
}

void POSIXThread__JoinImpl(POSIXThread* __this, ::uULong handle)
{
    int result = pthread_join(((pthread_t)handle), NULL);
}

POSIXThread* POSIXThread__New_1(::uStatic* __this, ::uDelegate* callback)
{
    POSIXThread* inst = (POSIXThread*)::uAllocObject(sizeof(POSIXThread), POSIXThread__typeof());
    inst->_ObjInit_1(callback);
    return inst;
}

void POSIXThread__set_IsBackground(POSIXThread* __this, bool value)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void POSIXThread__Sleep_1(::uStatic* __this, int millis)
{
    ::uULong microSeconds = (::uULong)millis * 1000ull;
    POSIXThread__SleepImpl(NULL, microSeconds);
}

void POSIXThread__SleepImpl(::uStatic* __this, ::uULong microSeconds)
{
    thread_sleep(microSeconds);
}

void POSIXThread__Start(POSIXThread* __this)
{
    __this->StartImpl(&__this->_posixHandle, __this->_callback);
}

void POSIXThread__StartImpl(POSIXThread* __this, ::uULong* handle, ::uDelegate* callback)
{
    if (*handle != 0ull)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot start throw more than once")));
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(POSIXThread___callbacks)->Add(callback);
    int result = thread_start(handle, callback);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Semaphore__uType* Semaphore__typeof()
{
    static ::uStaticStrong<Semaphore__uType*> type;
    if (type != NULL) return type;

    type = (Semaphore__uType*)::uAllocClassType(sizeof(Semaphore__uType), "Uno.Threading.Semaphore", false, 0, 0, 0);

    type->SetFunctions(5,
        ::uNewFunction("Create", Semaphore__Create, 0, true, Semaphore__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Release", type->__fp_Release, offsetof(Semaphore__uType, __fp_Release), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Release", type->__fp_Release_1, offsetof(Semaphore__uType, __fp_Release_1), false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("WaitOne", type->__fp_WaitOne, offsetof(Semaphore__uType, __fp_WaitOne), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("WaitOne", type->__fp_WaitOne_1, offsetof(Semaphore__uType, __fp_WaitOne_1), false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Semaphore___ObjInit(Semaphore* __this)
{
}

Semaphore* Semaphore__Create(::uStatic* __this, int initialCount, int maxCount)
{
    {
        return (Semaphore*)::app::Uno::Threading::AndroidSemaphore__New_1(NULL, initialCount, maxCount);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Feature not supported in this backend")));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SyncDispatcher__uType* SyncDispatcher__typeof()
{
    static ::uStaticStrong<SyncDispatcher__uType*> type;
    if (type != NULL) return type;

    type = (SyncDispatcher__uType*)::uAllocClassType(sizeof(SyncDispatcher__uType), "Uno.Threading.SyncDispatcher", false, 1, 0, 0);

    type->__interface_0.__fp_Invoke = (void(*)(void*, ::uDelegate*))SyncDispatcher__Invoke;

    type->SetInterfaces(
        ::app::Uno::Threading::IDispatcher__typeof(), offsetof(SyncDispatcher__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Invoke", SyncDispatcher__Invoke, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction(".ctor", SyncDispatcher__New_1, 0, true, SyncDispatcher__typeof()));

    ::uRegisterType(type);
    return type;
}

void SyncDispatcher___ObjInit(SyncDispatcher* __this)
{
}

void SyncDispatcher__Invoke(SyncDispatcher* __this, ::uDelegate* action)
{
    ::uPtr< ::uDelegate*>(action)->InvokeVoid();
}

SyncDispatcher* SyncDispatcher__New_1(::uStatic* __this)
{
    SyncDispatcher* inst = (SyncDispatcher*)::uAllocObject(sizeof(SyncDispatcher), SyncDispatcher__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Thread__uType* Thread__typeof()
{
    static ::uStaticStrong<Thread__uType*> type;
    if (type != NULL) return type;

    type = (Thread__uType*)::uAllocClassType(sizeof(Thread__uType), "Uno.Threading.Thread", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(Thread, _callback));

    type->SetFields(1,
        ::uNewField("_callback", NULL, offsetof(Thread, _callback), ::app::Uno::Action__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("Create", Thread__Create, 0, true, Thread__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunction("get_IsBackground", type->__fp_get_IsBackground, offsetof(Thread__uType, __fp_get_IsBackground), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Join", type->__fp_Join, offsetof(Thread__uType, __fp_Join), false),
        ::uNewFunctionVoid("set_IsBackground", type->__fp_set_IsBackground, offsetof(Thread__uType, __fp_set_IsBackground), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Sleep", Thread__Sleep, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Start", type->__fp_Start, offsetof(Thread__uType, __fp_Start), false));

    ::uRegisterType(type);
    return type;
}

void Thread___ObjInit(Thread* __this, ::uDelegate* callback)
{
    __this->_callback = callback;
}

Thread* Thread__Create(::uStatic* __this, ::uDelegate* callback)
{
    {
        return (Thread*)::app::Uno::Threading::POSIXThread__New_1(NULL, callback);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Feature not supported in this backend")));
}

void Thread__Sleep(::uStatic* __this, int millis)
{
    {
        ::app::Uno::Threading::POSIXThread__Sleep_1(NULL, millis);
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Feature not supported in this backend")));
}

}}}
