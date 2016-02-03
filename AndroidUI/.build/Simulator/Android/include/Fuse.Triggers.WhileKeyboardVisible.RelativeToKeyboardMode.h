// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible__RelativeToKeyboardMode;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class WhileKeyboardVisible.RelativeToKeyboardMode :187
// {
struct WhileKeyboardVisible__RelativeToKeyboardMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof();
void WhileKeyboardVisible__RelativeToKeyboardMode__ctor__fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this);
void WhileKeyboardVisible__RelativeToKeyboardMode__get_Flags_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, int* __retval);
void WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn(WhileKeyboardVisible__RelativeToKeyboardMode** __retval);

struct WhileKeyboardVisible__RelativeToKeyboardMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    static WhileKeyboardVisible__RelativeToKeyboardMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
