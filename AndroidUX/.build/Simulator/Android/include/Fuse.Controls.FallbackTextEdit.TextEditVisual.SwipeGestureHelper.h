// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\FallbackTextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextEditVisual__DegreeSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextEditVisual__SwipeGestureHelper;}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// private sealed class TextEditVisual.SwipeGestureHelper :731
// {
uType* TextEditVisual__SwipeGestureHelper_typeof();
void TextEditVisual__SwipeGestureHelper__ctor__fn(TextEditVisual__SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans);
void TextEditVisual__SwipeGestureHelper__IsWithinBounds_fn(TextEditVisual__SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval);
void TextEditVisual__SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, TextEditVisual__SwipeGestureHelper** __retval);

struct TextEditVisual__SwipeGestureHelper : uObject
{
    float _lengthThreshold;
    uStrong<uArray*> _spans;

    void ctor_(float lengthThreshold, uArray* spans);
    bool IsWithinBounds(::g::Uno::Float2 vector);
    static TextEditVisual__SwipeGestureHelper* New1(float lengthThreshold, uArray* spans);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
