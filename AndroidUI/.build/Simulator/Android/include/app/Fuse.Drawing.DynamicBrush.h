// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Fuse.Drawing.Brush.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct DynamicBrush;

struct DynamicBrush__uType : ::app::Fuse::Drawing::Brush__uType
{
};

DynamicBrush__uType* DynamicBrush__typeof();

void DynamicBrush___ObjInit_1(DynamicBrush* __this);
void DynamicBrush__add_ShadingChanged(DynamicBrush* __this, ::uDelegate* value);
int DynamicBrush__get_BlendMode(DynamicBrush* __this);
bool DynamicBrush__get_IsCompletelyTransparent(DynamicBrush* __this);
float DynamicBrush__get_Opacity(DynamicBrush* __this);
void DynamicBrush__OnShadingChanged(DynamicBrush* __this);
void DynamicBrush__remove_ShadingChanged(DynamicBrush* __this, ::uDelegate* value);
void DynamicBrush__set_BlendMode(DynamicBrush* __this, int value);
void DynamicBrush__set_Opacity(DynamicBrush* __this, float value);

struct DynamicBrush : ::app::Fuse::Drawing::Brush
{
    float _opacity;
    int _blendMode;
    ::uStrong< ::uDelegate*> ShadingChanged;

    void _ObjInit_1() { DynamicBrush___ObjInit_1(this); }
    void add_ShadingChanged(::uDelegate* value) { DynamicBrush__add_ShadingChanged(this, value); }
    int BlendMode() { return DynamicBrush__get_BlendMode(this); }
    float Opacity() { return DynamicBrush__get_Opacity(this); }
    void OnShadingChanged() { DynamicBrush__OnShadingChanged(this); }
    void remove_ShadingChanged(::uDelegate* value) { DynamicBrush__remove_ShadingChanged(this, value); }
    void BlendMode(int value) { DynamicBrush__set_BlendMode(this, value); }
    void Opacity(float value) { DynamicBrush__set_Opacity(this, value); }
};

}}}


#endif
