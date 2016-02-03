// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Theme.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{struct GraphicsTheme;}}

namespace g{
namespace Fuse{

// public class GraphicsTheme :5886
// {
::g::Fuse::Style_type* GraphicsTheme_typeof();
void GraphicsTheme__ctor_3_fn(GraphicsTheme* __this);
void GraphicsTheme__New2_fn(GraphicsTheme** __retval);
void GraphicsTheme__get_Singleton_fn(::g::Fuse::Theme** __retval);

struct GraphicsTheme : ::g::Fuse::Theme
{
    static uSStrong< ::g::Fuse::Theme*> _singleton_;
    static uSStrong< ::g::Fuse::Theme*>& _singleton() { return _singleton_; }

    void ctor_3();
    static GraphicsTheme* New2();
    static ::g::Fuse::Theme* Singleton();
};
// }

}} // ::g::Fuse
