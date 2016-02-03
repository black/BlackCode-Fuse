// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION1_DEFER_LOCK_IMPL__UNO_EVENT_HANDLER_H__
#define __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION1_DEFER_LOCK_IMPL__UNO_EVENT_HANDLER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection__Uno_EventHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ConcurrentCollection1_DeferLockImpl__Uno_EventHandler;

struct ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType* ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__typeof();

void ConcurrentCollection1_DeferLockImpl__Uno_EventHandler___ObjInit(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler* __this, ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler* c);
void ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__Dispose(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler* __this);
ConcurrentCollection1_DeferLockImpl__Uno_EventHandler* ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__New_1(::uStatic* __this, ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler* c);

struct ConcurrentCollection1_DeferLockImpl__Uno_EventHandler : ::uObject
{
    ::uStrong< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*> _collection;

    void _ObjInit(::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler* c) { ConcurrentCollection1_DeferLockImpl__Uno_EventHandler___ObjInit(this, c); }
    void Dispose() { ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__Dispose(this); }
};

}}}


#endif
