#include <app/Uno.Action__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeB-67bb96c.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDatePattern_LocalDateBucket.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_LocalDateTimePattern_Loca-b8313420.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_OffsetDateTimePattern_Off-921c7763.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType* SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof()
{
    static ::uStaticStrong<SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*> type;
    if (type != NULL) return type;

    type = (SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*)::uAllocClassType(sizeof(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType), "Uno.Time.Text.SignPart<Uno.Time.Text.LocalDatePattern_LocalDateBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int*, ::uString*, int, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof(), offsetof(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType, __interface_0));

    return type;
}

void SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_1(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(false);
}

void SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit_2(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
}

SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* inst = (SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket), SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof());
    inst->_ObjInit_1(setter, getter);
    return inst;
}

SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_2(::uStatic* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* inst = (SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket), SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof());
    inst->_ObjInit_2(obligatory, setter, getter);
    return inst;
}

int SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Read(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    if ((position + 1) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
        }

        return 0;
    }

    ::uChar character = ::uPtr< ::uString*>(line)->Item(position);

    switch (character)
    {
        case '-':
        case '+':
        {
            __this->Set(value, (character == '-') ? -1 : 1);
            return 1;
        }
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    __this->Set(value, 1);
    return 0;
}

::uString* SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Write(SignPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    if (__this->Get(value) == 1)
    {
        return __this->Obligatory() ? ::uGetConstString("+") : ::app::Uno::String__Empty;
    }

    return ::uGetConstString("-");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.SignPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int*, ::uString*, int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType, __interface_0));

    return type;
}

void SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(false);
}

void SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_2(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
}

SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_1(setter, getter);
    return inst;
}

SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_2(::uStatic* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_2(obligatory, setter, getter);
    return inst;
}

int SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Read(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    if ((position + 1) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
        }

        return 0;
    }

    ::uChar character = ::uPtr< ::uString*>(line)->Item(position);

    switch (character)
    {
        case '-':
        case '+':
        {
            __this->Set(value, (character == '-') ? -1 : 1);
            return 1;
        }
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    __this->Set(value, 1);
    return 0;
}

::uString* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    if (__this->Get(value) == 1)
    {
        return __this->Obligatory() ? ::uGetConstString("+") : ::app::Uno::String__Empty;
    }

    return ::uGetConstString("-");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()
{
    static ::uStaticStrong<SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*)::uAllocClassType(sizeof(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType), "Uno.Time.Text.SignPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType, __interface_0));

    return type;
}

void SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_1(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(false);
}

void SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit_2(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
}

SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_1(setter, getter);
    return inst;
}

SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_2(::uStatic* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit_2(obligatory, setter, getter);
    return inst;
}

int SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Read(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    if ((position + 1) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
        }

        return 0;
    }

    ::uChar character = ::uPtr< ::uString*>(line)->Item(position);

    switch (character)
    {
        case '-':
        case '+':
        {
            __this->Set(value, (character == '-') ? -1 : 1);
            return 1;
        }
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    __this->Set(value, 1);
    return 0;
}

::uString* SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Write(SignPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    if (__this->Get(value) == 1)
    {
        return __this->Obligatory() ? ::uGetConstString("+") : ::app::Uno::String__Empty;
    }

    return ::uGetConstString("-");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.SignPart<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof());
    type->__fp_Read = (int(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int*, ::uString*, int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read;
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Read = (int(*)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType, __interface_0));

    return type;
}

void SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(false);
}

void SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
}

SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket), SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_1(setter, getter);
    return inst;
}

SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(::uStatic* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket), SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_2(obligatory, setter, getter);
    return inst;
}

int SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Read(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    if ((position + 1) >= ::uPtr< ::uString*>(line)->Length())
    {
        if (__this->Obligatory())
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
        }

        return 0;
    }

    ::uChar character = ::uPtr< ::uString*>(line)->Item(position);

    switch (character)
    {
        case '-':
        case '+':
        {
            __this->Set(value, (character == '-') ? -1 : 1);
            return 1;
        }
    }

    if (__this->Obligatory())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Wrong number format")));
    }

    __this->Set(value, 1);
    return 0;
}

::uString* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    if (__this->Get(value) == 1)
    {
        return __this->Obligatory() ? ::uGetConstString("+") : ::app::Uno::String__Empty;
    }

    return ::uGetConstString("-");
}

}}}}
