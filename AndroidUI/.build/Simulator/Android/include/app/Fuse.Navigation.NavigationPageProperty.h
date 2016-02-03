// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_PAGE_PROPERTY_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_PAGE_PROPERTY_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Navigation_IPageResourceBinding; } } }

namespace app {
namespace Fuse {
namespace Navigation {

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> NavigationPageProperty___pageProperty;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*> NavigationPageProperty__RootedBindings;

struct NavigationPageProperty__uType : ::uClassType
{
};

NavigationPageProperty__uType* NavigationPageProperty__typeof();

void NavigationPageProperty___TypeInit(::uStatic* __this);
::app::Fuse::Node* NavigationPageProperty__GetNavigationPage(::uStatic* __this, ::app::Fuse::Node* n);
void NavigationPageProperty__ResetNavigationPage(::uStatic* __this, ::app::Fuse::Node* n);
void NavigationPageProperty__SetNavigationPage(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Node* page);

}}}


#endif
