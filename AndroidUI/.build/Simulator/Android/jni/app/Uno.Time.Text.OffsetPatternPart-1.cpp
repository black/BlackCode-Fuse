#include <app/Uno.Action__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeB-cf8b4ae8.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBuc-620e8399.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Offset.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern.h>
#include <app/Uno.Time.Text.OffsetPatternPart__Uno_Time_Text_OffsetDateTimePa-8105aa8d.h>
#include <app/Uno.Time.Text.ParseResult__Uno_Time_Offset.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()
{
    static ::uStaticStrong<OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*)::uAllocClassType(sizeof(OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType), "Uno.Time.Text.OffsetPatternPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType, __interface_0));

    return type;
}

void OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
}

OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_1(setter, getter);
    return inst;
}

int OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read(OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    ::app::Uno::Time::Text::ParseResult__Uno_Time_Offset* parse = ::uPtr< ::app::Uno::Time::Text::OffsetPattern*>(::app::Uno::Time::Text::OffsetPattern__get_GeneralIsoPattern(NULL))->Parse(::app::Uno::String::Substring(::uPtr< ::uString*>(line), position));
    __this->Set(value, ::uPtr< ::app::Uno::Time::Text::ParseResult__Uno_Time_Offset*>(parse)->GetValueOrThrow());
    return line->Length() - position;
}

::uString* OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write(OffsetPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetPattern*>(::app::Uno::Time::Text::OffsetPattern__get_GeneralIsoPattern(NULL))->Format(__this->Get(value));
}

}}}}
