// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct DrawArgs;}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{

// public sealed class DrawArgs :1674
// {
uType* DrawArgs_typeof();
void DrawArgs__ctor_1_fn(DrawArgs* __this, ::g::Fuse::DrawContext* dc);
void DrawArgs__get_Context_fn(DrawArgs* __this, ::g::Fuse::DrawContext** __retval);
void DrawArgs__set_Context_fn(DrawArgs* __this, ::g::Fuse::DrawContext* value);
void DrawArgs__New2_fn(::g::Fuse::DrawContext* dc, DrawArgs** __retval);

struct DrawArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::DrawContext*> _Context;

    void ctor_1(::g::Fuse::DrawContext* dc);
    ::g::Fuse::DrawContext* Context();
    void Context(::g::Fuse::DrawContext* value);
    static DrawArgs* New2(::g::Fuse::DrawContext* dc);
};
// }

}} // ::g::Fuse
