// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAW_ARGS_H__
#define __APP_FUSE_DRAW_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }

namespace app {
namespace Fuse {

struct DrawArgs;

struct DrawArgs__uType : ::app::Uno::EventArgs__uType
{
};

DrawArgs__uType* DrawArgs__typeof();

void DrawArgs___ObjInit_1(DrawArgs* __this, ::app::Fuse::DrawContext* dc);
::app::Fuse::DrawContext* DrawArgs__get_Context(DrawArgs* __this);
DrawArgs* DrawArgs__New_2(::uStatic* __this, ::app::Fuse::DrawContext* dc);
void DrawArgs__set_Context(DrawArgs* __this, ::app::Fuse::DrawContext* value);

struct DrawArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::DrawContext*> _Context;

    void _ObjInit_1(::app::Fuse::DrawContext* dc) { DrawArgs___ObjInit_1(this, dc); }
    ::app::Fuse::DrawContext* Context() { return DrawArgs__get_Context(this); }
    void Context(::app::Fuse::DrawContext* value) { DrawArgs__set_Context(this, value); }
};

}}


#endif
