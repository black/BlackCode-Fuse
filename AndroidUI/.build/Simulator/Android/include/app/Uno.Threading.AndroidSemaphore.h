// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_ANDROID_SEMAPHORE_H__
#define __APP_UNO_THREADING_ANDROID_SEMAPHORE_H__

#include <app/Uno.Threading.PosixSemaphore.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct AndroidSemaphore;

struct AndroidSemaphore__uType : ::app::Uno::Threading::PosixSemaphore__uType
{
};

AndroidSemaphore__uType* AndroidSemaphore__typeof();

void AndroidSemaphore___ObjInit_2(AndroidSemaphore* __this, int initialCount, int maxCount);
void* AndroidSemaphore__CreateSemaphore(AndroidSemaphore* __this, int initialCount, int maxCount);
void AndroidSemaphore__FreeSemaphore(AndroidSemaphore* __this, void* handle);
AndroidSemaphore* AndroidSemaphore__New_1(::uStatic* __this, int initialCount, int maxCount);

struct AndroidSemaphore : ::app::Uno::Threading::PosixSemaphore
{
    void _ObjInit_2(int initialCount, int maxCount) { AndroidSemaphore___ObjInit_2(this, initialCount, maxCount); }
};

}}}


#endif
