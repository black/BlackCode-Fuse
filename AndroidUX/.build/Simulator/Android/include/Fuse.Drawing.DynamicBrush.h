// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
namespace g{namespace Fuse{namespace Drawing{struct DynamicBrush;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract class DynamicBrush :146
// {
::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof();
void DynamicBrush__ctor_1_fn(DynamicBrush* __this);
void DynamicBrush__get_BlendMode_fn(DynamicBrush* __this, int* __retval);
void DynamicBrush__set_BlendMode_fn(DynamicBrush* __this, int* value);
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval);
void DynamicBrush__OnShadingChanged_fn(DynamicBrush* __this);
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval);
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value);
void DynamicBrush__add_ShadingChanged_fn(DynamicBrush* __this, uDelegate* value);
void DynamicBrush__remove_ShadingChanged_fn(DynamicBrush* __this, uDelegate* value);

struct DynamicBrush : ::g::Fuse::Drawing::Brush
{
    int _blendMode;
    float _opacity;
    uStrong<uDelegate*> ShadingChanged1;

    void ctor_1();
    int BlendMode();
    void BlendMode(int value);
    void OnShadingChanged();
    float Opacity();
    void Opacity(float value);
    void add_ShadingChanged(uDelegate* value);
    void remove_ShadingChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Drawing
