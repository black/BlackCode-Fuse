// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_EVENT_DATA_H__
#define __APP_FUSE_INPUT_POINTER_EVENT_DATA_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Input {

struct PointerEventData;

struct PointerEventData__uType : ::uClassType
{
};

PointerEventData__uType* PointerEventData__typeof();

void PointerEventData___ObjInit(PointerEventData* __this);
PointerEventData* PointerEventData__New_1(::uStatic* __this);

struct PointerEventData : ::uObject
{
    int PointIndex;
    ::app::Uno::Float2 WindowPoint;
    ::app::Uno::Float2 WheelDelta;
    int WheelDeltaMode;
    bool IsPrimary;
    int PointerType;
    double Timestamp;

    void _ObjInit() { PointerEventData___ObjInit(this); }
};

}}}


#endif
