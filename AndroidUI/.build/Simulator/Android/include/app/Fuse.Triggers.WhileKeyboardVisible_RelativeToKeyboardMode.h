// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_KEYBOARD_VISIBLE_RELATIVE_TO_KEYBOARD_MODE_H__
#define __APP_FUSE_TRIGGERS_WHILE_KEYBOARD_VISIBLE_RELATIVE_TO_KEYBOARD_MODE_H__

#include <app/Fuse.ITranslationMode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileKeyboardVisible_RelativeToKeyboardMode;

struct WhileKeyboardVisible_RelativeToKeyboardMode__uType : ::uClassType
{
    ::app::Fuse::ITranslationMode __interface_0;
};

WhileKeyboardVisible_RelativeToKeyboardMode__uType* WhileKeyboardVisible_RelativeToKeyboardMode__typeof();

void WhileKeyboardVisible_RelativeToKeyboardMode___ObjInit(WhileKeyboardVisible_RelativeToKeyboardMode* __this);
::app::Uno::Float3 WhileKeyboardVisible_RelativeToKeyboardMode__GetAbsVector(WhileKeyboardVisible_RelativeToKeyboardMode* __this, ::app::Fuse::Translation* t);
WhileKeyboardVisible_RelativeToKeyboardMode* WhileKeyboardVisible_RelativeToKeyboardMode__New_1(::uStatic* __this);

struct WhileKeyboardVisible_RelativeToKeyboardMode : ::uObject
{
    void _ObjInit() { WhileKeyboardVisible_RelativeToKeyboardMode___ObjInit(this); }
    ::app::Uno::Float3 GetAbsVector(::app::Fuse::Translation* t);
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Triggers {

inline ::app::Uno::Float3 WhileKeyboardVisible_RelativeToKeyboardMode::GetAbsVector(::app::Fuse::Translation* t) { return WhileKeyboardVisible_RelativeToKeyboardMode__GetAbsVector(this, t); }

}}}


#endif
