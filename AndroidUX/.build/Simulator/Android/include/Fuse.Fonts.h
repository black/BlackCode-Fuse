// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct Fonts;}}

namespace g{
namespace Fuse{

// public static class Fonts :1211
// {
uClassType* Fonts_typeof();
void Fonts__get_Fallback_fn(::g::Fuse::Font** __retval);

struct Fonts : uObject
{
    static uSStrong< ::g::Fuse::Font*> _fallback_;
    static uSStrong< ::g::Fuse::Font*>& _fallback() { return _fallback_; }

    static ::g::Fuse::Font* Fallback();
};
// }

}} // ::g::Fuse
