// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE8_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE8_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_ScrollView.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property; } } } }
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template8;

struct GraphicsStyle_Template8__uType : ::app::Uno::UX::Template__Fuse_Controls_ScrollView__uType
{
};

GraphicsStyle_Template8__uType* GraphicsStyle_Template8__typeof();

void GraphicsStyle_Template8___ObjInit_1(GraphicsStyle_Template8* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template8* GraphicsStyle_Template8__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template8__OnApply(GraphicsStyle_Template8* __this, ::app::Fuse::Controls::ScrollView* self);

struct GraphicsStyle_Template8 : ::app::Uno::UX::Template__Fuse_Controls_ScrollView
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property*> temp_UserScroll_inst;
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property*> self_UserScroll_inst;
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property*> temp1_Value_inst;
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property*> self_KeepFocusInView_inst;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template8___ObjInit_1(this, parent); }
};

}}}}


#endif
