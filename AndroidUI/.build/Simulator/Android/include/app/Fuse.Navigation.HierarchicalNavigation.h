// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_HIERARCHICAL_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_HIERARCHICAL_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.StructuredNavigation.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct HierarchicalNavigation;

struct HierarchicalNavigation__uType : ::app::Fuse::Navigation::StructuredNavigation__uType
{
};

HierarchicalNavigation__uType* HierarchicalNavigation__typeof();

void HierarchicalNavigation___ObjInit_3(HierarchicalNavigation* __this);
bool HierarchicalNavigation__get_ReuseExistingNode(HierarchicalNavigation* __this);
HierarchicalNavigation* HierarchicalNavigation__New_1(::uStatic* __this);
void HierarchicalNavigation__set_ReuseExistingNode(HierarchicalNavigation* __this, bool value);

struct HierarchicalNavigation : ::app::Fuse::Navigation::StructuredNavigation
{
    void _ObjInit_3() { HierarchicalNavigation___ObjInit_3(this); }
    bool ReuseExistingNode() { return HierarchicalNavigation__get_ReuseExistingNode(this); }
    void ReuseExistingNode(bool value) { HierarchicalNavigation__set_ReuseExistingNode(this, value); }
};

}}}


#endif
