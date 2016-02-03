#include <app/Uno.Action__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeB-67bb96c.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDatePattern_LocalDateBucket.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_LocalDateTimePattern_Lo-3bc4de42.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_OffsetDateTimePattern_O-85e7ea12.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDatePattern_LocalDateBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int*, ::uString*, int, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

::uString* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__GetPart(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, int index)
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

NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* inst = (NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket), NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

int NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    ::uString* part = __this->GetPart(line, position);

    if (::app::Uno::String__IsNullOrEmpty(NULL, part))
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not found number at "), ::uBox< int>(::app::Uno::Int__typeof(), position))));
        }

        return 0;
    }

    __this->Set(value, ::app::Uno::Int__Parse(NULL, part));
    return __this->ExpectedSize();
}

::uString* NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write(NumberPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_5(NULL, __this->Get(value))), array_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int*, ::uString*, int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

::uString* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__GetPart(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, int index)
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

NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

int NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    ::uString* part = __this->GetPart(line, position);

    if (::app::Uno::String__IsNullOrEmpty(NULL, part))
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not found number at "), ::uBox< int>(::app::Uno::Int__typeof(), position))));
        }

        return 0;
    }

    __this->Set(value, ::app::Uno::Int__Parse(NULL, part));
    return __this->ExpectedSize();
}

::uString* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_5(NULL, __this->Get(value))), array_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int*, ::uString*, int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

::uString* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__GetPart(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uString* line, int index)
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

NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

int NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Read(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    ::uString* part = __this->GetPart(line, position);

    if (::app::Uno::String__IsNullOrEmpty(NULL, part))
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not found number at "), ::uBox< int>(::app::Uno::Int__typeof(), position))));
        }

        return 0;
    }

    __this->Set(value, ::app::Uno::Int__Parse(NULL, part));
    return __this->ExpectedSize();
}

::uString* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_5(NULL, __this->Get(value))), array_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

::uString* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__GetPart(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int index)
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

NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

int NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    ::uString* part = __this->GetPart(line, position);

    if (::app::Uno::String__IsNullOrEmpty(NULL, part))
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not found number at "), ::uBox< int>(::app::Uno::Int__typeof(), position))));
        }

        return 0;
    }

    __this->Set(value, ::app::Uno::Int__Parse(NULL, part));
    return __this->ExpectedSize();
}

::uString* NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write(NumberPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_5(NULL, __this->Get(value))), array_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int*, ::uString*, int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

::uString* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__GetPart(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, int index)
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

NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket), NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

int NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    ::uString* part = __this->GetPart(line, position);

    if (::app::Uno::String__IsNullOrEmpty(NULL, part))
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not found number at "), ::uBox< int>(::app::Uno::Int__typeof(), position))));
        }

        return 0;
    }

    __this->Set(value, ::app::Uno::Int__Parse(NULL, part));
    return __this->ExpectedSize();
}

::uString* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_5(NULL, __this->Get(value))), array_123));
}

}}}}
