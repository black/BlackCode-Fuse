// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NATIVE_WITH_FALLBACK_THEME_H__
#define __APP_FUSE_NATIVE_WITH_FALLBACK_THEME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Theme; } }

namespace app {
namespace Fuse {

struct NativeWithFallbackTheme;

extern ::uStaticStrong< ::app::Fuse::Theme*> NativeWithFallbackTheme___singleton;
extern ::uStaticStrong< ::uDelegate*> NativeWithFallbackTheme___ThemeFactory;

struct NativeWithFallbackTheme__uType : ::uClassType
{
};

NativeWithFallbackTheme__uType* NativeWithFallbackTheme__typeof();

void NativeWithFallbackTheme___ObjInit(NativeWithFallbackTheme* __this);
::app::Fuse::Theme* NativeWithFallbackTheme__get_Singleton(::uStatic* __this);
::uDelegate* NativeWithFallbackTheme__get_ThemeFactory(::uStatic* __this);
NativeWithFallbackTheme* NativeWithFallbackTheme__New_1(::uStatic* __this);
void NativeWithFallbackTheme__set_ThemeFactory(::uStatic* __this, ::uDelegate* value);

struct NativeWithFallbackTheme : ::uObject
{
    void _ObjInit() { NativeWithFallbackTheme___ObjInit(this); }
};

}}


#endif
