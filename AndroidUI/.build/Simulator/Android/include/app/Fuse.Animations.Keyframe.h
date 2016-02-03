// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_KEYFRAME_H__
#define __APP_FUSE_ANIMATIONS_KEYFRAME_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Keyframe;

struct Keyframe__uType : ::uClassType
{
};

Keyframe__uType* Keyframe__typeof();

void Keyframe___ObjInit(Keyframe* __this);
double Keyframe__CompleteFrames(::uStatic* __this, ::uObject* frames, float tension, float bias, float continuity);
float Keyframe__get_DegreesX(Keyframe* __this);
::app::Uno::Float2 Keyframe__get_DegreesXY(Keyframe* __this);
float Keyframe__get_DegreesY(Keyframe* __this);
float Keyframe__get_DegreesZ(Keyframe* __this);
::uObject* Keyframe__get_ObjectValue(Keyframe* __this);
::app::Uno::Float4 Keyframe__get_TangentIn(Keyframe* __this);
::app::Uno::Float4 Keyframe__get_TangentOut(Keyframe* __this);
double Keyframe__get_Time(Keyframe* __this);
double Keyframe__get_TimeDelta(Keyframe* __this);
::app::Uno::Float4 Keyframe__get_Value(Keyframe* __this);
float Keyframe__get_X(Keyframe* __this);
::app::Uno::Float2 Keyframe__get_XY(Keyframe* __this);
::app::Uno::Float3 Keyframe__get_XYZ(Keyframe* __this);
float Keyframe__get_Y(Keyframe* __this);
float Keyframe__get_Z(Keyframe* __this);
void Keyframe__KochanekBartelTangent(::uStatic* __this, ::app::Uno::Float4 pa, ::app::Uno::Float4 pb, ::app::Uno::Float4 pc, ::app::Uno::Float4 pd, float t, float b, float c, ::app::Uno::Float4* tangentIn, ::app::Uno::Float4* tangentOut);
Keyframe* Keyframe__New_1(::uStatic* __this);
void Keyframe__set_DegreesX(Keyframe* __this, float value);
void Keyframe__set_DegreesXY(Keyframe* __this, ::app::Uno::Float2 value);
void Keyframe__set_DegreesY(Keyframe* __this, float value);
void Keyframe__set_DegreesZ(Keyframe* __this, float value);
void Keyframe__set_ObjectValue(Keyframe* __this, ::uObject* value);
void Keyframe__set_TangentIn(Keyframe* __this, ::app::Uno::Float4 value);
void Keyframe__set_TangentOut(Keyframe* __this, ::app::Uno::Float4 value);
void Keyframe__set_Time(Keyframe* __this, double value);
void Keyframe__set_TimeDelta(Keyframe* __this, double value);
void Keyframe__set_Value(Keyframe* __this, ::app::Uno::Float4 value);
void Keyframe__set_X(Keyframe* __this, float value);
void Keyframe__set_XY(Keyframe* __this, ::app::Uno::Float2 value);
void Keyframe__set_XYZ(Keyframe* __this, ::app::Uno::Float3 value);
void Keyframe__set_Y(Keyframe* __this, float value);
void Keyframe__set_Z(Keyframe* __this, float value);

struct Keyframe : ::uObject
{
    ::app::Uno::Float4 _value;
    ::uStrong< ::uObject*> _objectValue;
    double _timeDelta;
    bool _hasTimeDelta;
    double _time;
    bool _hasTime;
    ::app::Uno::Float4 _tangentIn;
    ::app::Uno::Float4 _tangentOut;
    bool _hasTangentIn;
    bool _hasTangentOut;

    void _ObjInit() { Keyframe___ObjInit(this); }
    float DegreesX() { return Keyframe__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Keyframe__get_DegreesY(this); }
    float DegreesZ() { return Keyframe__get_DegreesZ(this); }
    ::uObject* ObjectValue() { return Keyframe__get_ObjectValue(this); }
    ::app::Uno::Float4 TangentIn();
    ::app::Uno::Float4 TangentOut();
    double Time() { return Keyframe__get_Time(this); }
    double TimeDelta() { return Keyframe__get_TimeDelta(this); }
    ::app::Uno::Float4 Value();
    float X() { return Keyframe__get_X(this); }
    ::app::Uno::Float2 XY();
    ::app::Uno::Float3 XYZ();
    float Y() { return Keyframe__get_Y(this); }
    float Z() { return Keyframe__get_Z(this); }
    void DegreesX(float value) { Keyframe__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Keyframe__set_DegreesY(this, value); }
    void DegreesZ(float value) { Keyframe__set_DegreesZ(this, value); }
    void ObjectValue(::uObject* value) { Keyframe__set_ObjectValue(this, value); }
    void TangentIn(::app::Uno::Float4 value);
    void TangentOut(::app::Uno::Float4 value);
    void Time(double value) { Keyframe__set_Time(this, value); }
    void TimeDelta(double value) { Keyframe__set_TimeDelta(this, value); }
    void Value(::app::Uno::Float4 value);
    void X(float value) { Keyframe__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void XYZ(::app::Uno::Float3 value);
    void Y(float value) { Keyframe__set_Y(this, value); }
    void Z(float value) { Keyframe__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Keyframe::DegreesXY() { return Keyframe__get_DegreesXY(this); }
inline ::app::Uno::Float4 Keyframe::TangentIn() { return Keyframe__get_TangentIn(this); }
inline ::app::Uno::Float4 Keyframe::TangentOut() { return Keyframe__get_TangentOut(this); }
inline ::app::Uno::Float4 Keyframe::Value() { return Keyframe__get_Value(this); }
inline ::app::Uno::Float2 Keyframe::XY() { return Keyframe__get_XY(this); }
inline ::app::Uno::Float3 Keyframe::XYZ() { return Keyframe__get_XYZ(this); }
inline void Keyframe::DegreesXY(::app::Uno::Float2 value) { Keyframe__set_DegreesXY(this, value); }
inline void Keyframe::TangentIn(::app::Uno::Float4 value) { Keyframe__set_TangentIn(this, value); }
inline void Keyframe::TangentOut(::app::Uno::Float4 value) { Keyframe__set_TangentOut(this, value); }
inline void Keyframe::Value(::app::Uno::Float4 value) { Keyframe__set_Value(this, value); }
inline void Keyframe::XY(::app::Uno::Float2 value) { Keyframe__set_XY(this, value); }
inline void Keyframe::XYZ(::app::Uno::Float3 value) { Keyframe__set_XYZ(this, value); }

}}}


#endif
