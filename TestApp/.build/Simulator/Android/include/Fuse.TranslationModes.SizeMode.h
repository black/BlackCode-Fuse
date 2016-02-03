// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private sealed class TranslationModes.SizeMode :6342
// {
struct TranslationModes__SizeMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof();
void TranslationModes__SizeMode__ctor__fn(TranslationModes__SizeMode* __this);
void TranslationModes__SizeMode__get_Flags_fn(TranslationModes__SizeMode* __this, int* __retval);
void TranslationModes__SizeMode__GetAbsVector_fn(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void TranslationModes__SizeMode__New1_fn(TranslationModes__SizeMode** __retval);

struct TranslationModes__SizeMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    static TranslationModes__SizeMode* New1();
};
// }

}} // ::g::Fuse
