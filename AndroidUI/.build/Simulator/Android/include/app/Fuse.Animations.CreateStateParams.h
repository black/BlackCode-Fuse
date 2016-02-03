// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CREATE_STATE_PARAMS_H__
#define __APP_FUSE_ANIMATIONS_CREATE_STATE_PARAMS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct CreateStateParams;

struct CreateStateParams__uType : ::uClassType
{
};

CreateStateParams__uType* CreateStateParams__typeof();

void CreateStateParams___ObjInit(CreateStateParams* __this);
CreateStateParams* CreateStateParams__New_1(::uStatic* __this);

struct CreateStateParams : ::uObject
{
    int Variant;
    double TotalDuration;
    ::uStrong< ::app::Fuse::Node*> Attached;

    void _ObjInit() { CreateStateParams___ObjInit(this); }
};

}}}


#endif
