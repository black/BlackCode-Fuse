// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION__UNO_EVENT_HANDLER_H__
#define __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION__UNO_EVENT_HANDLER_H__

#include <app/Uno.Collections.IEnumerable__Uno_EventHandler.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_DeferLockImpl__Uno_EventHandler; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_EventHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ConcurrentCollection__Uno_EventHandler;

struct ConcurrentCollection__Uno_EventHandler__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_EventHandler __interface_0;
};

ConcurrentCollection__Uno_EventHandler__uType* ConcurrentCollection__Uno_EventHandler__typeof();

void ConcurrentCollection__Uno_EventHandler___ObjInit(ConcurrentCollection__Uno_EventHandler* __this);
void ConcurrentCollection__Uno_EventHandler__Add(ConcurrentCollection__Uno_EventHandler* __this, ::uDelegate* item);
void ConcurrentCollection__Uno_EventHandler__Clear(ConcurrentCollection__Uno_EventHandler* __this);
bool ConcurrentCollection__Uno_EventHandler__Contains(ConcurrentCollection__Uno_EventHandler* __this, ::uDelegate* item);
void ConcurrentCollection__Uno_EventHandler__DeferChanges(ConcurrentCollection__Uno_EventHandler* __this);
::uObject* ConcurrentCollection__Uno_EventHandler__DeferLock(ConcurrentCollection__Uno_EventHandler* __this);
void ConcurrentCollection__Uno_EventHandler__EndDefer(ConcurrentCollection__Uno_EventHandler* __this);
int ConcurrentCollection__Uno_EventHandler__get_Count(ConcurrentCollection__Uno_EventHandler* __this);
::uDelegate* ConcurrentCollection__Uno_EventHandler__get_Item(ConcurrentCollection__Uno_EventHandler* __this, int index);
::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* ConcurrentCollection__Uno_EventHandler__get_Mod(ConcurrentCollection__Uno_EventHandler* __this);
::uObject* ConcurrentCollection__Uno_EventHandler__GetEnumerator(ConcurrentCollection__Uno_EventHandler* __this);
ConcurrentCollection__Uno_EventHandler* ConcurrentCollection__Uno_EventHandler__New_1(::uStatic* __this);
bool ConcurrentCollection__Uno_EventHandler__Remove(ConcurrentCollection__Uno_EventHandler* __this, ::uDelegate* item);

struct ConcurrentCollection__Uno_EventHandler : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_EventHandler*> _back;
    ::uStrong< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*> _mod;
    bool _defer;
    ::uStrong< ::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Uno_EventHandler*> _lockImpl;

    void _ObjInit() { ConcurrentCollection__Uno_EventHandler___ObjInit(this); }
    void Add(::uDelegate* item) { ConcurrentCollection__Uno_EventHandler__Add(this, item); }
    void Clear() { ConcurrentCollection__Uno_EventHandler__Clear(this); }
    bool Contains(::uDelegate* item) { return ConcurrentCollection__Uno_EventHandler__Contains(this, item); }
    void DeferChanges() { ConcurrentCollection__Uno_EventHandler__DeferChanges(this); }
    ::uObject* DeferLock() { return ConcurrentCollection__Uno_EventHandler__DeferLock(this); }
    void EndDefer() { ConcurrentCollection__Uno_EventHandler__EndDefer(this); }
    int Count() { return ConcurrentCollection__Uno_EventHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return ConcurrentCollection__Uno_EventHandler__get_Item(this, index); }
    ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* Mod() { return ConcurrentCollection__Uno_EventHandler__get_Mod(this); }
    ::uObject* GetEnumerator() { return ConcurrentCollection__Uno_EventHandler__GetEnumerator(this); }
    bool Remove(::uDelegate* item) { return ConcurrentCollection__Uno_EventHandler__Remove(this, item); }
};

}}}


#endif
