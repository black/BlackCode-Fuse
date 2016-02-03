// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__PositionChangeMode;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.PositionChangeMode :59
// {
struct LayoutTransition__PositionChangeMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof();
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this);
void LayoutTransition__PositionChangeMode__get_Flags_fn(LayoutTransition__PositionChangeMode* __this, int* __retval);
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval);

struct LayoutTransition__PositionChangeMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    static LayoutTransition__PositionChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
