// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_REGULAR_POLYGON_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_REGULAR_POLYGON_H__

#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct RegularPolygon; } } }
namespace app { namespace Fuse { struct NodeBounds; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ControlVisual__Fuse_Controls_RegularPolygon;

struct ControlVisual__Fuse_Controls_RegularPolygon__uType : ::app::Fuse::Controls::Graphics::Visual__uType
{
    void(*__fp_Attach)(ControlVisual__Fuse_Controls_RegularPolygon*);
    void(*__fp_Detach)(ControlVisual__Fuse_Controls_RegularPolygon*);
};

ControlVisual__Fuse_Controls_RegularPolygon__uType* ControlVisual__Fuse_Controls_RegularPolygon__typeof();

void ControlVisual__Fuse_Controls_RegularPolygon___ObjInit_2(ControlVisual__Fuse_Controls_RegularPolygon* __this);
::app::Fuse::Controls::RegularPolygon* ControlVisual__Fuse_Controls_RegularPolygon__FindControl(ControlVisual__Fuse_Controls_RegularPolygon* __this);
::app::Fuse::Controls::RegularPolygon* ControlVisual__Fuse_Controls_RegularPolygon__get_Control(ControlVisual__Fuse_Controls_RegularPolygon* __this);
::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_RegularPolygon__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_RegularPolygon* __this);
void ControlVisual__Fuse_Controls_RegularPolygon__OnRooted(ControlVisual__Fuse_Controls_RegularPolygon* __this);
void ControlVisual__Fuse_Controls_RegularPolygon__OnUnrooted(ControlVisual__Fuse_Controls_RegularPolygon* __this);

struct ControlVisual__Fuse_Controls_RegularPolygon : ::app::Fuse::Controls::Graphics::Visual
{
    ::uStrong< ::app::Fuse::Controls::RegularPolygon*> _control;

    void _ObjInit_2() { ControlVisual__Fuse_Controls_RegularPolygon___ObjInit_2(this); }
    void Attach() { (((ControlVisual__Fuse_Controls_RegularPolygon__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlVisual__Fuse_Controls_RegularPolygon__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::RegularPolygon* FindControl() { return ControlVisual__Fuse_Controls_RegularPolygon__FindControl(this); }
    ::app::Fuse::Controls::RegularPolygon* Control() { return ControlVisual__Fuse_Controls_RegularPolygon__get_Control(this); }
};

}}}}


#endif
