// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_EFFECTS_EFFECT_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_EFFECTS_EFFECT_H__

#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Effects_Effect__typeof();

struct IList__Fuse_Effects_Effect
{
    ::app::Fuse::Effects::Effect*(*__fp_get_Item)(void*, int);

    static ::app::Fuse::Effects::Effect* Item(::uObject* __this, int index) { return ((IList__Fuse_Effects_Effect*)uGetInterfacePtr(__this, IList__Fuse_Effects_Effect__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
