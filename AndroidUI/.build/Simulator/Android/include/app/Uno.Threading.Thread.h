// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_THREAD_H__
#define __APP_UNO_THREADING_THREAD_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Thread;

struct Thread__uType : ::uClassType
{
    bool(*__fp_get_IsBackground)(Thread*);
    void(*__fp_Join)(Thread*);
    void(*__fp_set_IsBackground)(Thread*, bool);
    void(*__fp_Start)(Thread*);
};

Thread__uType* Thread__typeof();

void Thread___ObjInit(Thread* __this, ::uDelegate* callback);
Thread* Thread__Create(::uStatic* __this, ::uDelegate* callback);
void Thread__Sleep(::uStatic* __this, int millis);

struct Thread : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::uDelegate* callback) { Thread___ObjInit(this, callback); }
    bool IsBackground() { return (((Thread__uType*)this->__obj_type)->__fp_get_IsBackground)(this); }
    void Join() { (((Thread__uType*)this->__obj_type)->__fp_Join)(this); }
    void IsBackground(bool value) { (((Thread__uType*)this->__obj_type)->__fp_set_IsBackground)(this, value); }
    void Start() { (((Thread__uType*)this->__obj_type)->__fp_Start)(this); }
};

}}}


#endif
