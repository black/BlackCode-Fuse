// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class PointerEventArgs :677
// {
::g::Fuse::NodeEventArgs_type* PointerEventArgs_typeof();
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
void PointerEventArgs__get_Data_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData** __retval);
void PointerEventArgs__get_IsHardCaptured_fn(PointerEventArgs* __this, bool* __retval);
void PointerEventArgs__IsHardCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval);
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval);
void PointerEventArgs__IsSoftCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval);
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__ReleaseHardCapture_fn(PointerEventArgs* __this, uObject* behavior);
void PointerEventArgs__ReleaseSoftCapture_fn(PointerEventArgs* __this, uObject* behavior);
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s);
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval);
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode, bool* __retval);
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode, bool* __retval);
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);
void PointerEventArgs__get_WheelDeltaMode_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);

struct PointerEventArgs : ::g::Fuse::NodeEventArgs
{
    uStrong< ::g::Fuse::Input::PointerEventData*> _data;

    void ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
    ::g::Fuse::Input::PointerEventData* Data();
    bool IsHardCaptured();
    bool IsHardCapturedTo(uObject* behavior);
    bool IsPrimary();
    bool IsSoftCapturedTo(uObject* behavior);
    int PointerType();
    int PointIndex();
    void ReleaseHardCapture(uObject* behavior);
    void ReleaseSoftCapture(uObject* behavior);
    double Timestamp();
    bool TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode);
    bool TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode);
    ::g::Uno::Float2 WheelDelta();
    int WheelDeltaMode();
    ::g::Uno::Float2 WindowPoint();
};
// }

}}} // ::g::Fuse::Input
