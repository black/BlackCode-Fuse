// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_LOCAL_DATE_PATTER_415CCFB0_H__
#define __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_LOCAL_DATE_PATTER_415CCFB0_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDatePattern_LocalDateBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket;

struct FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType : ::uClassType
{
};

FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof();

void FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uArray* parts);
::uString* FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket);
FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this, ::uArray* parts);
void FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Parse(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket);

struct FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket : ::uObject
{
    ::uStrong< ::uArray*> _parts;

    void _ObjInit(::uArray* parts) { FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit(this, parts); }
    ::uString* Format(::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket) { return FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Format(this, bucket); }
    void Parse(::uString* line, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket) { FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Parse(this, line, bucket); }
};

}}}}


#endif
