// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_P_E_L_HOLDER_H__
#define __APP_FUSE_INPUT_POINTER_P_E_L_HOLDER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct Pointer_PELHolder;

struct Pointer_PELHolder__uType : ::uClassType
{
};

Pointer_PELHolder__uType* Pointer_PELHolder__typeof();

void Pointer_PELHolder___ObjInit(Pointer_PELHolder* __this);
Pointer_PELHolder* Pointer_PELHolder__New_1(::uStatic* __this);

struct Pointer_PELHolder : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> Node;
    int Status;

    void _ObjInit() { Pointer_PELHolder___ObjInit(this); }
};

}}}


#endif
