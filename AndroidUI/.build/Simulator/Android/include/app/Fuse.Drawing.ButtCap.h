// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BUTT_CAP_H__
#define __APP_FUSE_DRAWING_BUTT_CAP_H__

#include <app/Fuse.Drawing.LineCapImpl.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct ButtCap;

struct ButtCap__uType : ::app::Fuse::Drawing::LineCapImpl__uType
{
};

ButtCap__uType* ButtCap__typeof();

void ButtCap___ObjInit_1(ButtCap* __this);
::uObject* ButtCap__Create(ButtCap* __this, ::app::Uno::Float2 from, ::app::Uno::Float2 to);
ButtCap* ButtCap__New_1(::uStatic* __this);

struct ButtCap : ::app::Fuse::Drawing::LineCapImpl
{
    void _ObjInit_1() { ButtCap___ObjInit_1(this); }
};

}}}


#endif
