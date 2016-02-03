// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE4_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE4_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Ellipse.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct Ellipse; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template4;

struct GraphicsStyle_Template4__uType : ::app::Uno::UX::Template__Fuse_Controls_Ellipse__uType
{
};

GraphicsStyle_Template4__uType* GraphicsStyle_Template4__typeof();

void GraphicsStyle_Template4___ObjInit_1(GraphicsStyle_Template4* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template4* GraphicsStyle_Template4__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template4__OnApply(GraphicsStyle_Template4* __this, ::app::Fuse::Controls::Ellipse* self);

struct GraphicsStyle_Template4 : ::app::Uno::UX::Template__Fuse_Controls_Ellipse
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template4___ObjInit_1(this, parent); }
};

}}}}


#endif
