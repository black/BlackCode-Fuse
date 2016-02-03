// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PATH_H__
#define __APP_FUSE_CONTROLS_PATH_H__

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
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct Path;

struct Path__uType : ::app::Fuse::Controls::Shape__uType
{
};

Path__uType* Path__typeof();

void Path___ObjInit_5(Path* __this);
int Path__get_ContentAlignment(Path* __this);
::uString* Path__get_Data(Path* __this);
int Path__get_FillRule(Path* __this);
int Path__get_FitMode(Path* __this);
::app::Fuse::Drawing::PathGeometry* Path__get_Geometry(Path* __this);
int Path__get_ScaleMode(Path* __this);
::app::Fuse::Internal::SizingContainer* Path__get_Sizing(Path* __this);
int Path__get_StretchDirection(Path* __this);
int Path__get_StretchMode(Path* __this);
Path* Path__New_2(::uStatic* __this);
void Path__set_ContentAlignment(Path* __this, int value);
void Path__set_Data(Path* __this, ::uString* value);
void Path__set_FillRule(Path* __this, int value);
void Path__set_FitMode(Path* __this, int value);
void Path__set_Geometry(Path* __this, ::app::Fuse::Drawing::PathGeometry* value);
void Path__set_ScaleMode(Path* __this, int value);
void Path__set_StretchDirection(Path* __this, int value);
void Path__set_StretchMode(Path* __this, int value);

struct Path : ::app::Fuse::Controls::Shape
{
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> sizing;
    int _fitMode;
    int _scaleMode;
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> _geometry;
    int _fillRule;

    void _ObjInit_5() { Path___ObjInit_5(this); }
    int ContentAlignment() { return Path__get_ContentAlignment(this); }
    ::uString* Data() { return Path__get_Data(this); }
    int FillRule() { return Path__get_FillRule(this); }
    int FitMode() { return Path__get_FitMode(this); }
    ::app::Fuse::Drawing::PathGeometry* Geometry() { return Path__get_Geometry(this); }
    int ScaleMode() { return Path__get_ScaleMode(this); }
    ::app::Fuse::Internal::SizingContainer* Sizing() { return Path__get_Sizing(this); }
    int StretchDirection() { return Path__get_StretchDirection(this); }
    int StretchMode() { return Path__get_StretchMode(this); }
    void ContentAlignment(int value) { Path__set_ContentAlignment(this, value); }
    void Data(::uString* value) { Path__set_Data(this, value); }
    void FillRule(int value) { Path__set_FillRule(this, value); }
    void FitMode(int value) { Path__set_FitMode(this, value); }
    void Geometry(::app::Fuse::Drawing::PathGeometry* value) { Path__set_Geometry(this, value); }
    void ScaleMode(int value) { Path__set_ScaleMode(this, value); }
    void StretchDirection(int value) { Path__set_StretchDirection(this, value); }
    void StretchMode(int value) { Path__set_StretchMode(this, value); }
};

}}}


#endif
