// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COLLECTI_62DA0C27_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COLLECTI_62DA0C27_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof();

struct IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_
{
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster(*__fp_get_Current)(void*);

    static ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster Current(::uObject* __this);
};

}}}

#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Fuse_Animations_-c46c43e5.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_::Current(::uObject* __this) { return ((IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*)uGetInterfacePtr(__this, IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
