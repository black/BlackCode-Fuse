// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_DRAWING_BRUSH_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Drawing_Brush__typeof();

struct IList__Fuse_Drawing_Brush
{
    ::app::Fuse::Drawing::Brush*(*__fp_get_Item)(void*, int);

    static ::app::Fuse::Drawing::Brush* Item(::uObject* __this, int index) { return ((IList__Fuse_Drawing_Brush*)uGetInterfacePtr(__this, IList__Fuse_Drawing_Brush__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
