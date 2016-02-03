// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RETAIN_DISPOSAL_POLICY_H__
#define __APP_FUSE_RESOURCES_RETAIN_DISPOSAL_POLICY_H__

#include <app/Fuse.Resources.DisposalPolicy.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Resources {

struct RetainDisposalPolicy;

struct RetainDisposalPolicy__uType : ::app::Fuse::Resources::DisposalPolicy__uType
{
};

RetainDisposalPolicy__uType* RetainDisposalPolicy__typeof();

void RetainDisposalPolicy___ObjInit_1(RetainDisposalPolicy* __this);
bool RetainDisposalPolicy__CanDispose(RetainDisposalPolicy* __this, int dr, bool pinned);
::app::Fuse::Resources::DisposalPolicy* RetainDisposalPolicy__Clone(RetainDisposalPolicy* __this);
void RetainDisposalPolicy__MarkUsed(RetainDisposalPolicy* __this);
RetainDisposalPolicy* RetainDisposalPolicy__New_1(::uStatic* __this);

struct RetainDisposalPolicy : ::app::Fuse::Resources::DisposalPolicy
{
    void _ObjInit_1() { RetainDisposalPolicy___ObjInit_1(this); }
};

}}}


#endif
