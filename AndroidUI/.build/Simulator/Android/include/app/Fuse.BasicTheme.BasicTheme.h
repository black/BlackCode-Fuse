// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_H__

#include <app/Fuse.GraphicsTheme.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Theme; } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme;

extern ::uStaticStrong< ::app::Fuse::Theme*> BasicTheme___singleton_1;

struct BasicTheme__uType : ::app::Fuse::GraphicsTheme__uType
{
};

BasicTheme__uType* BasicTheme__typeof();

void BasicTheme___ObjInit_4(BasicTheme* __this);
::app::Fuse::Theme* BasicTheme__get_Singleton_1(::uStatic* __this);
BasicTheme* BasicTheme__New_3(::uStatic* __this);

struct BasicTheme : ::app::Fuse::GraphicsTheme
{
    void _ObjInit_4() { BasicTheme___ObjInit_4(this); }
};

}}}


#endif
