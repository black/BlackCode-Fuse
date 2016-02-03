// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_POSIX_SEMAPHORE_H__
#define __APP_UNO_THREADING_POSIX_SEMAPHORE_H__

#include <app/Uno.Threading.Semaphore.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct PosixSemaphore;

struct PosixSemaphore__uType : ::app::Uno::Threading::Semaphore__uType
{
    void*(*__fp_CreateSemaphore)(PosixSemaphore*, int, int);
    void(*__fp_FreeSemaphore)(PosixSemaphore*, void*);
};

PosixSemaphore__uType* PosixSemaphore__typeof();

void PosixSemaphore__Finalize(PosixSemaphore* __this);
void PosixSemaphore___ObjInit_1(PosixSemaphore* __this, int initialCount, int maxCount);
void PosixSemaphore__DecrementCounter(PosixSemaphore* __this);
void PosixSemaphore__IncrementCounter(PosixSemaphore* __this);
int PosixSemaphore__Release(PosixSemaphore* __this);
int PosixSemaphore__Release_1(PosixSemaphore* __this, int releaseCount);
int PosixSemaphore__ReleaseImpl(PosixSemaphore* __this, void* handle, int releaseCount);
bool PosixSemaphore__WaitOne(PosixSemaphore* __this);
bool PosixSemaphore__WaitOne_1(PosixSemaphore* __this, int timeoutMillis);
bool PosixSemaphore__WaitOneImpl(PosixSemaphore* __this, void* handle);
bool PosixSemaphore__WaitOneImpl_1(PosixSemaphore* __this, void* handle, int timeoutMillis);

struct PosixSemaphore : ::app::Uno::Threading::Semaphore
{
    void* _handle;
    int _currentCount;
    int _maxCount;

    void _ObjInit_1(int initialCount, int maxCount) { PosixSemaphore___ObjInit_1(this, initialCount, maxCount); }
    void* CreateSemaphore(int initialCount, int maxCount) { return (((PosixSemaphore__uType*)this->__obj_type)->__fp_CreateSemaphore)(this, initialCount, maxCount); }
    void DecrementCounter() { PosixSemaphore__DecrementCounter(this); }
    void FreeSemaphore(void* handle) { (((PosixSemaphore__uType*)this->__obj_type)->__fp_FreeSemaphore)(this, handle); }
    void IncrementCounter() { PosixSemaphore__IncrementCounter(this); }
    int ReleaseImpl(void* handle, int releaseCount) { return PosixSemaphore__ReleaseImpl(this, handle, releaseCount); }
    bool WaitOneImpl(void* handle) { return PosixSemaphore__WaitOneImpl(this, handle); }
    bool WaitOneImpl_1(void* handle, int timeoutMillis) { return PosixSemaphore__WaitOneImpl_1(this, handle, timeoutMillis); }
};

}}}


#endif
