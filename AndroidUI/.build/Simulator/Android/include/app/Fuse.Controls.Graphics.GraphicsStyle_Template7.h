// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE7_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE7_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct Image; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template7;

struct GraphicsStyle_Template7__uType : ::app::Uno::UX::Template__Fuse_Controls_Image__uType
{
};

GraphicsStyle_Template7__uType* GraphicsStyle_Template7__typeof();

void GraphicsStyle_Template7___ObjInit_1(GraphicsStyle_Template7* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template7* GraphicsStyle_Template7__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template7__OnApply(GraphicsStyle_Template7* __this, ::app::Fuse::Controls::Image* self);

struct GraphicsStyle_Template7 : ::app::Uno::UX::Template__Fuse_Controls_Image
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template7___ObjInit_1(this, parent); }
};

}}}}


#endif
