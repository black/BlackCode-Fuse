// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_DRAWING_STROKE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_DRAWING_STROKE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Drawing_Stroke__typeof();

struct ICollection__Fuse_Drawing_Stroke
{
    void(*__fp_Add)(void*, ::app::Fuse::Drawing::Stroke*);
    void(*__fp_Clear)(void*);
    int(*__fp_get_Count)(void*);
    bool(*__fp_Remove)(void*, ::app::Fuse::Drawing::Stroke*);

    static void Add(::uObject* __this, ::app::Fuse::Drawing::Stroke* item) { ((ICollection__Fuse_Drawing_Stroke*)uGetInterfacePtr(__this, ICollection__Fuse_Drawing_Stroke__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static void Clear(::uObject* __this) { ((ICollection__Fuse_Drawing_Stroke*)uGetInterfacePtr(__this, ICollection__Fuse_Drawing_Stroke__typeof()))->__fp_Clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int Count(::uObject* __this) { return ((ICollection__Fuse_Drawing_Stroke*)uGetInterfacePtr(__this, ICollection__Fuse_Drawing_Stroke__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool Remove(::uObject* __this, ::app::Fuse::Drawing::Stroke* item) { return ((ICollection__Fuse_Drawing_Stroke*)uGetInterfacePtr(__this, ICollection__Fuse_Drawing_Stroke__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
