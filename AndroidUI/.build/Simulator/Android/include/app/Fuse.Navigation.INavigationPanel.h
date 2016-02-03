// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_NAVIGATION_PANEL_H__
#define __APP_FUSE_NAVIGATION_I_NAVIGATION_PANEL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* INavigationPanel__typeof();

struct INavigationPanel
{
    void(*__fp_add_ChildAdded)(void*, ::uDelegate*);
    void(*__fp_add_ChildRemoved)(void*, ::uDelegate*);
    void(*__fp_add_Placed)(void*, ::uDelegate*);
    void(*__fp_add_Update)(void*, ::uDelegate*);
    void(*__fp_AddChildAt)(void*, int, ::app::Fuse::Node*);
    ::app::Uno::Float2(*__fp_get_ActualSize)(void*);
    int(*__fp_get_ChildCount)(void*);
    ::app::Fuse::Node*(*__fp_GetChild)(void*, int);
    bool(*__fp_IsPage)(void*, ::app::Fuse::Node*);
    void(*__fp_remove_ChildAdded)(void*, ::uDelegate*);
    void(*__fp_remove_ChildRemoved)(void*, ::uDelegate*);
    void(*__fp_remove_Placed)(void*, ::uDelegate*);
    void(*__fp_remove_Update)(void*, ::uDelegate*);
    void(*__fp_RemoveChild)(void*, ::app::Fuse::Node*);

    static void add_ChildAdded(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_ChildAdded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void add_ChildRemoved(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_ChildRemoved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void add_Placed(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_Placed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void add_Update(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void AddChildAt(::uObject* __this, int index, ::app::Fuse::Node* n) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_AddChildAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index, n); }
    static ::app::Uno::Float2 ActualSize(::uObject* __this);
    static int ChildCount(::uObject* __this) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_get_ChildCount((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Fuse::Node* GetChild(::uObject* __this, int index) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_GetChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
    static bool IsPage(::uObject* __this, ::app::Fuse::Node* child) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_IsPage((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), child); }
    static void remove_ChildAdded(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_ChildAdded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void remove_ChildRemoved(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_ChildRemoved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void remove_Placed(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_Placed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void remove_Update(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void RemoveChild(::uObject* __this, ::app::Fuse::Node* child) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_RemoveChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), child); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Navigation {

inline ::app::Uno::Float2 INavigationPanel::ActualSize(::uObject* __this) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_get_ActualSize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }

}}}


#endif
