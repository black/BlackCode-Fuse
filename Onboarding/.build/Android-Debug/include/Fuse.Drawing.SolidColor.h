// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.19.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class SolidColor :309
// {
::g::Fuse::Drawing::Brush_type* SolidColor_typeof();
void SolidColor__ctor_2_fn(SolidColor* __this);
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval);
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value);
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval);
void SolidColor__New1_fn(SolidColor** __retval);

struct SolidColor : ::g::Fuse::Drawing::DynamicBrush
{
    ::g::Uno::Float4 _color;

    void ctor_2();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    static SolidColor* New1();
};
// }

}}} // ::g::Fuse::Drawing
