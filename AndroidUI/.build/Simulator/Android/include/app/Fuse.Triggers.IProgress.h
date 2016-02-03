// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_I_PROGRESS_H__
#define __APP_FUSE_TRIGGERS_I_PROGRESS_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

::uInterfaceType* IProgress__typeof();

struct IProgress
{
    void(*__fp_add_ProgressChanged)(void*, ::uDelegate*);
    double(*__fp_get_Progress)(void*);
    void(*__fp_remove_ProgressChanged)(void*, ::uDelegate*);

    static void add_ProgressChanged(::uObject* __this, ::uDelegate* value) { ((IProgress*)uGetInterfacePtr(__this, IProgress__typeof()))->__fp_add_ProgressChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static double Progress(::uObject* __this) { return ((IProgress*)uGetInterfacePtr(__this, IProgress__typeof()))->__fp_get_Progress((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void remove_ProgressChanged(::uObject* __this, ::uDelegate* value) { ((IProgress*)uGetInterfacePtr(__this, IProgress__typeof()))->__fp_remove_ProgressChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}


#endif
