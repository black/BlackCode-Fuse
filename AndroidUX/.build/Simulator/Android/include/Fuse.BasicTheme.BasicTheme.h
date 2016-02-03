// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.GraphicsTheme.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicTheme;}}}
namespace g{namespace Fuse{struct Theme;}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public sealed class BasicTheme :12
// {
::g::Fuse::Style_type* BasicTheme_typeof();
void BasicTheme__ctor_4_fn(BasicTheme* __this);
void BasicTheme__New3_fn(BasicTheme** __retval);
void BasicTheme__get_Singleton1_fn(::g::Fuse::Theme** __retval);

struct BasicTheme : ::g::Fuse::GraphicsTheme
{
    static uSStrong< ::g::Fuse::Theme*> _singleton1_;
    static uSStrong< ::g::Fuse::Theme*>& _singleton1() { return _singleton1_; }

    void ctor_4();
    static BasicTheme* New3();
    static ::g::Fuse::Theme* Singleton1();
};
// }

}}} // ::g::Fuse::BasicTheme
