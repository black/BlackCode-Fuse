// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Themes\0.19.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Style.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{namespace Themes{struct GraphicsStyle;}}}
namespace g{namespace Fuse{struct Font;}}

namespace g{
namespace Fuse{
namespace Themes{

// public partial sealed class GraphicsStyle :5
// {
::g::Fuse::Style_type* GraphicsStyle_typeof();
void GraphicsStyle__ctor_1_fn(GraphicsStyle* __this);
void GraphicsStyle__InitializeUX_fn(GraphicsStyle* __this);
void GraphicsStyle__New2_fn(GraphicsStyle** __retval);

struct GraphicsStyle : ::g::Fuse::Style
{
    static uSStrong< ::g::Fuse::Font*> Default_;
    static uSStrong< ::g::Fuse::Font*>& Default() { return GraphicsStyle_typeof()->Init(), Default_; }

    void ctor_1();
    void InitializeUX();
    static GraphicsStyle* New2();
};
// }

}}} // ::g::Fuse::Themes
