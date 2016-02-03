// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Triggers_State;

struct Converter__Fuse_Triggers_State__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Triggers_State*, ::app::Fuse::Triggers::State*);
    ::app::Fuse::Triggers::State*(*__fp_Out)(Converter__Fuse_Triggers_State*, ::app::Uno::Float4);
};

Converter__Fuse_Triggers_State__uType* Converter__Fuse_Triggers_State__typeof();

struct Converter__Fuse_Triggers_State : ::uObject
{
    ::app::Uno::Float4 In(::app::Fuse::Triggers::State* value);
    ::app::Fuse::Triggers::State* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Triggers_State::In(::app::Fuse::Triggers::State* value) { return (((Converter__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Fuse::Triggers::State* Converter__Fuse_Triggers_State::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
