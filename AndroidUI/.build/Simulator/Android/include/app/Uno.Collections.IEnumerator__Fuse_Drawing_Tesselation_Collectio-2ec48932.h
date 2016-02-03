// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_DRAWING_TESSELATION_COLLECTIO_2EC48932_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_DRAWING_TESSELATION_COLLECTIO_2EC48932_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion; } } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof();

struct IEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_
{
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*(*__fp_get_Current)(void*);

    static ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Current(::uObject* __this) { return ((IEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_*)uGetInterfacePtr(__this, IEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
