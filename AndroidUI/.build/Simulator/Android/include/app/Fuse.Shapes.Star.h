// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_STAR_H__
#define __APP_FUSE_SHAPES_STAR_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Shapes.PathShape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Star;

struct Star__uType : ::app::Fuse::Shapes::PathShape__uType
{
};

Star__uType* Star__typeof();

void Star___ObjInit_3(Star* __this);
::app::Uno::Float2 Star__get__offset(Star* __this);
int Star__get_Points(Star* __this);
float Star__get_Radius(Star* __this);
float Star__get_Ratio(Star* __this);
float Star__get_RotationDegrees(Star* __this);
float Star__get_RotationRadians(Star* __this);
float Star__get_RoundRatio(Star* __this);
float Star__get_SpokeRadius(Star* __this);
Star* Star__New_1(::uStatic* __this);
void Star__set_Points(Star* __this, int value);
void Star__set_Ratio(Star* __this, float value);
void Star__set_RotationDegrees(Star* __this, float value);
void Star__set_RoundRatio(Star* __this, float value);
void Star__UpdatePath(Star* __this);

struct Star : ::app::Fuse::Shapes::PathShape
{
    int _points;
    float _ratio;
    float _roundRatio;
    int _cachedPoints;
    float _cachedRadius;
    float _cachedSpokeRadius;
    float _cachedDegrees;
    float _cachedRoundRatio;
    float _degrees;

    void _ObjInit_3() { Star___ObjInit_3(this); }
    ::app::Uno::Float2 _offset();
    int Points() { return Star__get_Points(this); }
    float Radius() { return Star__get_Radius(this); }
    float Ratio() { return Star__get_Ratio(this); }
    float RotationDegrees() { return Star__get_RotationDegrees(this); }
    float RotationRadians() { return Star__get_RotationRadians(this); }
    float RoundRatio() { return Star__get_RoundRatio(this); }
    float SpokeRadius() { return Star__get_SpokeRadius(this); }
    void Points(int value) { Star__set_Points(this, value); }
    void Ratio(float value) { Star__set_Ratio(this, value); }
    void RotationDegrees(float value) { Star__set_RotationDegrees(this, value); }
    void RoundRatio(float value) { Star__set_RoundRatio(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float2 Star::_offset() { return Star__get__offset(this); }

}}}


#endif
