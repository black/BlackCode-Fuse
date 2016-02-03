// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_RECTANGLE_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_RECTANGLE_H__

#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Rectangle; } } }
namespace app { namespace Fuse { struct NodeBounds; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ControlVisual__Fuse_Controls_Rectangle;

struct ControlVisual__Fuse_Controls_Rectangle__uType : ::app::Fuse::Controls::Graphics::Visual__uType
{
    void(*__fp_Attach)(ControlVisual__Fuse_Controls_Rectangle*);
    void(*__fp_Detach)(ControlVisual__Fuse_Controls_Rectangle*);
};

ControlVisual__Fuse_Controls_Rectangle__uType* ControlVisual__Fuse_Controls_Rectangle__typeof();

void ControlVisual__Fuse_Controls_Rectangle___ObjInit_2(ControlVisual__Fuse_Controls_Rectangle* __this);
::app::Fuse::Controls::Rectangle* ControlVisual__Fuse_Controls_Rectangle__FindControl(ControlVisual__Fuse_Controls_Rectangle* __this);
::app::Fuse::Controls::Rectangle* ControlVisual__Fuse_Controls_Rectangle__get_Control(ControlVisual__Fuse_Controls_Rectangle* __this);
::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Rectangle__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Rectangle* __this);
void ControlVisual__Fuse_Controls_Rectangle__OnRooted(ControlVisual__Fuse_Controls_Rectangle* __this);
void ControlVisual__Fuse_Controls_Rectangle__OnUnrooted(ControlVisual__Fuse_Controls_Rectangle* __this);

struct ControlVisual__Fuse_Controls_Rectangle : ::app::Fuse::Controls::Graphics::Visual
{
    ::uStrong< ::app::Fuse::Controls::Rectangle*> _control;

    void _ObjInit_2() { ControlVisual__Fuse_Controls_Rectangle___ObjInit_2(this); }
    void Attach() { (((ControlVisual__Fuse_Controls_Rectangle__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlVisual__Fuse_Controls_Rectangle__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Rectangle* FindControl() { return ControlVisual__Fuse_Controls_Rectangle__FindControl(this); }
    ::app::Fuse::Controls::Rectangle* Control() { return ControlVisual__Fuse_Controls_Rectangle__get_Control(this); }
};

}}}}


#endif
