// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_UPDATE_LISTENER_H__
#define __APP_FUSE_UPDATE_LISTENER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct UpdateListener;

struct UpdateListener__uType : ::uClassType
{
};

UpdateListener__uType* UpdateListener__typeof();

void UpdateListener___ObjInit(UpdateListener* __this);
void UpdateListener__Invoke(UpdateListener* __this);
UpdateListener* UpdateListener__New_1(::uStatic* __this);

struct UpdateListener : ::uObject
{
    ::uStrong< ::uDelegate*> action;
    bool removed;
    bool defer;
    int sequence;

    void _ObjInit() { UpdateListener___ObjInit(this); }
    void Invoke() { UpdateListener__Invoke(this); }
};

}}


#endif
