// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_GRAPHICS_STYLE_H__

#include <app/Fuse.Style.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct GraphicsStyle;

extern ::uStaticStrong< ::app::Fuse::Font*> GraphicsStyle__Default;

struct GraphicsStyle__uType : ::app::Fuse::Style__uType
{
};

GraphicsStyle__uType* GraphicsStyle__typeof();

void GraphicsStyle___ObjInit_1(GraphicsStyle* __this);
void GraphicsStyle___TypeInit(::uStatic* __this);
void GraphicsStyle__InitializeUX(GraphicsStyle* __this);
GraphicsStyle* GraphicsStyle__New_2(::uStatic* __this);

struct GraphicsStyle : ::app::Fuse::Style
{
    void _ObjInit_1() { GraphicsStyle___ObjInit_1(this); }
    void InitializeUX() { GraphicsStyle__InitializeUX(this); }
};

}}}}


#endif
