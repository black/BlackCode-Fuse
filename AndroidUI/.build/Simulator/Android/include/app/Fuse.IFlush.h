// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_FLUSH_H__
#define __APP_FUSE_I_FLUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }

namespace app {
namespace Fuse {

::uInterfaceType* IFlush__typeof();

struct IFlush
{
    void(*__fp_Flush)(void*, ::app::Fuse::DrawContext*);

    static void Flush(::uObject* __this, ::app::Fuse::DrawContext* dc) { ((IFlush*)uGetInterfacePtr(__this, IFlush__typeof()))->__fp_Flush((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), dc); }
};

}}


#endif
