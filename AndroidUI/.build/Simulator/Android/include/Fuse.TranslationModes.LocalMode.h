// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct TranslationModes__LocalMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private sealed class TranslationModes.LocalMode :6336
// {
struct TranslationModes__LocalMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof();
void TranslationModes__LocalMode__ctor__fn(TranslationModes__LocalMode* __this);
void TranslationModes__LocalMode__get_Flags_fn(TranslationModes__LocalMode* __this, int* __retval);
void TranslationModes__LocalMode__GetAbsVector_fn(TranslationModes__LocalMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void TranslationModes__LocalMode__New1_fn(TranslationModes__LocalMode** __retval);

struct TranslationModes__LocalMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    static TranslationModes__LocalMode* New1();
};
// }

}} // ::g::Fuse
