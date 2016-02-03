// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ANIMATIONS_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_ANIMATIONS_ANIMATOR_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Animations_Animator.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Animator; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Animations_Animator__typeof();

struct ICollection__Fuse_Animations_Animator
{
    void(*__fp_Add)(void*, ::app::Fuse::Animations::Animator*);

    static void Add(::uObject* __this, ::app::Fuse::Animations::Animator* item) { ((ICollection__Fuse_Animations_Animator*)uGetInterfacePtr(__this, ICollection__Fuse_Animations_Animator__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
