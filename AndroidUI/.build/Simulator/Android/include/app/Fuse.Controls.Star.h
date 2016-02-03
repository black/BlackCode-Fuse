// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_STAR_H__
#define __APP_FUSE_CONTROLS_STAR_H__

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

namespace app {
namespace Fuse {
namespace Controls {

struct Star;

struct Star__uType : ::app::Fuse::Controls::Shape__uType
{
};

Star__uType* Star__typeof();

void Star___ObjInit_5(Star* __this);
int Star__get_Points(Star* __this);
float Star__get_Ratio(Star* __this);
float Star__get_RotationDegrees(Star* __this);
float Star__get_RotationRadians(Star* __this);
float Star__get_RoundRatio(Star* __this);
Star* Star__New_2(::uStatic* __this);
void Star__set_Points(Star* __this, int value);
void Star__set_Ratio(Star* __this, float value);
void Star__set_RotationDegrees(Star* __this, float value);
void Star__set_RoundRatio(Star* __this, float value);

struct Star : ::app::Fuse::Controls::Shape
{
    int _points;
    float _ratio;
    float _roundRatio;
    float _degrees;

    void _ObjInit_5() { Star___ObjInit_5(this); }
    int Points() { return Star__get_Points(this); }
    float Ratio() { return Star__get_Ratio(this); }
    float RotationDegrees() { return Star__get_RotationDegrees(this); }
    float RotationRadians() { return Star__get_RotationRadians(this); }
    float RoundRatio() { return Star__get_RoundRatio(this); }
    void Points(int value) { Star__set_Points(this, value); }
    void Ratio(float value) { Star__set_Ratio(this, value); }
    void RotationDegrees(float value) { Star__set_RotationDegrees(this, value); }
    void RoundRatio(float value) { Star__set_RoundRatio(this, value); }
};

}}}


#endif
