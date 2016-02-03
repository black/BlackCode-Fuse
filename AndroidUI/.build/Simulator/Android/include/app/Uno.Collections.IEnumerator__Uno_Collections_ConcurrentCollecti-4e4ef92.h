// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COLLECTI_4E4EF92_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COLLECTI_4E4EF92_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Uno_EventHandler; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof();

struct IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_
{
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler(*__fp_get_Current)(void*);

    static ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler Current(::uObject* __this);
};

}}}

#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Uno_EventHandler.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_::Current(::uObject* __this) { return ((IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*)uGetInterfacePtr(__this, IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
