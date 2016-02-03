// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_EXPIRATION_DISPOSAL_POLICY_H__
#define __APP_FUSE_RESOURCES_EXPIRATION_DISPOSAL_POLICY_H__

#include <app/Fuse.Resources.DisposalPolicy.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Resources {

struct ExpirationDisposalPolicy;

struct ExpirationDisposalPolicy__uType : ::app::Fuse::Resources::DisposalPolicy__uType
{
};

ExpirationDisposalPolicy__uType* ExpirationDisposalPolicy__typeof();

void ExpirationDisposalPolicy___ObjInit_1(ExpirationDisposalPolicy* __this);
bool ExpirationDisposalPolicy__CanDispose(ExpirationDisposalPolicy* __this, int dr, bool pinned);
::app::Fuse::Resources::DisposalPolicy* ExpirationDisposalPolicy__Clone(ExpirationDisposalPolicy* __this);
double ExpirationDisposalPolicy__get_Timeout(ExpirationDisposalPolicy* __this);
void ExpirationDisposalPolicy__MarkUsed(ExpirationDisposalPolicy* __this);
ExpirationDisposalPolicy* ExpirationDisposalPolicy__New_1(::uStatic* __this);
void ExpirationDisposalPolicy__set_Timeout(ExpirationDisposalPolicy* __this, double value);

struct ExpirationDisposalPolicy : ::app::Fuse::Resources::DisposalPolicy
{
    double lastUsedFrameTime;
    double _Timeout;

    void _ObjInit_1() { ExpirationDisposalPolicy___ObjInit_1(this); }
    double Timeout() { return ExpirationDisposalPolicy__get_Timeout(this); }
    void Timeout(double value) { ExpirationDisposalPolicy__set_Timeout(this, value); }
};

}}}


#endif
