// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct TriggerAction; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Triggers_Actions_TriggerAction__typeof();

struct ICollection__Fuse_Triggers_Actions_TriggerAction
{
    void(*__fp_Add)(void*, ::app::Fuse::Triggers::Actions::TriggerAction*);

    static void Add(::uObject* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item) { ((ICollection__Fuse_Triggers_Actions_TriggerAction*)uGetInterfacePtr(__this, ICollection__Fuse_Triggers_Actions_TriggerAction__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
