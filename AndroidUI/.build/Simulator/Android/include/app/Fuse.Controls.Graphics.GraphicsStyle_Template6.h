// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE6_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE6_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Path.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct Path; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template6;

struct GraphicsStyle_Template6__uType : ::app::Uno::UX::Template__Fuse_Controls_Path__uType
{
};

GraphicsStyle_Template6__uType* GraphicsStyle_Template6__typeof();

void GraphicsStyle_Template6___ObjInit_1(GraphicsStyle_Template6* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template6* GraphicsStyle_Template6__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template6__OnApply(GraphicsStyle_Template6* __this, ::app::Fuse::Controls::Path* self);

struct GraphicsStyle_Template6 : ::app::Uno::UX::Template__Fuse_Controls_Path
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template6___ObjInit_1(this, parent); }
};

}}}}


#endif
