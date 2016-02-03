// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_I_NAVIGATION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* INavigation__typeof();

struct INavigation
{
    void(*__fp_add_HistoryChanged)(void*, ::uDelegate*);
    void(*__fp_add_PageCountChanged)(void*, ::uDelegate*);
    void(*__fp_add_PageProgressChanged)(void*, ::uDelegate*);
    bool(*__fp_get_CanGoBack)(void*);
    bool(*__fp_get_CanGoForward)(void*);
    int(*__fp_get_PageCount)(void*);
    double(*__fp_get_PageProgress)(void*);
    ::app::Fuse::Node*(*__fp_GetPage)(void*, int);
    void(*__fp_GoBack)(void*);
    void(*__fp_GoForward)(void*);
    void(*__fp_Goto)(void*, ::app::Fuse::Node*, int);
    void(*__fp_remove_HistoryChanged)(void*, ::uDelegate*);
    void(*__fp_remove_PageCountChanged)(void*, ::uDelegate*);
    void(*__fp_remove_PageProgressChanged)(void*, ::uDelegate*);
    void(*__fp_Toggle)(void*, ::app::Fuse::Node*);

    static void add_HistoryChanged(::uObject* __this, ::uDelegate* value) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_add_HistoryChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void add_PageCountChanged(::uObject* __this, ::uDelegate* value) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_add_PageCountChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void add_PageProgressChanged(::uObject* __this, ::uDelegate* value) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_add_PageProgressChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static bool CanGoBack(::uObject* __this) { return ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_get_CanGoBack((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool CanGoForward(::uObject* __this) { return ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_get_CanGoForward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int PageCount(::uObject* __this) { return ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_get_PageCount((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static double PageProgress(::uObject* __this) { return ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_get_PageProgress((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Fuse::Node* GetPage(::uObject* __this, int index) { return ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_GetPage((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
    static void GoBack(::uObject* __this) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_GoBack((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void GoForward(::uObject* __this) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_GoForward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Goto(::uObject* __this, ::app::Fuse::Node* node, int mode) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_Goto((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), node, mode); }
    static void remove_HistoryChanged(::uObject* __this, ::uDelegate* value) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_remove_HistoryChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void remove_PageCountChanged(::uObject* __this, ::uDelegate* value) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_remove_PageCountChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void remove_PageProgressChanged(::uObject* __this, ::uDelegate* value) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_remove_PageProgressChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void Toggle(::uObject* __this, ::app::Fuse::Node* node) { ((INavigation*)uGetInterfacePtr(__this, INavigation__typeof()))->__fp_Toggle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), node); }
};

}}}


#endif
