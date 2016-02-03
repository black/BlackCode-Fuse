// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__UNO_EVENT_ARGS_H__
#define __APP_FUSE_INTERNAL_BLENDER__UNO_EVENT_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Uno_EventArgs;

struct Blender__Uno_EventArgs__uType : ::uClassType
{
    ::app::Uno::EventArgs*(*__fp_Add)(Blender__Uno_EventArgs*, ::app::Uno::EventArgs*, ::app::Uno::EventArgs*);
    ::app::Uno::EventArgs*(*__fp_Weight)(Blender__Uno_EventArgs*, ::app::Uno::EventArgs*, double);
};

Blender__Uno_EventArgs__uType* Blender__Uno_EventArgs__typeof();

struct Blender__Uno_EventArgs : ::uObject
{
    ::app::Uno::EventArgs* Add(::app::Uno::EventArgs* a, ::app::Uno::EventArgs* b) { return (((Blender__Uno_EventArgs__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Uno::EventArgs* Weight(::app::Uno::EventArgs* v, double w) { return (((Blender__Uno_EventArgs__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
