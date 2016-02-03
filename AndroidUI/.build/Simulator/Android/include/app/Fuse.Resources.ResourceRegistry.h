// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_REGISTRY_H__
#define __APP_FUSE_RESOURCES_RESOURCE_REGISTRY_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Uno_Action_; } } }

namespace app {
namespace Fuse {
namespace Resources {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*> ResourceRegistry___handlers;

struct ResourceRegistry__uType : ::uClassType
{
};

ResourceRegistry__uType* ResourceRegistry__typeof();

void ResourceRegistry___TypeInit(::uStatic* __this);
void ResourceRegistry__AddResourceChangedHandler(::uStatic* __this, ::uString* key, ::uDelegate* handler);
void ResourceRegistry__NotifyResourceChanged(::uStatic* __this, ::uString* key);
void ResourceRegistry__RemoveResourceChangedHandler(::uStatic* __this, ::uString* key, ::uDelegate* handler);

}}}


#endif
