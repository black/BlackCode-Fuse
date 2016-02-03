// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Brushes\$.uno'.
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
void SolidColor__ctor_3_fn(SolidColor* __this, ::g::Uno::Float4* color);
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval);
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value);
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval);
void SolidColor__New1_fn(SolidColor** __retval);
void SolidColor__New2_fn(::g::Uno::Float4* color, SolidColor** __retval);
void SolidColor__SetColor_fn(SolidColor* __this, ::g::Uno::Float4* c);

struct SolidColor : ::g::Fuse::Drawing::DynamicBrush
{
    ::g::Uno::Float4 _color;

    void ctor_2();
    void ctor_3(::g::Uno::Float4 color);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void SetColor(::g::Uno::Float4 c);
    static SolidColor* New1();
    static SolidColor* New2(::g::Uno::Float4 color);
};
// }

}}} // ::g::Fuse::Drawing
