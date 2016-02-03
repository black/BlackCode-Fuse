// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_EVENT_ARGS_H__
#define __APP_FUSE_INPUT_POINTER_EVENT_ARGS_H__

#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerEventArgs;

struct PointerEventArgs__uType : ::app::Fuse::NodeEventArgs__uType
{
};

PointerEventArgs__uType* PointerEventArgs__typeof();

void PointerEventArgs___ObjInit_2(PointerEventArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node);
void PointerEventArgs__Fuse_Scripting_IScriptEvent_Serialize_1(PointerEventArgs* __this, ::uObject* s);
::app::Fuse::Input::PointerEventData* PointerEventArgs__get_Data(PointerEventArgs* __this);
bool PointerEventArgs__get_IsHardCaptured(PointerEventArgs* __this);
bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this);
int PointerEventArgs__get_PointerType(PointerEventArgs* __this);
int PointerEventArgs__get_PointIndex(PointerEventArgs* __this);
double PointerEventArgs__get_Timestamp(PointerEventArgs* __this);
::app::Uno::Float2 PointerEventArgs__get_WheelDelta(PointerEventArgs* __this);
int PointerEventArgs__get_WheelDeltaMode(PointerEventArgs* __this);
::app::Uno::Float2 PointerEventArgs__get_WindowPoint(PointerEventArgs* __this);
bool PointerEventArgs__IsHardCapturedTo(PointerEventArgs* __this, ::uObject* behavior);
bool PointerEventArgs__IsSoftCapturedTo(PointerEventArgs* __this, ::uObject* behavior);
void PointerEventArgs__ReleaseHardCapture(PointerEventArgs* __this, ::uObject* behavior);
void PointerEventArgs__ReleaseSoftCapture(PointerEventArgs* __this, ::uObject* behavior);
bool PointerEventArgs__TryHardCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode);
bool PointerEventArgs__TrySoftCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode);

struct PointerEventArgs : ::app::Fuse::NodeEventArgs
{
    ::uStrong< ::app::Fuse::Input::PointerEventData*> _data;

    void _ObjInit_2(::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node) { PointerEventArgs___ObjInit_2(this, data, node); }
    ::app::Fuse::Input::PointerEventData* Data() { return PointerEventArgs__get_Data(this); }
    bool IsHardCaptured() { return PointerEventArgs__get_IsHardCaptured(this); }
    bool IsPrimary() { return PointerEventArgs__get_IsPrimary(this); }
    int PointerType() { return PointerEventArgs__get_PointerType(this); }
    int PointIndex() { return PointerEventArgs__get_PointIndex(this); }
    double Timestamp() { return PointerEventArgs__get_Timestamp(this); }
    ::app::Uno::Float2 WheelDelta();
    int WheelDeltaMode() { return PointerEventArgs__get_WheelDeltaMode(this); }
    ::app::Uno::Float2 WindowPoint();
    bool IsHardCapturedTo(::uObject* behavior) { return PointerEventArgs__IsHardCapturedTo(this, behavior); }
    bool IsSoftCapturedTo(::uObject* behavior) { return PointerEventArgs__IsSoftCapturedTo(this, behavior); }
    void ReleaseHardCapture(::uObject* behavior) { PointerEventArgs__ReleaseHardCapture(this, behavior); }
    void ReleaseSoftCapture(::uObject* behavior) { PointerEventArgs__ReleaseSoftCapture(this, behavior); }
    bool TryHardCapture(::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode) { return PointerEventArgs__TryHardCapture(this, identity, lostCallback, captureNode); }
    bool TrySoftCapture(::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode) { return PointerEventArgs__TrySoftCapture(this, identity, lostCallback, captureNode); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Input {

inline ::app::Uno::Float2 PointerEventArgs::WheelDelta() { return PointerEventArgs__get_WheelDelta(this); }
inline ::app::Uno::Float2 PointerEventArgs::WindowPoint() { return PointerEventArgs__get_WindowPoint(this); }

}}}


#endif
