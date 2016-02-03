// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_P_O_S_I_X_THREAD_H__
#define __APP_UNO_THREADING_P_O_S_I_X_THREAD_H__

#include <app/Uno.Threading.Thread.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Threading {

struct POSIXThread;

extern ::uStaticStrong< ::app::Uno::Collections::List__Uno_Action*> POSIXThread___callbacks;

struct POSIXThread__uType : ::app::Uno::Threading::Thread__uType
{
};

POSIXThread__uType* POSIXThread__typeof();

void POSIXThread__Finalize(POSIXThread* __this);
void POSIXThread___ObjInit_1(POSIXThread* __this, ::uDelegate* callback);
void POSIXThread___TypeInit(::uStatic* __this);
bool POSIXThread__get_IsBackground(POSIXThread* __this);
void POSIXThread__Join(POSIXThread* __this);
void POSIXThread__JoinImpl(POSIXThread* __this, ::uULong handle);
POSIXThread* POSIXThread__New_1(::uStatic* __this, ::uDelegate* callback);
void POSIXThread__set_IsBackground(POSIXThread* __this, bool value);
void POSIXThread__Sleep_1(::uStatic* __this, int millis);
void POSIXThread__SleepImpl(::uStatic* __this, ::uULong microSeconds);
void POSIXThread__Start(POSIXThread* __this);
void POSIXThread__StartImpl(POSIXThread* __this, ::uULong* handle, ::uDelegate* callback);

struct POSIXThread : ::app::Uno::Threading::Thread
{
    ::uULong _posixHandle;

    void _ObjInit_1(::uDelegate* callback) { POSIXThread___ObjInit_1(this, callback); }
    void JoinImpl(::uULong handle) { POSIXThread__JoinImpl(this, handle); }
    void StartImpl(::uULong* handle, ::uDelegate* callback) { POSIXThread__StartImpl(this, handle, callback); }
};

}}}


#endif
