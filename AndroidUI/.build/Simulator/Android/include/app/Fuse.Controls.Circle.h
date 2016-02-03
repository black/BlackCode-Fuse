// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_CIRCLE_H__
#define __APP_FUSE_CONTROLS_CIRCLE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Circle;

struct Circle__uType : ::app::Fuse::Controls::Shape__uType
{
};

Circle__uType* Circle__typeof();

void Circle___ObjInit_5(Circle* __this);
bool Circle__AngleInRange(::uStatic* __this, float angle, float start, float end);
::app::Uno::Float2 Circle__get_Center(Circle* __this);
float Circle__get_EffectiveEndAngle(Circle* __this);
float Circle__get_EffectiveEndAngleDegrees(Circle* __this);
float Circle__get_EndAngle(Circle* __this);
float Circle__get_EndAngleDegrees(Circle* __this);
float Circle__get_LengthAngle(Circle* __this);
float Circle__get_LengthAngleDegrees(Circle* __this);
float Circle__get_Radius(Circle* __this);
float Circle__get_StartAngle(Circle* __this);
float Circle__get_StartAngleDegrees(Circle* __this);
bool Circle__get_UseAngle(Circle* __this);
Circle* Circle__New_2(::uStatic* __this);
void Circle__set_EndAngle(Circle* __this, float value);
void Circle__set_EndAngleDegrees(Circle* __this, float value);
void Circle__set_LengthAngle(Circle* __this, float value);
void Circle__set_LengthAngleDegrees(Circle* __this, float value);
void Circle__set_StartAngle(Circle* __this, float value);
void Circle__set_StartAngleDegrees(Circle* __this, float value);

struct Circle : ::app::Fuse::Controls::Shape
{
    float _startAngle;
    float _endAngle;
    bool _hasAngle;
    float _lengthAngle;
    bool _hasLengthAngle;

    void _ObjInit_5() { Circle___ObjInit_5(this); }
    ::app::Uno::Float2 Center();
    float EffectiveEndAngle() { return Circle__get_EffectiveEndAngle(this); }
    float EffectiveEndAngleDegrees() { return Circle__get_EffectiveEndAngleDegrees(this); }
    float EndAngle() { return Circle__get_EndAngle(this); }
    float EndAngleDegrees() { return Circle__get_EndAngleDegrees(this); }
    float LengthAngle() { return Circle__get_LengthAngle(this); }
    float LengthAngleDegrees() { return Circle__get_LengthAngleDegrees(this); }
    float Radius() { return Circle__get_Radius(this); }
    float StartAngle() { return Circle__get_StartAngle(this); }
    float StartAngleDegrees() { return Circle__get_StartAngleDegrees(this); }
    bool UseAngle() { return Circle__get_UseAngle(this); }
    void EndAngle(float value) { Circle__set_EndAngle(this, value); }
    void EndAngleDegrees(float value) { Circle__set_EndAngleDegrees(this, value); }
    void LengthAngle(float value) { Circle__set_LengthAngle(this, value); }
    void LengthAngleDegrees(float value) { Circle__set_LengthAngleDegrees(this, value); }
    void StartAngle(float value) { Circle__set_StartAngle(this, value); }
    void StartAngleDegrees(float value) { Circle__set_StartAngleDegrees(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float2 Circle::Center() { return Circle__get_Center(this); }

}}}


#endif
