#include <app/Experimental.Http.Internal.DateUtil.h>
#include <app/Uno.DateTime.h>
#include <app/Uno.Int.h>
#include <app/Uno.Time.ZonedDateTime.h>

namespace app {
namespace Experimental {
namespace Http {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DateUtil__uType* DateUtil__typeof()
{
    static ::uStaticStrong<DateUtil__uType*> type;
    if (type != NULL) return type;

    type = (DateUtil__uType*)::uAllocClassType(sizeof(DateUtil__uType), "Experimental.Http.Internal.DateUtil");

    type->SetFunctions(1,
        ::uNewFunction("get_TimestampNow", DateUtil__get_TimestampNow, 0, true, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

int DateUtil__get_TimestampNow(::uStatic* __this)
{
    ::app::Uno::Time::ZonedDateTime* d = ::app::Uno::DateTime__get_Now(NULL);
    int mon = ((::uPtr< ::app::Uno::Time::ZonedDateTime*>(d)->Year() - 2000) * 12) + ::uPtr< ::app::Uno::Time::ZonedDateTime*>(d)->Month();
    int day = (mon * 31) + d->Day();
    int hour = (day * 24) + d->Hour();
    int min = (hour * 60) + d->Minute();
    int sec = (min * 60) + d->Second();
    return sec;
}

}}}}
