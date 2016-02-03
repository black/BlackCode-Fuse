// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE_H__
#define __APP_UNO_THREADING_FUTURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Future;

struct Future__uType : ::uClassType
{
    void(*__fp_Cancel)(Future*, bool);
    void(*__fp_Wait)(Future*);
};

Future__uType* Future__typeof();

void Future___ObjInit(Future* __this);
int Future__get_State(Future* __this);
void Future__set_State(Future* __this, int value);

struct Future : ::uObject
{
    int _State;

    void _ObjInit() { Future___ObjInit(this); }
    void Cancel(bool shutdownGracefully) { (((Future__uType*)this->__obj_type)->__fp_Cancel)(this, shutdownGracefully); }
    int State() { return Future__get_State(this); }
    void State(int value) { Future__set_State(this, value); }
    void Wait() { (((Future__uType*)this->__obj_type)->__fp_Wait)(this); }
};

}}}


#endif
