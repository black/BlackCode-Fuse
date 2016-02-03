// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDatePattern__LocalDateBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalDatePattern.LocalDateBucket :162
// {
uType* LocalDatePattern__LocalDateBucket_typeof();
void LocalDatePattern__LocalDateBucket__ctor__fn(LocalDatePattern__LocalDateBucket* __this);
void LocalDatePattern__LocalDateBucket__New1_fn(LocalDatePattern__LocalDateBucket** __retval);

struct LocalDatePattern__LocalDateBucket : uObject
{
    int Day;
    int Month;
    int Sign;
    int Year;

    void ctor_();
    static LocalDatePattern__LocalDateBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
