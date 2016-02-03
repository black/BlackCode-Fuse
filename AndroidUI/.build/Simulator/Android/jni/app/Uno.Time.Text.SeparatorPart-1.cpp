#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDatePattern_LocalDateBucket.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_LocalDatePattern_Loc-5a715bae.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_LocalDateTimePattern-aabef504.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_LocalTimePattern_Loc-d3862a19.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_OffsetDateTimePatter-a5323e51.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDatePattern_LocalDateBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char*, ::uString*, int, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = show;
}

void SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = false;
}

SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* inst = (SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket), SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof());
    inst->_ObjInit_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* inst = (SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket), SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof());
    inst->_ObjInit_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

int SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    if ((position + __this->ExpectedSize()) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory() && ((position + __this->ExpectedSize()) == ::uPtr< ::uString*>(line)->Length()))
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Separator at the end")));
        }

        return 0;
    }

    if (::uPtr< ::uString*>(line)->Item(position) == __this->_separator)
    {
        __this->Set(value, __this->_separator);
        return 1;
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    return 0;
}

::uString* SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write(SeparatorPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char*, ::uString*, int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = show;
}

void SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = false;
}

SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

int SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    if ((position + __this->ExpectedSize()) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory() && ((position + __this->ExpectedSize()) == ::uPtr< ::uString*>(line)->Length()))
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Separator at the end")));
        }

        return 0;
    }

    if (::uPtr< ::uString*>(line)->Item(position) == __this->_separator)
    {
        __this->Set(value, __this->_separator);
        return 1;
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    return 0;
}

::uString* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char*, ::uString*, int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = show;
}

void SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = false;
}

SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

int SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    if ((position + __this->ExpectedSize()) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory() && ((position + __this->ExpectedSize()) == ::uPtr< ::uString*>(line)->Length()))
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Separator at the end")));
        }

        return 0;
    }

    if (::uPtr< ::uString*>(line)->Item(position) == __this->_separator)
    {
        __this->Set(value, __this->_separator);
        return 1;
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    return 0;
}

::uString* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = show;
}

void SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = false;
}

SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

int SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    if ((position + __this->ExpectedSize()) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory() && ((position + __this->ExpectedSize()) == ::uPtr< ::uString*>(line)->Length()))
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Separator at the end")));
        }

        return 0;
    }

    if (::uPtr< ::uString*>(line)->Item(position) == __this->_separator)
    {
        __this->Set(value, __this->_separator);
        return 1;
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    return 0;
}

::uString* SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write(SeparatorPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char*, ::uString*, int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = show;
}

void SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = false;
}

SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket), SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket), SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

int SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    if ((position + __this->ExpectedSize()) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory() && ((position + __this->ExpectedSize()) == ::uPtr< ::uString*>(line)->Length()))
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Separator at the end")));
        }

        return 0;
    }

    if (::uPtr< ::uString*>(line)->Item(position) == __this->_separator)
    {
        __this->Set(value, __this->_separator);
        return 1;
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    return 0;
}

::uString* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

}}}}
