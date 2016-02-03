// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE2_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE2_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Circle.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct Circle; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template2;

struct GraphicsStyle_Template2__uType : ::app::Uno::UX::Template__Fuse_Controls_Circle__uType
{
};

GraphicsStyle_Template2__uType* GraphicsStyle_Template2__typeof();

void GraphicsStyle_Template2___ObjInit_1(GraphicsStyle_Template2* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template2* GraphicsStyle_Template2__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template2__OnApply(GraphicsStyle_Template2* __this, ::app::Fuse::Controls::Circle* self);

struct GraphicsStyle_Template2 : ::app::Uno::UX::Template__Fuse_Controls_Circle
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template2___ObjInit_1(this, parent); }
};

}}}}


#endif
