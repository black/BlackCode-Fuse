// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRANSLATION_MODES_LOCAL_MODE_H__
#define __APP_FUSE_TRANSLATION_MODES_LOCAL_MODE_H__

#include <app/Fuse.ITranslationMode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

struct TranslationModes_LocalMode;

struct TranslationModes_LocalMode__uType : ::uClassType
{
    ::app::Fuse::ITranslationMode __interface_0;
};

TranslationModes_LocalMode__uType* TranslationModes_LocalMode__typeof();

void TranslationModes_LocalMode___ObjInit(TranslationModes_LocalMode* __this);
::app::Uno::Float3 TranslationModes_LocalMode__GetAbsVector(TranslationModes_LocalMode* __this, ::app::Fuse::Translation* t);
TranslationModes_LocalMode* TranslationModes_LocalMode__New_1(::uStatic* __this);

struct TranslationModes_LocalMode : ::uObject
{
    void _ObjInit() { TranslationModes_LocalMode___ObjInit(this); }
    ::app::Uno::Float3 GetAbsVector(::app::Fuse::Translation* t);
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float3 TranslationModes_LocalMode::GetAbsVector(::app::Fuse::Translation* t) { return TranslationModes_LocalMode__GetAbsVector(this, t); }

}}


#endif
