// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class GradientStop :13
// {
uType* GradientStop_typeof();
void GradientStop__ctor__fn(GradientStop* __this);
void GradientStop__ctor_1_fn(GradientStop* __this, ::g::Uno::Float4* color, float* offset);
void GradientStop__add_Changed_fn(GradientStop* __this, uDelegate* value);
void GradientStop__remove_Changed_fn(GradientStop* __this, uDelegate* value);
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval);
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value);
void GradientStop__New1_fn(GradientStop** __retval);
void GradientStop__New2_fn(::g::Uno::Float4* color, float* offset, GradientStop** __retval);
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval);
void GradientStop__set_Offset_fn(GradientStop* __this, float* value);
void GradientStop__OnChanged_fn(GradientStop* __this);

struct GradientStop : uObject
{
    ::g::Uno::Float4 _color;
    float _offset;
    uStrong<uDelegate*> Changed1;

    void ctor_();
    void ctor_1(::g::Uno::Float4 color, float offset);
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    float Offset();
    void Offset(float value);
    void OnChanged();
    static GradientStop* New1();
    static GradientStop* New2(::g::Uno::Float4 color, float offset);
};
// }

}}} // ::g::Fuse::Drawing
