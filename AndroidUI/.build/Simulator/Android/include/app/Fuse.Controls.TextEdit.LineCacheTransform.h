// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_TRANSFORM_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_TRANSFORM_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

::uInterfaceType* LineCacheTransform__typeof();

struct LineCacheTransform
{
    ::uString*(*__fp_Transform)(void*, ::uString*);

    static ::uString* Transform(::uObject* __this, ::uString* text) { return ((LineCacheTransform*)uGetInterfacePtr(__this, LineCacheTransform__typeof()))->__fp_Transform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), text); }
};

}}}}


#endif
