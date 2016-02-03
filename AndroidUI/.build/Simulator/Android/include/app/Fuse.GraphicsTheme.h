// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GRAPHICS_THEME_H__
#define __APP_FUSE_GRAPHICS_THEME_H__

#include <app/Fuse.Theme.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct GraphicsTheme;

extern ::uStaticStrong< ::app::Fuse::Theme*> GraphicsTheme___singleton;

struct GraphicsTheme__uType : ::app::Fuse::Theme__uType
{
};

GraphicsTheme__uType* GraphicsTheme__typeof();

void GraphicsTheme___ObjInit_3(GraphicsTheme* __this);
::app::Fuse::Theme* GraphicsTheme__get_Singleton(::uStatic* __this);
GraphicsTheme* GraphicsTheme__New_2(::uStatic* __this);

struct GraphicsTheme : ::app::Fuse::Theme
{
    void _ObjInit_3() { GraphicsTheme___ObjInit_3(this); }
};

}}


#endif
