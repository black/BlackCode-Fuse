// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE1_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Rectangle.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct Rectangle; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template1;

struct GraphicsStyle_Template1__uType : ::app::Uno::UX::Template__Fuse_Controls_Rectangle__uType
{
};

GraphicsStyle_Template1__uType* GraphicsStyle_Template1__typeof();

void GraphicsStyle_Template1___ObjInit_1(GraphicsStyle_Template1* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template1* GraphicsStyle_Template1__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template1__OnApply(GraphicsStyle_Template1* __this, ::app::Fuse::Controls::Rectangle* self);

struct GraphicsStyle_Template1 : ::app::Uno::UX::Template__Fuse_Controls_Rectangle
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template1___ObjInit_1(this, parent); }
};

}}}}


#endif
