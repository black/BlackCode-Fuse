// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRANSLATION_MODES_PARENT_SIZE_MODE_H__
#define __APP_FUSE_TRANSLATION_MODES_PARENT_SIZE_MODE_H__

#include <app/Fuse.ITranslationMode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

struct TranslationModes_ParentSizeMode;

struct TranslationModes_ParentSizeMode__uType : ::uClassType
{
    ::app::Fuse::ITranslationMode __interface_0;
};

TranslationModes_ParentSizeMode__uType* TranslationModes_ParentSizeMode__typeof();

void TranslationModes_ParentSizeMode___ObjInit(TranslationModes_ParentSizeMode* __this);
::app::Uno::Float3 TranslationModes_ParentSizeMode__GetAbsVector(TranslationModes_ParentSizeMode* __this, ::app::Fuse::Translation* t);
TranslationModes_ParentSizeMode* TranslationModes_ParentSizeMode__New_1(::uStatic* __this);

struct TranslationModes_ParentSizeMode : ::uObject
{
    void _ObjInit() { TranslationModes_ParentSizeMode___ObjInit(this); }
    ::app::Uno::Float3 GetAbsVector(::app::Fuse::Translation* t);
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float3 TranslationModes_ParentSizeMode::GetAbsVector(::app::Fuse::Translation* t) { return TranslationModes_ParentSizeMode__GetAbsVector(this, t); }

}}


#endif
