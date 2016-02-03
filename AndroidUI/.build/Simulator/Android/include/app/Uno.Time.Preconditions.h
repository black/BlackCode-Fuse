// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_PRECONDITIONS_H__
#define __APP_UNO_TIME_PRECONDITIONS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct DateTimeZone; } } }
namespace app { namespace Uno { namespace Time { struct Period; } } }

namespace app {
namespace Uno {
namespace Time {

struct Preconditions__uType : ::uClassType
{
};

Preconditions__uType* Preconditions__typeof();

void Preconditions__CheckArgument(::uStatic* __this, bool expression, ::uString* parameter, ::uString* message);
void Preconditions__CheckArgument_1(::uStatic* __this, bool expression, ::uString* parameter, ::uString* messageFormat, ::uArray* messageArgs);
void Preconditions__CheckArgumentRange(::uStatic* __this, ::uString* paramName, int value, int minInclusive, int maxInclusive);
void Preconditions__CheckArgumentRange_1(::uStatic* __this, ::uString* paramName, ::uLong value, ::uLong minInclusive, ::uLong maxInclusive);
::app::Uno::Time::Calendars::Era* Preconditions__CheckNotNull__Uno_Time_Calendars_Era(::uStatic* __this, ::app::Uno::Time::Calendars::Era* argument, ::uString* paramName);
::uArray* Preconditions__CheckNotNull__Uno_Time_Calendars_Era__(::uStatic* __this, ::uArray* argument, ::uString* paramName);
::app::Uno::Time::CalendarSystem* Preconditions__CheckNotNull__Uno_Time_CalendarSystem(::uStatic* __this, ::app::Uno::Time::CalendarSystem* argument, ::uString* paramName);
::app::Uno::Time::DateTimeZone* Preconditions__CheckNotNull__Uno_Time_DateTimeZone(::uStatic* __this, ::app::Uno::Time::DateTimeZone* argument, ::uString* paramName);
::app::Uno::Time::Period* Preconditions__CheckNotNull__Uno_Time_Period(::uStatic* __this, ::app::Uno::Time::Period* argument, ::uString* paramName);

}}}


#endif
