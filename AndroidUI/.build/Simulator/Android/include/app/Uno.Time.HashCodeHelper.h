// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_HASH_CODE_HELPER_H__
#define __APP_UNO_TIME_HASH_CODE_HELPER_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct DateTimeZone; } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }

namespace app {
namespace Uno {
namespace Time {

struct HashCodeHelper__uType : ::uClassType
{
};

HashCodeHelper__uType* HashCodeHelper__typeof();

int HashCodeHelper__Hash__long(::uStatic* __this, int code, ::uLong value);
int HashCodeHelper__Hash__string(::uStatic* __this, int code, ::uString* value);
int HashCodeHelper__Hash__Uno_Time_CalendarSystem(::uStatic* __this, int code, ::app::Uno::Time::CalendarSystem* value);
int HashCodeHelper__Hash__Uno_Time_DateTimeZone(::uStatic* __this, int code, ::app::Uno::Time::DateTimeZone* value);
int HashCodeHelper__Hash__Uno_Time_Instant(::uStatic* __this, int code, ::app::Uno::Time::Instant value);
int HashCodeHelper__Hash__Uno_Time_LocalDateTime(::uStatic* __this, int code, ::app::Uno::Time::LocalDateTime* value);
int HashCodeHelper__Hash__Uno_Time_Offset(::uStatic* __this, int code, ::app::Uno::Time::Offset value);
int HashCodeHelper__Initialize(::uStatic* __this);
int HashCodeHelper__MakeHash(::uStatic* __this, int code, int value);

}}}


#endif
