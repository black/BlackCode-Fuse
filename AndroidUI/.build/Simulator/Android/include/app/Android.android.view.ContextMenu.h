// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_CONTEXT_MENU_H__
#define __APP_ANDROID_ANDROID_VIEW_CONTEXT_MENU_H__

#include <app/Android.android.view.Menu.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ContextMenu__typeof();

struct ContextMenu
{
    void(*__fp_clearHeader)(void*);
    ::uObject*(*__fp_setHeaderIcon)(void*, ::app::Android::android::graphics::drawable::Drawable*);
    ::uObject*(*__fp_setHeaderIcon_1)(void*, int);
    ::uObject*(*__fp_setHeaderTitle)(void*, ::uObject*);
    ::uObject*(*__fp_setHeaderTitle_1)(void*, int);
    ::uObject*(*__fp_setHeaderView)(void*, ::app::Android::android::view::View*);

    static void clearHeader(::uObject* __this) { ((ContextMenu*)uGetInterfacePtr(__this, ContextMenu__typeof()))->__fp_clearHeader((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* setHeaderIcon(::uObject* __this, ::app::Android::android::graphics::drawable::Drawable* arg0) { return ((ContextMenu*)uGetInterfacePtr(__this, ContextMenu__typeof()))->__fp_setHeaderIcon((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setHeaderIcon_1(::uObject* __this, int arg0) { return ((ContextMenu*)uGetInterfacePtr(__this, ContextMenu__typeof()))->__fp_setHeaderIcon_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setHeaderTitle(::uObject* __this, ::uObject* arg0) { return ((ContextMenu*)uGetInterfacePtr(__this, ContextMenu__typeof()))->__fp_setHeaderTitle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setHeaderTitle_1(::uObject* __this, int arg0) { return ((ContextMenu*)uGetInterfacePtr(__this, ContextMenu__typeof()))->__fp_setHeaderTitle_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::uObject* setHeaderView(::uObject* __this, ::app::Android::android::view::View* arg0) { return ((ContextMenu*)uGetInterfacePtr(__this, ContextMenu__typeof()))->__fp_setHeaderView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
