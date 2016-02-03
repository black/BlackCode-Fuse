// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_STAR_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_STAR_H__

#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Star; } } }
namespace app { namespace Fuse { struct NodeBounds; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ControlVisual__Fuse_Controls_Star;

struct ControlVisual__Fuse_Controls_Star__uType : ::app::Fuse::Controls::Graphics::Visual__uType
{
    void(*__fp_Attach)(ControlVisual__Fuse_Controls_Star*);
    void(*__fp_Detach)(ControlVisual__Fuse_Controls_Star*);
};

ControlVisual__Fuse_Controls_Star__uType* ControlVisual__Fuse_Controls_Star__typeof();

void ControlVisual__Fuse_Controls_Star___ObjInit_2(ControlVisual__Fuse_Controls_Star* __this);
::app::Fuse::Controls::Star* ControlVisual__Fuse_Controls_Star__FindControl(ControlVisual__Fuse_Controls_Star* __this);
::app::Fuse::Controls::Star* ControlVisual__Fuse_Controls_Star__get_Control(ControlVisual__Fuse_Controls_Star* __this);
::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Star__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Star* __this);
void ControlVisual__Fuse_Controls_Star__OnRooted(ControlVisual__Fuse_Controls_Star* __this);
void ControlVisual__Fuse_Controls_Star__OnUnrooted(ControlVisual__Fuse_Controls_Star* __this);

struct ControlVisual__Fuse_Controls_Star : ::app::Fuse::Controls::Graphics::Visual
{
    ::uStrong< ::app::Fuse::Controls::Star*> _control;

    void _ObjInit_2() { ControlVisual__Fuse_Controls_Star___ObjInit_2(this); }
    void Attach() { (((ControlVisual__Fuse_Controls_Star__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlVisual__Fuse_Controls_Star__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::Star* FindControl() { return ControlVisual__Fuse_Controls_Star__FindControl(this); }
    ::app::Fuse::Controls::Star* Control() { return ControlVisual__Fuse_Controls_Star__get_Control(this); }
};

}}}}


#endif
