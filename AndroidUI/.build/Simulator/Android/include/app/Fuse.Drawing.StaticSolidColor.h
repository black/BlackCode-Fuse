// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_STATIC_SOLID_COLOR_H__
#define __APP_FUSE_DRAWING_STATIC_SOLID_COLOR_H__

#include <app/Fuse.Drawing.StaticBrush.h>
#include <app/Uno.Float4.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct StaticSolidColor;

struct StaticSolidColor__uType : ::app::Fuse::Drawing::StaticBrush__uType
{
};

StaticSolidColor__uType* StaticSolidColor__typeof();

void StaticSolidColor___ObjInit_2(StaticSolidColor* __this, ::app::Uno::Float4 color);
::app::Uno::Float4 StaticSolidColor__get_Color(StaticSolidColor* __this);
bool StaticSolidColor__get_IsCompletelyTransparent(StaticSolidColor* __this);
StaticSolidColor* StaticSolidColor__New_1(::uStatic* __this, ::app::Uno::Float4 color);

struct StaticSolidColor : ::app::Fuse::Drawing::StaticBrush
{
    ::app::Uno::Float4 _color;

    void _ObjInit_2(::app::Uno::Float4 color) { StaticSolidColor___ObjInit_2(this, color); }
    ::app::Uno::Float4 Color() { return StaticSolidColor__get_Color(this); }
};

}}}


#endif
