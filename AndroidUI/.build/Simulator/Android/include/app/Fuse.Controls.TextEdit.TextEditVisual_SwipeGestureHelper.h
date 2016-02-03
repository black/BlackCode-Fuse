// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_EDIT_VISUAL_SWIPE_GESTURE_HELPER_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_EDIT_VISUAL_SWIPE_GESTURE_HELPER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextEditVisual_DegreeSpan; } } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct TextEditVisual_SwipeGestureHelper;

struct TextEditVisual_SwipeGestureHelper__uType : ::uClassType
{
};

TextEditVisual_SwipeGestureHelper__uType* TextEditVisual_SwipeGestureHelper__typeof();

void TextEditVisual_SwipeGestureHelper___ObjInit(TextEditVisual_SwipeGestureHelper* __this, float lengthThreshold, ::uArray* spans);
bool TextEditVisual_SwipeGestureHelper__IsWithinBounds(TextEditVisual_SwipeGestureHelper* __this, ::app::Uno::Float2 vector);
TextEditVisual_SwipeGestureHelper* TextEditVisual_SwipeGestureHelper__New_1(::uStatic* __this, float lengthThreshold, ::uArray* spans);

struct TextEditVisual_SwipeGestureHelper : ::uObject
{
    ::uStrong< ::uArray*> _spans;
    float _lengthThreshold;

    void _ObjInit(float lengthThreshold, ::uArray* spans) { TextEditVisual_SwipeGestureHelper___ObjInit(this, lengthThreshold, spans); }
    bool IsWithinBounds(::app::Uno::Float2 vector);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

inline bool TextEditVisual_SwipeGestureHelper::IsWithinBounds(::app::Uno::Float2 vector) { return TextEditVisual_SwipeGestureHelper__IsWithinBounds(this, vector); }

}}}}


#endif
