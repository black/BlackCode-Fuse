// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace view{struct ActionMode;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ActionModeDLRCallback :26552
// {
uInterfaceType* ActionModeDLRCallback_typeof();

struct ActionModeDLRCallback
{
    void(*fp_onActionItemClicked)(uObject*, ::g::Android::android::view::ActionMode*, uObject*, bool*);
    void(*fp_onCreateActionMode)(uObject*, ::g::Android::android::view::ActionMode*, uObject*, bool*);
    void(*fp_onDestroyActionMode)(uObject*, ::g::Android::android::view::ActionMode*);
    void(*fp_onPrepareActionMode)(uObject*, ::g::Android::android::view::ActionMode*, uObject*, bool*);
    static bool onActionItemClicked(const uInterface& __this, ::g::Android::android::view::ActionMode* arg0, uObject* arg1) { bool __retval; return __this.VTable<ActionModeDLRCallback>()->fp_onActionItemClicked(__this, arg0, arg1, &__retval), __retval; }
    static bool onCreateActionMode(const uInterface& __this, ::g::Android::android::view::ActionMode* arg0, uObject* arg1) { bool __retval; return __this.VTable<ActionModeDLRCallback>()->fp_onCreateActionMode(__this, arg0, arg1, &__retval), __retval; }
    static void onDestroyActionMode(const uInterface& __this, ::g::Android::android::view::ActionMode* arg0) { __this.VTable<ActionModeDLRCallback>()->fp_onDestroyActionMode(__this, arg0); }
    static bool onPrepareActionMode(const uInterface& __this, ::g::Android::android::view::ActionMode* arg0, uObject* arg1) { bool __retval; return __this.VTable<ActionModeDLRCallback>()->fp_onPrepareActionMode(__this, arg0, arg1, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
