// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Theme.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{struct NativeTheme;}}

namespace g{
namespace Fuse{

// public sealed class NativeTheme :5901
// {
::g::Fuse::Style_type* NativeTheme_typeof();
void NativeTheme__ctor_3_fn(NativeTheme* __this);
void NativeTheme__New2_fn(NativeTheme** __retval);
void NativeTheme__get_Singleton_fn(::g::Fuse::Theme** __retval);

struct NativeTheme : ::g::Fuse::Theme
{
    static uSStrong< ::g::Fuse::Theme*> _singleton_;
    static uSStrong< ::g::Fuse::Theme*>& _singleton() { return _singleton_; }

    void ctor_3();
    static NativeTheme* New2();
    static ::g::Fuse::Theme* Singleton();
};
// }

}} // ::g::Fuse
