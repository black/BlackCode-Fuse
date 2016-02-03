// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_TASK__UNO_NET_I_P_END_POINT___H__
#define __APP_OUTRACKS_SIMULATOR_TASK__UNO_NET_I_P_END_POINT___H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Task__Uno_Net_IPEndPoint__;

struct Task__Uno_Net_IPEndPoint____uType : ::uClassType
{
};

Task__Uno_Net_IPEndPoint____uType* Task__Uno_Net_IPEndPoint____typeof();

void Task__Uno_Net_IPEndPoint_____ObjInit(Task__Uno_Net_IPEndPoint__* __this, ::uDelegate* wait);
::app::Uno::Exception* Task__Uno_Net_IPEndPoint____get_Exception(Task__Uno_Net_IPEndPoint__* __this);
bool Task__Uno_Net_IPEndPoint____get_IsCompleted(Task__Uno_Net_IPEndPoint__* __this);
bool Task__Uno_Net_IPEndPoint____get_IsFaulted(Task__Uno_Net_IPEndPoint__* __this);
::uArray* Task__Uno_Net_IPEndPoint____get_Result(Task__Uno_Net_IPEndPoint__* __this);
Task__Uno_Net_IPEndPoint__* Task__Uno_Net_IPEndPoint____New_1(::uStatic* __this, ::uDelegate* wait);
void Task__Uno_Net_IPEndPoint____set_Exception(Task__Uno_Net_IPEndPoint__* __this, ::app::Uno::Exception* value);
void Task__Uno_Net_IPEndPoint____set_IsCompleted(Task__Uno_Net_IPEndPoint__* __this, bool value);
void Task__Uno_Net_IPEndPoint____set_IsFaulted(Task__Uno_Net_IPEndPoint__* __this, bool value);
void Task__Uno_Net_IPEndPoint____set_Result(Task__Uno_Net_IPEndPoint__* __this, ::uArray* value);

struct Task__Uno_Net_IPEndPoint__ : ::uObject
{
    ::uStrong< ::app::Uno::Threading::Mutex*> Mutex;
    ::uStrong< ::uDelegate*> _wait;
    ::uStrong< ::uArray*> _result;
    bool _IsCompleted;
    bool _IsFaulted;
    ::uStrong< ::app::Uno::Exception*> _Exception;

    void _ObjInit(::uDelegate* wait) { Task__Uno_Net_IPEndPoint_____ObjInit(this, wait); }
    ::app::Uno::Exception* Exception() { return Task__Uno_Net_IPEndPoint____get_Exception(this); }
    bool IsCompleted() { return Task__Uno_Net_IPEndPoint____get_IsCompleted(this); }
    bool IsFaulted() { return Task__Uno_Net_IPEndPoint____get_IsFaulted(this); }
    ::uArray* Result() { return Task__Uno_Net_IPEndPoint____get_Result(this); }
    void Exception(::app::Uno::Exception* value) { Task__Uno_Net_IPEndPoint____set_Exception(this, value); }
    void IsCompleted(bool value) { Task__Uno_Net_IPEndPoint____set_IsCompleted(this, value); }
    void IsFaulted(bool value) { Task__Uno_Net_IPEndPoint____set_IsFaulted(this, value); }
    void Result(::uArray* value) { Task__Uno_Net_IPEndPoint____set_Result(this, value); }
};

}}}


#endif
