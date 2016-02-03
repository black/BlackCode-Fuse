// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__WorldPositionChangeMode;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.WorldPositionChangeMode :32
// {
struct LayoutTransition__WorldPositionChangeMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof();
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this);
void LayoutTransition__WorldPositionChangeMode__get_Flags_fn(LayoutTransition__WorldPositionChangeMode* __this, int* __retval);
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval);

struct LayoutTransition__WorldPositionChangeMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    static LayoutTransition__WorldPositionChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
