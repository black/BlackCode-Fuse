// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_NODE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_NODE_H__

#include <app/Uno.UX.Property__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Node;

struct UxProperty__Fuse_Node__uType : ::app::Uno::UX::Property__Fuse_Node__uType
{
};

UxProperty__Fuse_Node__uType* UxProperty__Fuse_Node__typeof();

void UxProperty__Fuse_Node___ObjInit_1(UxProperty__Fuse_Node* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Node* UxProperty__Fuse_Node__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Node__OnAddListener(UxProperty__Fuse_Node* __this, ::uDelegate* listener);
::app::Fuse::Node* UxProperty__Fuse_Node__OnGet(UxProperty__Fuse_Node* __this);
void UxProperty__Fuse_Node__OnRemoveListener(UxProperty__Fuse_Node* __this, ::uDelegate* listener);
void UxProperty__Fuse_Node__OnSet(UxProperty__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);

struct UxProperty__Fuse_Node : ::app::Uno::UX::Property__Fuse_Node
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Node___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
