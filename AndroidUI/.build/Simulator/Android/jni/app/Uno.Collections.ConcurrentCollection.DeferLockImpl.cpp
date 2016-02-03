#include <app/Uno.Collections.ConcurrentCollection__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.ConcurrentCollection__Uno_EventHandler.h>
#include <app/Uno.Collections.ConcurrentCollection1_DeferLockImpl__Fuse_Anima-274f2287.h>
#include <app/Uno.Collections.ConcurrentCollection1_DeferLockImpl__Uno_EventHandler.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__typeof()
{
    static ::uStaticStrong<ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType*)::uAllocClassType(sizeof(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>.DeferLockImpl", false, 1, 1, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType, __interface_0));

    type->SetStrongRefs(
        "_collection", offsetof(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster, _collection));

    return type;
}

void ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster___ObjInit(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* __this, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* c)
{
    __this->_collection = c;
}

void ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__Dispose(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* __this)
{
    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(__this->_collection)->EndDefer();
}

ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* c)
{
    ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* inst = (ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster*)::uAllocObject(sizeof(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster), ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__typeof());
    inst->_ObjInit(c);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType* ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__typeof()
{
    static ::uStaticStrong<ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType*)::uAllocClassType(sizeof(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType), "Uno.Collections.ConcurrentCollection<Uno.EventHandler>.DeferLockImpl", false, 1, 1, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType, __interface_0));

    type->SetStrongRefs(
        "_collection", offsetof(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler, _collection));

    return type;
}

void ConcurrentCollection1_DeferLockImpl__Uno_EventHandler___ObjInit(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler* __this, ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler* c)
{
    __this->_collection = c;
}

void ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__Dispose(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler* __this)
{
    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*>(__this->_collection)->EndDefer();
}

ConcurrentCollection1_DeferLockImpl__Uno_EventHandler* ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__New_1(::uStatic* __this, ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler* c)
{
    ConcurrentCollection1_DeferLockImpl__Uno_EventHandler* inst = (ConcurrentCollection1_DeferLockImpl__Uno_EventHandler*)::uAllocObject(sizeof(ConcurrentCollection1_DeferLockImpl__Uno_EventHandler), ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__typeof());
    inst->_ObjInit(c);
    return inst;
}

}}}
