// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_TEXT_CONTROL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_CONTROL_VISUAL__FUSE_CONTROLS_TEXT_CONTROL_H__

#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }
namespace app { namespace Fuse { struct NodeBounds; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ControlVisual__Fuse_Controls_TextControl;

struct ControlVisual__Fuse_Controls_TextControl__uType : ::app::Fuse::Controls::Graphics::Visual__uType
{
    void(*__fp_Attach)(ControlVisual__Fuse_Controls_TextControl*);
    void(*__fp_Detach)(ControlVisual__Fuse_Controls_TextControl*);
};

ControlVisual__Fuse_Controls_TextControl__uType* ControlVisual__Fuse_Controls_TextControl__typeof();

void ControlVisual__Fuse_Controls_TextControl___ObjInit_2(ControlVisual__Fuse_Controls_TextControl* __this);
::app::Fuse::Controls::TextControl* ControlVisual__Fuse_Controls_TextControl__FindControl(ControlVisual__Fuse_Controls_TextControl* __this);
::app::Fuse::Controls::TextControl* ControlVisual__Fuse_Controls_TextControl__get_Control(ControlVisual__Fuse_Controls_TextControl* __this);
::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_TextControl__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_TextControl* __this);
void ControlVisual__Fuse_Controls_TextControl__OnRooted(ControlVisual__Fuse_Controls_TextControl* __this);
void ControlVisual__Fuse_Controls_TextControl__OnUnrooted(ControlVisual__Fuse_Controls_TextControl* __this);

struct ControlVisual__Fuse_Controls_TextControl : ::app::Fuse::Controls::Graphics::Visual
{
    ::uStrong< ::app::Fuse::Controls::TextControl*> _control;

    void _ObjInit_2() { ControlVisual__Fuse_Controls_TextControl___ObjInit_2(this); }
    void Attach() { (((ControlVisual__Fuse_Controls_TextControl__uType*)this->__obj_type)->__fp_Attach)(this); }
    void Detach() { (((ControlVisual__Fuse_Controls_TextControl__uType*)this->__obj_type)->__fp_Detach)(this); }
    ::app::Fuse::Controls::TextControl* FindControl() { return ControlVisual__Fuse_Controls_TextControl__FindControl(this); }
    ::app::Fuse::Controls::TextControl* Control() { return ControlVisual__Fuse_Controls_TextControl__get_Control(this); }
};

}}}}


#endif
