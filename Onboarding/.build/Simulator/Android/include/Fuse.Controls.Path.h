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
namespace g{namespace Fuse{namespace Controls{struct Path;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Path :2659
// {
::g::Fuse::Controls::Panel_type* Path_typeof();
void Path__ctor_5_fn(Path* __this);
void Path__get_ContentAlignment_fn(Path* __this, int* __retval);
void Path__set_ContentAlignment_fn(Path* __this, int* value);
void Path__get_Data_fn(Path* __this, uString** __retval);
void Path__set_Data_fn(Path* __this, uString* value);
void Path__get_FillRule_fn(Path* __this, int* __retval);
void Path__set_FillRule_fn(Path* __this, int* value);
void Path__get_FitMode_fn(Path* __this, int* __retval);
void Path__set_FitMode_fn(Path* __this, int* value);
void Path__get_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry** __retval);
void Path__set_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry* value);
void Path__New2_fn(Path** __retval);
void Path__get_ScaleMode_fn(Path* __this, int* __retval);
void Path__set_ScaleMode_fn(Path* __this, int* value);
void Path__get_Sizing_fn(Path* __this, ::g::Fuse::Internal::SizingContainer** __retval);
void Path__get_StretchDirection_fn(Path* __this, int* __retval);
void Path__set_StretchDirection_fn(Path* __this, int* value);
void Path__get_StretchMode_fn(Path* __this, int* __retval);
void Path__set_StretchMode_fn(Path* __this, int* value);

struct Path : ::g::Fuse::Controls::Shape
{
    int _fillRule;
    int _fitMode;
    uStrong< ::g::Fuse::Drawing::PathGeometry*> _geometry;
    int _scaleMode;
    uStrong< ::g::Fuse::Internal::SizingContainer*> sizing;

    void ctor_5();
    int ContentAlignment();
    void ContentAlignment(int value);
    uString* Data();
    void Data(uString* value);
    int FillRule();
    void FillRule(int value);
    int FitMode();
    void FitMode(int value);
    ::g::Fuse::Drawing::PathGeometry* Geometry();
    void Geometry(::g::Fuse::Drawing::PathGeometry* value);
    int ScaleMode();
    void ScaleMode(int value);
    ::g::Fuse::Internal::SizingContainer* Sizing();
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    static Path* New2();
};
// }

}}} // ::g::Fuse::Controls
