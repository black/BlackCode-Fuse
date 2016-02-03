// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_DRAWING_INTERNAL_MULTI_BUFFER_FIELD_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_DRAWING_INTERNAL_MULTI_BUFFER_FIELD_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer_Field; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field__typeof();

struct IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field
{
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field*(*__fp_get_Current)(void*);

    static ::app::Fuse::Drawing::Internal::MultiBuffer_Field* Current(::uObject* __this) { return ((IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field*)uGetInterfacePtr(__this, IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
