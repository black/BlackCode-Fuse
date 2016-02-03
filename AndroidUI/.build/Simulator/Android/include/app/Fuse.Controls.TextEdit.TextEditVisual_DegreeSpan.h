// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_EDIT_VISUAL_DEGREE_SPAN_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_EDIT_VISUAL_DEGREE_SPAN_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct TextEditVisual_DegreeSpan;

struct TextEditVisual_DegreeSpan__uType : ::uClassType
{
};

TextEditVisual_DegreeSpan__uType* TextEditVisual_DegreeSpan__typeof();

void TextEditVisual_DegreeSpan___ObjInit(TextEditVisual_DegreeSpan* __this, float a, float b);
bool TextEditVisual_DegreeSpan__IsWithinBounds(TextEditVisual_DegreeSpan* __this, float x);
TextEditVisual_DegreeSpan* TextEditVisual_DegreeSpan__New_1(::uStatic* __this, float a, float b);

struct TextEditVisual_DegreeSpan : ::uObject
{
    float _a;
    float _b;

    void _ObjInit(float a, float b) { TextEditVisual_DegreeSpan___ObjInit(this, a, b); }
    bool IsWithinBounds(float x) { return TextEditVisual_DegreeSpan__IsWithinBounds(this, x); }
};

}}}}


#endif
