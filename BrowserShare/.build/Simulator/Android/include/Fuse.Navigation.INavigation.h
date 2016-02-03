// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract interface INavigation :417
// {
uInterfaceType* INavigation_typeof();

struct INavigation
{
    void(*fp_get_ActivePage)(uObject*, ::g::Fuse::Node**);
    void(*fp_GetPage)(uObject*, int*, ::g::Fuse::Node**);
    void(*fp_Goto)(uObject*, ::g::Fuse::Node*, int*);
    void(*fp_add_HistoryChanged)(uObject*, uDelegate*);
    void(*fp_remove_HistoryChanged)(uObject*, uDelegate*);
    void(*fp_add_Navigated)(uObject*, uDelegate*);
    void(*fp_remove_Navigated)(uObject*, uDelegate*);
    void(*fp_get_PageCount)(uObject*, int*);
    void(*fp_add_PageCountChanged)(uObject*, uDelegate*);
    void(*fp_remove_PageCountChanged)(uObject*, uDelegate*);
    void(*fp_get_PageProgress)(uObject*, double*);
    void(*fp_add_PageProgressChanged)(uObject*, uDelegate*);
    void(*fp_remove_PageProgressChanged)(uObject*, uDelegate*);
    void(*fp_Toggle)(uObject*, ::g::Fuse::Node*);
    static ::g::Fuse::Node* ActivePage(const uInterface& __this) { ::g::Fuse::Node* __retval; return __this.VTable<INavigation>()->fp_get_ActivePage(__this, &__retval), __retval; }
    static ::g::Fuse::Node* GetPage(const uInterface& __this, int index) { ::g::Fuse::Node* __retval; return __this.VTable<INavigation>()->fp_GetPage(__this, &index, &__retval), __retval; }
    static void Goto(const uInterface& __this, ::g::Fuse::Node* node, int mode) { __this.VTable<INavigation>()->fp_Goto(__this, node, &mode); }
    static void add_HistoryChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_HistoryChanged(__this, value); }
    static void remove_HistoryChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_HistoryChanged(__this, value); }
    static void add_Navigated(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_Navigated(__this, value); }
    static void remove_Navigated(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_Navigated(__this, value); }
    static int PageCount(const uInterface& __this) { int __retval; return __this.VTable<INavigation>()->fp_get_PageCount(__this, &__retval), __retval; }
    static void add_PageCountChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_PageCountChanged(__this, value); }
    static void remove_PageCountChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_PageCountChanged(__this, value); }
    static double PageProgress(const uInterface& __this) { double __retval; return __this.VTable<INavigation>()->fp_get_PageProgress(__this, &__retval), __retval; }
    static void add_PageProgressChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_PageProgressChanged(__this, value); }
    static void remove_PageProgressChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_PageProgressChanged(__this, value); }
    static void Toggle(const uInterface& __this, ::g::Fuse::Node* node) { __this.VTable<INavigation>()->fp_Toggle(__this, node); }
};
// }

}}} // ::g::Fuse::Navigation
