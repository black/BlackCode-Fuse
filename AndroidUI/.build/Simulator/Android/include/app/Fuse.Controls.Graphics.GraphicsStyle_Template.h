// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextControl.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle; } } } }
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle_Template;

struct GraphicsStyle_Template__uType : ::app::Uno::UX::Template__Fuse_Controls_TextControl__uType
{
};

GraphicsStyle_Template__uType* GraphicsStyle_Template__typeof();

void GraphicsStyle_Template___ObjInit_1(GraphicsStyle_Template* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
GraphicsStyle_Template* GraphicsStyle_Template__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent);
void GraphicsStyle_Template__OnApply(GraphicsStyle_Template* __this, ::app::Fuse::Controls::TextControl* self);

struct GraphicsStyle_Template : ::app::Uno::UX::Template__Fuse_Controls_TextControl
{
    ::uStrong< ::app::Fuse::Controls::Graphics::GraphicsStyle*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::Graphics::GraphicsStyle* parent) { GraphicsStyle_Template___ObjInit_1(this, parent); }
};

}}}}


#endif
