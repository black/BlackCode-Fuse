// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.Menu.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface SubMenu :27006
// {
uInterfaceType* SubMenu_typeof();

struct SubMenu
{
    void(*fp_clearHeader)(uObject*);
    void(*fp_getItem)(uObject*, uObject**);
    void(*fp_setHeaderIcon)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**);
    void(*fp_setHeaderIcon1)(uObject*, int*, uObject**);
    void(*fp_setHeaderTitle)(uObject*, uObject*, uObject**);
    void(*fp_setHeaderTitle1)(uObject*, int*, uObject**);
    void(*fp_setHeaderView)(uObject*, ::g::Android::android::view::View*, uObject**);
    void(*fp_setIcon)(uObject*, ::g::Android::android::graphics::drawable::Drawable*, uObject**);
    void(*fp_setIcon1)(uObject*, int*, uObject**);
    static void clearHeader(const uInterface& __this) { __this.VTable<SubMenu>()->fp_clearHeader(__this); }
    static uObject* getItem(const uInterface& __this) { uObject* __retval; return __this.VTable<SubMenu>()->fp_getItem(__this, &__retval), __retval; }
    static uObject* setHeaderIcon(const uInterface& __this, ::g::Android::android::graphics::drawable::Drawable* arg0) { uObject* __retval; return __this.VTable<SubMenu>()->fp_setHeaderIcon(__this, arg0, &__retval), __retval; }
    static uObject* setHeaderIcon1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<SubMenu>()->fp_setHeaderIcon1(__this, &arg0, &__retval), __retval; }
    static uObject* setHeaderTitle(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<SubMenu>()->fp_setHeaderTitle(__this, arg0, &__retval), __retval; }
    static uObject* setHeaderTitle1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<SubMenu>()->fp_setHeaderTitle1(__this, &arg0, &__retval), __retval; }
    static uObject* setHeaderView(const uInterface& __this, ::g::Android::android::view::View* arg0) { uObject* __retval; return __this.VTable<SubMenu>()->fp_setHeaderView(__this, arg0, &__retval), __retval; }
    static uObject* setIcon(const uInterface& __this, ::g::Android::android::graphics::drawable::Drawable* arg0) { uObject* __retval; return __this.VTable<SubMenu>()->fp_setIcon(__this, arg0, &__retval), __retval; }
    static uObject* setIcon1(const uInterface& __this, int arg0) { uObject* __retval; return __this.VTable<SubMenu>()->fp_setIcon1(__this, &arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
