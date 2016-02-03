// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_SEMAPHORE_H__
#define __APP_UNO_THREADING_SEMAPHORE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Semaphore;

struct Semaphore__uType : ::uClassType
{
    int(*__fp_Release)(Semaphore*);
    int(*__fp_Release_1)(Semaphore*, int);
    bool(*__fp_WaitOne)(Semaphore*);
    bool(*__fp_WaitOne_1)(Semaphore*, int);
};

Semaphore__uType* Semaphore__typeof();

void Semaphore___ObjInit(Semaphore* __this);
Semaphore* Semaphore__Create(::uStatic* __this, int initialCount, int maxCount);

struct Semaphore : ::uObject
{
    void _ObjInit() { Semaphore___ObjInit(this); }
    int Release() { return (((Semaphore__uType*)this->__obj_type)->__fp_Release)(this); }
    int Release_1(int releaseCount) { return (((Semaphore__uType*)this->__obj_type)->__fp_Release_1)(this, releaseCount); }
    bool WaitOne() { return (((Semaphore__uType*)this->__obj_type)->__fp_WaitOne)(this); }
    bool WaitOne_1(int timeoutMillis) { return (((Semaphore__uType*)this->__obj_type)->__fp_WaitOne_1)(this, timeoutMillis); }
};

}}}


#endif
