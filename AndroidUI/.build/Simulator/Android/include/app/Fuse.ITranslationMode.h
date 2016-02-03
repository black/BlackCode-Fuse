// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_TRANSLATION_MODE_H__
#define __APP_FUSE_I_TRANSLATION_MODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Translation; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

::uInterfaceType* ITranslationMode__typeof();

struct ITranslationMode
{
    ::app::Uno::Float3(*__fp_GetAbsVector)(void*, ::app::Fuse::Translation*);

    static ::app::Uno::Float3 GetAbsVector(::uObject* __this, ::app::Fuse::Translation* t);
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float3 ITranslationMode::GetAbsVector(::uObject* __this, ::app::Fuse::Translation* t) { return ((ITranslationMode*)uGetInterfacePtr(__this, ITranslationMode__typeof()))->__fp_GetAbsVector((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), t); }

}}


#endif
