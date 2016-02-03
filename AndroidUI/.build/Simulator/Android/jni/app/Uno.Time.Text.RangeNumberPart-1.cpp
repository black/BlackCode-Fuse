#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeB-67bb96c.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket.h>
#include <app/Uno.Time.Text.RangeNumberPart__Uno_Time_Text_LocalTimePattern_L-28353570.h>
#include <app/Uno.Time.Text.RangeNumberPart__Uno_Time_Text_OffsetDateTimePatt-67f216a1.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.RangeNumberPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int*, ::uString*, int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType, __interface_0));

    return type;
}

void RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->_maxSize = maxSize;
    __this->ExpectedSize(0);
}

void RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_2(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->_maxSize = maxSize;
    __this->ExpectedSize(size);
}

::uString* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__GetPart(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uString* line, int index)
{
    if ((index + __this->ExpectedSize()) > ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not enough symbols at "), ::uBox< int>(::app::Uno::Int__typeof(), index))));
        }

        return ::app::Uno::String__Empty;
    }

    return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(line), index, __this->ExpectedSize());
}

RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_1(maxSize, setter, getter);
    return inst;
}

RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_2(::uStatic* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_2(size, maxSize, setter, getter);
    return inst;
}

int RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    int numberCount = 0;

    for (int i = position; i < ::uPtr< ::uString*>(line)->Length(); i++)
    {
        if (!::app::Uno::Char__IsDigit(NULL, ::uPtr< ::uString*>(line)->Item(i)))
        {
            break;
        }

        numberCount++;

        if (numberCount >= __this->_maxSize)
        {
            break;
        }
    }

    if (numberCount == 0)
    {
        return 0;
    }

    int number = ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(line), position, (numberCount > __this->ExpectedSize()) ? __this->ExpectedSize() : numberCount));

    if (numberCount < __this->ExpectedSize())
    {
        number = number * (int)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)(__this->ExpectedSize() - numberCount));
    }

    __this->Set(value, number);
    return numberCount;
}

::uString* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::app::Uno::String__Empty;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()
{
    static ::uStaticStrong<RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*)::uAllocClassType(sizeof(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType), "Uno.Time.Text.RangeNumberPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType, __interface_0));

    return type;
}

void RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->_maxSize = maxSize;
    __this->ExpectedSize(0);
}

void RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_2(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->_maxSize = maxSize;
    __this->ExpectedSize(size);
}

::uString* RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__GetPart(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int index)
{
    if ((index + __this->ExpectedSize()) > ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not enough symbols at "), ::uBox< int>(::app::Uno::Int__typeof(), index))));
        }

        return ::app::Uno::String__Empty;
    }

    return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(line), index, __this->ExpectedSize());
}

RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_1(maxSize, setter, getter);
    return inst;
}

RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_2(::uStatic* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_2(size, maxSize, setter, getter);
    return inst;
}

int RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    int numberCount = 0;

    for (int i = position; i < ::uPtr< ::uString*>(line)->Length(); i++)
    {
        if (!::app::Uno::Char__IsDigit(NULL, ::uPtr< ::uString*>(line)->Item(i)))
        {
            break;
        }

        numberCount++;

        if (numberCount >= __this->_maxSize)
        {
            break;
        }
    }

    if (numberCount == 0)
    {
        return 0;
    }

    int number = ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(line), position, (numberCount > __this->ExpectedSize()) ? __this->ExpectedSize() : numberCount));

    if (numberCount < __this->ExpectedSize())
    {
        number = number * (int)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)(__this->ExpectedSize() - numberCount));
    }

    __this->Set(value, number);
    return numberCount;
}

::uString* RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write(RangeNumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    return ::app::Uno::String__Empty;
}

}}}}
