// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NATIVE_THEME_H__
#define __APP_FUSE_NATIVE_THEME_H__

#include <app/Fuse.Theme.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct NativeTheme;

extern ::uStaticStrong< ::app::Fuse::Theme*> NativeTheme___singleton;

struct NativeTheme__uType : ::app::Fuse::Theme__uType
{
};

NativeTheme__uType* NativeTheme__typeof();

void NativeTheme___ObjInit_3(NativeTheme* __this);
::app::Fuse::Theme* NativeTheme__get_Singleton(::uStatic* __this);
NativeTheme* NativeTheme__New_2(::uStatic* __this);

struct NativeTheme : ::app::Fuse::Theme
{
    void _ObjInit_3() { NativeTheme___ObjInit_3(this); }
};

}}


#endif
