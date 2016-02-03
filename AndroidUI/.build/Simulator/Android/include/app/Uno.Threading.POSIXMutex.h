// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_P_O_S_I_X_MUTEX_H__
#define __APP_UNO_THREADING_P_O_S_I_X_MUTEX_H__

#include <app/Uno.Threading.Mutex.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct POSIXMutex;

struct POSIXMutex__uType : ::app::Uno::Threading::Mutex__uType
{
};

POSIXMutex__uType* POSIXMutex__typeof();

void POSIXMutex__Finalize(POSIXMutex* __this);
void POSIXMutex___ObjInit_1(POSIXMutex* __this);
void POSIXMutex__FreeMutex(POSIXMutex* __this, void* handle);
void POSIXMutex__Lock(POSIXMutex* __this);
void POSIXMutex__LockImpl(POSIXMutex* __this, void* handle);
POSIXMutex* POSIXMutex__New_1(::uStatic* __this);
void POSIXMutex__Unlock(POSIXMutex* __this);
void POSIXMutex__UnlockImpl(POSIXMutex* __this, void* handle);

struct POSIXMutex : ::app::Uno::Threading::Mutex
{
    void* _handle;

    void _ObjInit_1() { POSIXMutex___ObjInit_1(this); }
    void FreeMutex(void* handle) { POSIXMutex__FreeMutex(this, handle); }
    void LockImpl(void* handle) { POSIXMutex__LockImpl(this, handle); }
    void UnlockImpl(void* handle) { POSIXMutex__UnlockImpl(this, handle); }
};

}}}


#endif
