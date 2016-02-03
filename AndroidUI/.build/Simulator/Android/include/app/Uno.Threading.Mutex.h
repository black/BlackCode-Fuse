// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_MUTEX_H__
#define __APP_UNO_THREADING_MUTEX_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Mutex;

struct Mutex__uType : ::uClassType
{
    void(*__fp_Lock)(Mutex*);
    void(*__fp_Unlock)(Mutex*);
};

Mutex__uType* Mutex__typeof();

void Mutex___ObjInit(Mutex* __this);
Mutex* Mutex__Create(::uStatic* __this);

struct Mutex : ::uObject
{
    void _ObjInit() { Mutex___ObjInit(this); }
    void Lock() { (((Mutex__uType*)this->__obj_type)->__fp_Lock)(this); }
    void Unlock() { (((Mutex__uType*)this->__obj_type)->__fp_Unlock)(this); }
};

}}}


#endif
