// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_RENDER_TARGET_ENTRY_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_RENDER_TARGET_ENTRY_H__

#include <app/Uno.Collections.ICollection__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IEnumerable__Fuse_RenderTargetEntry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct RenderTargetEntry; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_RenderTargetEntry__typeof();

struct IList__Fuse_RenderTargetEntry
{
    ::app::Fuse::RenderTargetEntry*(*__fp_get_Item)(void*, int);
    void(*__fp_RemoveAt)(void*, int);

    static ::app::Fuse::RenderTargetEntry* Item(::uObject* __this, int index) { return ((IList__Fuse_RenderTargetEntry*)uGetInterfacePtr(__this, IList__Fuse_RenderTargetEntry__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
    static void RemoveAt(::uObject* __this, int index) { ((IList__Fuse_RenderTargetEntry*)uGetInterfacePtr(__this, IList__Fuse_RenderTargetEntry__typeof()))->__fp_RemoveAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
