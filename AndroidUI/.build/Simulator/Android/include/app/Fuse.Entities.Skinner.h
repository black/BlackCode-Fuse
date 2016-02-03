// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_SKINNER_H__
#define __APP_FUSE_ENTITIES_SKINNER_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {

struct Skinner;

struct Skinner__uType : ::uClassType
{
};

Skinner__uType* Skinner__typeof();

void Skinner___ObjInit(Skinner* __this);
Skinner* Skinner__New_1(::uStatic* __this);

struct Skinner : ::uObject
{
    ::uStrong< ::uArray*> BoneListData;

    void _ObjInit() { Skinner___ObjInit(this); }
};

}}}


#endif
