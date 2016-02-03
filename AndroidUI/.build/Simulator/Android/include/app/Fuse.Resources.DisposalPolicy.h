// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_DISPOSAL_POLICY_H__
#define __APP_FUSE_RESOURCES_DISPOSAL_POLICY_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Resources {

struct DisposalPolicy;

struct DisposalPolicy__uType : ::uClassType
{
    bool(*__fp_CanDispose)(DisposalPolicy*, int, bool);
    DisposalPolicy*(*__fp_Clone)(DisposalPolicy*);
    void(*__fp_MarkUsed)(DisposalPolicy*);
};

DisposalPolicy__uType* DisposalPolicy__typeof();

void DisposalPolicy___ObjInit(DisposalPolicy* __this);

struct DisposalPolicy : ::uObject
{
    void _ObjInit() { DisposalPolicy___ObjInit(this); }
    bool CanDispose(int dr, bool pinned) { return (((DisposalPolicy__uType*)this->__obj_type)->__fp_CanDispose)(this, dr, pinned); }
    DisposalPolicy* Clone() { return (((DisposalPolicy__uType*)this->__obj_type)->__fp_Clone)(this); }
    void MarkUsed() { (((DisposalPolicy__uType*)this->__obj_type)->__fp_MarkUsed)(this); }
};

}}}


#endif
