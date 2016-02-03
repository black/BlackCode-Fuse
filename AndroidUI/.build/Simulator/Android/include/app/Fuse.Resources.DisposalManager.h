// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_DISPOSAL_MANAGER_H__
#define __APP_FUSE_RESOURCES_DISPOSAL_MANAGER_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_IMemoryResource; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_ISoftDisposable; } } }

namespace app {
namespace Fuse {
namespace Resources {

extern bool DisposalManager___actionAdded;
extern int DisposalManager___disposeAt;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*> DisposalManager___items;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*> DisposalManager___softDisposables;

struct DisposalManager__uType : ::uClassType
{
};

DisposalManager__uType* DisposalManager__typeof();

void DisposalManager___TypeInit(::uStatic* __this);
void DisposalManager__Add(::uStatic* __this, ::uObject* item);
void DisposalManager__Add_1(::uStatic* __this, ::uObject* item);
void DisposalManager__Clean(::uStatic* __this, int dr);
void DisposalManager__Remove(::uStatic* __this, ::uObject* item);
void DisposalManager__Remove_1(::uStatic* __this, ::uObject* item);
void DisposalManager__Update(::uStatic* __this);
void DisposalManager__VerifyAttach(::uStatic* __this);

}}}


#endif
