// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NAME_REGISTRY_H__
#define __APP_FUSE_SCRIPTING_NAME_REGISTRY_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__object__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_; } } }

namespace app {
namespace Fuse {
namespace Scripting {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*> NameRegistry___listeners;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__object__string*> NameRegistry___names;

struct NameRegistry__uType : ::uClassType
{
};

NameRegistry__uType* NameRegistry__typeof();

void NameRegistry___TypeInit(::uStatic* __this);
void NameRegistry__AddListener(::uStatic* __this, ::uString* name, ::uObject* listener);
void NameRegistry__ClearName(::uStatic* __this, ::uObject* obj);
::uString* NameRegistry__GetName(::uStatic* __this, ::uObject* obj);
void NameRegistry__NotifyNameChanged(::uStatic* __this, ::uObject* obj, ::uString* name);
void NameRegistry__RemoveListener(::uStatic* __this, ::uObject* listener);
void NameRegistry__SetName(::uStatic* __this, ::uObject* obj, ::uString* name);

}}}


#endif
