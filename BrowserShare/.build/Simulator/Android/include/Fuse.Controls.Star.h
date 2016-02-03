// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct Star;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Star :3792
// {
::g::Fuse::Controls::Panel_type* Star_typeof();
void Star__ctor_5_fn(Star* __this);
void Star__New2_fn(Star** __retval);
void Star__get_Points_fn(Star* __this, int* __retval);
void Star__set_Points_fn(Star* __this, int* value);
void Star__get_Ratio_fn(Star* __this, float* __retval);
void Star__set_Ratio_fn(Star* __this, float* value);
void Star__get_RotationDegrees_fn(Star* __this, float* __retval);
void Star__set_RotationDegrees_fn(Star* __this, float* value);
void Star__get_RotationRadians_fn(Star* __this, float* __retval);
void Star__get_RoundRatio_fn(Star* __this, float* __retval);
void Star__set_RoundRatio_fn(Star* __this, float* value);

struct Star : ::g::Fuse::Controls::Shape
{
    float _degrees;
    int _points;
    float _ratio;
    float _roundRatio;

    void ctor_5();
    int Points();
    void Points(int value);
    float Ratio();
    void Ratio(float value);
    float RotationDegrees();
    void RotationDegrees(float value);
    float RotationRadians();
    float RoundRatio();
    void RoundRatio(float value);
    static Star* New2();
};
// }

}}} // ::g::Fuse::Controls
