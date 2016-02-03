// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_PROFILE_EVENT_H__
#define __APP_UNO_DIAGNOSTICS_PROFILE_EVENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Diagnostics {

struct ProfileEvent;

struct ProfileEvent__uType : ::uClassType
{
    int(*__fp_get_Type)(ProfileEvent*);
};

ProfileEvent__uType* ProfileEvent__typeof();

void ProfileEvent___ObjInit(ProfileEvent* __this);

struct ProfileEvent : ::uObject
{
    double TimeStamp;

    void _ObjInit() { ProfileEvent___ObjInit(this); }
    int Type() { return (((ProfileEvent__uType*)this->__obj_type)->__fp_get_Type)(this); }
};

}}}


#endif
