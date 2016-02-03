// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION__FUSE_ANIMATIONS_I_MIXER_MASTER_H__
#define __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION__FUSE_ANIMATIONS_I_MIXER_MASTER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_IMixerMaster; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ConcurrentCollection__Fuse_Animations_IMixerMaster;

struct ConcurrentCollection__Fuse_Animations_IMixerMaster__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Animations_IMixerMaster __interface_0;
};

ConcurrentCollection__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof();

void ConcurrentCollection__Fuse_Animations_IMixerMaster___ObjInit(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
void ConcurrentCollection__Fuse_Animations_IMixerMaster__Add(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void ConcurrentCollection__Fuse_Animations_IMixerMaster__Clear(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
bool ConcurrentCollection__Fuse_Animations_IMixerMaster__Contains(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferChanges(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferLock(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
void ConcurrentCollection__Fuse_Animations_IMixerMaster__EndDefer(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
int ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Count(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Item(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, int index);
::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Mod(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__GetEnumerator(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
ConcurrentCollection__Fuse_Animations_IMixerMaster* ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this);
bool ConcurrentCollection__Fuse_Animations_IMixerMaster__Remove(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item);

struct ConcurrentCollection__Fuse_Animations_IMixerMaster : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*> _back;
    ::uStrong< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*> _mod;
    bool _defer;
    ::uStrong< ::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster*> _lockImpl;

    void _ObjInit() { ConcurrentCollection__Fuse_Animations_IMixerMaster___ObjInit(this); }
    void Add(::uObject* item) { ConcurrentCollection__Fuse_Animations_IMixerMaster__Add(this, item); }
    void Clear() { ConcurrentCollection__Fuse_Animations_IMixerMaster__Clear(this); }
    bool Contains(::uObject* item) { return ConcurrentCollection__Fuse_Animations_IMixerMaster__Contains(this, item); }
    void DeferChanges() { ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferChanges(this); }
    ::uObject* DeferLock() { return ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferLock(this); }
    void EndDefer() { ConcurrentCollection__Fuse_Animations_IMixerMaster__EndDefer(this); }
    int Count() { return ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Count(this); }
    ::uObject* Item(int index) { return ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Item(this, index); }
    ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* Mod() { return ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Mod(this); }
    ::uObject* GetEnumerator() { return ConcurrentCollection__Fuse_Animations_IMixerMaster__GetEnumerator(this); }
    bool Remove(::uObject* item) { return ConcurrentCollection__Fuse_Animations_IMixerMaster__Remove(this, item); }
};

}}}


#endif
