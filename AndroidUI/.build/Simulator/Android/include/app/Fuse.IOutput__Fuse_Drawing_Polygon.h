// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Processing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_OUTPUT__FUSE_DRAWING_POLYGON_H__
#define __APP_FUSE_I_OUTPUT__FUSE_DRAWING_POLYGON_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Polygon; } } }

namespace app {
namespace Fuse {

::uInterfaceType* IOutput__Fuse_Drawing_Polygon__typeof();

struct IOutput__Fuse_Drawing_Polygon
{
    void(*__fp_add_OutputChanged)(void*, ::uDelegate*);
    ::app::Fuse::Drawing::Polygon*(*__fp_get_Output)(void*);
    void(*__fp_remove_OutputChanged)(void*, ::uDelegate*);

    static void add_OutputChanged(::uObject* __this, ::uDelegate* value) { ((IOutput__Fuse_Drawing_Polygon*)uGetInterfacePtr(__this, IOutput__Fuse_Drawing_Polygon__typeof()))->__fp_add_OutputChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static ::app::Fuse::Drawing::Polygon* Output(::uObject* __this) { return ((IOutput__Fuse_Drawing_Polygon*)uGetInterfacePtr(__this, IOutput__Fuse_Drawing_Polygon__typeof()))->__fp_get_Output((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void remove_OutputChanged(::uObject* __this, ::uDelegate* value) { ((IOutput__Fuse_Drawing_Polygon*)uGetInterfacePtr(__this, IOutput__Fuse_Drawing_Polygon__typeof()))->__fp_remove_OutputChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}


#endif
