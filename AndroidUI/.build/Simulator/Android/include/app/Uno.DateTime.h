// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATE_TIME_H__
#define __APP_UNO_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct ZonedDateTime; } } }

namespace app {
namespace Uno {

struct DateTime;

struct DateTime__uType : ::uClassType
{
};

DateTime__uType* DateTime__typeof();

void DateTime___ObjInit(DateTime* __this);
::app::Uno::Time::ZonedDateTime* DateTime__get_Now(::uStatic* __this);
::app::Uno::Time::ZonedDateTime* DateTime__get_UtcNow(::uStatic* __this);
DateTime* DateTime__New_1(::uStatic* __this);

struct DateTime : ::uObject
{
    void _ObjInit() { DateTime___ObjInit(this); }
};

}}


#endif
