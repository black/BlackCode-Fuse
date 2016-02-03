// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE5_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE5_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_RegularPolygon.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct RegularPolygon; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template5;

struct GraphicsStyle_Template5__uType : ::app::Uno::UX::Template__Fuse_Controls_RegularPolygon__uType
{
};

GraphicsStyle_Template5__uType* GraphicsStyle_Template5__typeof();

void GraphicsStyle_Template5___ObjInit_1(GraphicsStyle_Template5* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template5* GraphicsStyle_Template5__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template5__OnApply(GraphicsStyle_Template5* __this, ::app::Fuse::Controls::RegularPolygon* self);

struct GraphicsStyle_Template5 : ::app::Uno::UX::Template__Fuse_Controls_RegularPolygon
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template5___ObjInit_1(this, parent); }
};

}}}}


#endif
