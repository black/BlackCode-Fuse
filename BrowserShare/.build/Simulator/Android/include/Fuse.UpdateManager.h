// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct SimpleLock;}}}
namespace g{namespace Fuse{struct Stage;}}
namespace g{namespace Fuse{struct UpdateListener;}}
namespace g{namespace Fuse{struct UpdateManager;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// public static class UpdateManager :6643
// {
uClassType* UpdateManager_typeof();
void UpdateManager__AddAction_fn(uDelegate* pu, int* stage);
void UpdateManager__AddDeferredAction_fn(uDelegate* pu);
void UpdateManager__AddOnceAction_fn(uDelegate* pu, int* stage);
void UpdateManager__get_FrameIndex_fn(int* __retval);
void UpdateManager__IncreaseFrameIndex_fn();
void UpdateManager__IsPastStage_fn(int* stage, bool* __retval);
void UpdateManager__PerformNextFrame_fn(uDelegate* pu, int* stage);
void UpdateManager__PostAction_fn(uDelegate* pu);
void UpdateManager__ProcessPostActions_fn();
void UpdateManager__RemoveAction_fn(uDelegate* pu, int* stage);
void UpdateManager__RemoveFrom_fn(::g::Uno::Collections::List* list, uDelegate* action, bool* __retval);
void UpdateManager__RemoveOnceAction_fn(uDelegate* pu, int* stage);
void UpdateManager__Update_fn();
void UpdateManager__Update1_fn(::g::Fuse::Stage* stage);

struct UpdateManager : uObject
{
    static int _currentStage_;
    static int& _currentStage() { return UpdateManager_typeof()->Init(), _currentStage_; }
    static int _frameIndex_;
    static int& _frameIndex() { return UpdateManager_typeof()->Init(), _frameIndex_; }
    static uSStrong< ::g::Uno::Collections::List*> _phaseDeferredActions_;
    static uSStrong< ::g::Uno::Collections::List*>& _phaseDeferredActions() { return UpdateManager_typeof()->Init(), _phaseDeferredActions_; }
    static uSStrong< ::g::Fuse::Internal::SimpleLock*> _postActionLock_;
    static uSStrong< ::g::Fuse::Internal::SimpleLock*>& _postActionLock() { return UpdateManager_typeof()->Init(), _postActionLock_; }
    static uSStrong< ::g::Uno::Collections::List*> _postActions_;
    static uSStrong< ::g::Uno::Collections::List*>& _postActions() { return UpdateManager_typeof()->Init(), _postActions_; }
    static uSStrong< ::g::Uno::Collections::List*> _postActionsSwap_;
    static uSStrong< ::g::Uno::Collections::List*>& _postActionsSwap() { return UpdateManager_typeof()->Init(), _postActionsSwap_; }
    static uSStrong< ::g::Uno::Collections::List*> _stages_;
    static uSStrong< ::g::Uno::Collections::List*>& _stages() { return UpdateManager_typeof()->Init(), _stages_; }
    static uSStrong<uObject*> Dispatcher_;
    static uSStrong<uObject*>& Dispatcher() { return UpdateManager_typeof()->Init(), Dispatcher_; }

    static void AddAction(uDelegate* pu, int stage);
    static void AddDeferredAction(uDelegate* pu);
    static void AddOnceAction(uDelegate* pu, int stage);
    static void IncreaseFrameIndex();
    static bool IsPastStage(int stage);
    static void PerformNextFrame(uDelegate* pu, int stage);
    static void PostAction(uDelegate* pu);
    static void ProcessPostActions();
    static void RemoveAction(uDelegate* pu, int stage);
    static bool RemoveFrom(::g::Uno::Collections::List* list, uDelegate* action);
    static void RemoveOnceAction(uDelegate* pu, int stage);
    static void Update();
    static void Update1(::g::Fuse::Stage* stage);
    static int FrameIndex();
};
// }

}} // ::g::Fuse
