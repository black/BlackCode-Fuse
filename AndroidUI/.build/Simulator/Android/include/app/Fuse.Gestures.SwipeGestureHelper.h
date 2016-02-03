// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_SWIPE_GESTURE_HELPER_H__
#define __APP_FUSE_GESTURES_SWIPE_GESTURE_HELPER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Gestures { struct DegreeSpan; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct SwipeGestureHelper;

struct SwipeGestureHelper__uType : ::uClassType
{
};

SwipeGestureHelper__uType* SwipeGestureHelper__typeof();

void SwipeGestureHelper___ObjInit(SwipeGestureHelper* __this, float lengthThreshold, ::uArray* spans);
bool SwipeGestureHelper__IsWithinBounds(SwipeGestureHelper* __this, ::app::Uno::Float2 vector);
SwipeGestureHelper* SwipeGestureHelper__New_1(::uStatic* __this, float lengthThreshold, ::uArray* spans);

struct SwipeGestureHelper : ::uObject
{
    ::uStrong< ::uArray*> _spans;
    float _lengthThreshold;

    void _ObjInit(float lengthThreshold, ::uArray* spans) { SwipeGestureHelper___ObjInit(this, lengthThreshold, spans); }
    bool IsWithinBounds(::app::Uno::Float2 vector);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Gestures {

inline bool SwipeGestureHelper::IsWithinBounds(::app::Uno::Float2 vector) { return SwipeGestureHelper__IsWithinBounds(this, vector); }

}}}


#endif
