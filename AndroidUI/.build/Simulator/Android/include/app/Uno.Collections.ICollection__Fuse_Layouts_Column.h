// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_LAYOUTS_COLUMN_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_LAYOUTS_COLUMN_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_Column.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Layouts_Column__typeof();

struct ICollection__Fuse_Layouts_Column
{
    void(*__fp_Add)(void*, ::app::Fuse::Layouts::Column*);
    void(*__fp_Clear)(void*);
    int(*__fp_get_Count)(void*);

    static void Add(::uObject* __this, ::app::Fuse::Layouts::Column* item) { ((ICollection__Fuse_Layouts_Column*)uGetInterfacePtr(__this, ICollection__Fuse_Layouts_Column__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static void Clear(::uObject* __this) { ((ICollection__Fuse_Layouts_Column*)uGetInterfacePtr(__this, ICollection__Fuse_Layouts_Column__typeof()))->__fp_Clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int Count(::uObject* __this) { return ((ICollection__Fuse_Layouts_Column*)uGetInterfacePtr(__this, ICollection__Fuse_Layouts_Column__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
