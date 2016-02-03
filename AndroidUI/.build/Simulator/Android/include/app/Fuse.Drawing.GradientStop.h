// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct GradientStop;

struct GradientStop__uType : ::uClassType
{
};

GradientStop__uType* GradientStop__typeof();

void GradientStop___ObjInit(GradientStop* __this);
void GradientStop___ObjInit_1(GradientStop* __this, ::app::Uno::Float4 color, float offset);
void GradientStop__add_Changed(GradientStop* __this, ::uDelegate* value);
::app::Uno::Float4 GradientStop__get_Color(GradientStop* __this);
float GradientStop__get_Offset(GradientStop* __this);
GradientStop* GradientStop__New_1(::uStatic* __this);
GradientStop* GradientStop__New_2(::uStatic* __this, ::app::Uno::Float4 color, float offset);
void GradientStop__OnChanged(GradientStop* __this);
void GradientStop__remove_Changed(GradientStop* __this, ::uDelegate* value);
void GradientStop__set_Color(GradientStop* __this, ::app::Uno::Float4 value);
void GradientStop__set_Offset(GradientStop* __this, float value);

struct GradientStop : ::uObject
{
    float _offset;
    ::app::Uno::Float4 _color;
    ::uStrong< ::uDelegate*> Changed;

    void _ObjInit() { GradientStop___ObjInit(this); }
    void _ObjInit_1(::app::Uno::Float4 color, float offset) { GradientStop___ObjInit_1(this, color, offset); }
    void add_Changed(::uDelegate* value) { GradientStop__add_Changed(this, value); }
    ::app::Uno::Float4 Color() { return GradientStop__get_Color(this); }
    float Offset() { return GradientStop__get_Offset(this); }
    void OnChanged() { GradientStop__OnChanged(this); }
    void remove_Changed(::uDelegate* value) { GradientStop__remove_Changed(this, value); }
    void Color(::app::Uno::Float4 value) { GradientStop__set_Color(this, value); }
    void Offset(float value) { GradientStop__set_Offset(this, value); }
};

}}}


#endif
