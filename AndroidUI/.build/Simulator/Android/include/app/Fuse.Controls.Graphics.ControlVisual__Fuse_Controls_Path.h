// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_PATH_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_PATH_H__

#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Path; } } }
namespace app { namespace Fuse { struct NodeBounds; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ControlVisual__Fuse_Controls_Path;

struct ControlVisual__Fuse_Controls_Path__uType : ::app::Fuse::Controls::Graphics::Visual__uType
{
    void(*__fp_Attach)(ControlVisual__Fuse_Controls_Path*);
    void(*__fp_Detach)(ControlVisual__Fuse_Controls_Path*);
};

ControlVisual__Fuse_Controls_Path__uType* ControlVisual__Fuse_Controls_Path__typeof();

void ControlVisual__Fuse_Controls_Path___ObjInit_2(ControlVisual__Fuse_Controls_Path* __this);
::app::Fuse::Controls::Path* ControlVisual__Fuse_Controls_Path__FindControl(ControlVisual__Fuse_Controls_Path* __this);
::app::Fuse::Controls::Path* ControlVisual__Fuse_Controls_Path__get_Control(ControlVisual__Fuse_Controls_Path* __this);
::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Path__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Path* __this);
void ControlVisual__Fuse_Controls_Path__OnRooted(ControlVisual__Fuse_Controls_Path* __this);
void ControlVisual__Fuse_Controls_Path__OnUnrooted(ControlVisual__Fuse_Controls_Path* __this);

struct ControlVisual__Fuse_Controls_Path : ::app::Fuse::Controls::Graphics::Visual
{
    ::uStrong< ::app::Fuse::Controls::Path*> _control;

    void _ObjInit_2() { ControlVisual__Fuse_Controls_Path___ObjInit_2(this); }
    void Attach() { (((ControlVisual__Fuse_Controls_Path__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlVisual__Fuse_Controls_Path__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Path* FindControl() { return ControlVisual__Fuse_Controls_Path__FindControl(this); }
    ::app::Fuse::Controls::Path* Control() { return ControlVisual__Fuse_Controls_Path__get_Control(this); }
};

}}}}


#endif
