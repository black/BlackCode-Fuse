// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct NativeWithFallbackTheme;}}
namespace g{namespace Fuse{struct Theme;}}

namespace g{
namespace Fuse{

// public sealed class NativeWithFallbackTheme :5912
// {
uType* NativeWithFallbackTheme_typeof();
void NativeWithFallbackTheme__ctor__fn(NativeWithFallbackTheme* __this);
void NativeWithFallbackTheme__New1_fn(NativeWithFallbackTheme** __retval);
void NativeWithFallbackTheme__get_Singleton_fn(::g::Fuse::Theme** __retval);
void NativeWithFallbackTheme__get_ThemeFactory_fn(uDelegate** __retval);
void NativeWithFallbackTheme__set_ThemeFactory_fn(uDelegate* value);

struct NativeWithFallbackTheme : uObject
{
    static uSStrong< ::g::Fuse::Theme*> _singleton_;
    static uSStrong< ::g::Fuse::Theme*>& _singleton() { return _singleton_; }
    static uSStrong<uDelegate*> _ThemeFactory_;
    static uSStrong<uDelegate*>& _ThemeFactory() { return _ThemeFactory_; }

    void ctor_();
    static NativeWithFallbackTheme* New1();
    static ::g::Fuse::Theme* Singleton();
    static uDelegate* ThemeFactory();
    static void ThemeFactory(uDelegate* value);
};
// }

}} // ::g::Fuse
