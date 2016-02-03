#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.LocalDate.h>
#include <app/Uno.Time.LocalDateTime.h>
#include <app/Uno.Time.OffsetDateTime.h>
#include <app/Uno.Time.Text.ParseResult__Uno_Time_LocalDate.h>
#include <app/Uno.Time.Text.ParseResult__Uno_Time_LocalDateTime.h>
#include <app/Uno.Time.Text.ParseResult__Uno_Time_LocalTime.h>
#include <app/Uno.Time.Text.ParseResult__Uno_Time_Offset.h>
#include <app/Uno.Time.Text.ParseResult__Uno_Time_OffsetDateTime.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParseResult__Uno_Time_LocalDate__uType* ParseResult__Uno_Time_LocalDate__typeof()
{
    static ::uStaticStrong<ParseResult__Uno_Time_LocalDate__uType*> type;
    if (type != NULL) return type;

    type = (ParseResult__Uno_Time_LocalDate__uType*)::uAllocClassType(sizeof(ParseResult__Uno_Time_LocalDate__uType), "Uno.Time.Text.ParseResult<Uno.Time.LocalDate>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_exception", offsetof(ParseResult__Uno_Time_LocalDate, _exception),
        "_value", offsetof(ParseResult__Uno_Time_LocalDate, _value));

    type->SetFields(2,
        ::uNewField("_exception", NULL, offsetof(ParseResult__Uno_Time_LocalDate, _exception), ::app::Uno::Exception__typeof()),
        ::uNewField("_value", NULL, offsetof(ParseResult__Uno_Time_LocalDate, _value), ::app::Uno::Time::LocalDate__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Exception", ParseResult__Uno_Time_LocalDate__get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Success", ParseResult__Uno_Time_LocalDate__get_Success, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", ParseResult__Uno_Time_LocalDate__get_Value, 0, false, ::app::Uno::Time::LocalDate__typeof()),
        ::uNewFunction("GetValueOrThrow", ParseResult__Uno_Time_LocalDate__GetValueOrThrow, 0, false, ::app::Uno::Time::LocalDate__typeof()),
        ::uNewFunction("TryGetValue", ParseResult__Uno_Time_LocalDate__TryGetValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Time::LocalDate__typeof(), ::app::Uno::Time::LocalDate__typeof()));

    ::uRegisterType(type);
    return type;
}

void ParseResult__Uno_Time_LocalDate___ObjInit(ParseResult__Uno_Time_LocalDate* __this, ::app::Uno::Exception* exception)
{
    __this->_exception = exception;
}

void ParseResult__Uno_Time_LocalDate___ObjInit_1(ParseResult__Uno_Time_LocalDate* __this, ::app::Uno::Time::LocalDate* value)
{
    __this->_value = value;
}

ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__ForException(::uStatic* __this, ::app::Uno::Exception* exception)
{
    return ParseResult__Uno_Time_LocalDate__New_1(NULL, exception);
}

ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__ForValue(::uStatic* __this, ::app::Uno::Time::LocalDate* value)
{
    return ParseResult__Uno_Time_LocalDate__New_2(NULL, value);
}

::app::Uno::Exception* ParseResult__Uno_Time_LocalDate__get_Exception(ParseResult__Uno_Time_LocalDate* __this)
{
    if (__this->_exception == NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Parse operation succeeded, so no exception is available")));
    }

    return __this->_exception;
}

bool ParseResult__Uno_Time_LocalDate__get_Success(ParseResult__Uno_Time_LocalDate* __this)
{
    return __this->_exception == NULL;
}

::app::Uno::Time::LocalDate* ParseResult__Uno_Time_LocalDate__get_Value(ParseResult__Uno_Time_LocalDate* __this)
{
    return __this->GetValueOrThrow();
}

::app::Uno::Time::LocalDate* ParseResult__Uno_Time_LocalDate__GetValueOrThrow(ParseResult__Uno_Time_LocalDate* __this)
{
    if (__this->_exception == NULL)
    {
        return __this->_value;
    }

    U_THROW(__this->_exception);
}

ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__New_1(::uStatic* __this, ::app::Uno::Exception* exception)
{
    ParseResult__Uno_Time_LocalDate* inst = (ParseResult__Uno_Time_LocalDate*)::uAllocObject(sizeof(ParseResult__Uno_Time_LocalDate), ParseResult__Uno_Time_LocalDate__typeof());
    inst->_ObjInit(exception);
    return inst;
}

ParseResult__Uno_Time_LocalDate* ParseResult__Uno_Time_LocalDate__New_2(::uStatic* __this, ::app::Uno::Time::LocalDate* value)
{
    ParseResult__Uno_Time_LocalDate* inst = (ParseResult__Uno_Time_LocalDate*)::uAllocObject(sizeof(ParseResult__Uno_Time_LocalDate), ParseResult__Uno_Time_LocalDate__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

bool ParseResult__Uno_Time_LocalDate__TryGetValue(ParseResult__Uno_Time_LocalDate* __this, ::app::Uno::Time::LocalDate* failureValue, ::app::Uno::Time::LocalDate** result)
{
    bool success = __this->_exception == NULL;
    *result = success ? __this->_value : failureValue;
    return success;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParseResult__Uno_Time_LocalDateTime__uType* ParseResult__Uno_Time_LocalDateTime__typeof()
{
    static ::uStaticStrong<ParseResult__Uno_Time_LocalDateTime__uType*> type;
    if (type != NULL) return type;

    type = (ParseResult__Uno_Time_LocalDateTime__uType*)::uAllocClassType(sizeof(ParseResult__Uno_Time_LocalDateTime__uType), "Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_exception", offsetof(ParseResult__Uno_Time_LocalDateTime, _exception),
        "_value", offsetof(ParseResult__Uno_Time_LocalDateTime, _value));

    type->SetFields(2,
        ::uNewField("_exception", NULL, offsetof(ParseResult__Uno_Time_LocalDateTime, _exception), ::app::Uno::Exception__typeof()),
        ::uNewField("_value", NULL, offsetof(ParseResult__Uno_Time_LocalDateTime, _value), ::app::Uno::Time::LocalDateTime__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Exception", ParseResult__Uno_Time_LocalDateTime__get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Success", ParseResult__Uno_Time_LocalDateTime__get_Success, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", ParseResult__Uno_Time_LocalDateTime__get_Value, 0, false, ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("GetValueOrThrow", ParseResult__Uno_Time_LocalDateTime__GetValueOrThrow, 0, false, ::app::Uno::Time::LocalDateTime__typeof()),
        ::uNewFunction("TryGetValue", ParseResult__Uno_Time_LocalDateTime__TryGetValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Time::LocalDateTime__typeof(), ::app::Uno::Time::LocalDateTime__typeof()));

    ::uRegisterType(type);
    return type;
}

void ParseResult__Uno_Time_LocalDateTime___ObjInit(ParseResult__Uno_Time_LocalDateTime* __this, ::app::Uno::Exception* exception)
{
    __this->_exception = exception;
}

void ParseResult__Uno_Time_LocalDateTime___ObjInit_1(ParseResult__Uno_Time_LocalDateTime* __this, ::app::Uno::Time::LocalDateTime* value)
{
    __this->_value = value;
}

ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__ForException(::uStatic* __this, ::app::Uno::Exception* exception)
{
    return ParseResult__Uno_Time_LocalDateTime__New_1(NULL, exception);
}

ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__ForValue(::uStatic* __this, ::app::Uno::Time::LocalDateTime* value)
{
    return ParseResult__Uno_Time_LocalDateTime__New_2(NULL, value);
}

::app::Uno::Exception* ParseResult__Uno_Time_LocalDateTime__get_Exception(ParseResult__Uno_Time_LocalDateTime* __this)
{
    if (__this->_exception == NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Parse operation succeeded, so no exception is available")));
    }

    return __this->_exception;
}

bool ParseResult__Uno_Time_LocalDateTime__get_Success(ParseResult__Uno_Time_LocalDateTime* __this)
{
    return __this->_exception == NULL;
}

::app::Uno::Time::LocalDateTime* ParseResult__Uno_Time_LocalDateTime__get_Value(ParseResult__Uno_Time_LocalDateTime* __this)
{
    return __this->GetValueOrThrow();
}

::app::Uno::Time::LocalDateTime* ParseResult__Uno_Time_LocalDateTime__GetValueOrThrow(ParseResult__Uno_Time_LocalDateTime* __this)
{
    if (__this->_exception == NULL)
    {
        return __this->_value;
    }

    U_THROW(__this->_exception);
}

ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__New_1(::uStatic* __this, ::app::Uno::Exception* exception)
{
    ParseResult__Uno_Time_LocalDateTime* inst = (ParseResult__Uno_Time_LocalDateTime*)::uAllocObject(sizeof(ParseResult__Uno_Time_LocalDateTime), ParseResult__Uno_Time_LocalDateTime__typeof());
    inst->_ObjInit(exception);
    return inst;
}

ParseResult__Uno_Time_LocalDateTime* ParseResult__Uno_Time_LocalDateTime__New_2(::uStatic* __this, ::app::Uno::Time::LocalDateTime* value)
{
    ParseResult__Uno_Time_LocalDateTime* inst = (ParseResult__Uno_Time_LocalDateTime*)::uAllocObject(sizeof(ParseResult__Uno_Time_LocalDateTime), ParseResult__Uno_Time_LocalDateTime__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

bool ParseResult__Uno_Time_LocalDateTime__TryGetValue(ParseResult__Uno_Time_LocalDateTime* __this, ::app::Uno::Time::LocalDateTime* failureValue, ::app::Uno::Time::LocalDateTime** result)
{
    bool success = __this->_exception == NULL;
    *result = success ? __this->_value : failureValue;
    return success;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParseResult__Uno_Time_LocalTime__uType* ParseResult__Uno_Time_LocalTime__typeof()
{
    static ::uStaticStrong<ParseResult__Uno_Time_LocalTime__uType*> type;
    if (type != NULL) return type;

    type = (ParseResult__Uno_Time_LocalTime__uType*)::uAllocClassType(sizeof(ParseResult__Uno_Time_LocalTime__uType), "Uno.Time.Text.ParseResult<Uno.Time.LocalTime>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_exception", offsetof(ParseResult__Uno_Time_LocalTime, _exception));

    type->SetFields(2,
        ::uNewField("_exception", NULL, offsetof(ParseResult__Uno_Time_LocalTime, _exception), ::app::Uno::Exception__typeof()),
        ::uNewField("_value", NULL, offsetof(ParseResult__Uno_Time_LocalTime, _value), ::app::Uno::Time::LocalTime__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Exception", ParseResult__Uno_Time_LocalTime__get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Success", ParseResult__Uno_Time_LocalTime__get_Success, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", ParseResult__Uno_Time_LocalTime__get_Value, 0, false, ::app::Uno::Time::LocalTime__typeof()),
        ::uNewFunction("GetValueOrThrow", ParseResult__Uno_Time_LocalTime__GetValueOrThrow, 0, false, ::app::Uno::Time::LocalTime__typeof()),
        ::uNewFunction("TryGetValue", ParseResult__Uno_Time_LocalTime__TryGetValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Time::LocalTime__typeof(), ::app::Uno::Time::LocalTime__typeof()));

    ::uRegisterType(type);
    return type;
}

void ParseResult__Uno_Time_LocalTime___ObjInit(ParseResult__Uno_Time_LocalTime* __this, ::app::Uno::Exception* exception)
{
    __this->_exception = exception;
}

void ParseResult__Uno_Time_LocalTime___ObjInit_1(ParseResult__Uno_Time_LocalTime* __this, ::app::Uno::Time::LocalTime value)
{
    __this->_value = value;
}

ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__ForException(::uStatic* __this, ::app::Uno::Exception* exception)
{
    return ParseResult__Uno_Time_LocalTime__New_1(NULL, exception);
}

ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__ForValue(::uStatic* __this, ::app::Uno::Time::LocalTime value)
{
    return ParseResult__Uno_Time_LocalTime__New_2(NULL, value);
}

::app::Uno::Exception* ParseResult__Uno_Time_LocalTime__get_Exception(ParseResult__Uno_Time_LocalTime* __this)
{
    if (__this->_exception == NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Parse operation succeeded, so no exception is available")));
    }

    return __this->_exception;
}

bool ParseResult__Uno_Time_LocalTime__get_Success(ParseResult__Uno_Time_LocalTime* __this)
{
    return __this->_exception == NULL;
}

::app::Uno::Time::LocalTime ParseResult__Uno_Time_LocalTime__get_Value(ParseResult__Uno_Time_LocalTime* __this)
{
    return __this->GetValueOrThrow();
}

::app::Uno::Time::LocalTime ParseResult__Uno_Time_LocalTime__GetValueOrThrow(ParseResult__Uno_Time_LocalTime* __this)
{
    if (__this->_exception == NULL)
    {
        return __this->_value;
    }

    U_THROW(__this->_exception);
}

ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__New_1(::uStatic* __this, ::app::Uno::Exception* exception)
{
    ParseResult__Uno_Time_LocalTime* inst = (ParseResult__Uno_Time_LocalTime*)::uAllocObject(sizeof(ParseResult__Uno_Time_LocalTime), ParseResult__Uno_Time_LocalTime__typeof());
    inst->_ObjInit(exception);
    return inst;
}

ParseResult__Uno_Time_LocalTime* ParseResult__Uno_Time_LocalTime__New_2(::uStatic* __this, ::app::Uno::Time::LocalTime value)
{
    ParseResult__Uno_Time_LocalTime* inst = (ParseResult__Uno_Time_LocalTime*)::uAllocObject(sizeof(ParseResult__Uno_Time_LocalTime), ParseResult__Uno_Time_LocalTime__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

bool ParseResult__Uno_Time_LocalTime__TryGetValue(ParseResult__Uno_Time_LocalTime* __this, ::app::Uno::Time::LocalTime failureValue, ::app::Uno::Time::LocalTime* result)
{
    bool success = __this->_exception == NULL;
    *result = success ? __this->_value : failureValue;
    return success;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParseResult__Uno_Time_Offset__uType* ParseResult__Uno_Time_Offset__typeof()
{
    static ::uStaticStrong<ParseResult__Uno_Time_Offset__uType*> type;
    if (type != NULL) return type;

    type = (ParseResult__Uno_Time_Offset__uType*)::uAllocClassType(sizeof(ParseResult__Uno_Time_Offset__uType), "Uno.Time.Text.ParseResult<Uno.Time.Offset>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_exception", offsetof(ParseResult__Uno_Time_Offset, _exception));

    type->SetFields(2,
        ::uNewField("_exception", NULL, offsetof(ParseResult__Uno_Time_Offset, _exception), ::app::Uno::Exception__typeof()),
        ::uNewField("_value", NULL, offsetof(ParseResult__Uno_Time_Offset, _value), ::app::Uno::Time::Offset__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Exception", ParseResult__Uno_Time_Offset__get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Success", ParseResult__Uno_Time_Offset__get_Success, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", ParseResult__Uno_Time_Offset__get_Value, 0, false, ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("GetValueOrThrow", ParseResult__Uno_Time_Offset__GetValueOrThrow, 0, false, ::app::Uno::Time::Offset__typeof()),
        ::uNewFunction("TryGetValue", ParseResult__Uno_Time_Offset__TryGetValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Time::Offset__typeof(), ::app::Uno::Time::Offset__typeof()));

    ::uRegisterType(type);
    return type;
}

void ParseResult__Uno_Time_Offset___ObjInit(ParseResult__Uno_Time_Offset* __this, ::app::Uno::Exception* exception)
{
    __this->_exception = exception;
}

void ParseResult__Uno_Time_Offset___ObjInit_1(ParseResult__Uno_Time_Offset* __this, ::app::Uno::Time::Offset value)
{
    __this->_value = value;
}

ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__ForException(::uStatic* __this, ::app::Uno::Exception* exception)
{
    return ParseResult__Uno_Time_Offset__New_1(NULL, exception);
}

ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__ForValue(::uStatic* __this, ::app::Uno::Time::Offset value)
{
    return ParseResult__Uno_Time_Offset__New_2(NULL, value);
}

::app::Uno::Exception* ParseResult__Uno_Time_Offset__get_Exception(ParseResult__Uno_Time_Offset* __this)
{
    if (__this->_exception == NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Parse operation succeeded, so no exception is available")));
    }

    return __this->_exception;
}

bool ParseResult__Uno_Time_Offset__get_Success(ParseResult__Uno_Time_Offset* __this)
{
    return __this->_exception == NULL;
}

::app::Uno::Time::Offset ParseResult__Uno_Time_Offset__get_Value(ParseResult__Uno_Time_Offset* __this)
{
    return __this->GetValueOrThrow();
}

::app::Uno::Time::Offset ParseResult__Uno_Time_Offset__GetValueOrThrow(ParseResult__Uno_Time_Offset* __this)
{
    if (__this->_exception == NULL)
    {
        return __this->_value;
    }

    U_THROW(__this->_exception);
}

ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__New_1(::uStatic* __this, ::app::Uno::Exception* exception)
{
    ParseResult__Uno_Time_Offset* inst = (ParseResult__Uno_Time_Offset*)::uAllocObject(sizeof(ParseResult__Uno_Time_Offset), ParseResult__Uno_Time_Offset__typeof());
    inst->_ObjInit(exception);
    return inst;
}

ParseResult__Uno_Time_Offset* ParseResult__Uno_Time_Offset__New_2(::uStatic* __this, ::app::Uno::Time::Offset value)
{
    ParseResult__Uno_Time_Offset* inst = (ParseResult__Uno_Time_Offset*)::uAllocObject(sizeof(ParseResult__Uno_Time_Offset), ParseResult__Uno_Time_Offset__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

bool ParseResult__Uno_Time_Offset__TryGetValue(ParseResult__Uno_Time_Offset* __this, ::app::Uno::Time::Offset failureValue, ::app::Uno::Time::Offset* result)
{
    bool success = __this->_exception == NULL;
    *result = success ? __this->_value : failureValue;
    return success;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParseResult__Uno_Time_OffsetDateTime__uType* ParseResult__Uno_Time_OffsetDateTime__typeof()
{
    static ::uStaticStrong<ParseResult__Uno_Time_OffsetDateTime__uType*> type;
    if (type != NULL) return type;

    type = (ParseResult__Uno_Time_OffsetDateTime__uType*)::uAllocClassType(sizeof(ParseResult__Uno_Time_OffsetDateTime__uType), "Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_exception", offsetof(ParseResult__Uno_Time_OffsetDateTime, _exception),
        "_value", offsetof(ParseResult__Uno_Time_OffsetDateTime, _value));

    type->SetFields(2,
        ::uNewField("_exception", NULL, offsetof(ParseResult__Uno_Time_OffsetDateTime, _exception), ::app::Uno::Exception__typeof()),
        ::uNewField("_value", NULL, offsetof(ParseResult__Uno_Time_OffsetDateTime, _value), ::app::Uno::Time::OffsetDateTime__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Exception", ParseResult__Uno_Time_OffsetDateTime__get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Success", ParseResult__Uno_Time_OffsetDateTime__get_Success, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", ParseResult__Uno_Time_OffsetDateTime__get_Value, 0, false, ::app::Uno::Time::OffsetDateTime__typeof()),
        ::uNewFunction("GetValueOrThrow", ParseResult__Uno_Time_OffsetDateTime__GetValueOrThrow, 0, false, ::app::Uno::Time::OffsetDateTime__typeof()),
        ::uNewFunction("TryGetValue", ParseResult__Uno_Time_OffsetDateTime__TryGetValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Time::OffsetDateTime__typeof(), ::app::Uno::Time::OffsetDateTime__typeof()));

    ::uRegisterType(type);
    return type;
}

void ParseResult__Uno_Time_OffsetDateTime___ObjInit(ParseResult__Uno_Time_OffsetDateTime* __this, ::app::Uno::Exception* exception)
{
    __this->_exception = exception;
}

void ParseResult__Uno_Time_OffsetDateTime___ObjInit_1(ParseResult__Uno_Time_OffsetDateTime* __this, ::app::Uno::Time::OffsetDateTime* value)
{
    __this->_value = value;
}

ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__ForException(::uStatic* __this, ::app::Uno::Exception* exception)
{
    return ParseResult__Uno_Time_OffsetDateTime__New_1(NULL, exception);
}

ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__ForValue(::uStatic* __this, ::app::Uno::Time::OffsetDateTime* value)
{
    return ParseResult__Uno_Time_OffsetDateTime__New_2(NULL, value);
}

::app::Uno::Exception* ParseResult__Uno_Time_OffsetDateTime__get_Exception(ParseResult__Uno_Time_OffsetDateTime* __this)
{
    if (__this->_exception == NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Parse operation succeeded, so no exception is available")));
    }

    return __this->_exception;
}

bool ParseResult__Uno_Time_OffsetDateTime__get_Success(ParseResult__Uno_Time_OffsetDateTime* __this)
{
    return __this->_exception == NULL;
}

::app::Uno::Time::OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__get_Value(ParseResult__Uno_Time_OffsetDateTime* __this)
{
    return __this->GetValueOrThrow();
}

::app::Uno::Time::OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__GetValueOrThrow(ParseResult__Uno_Time_OffsetDateTime* __this)
{
    if (__this->_exception == NULL)
    {
        return __this->_value;
    }

    U_THROW(__this->_exception);
}

ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__New_1(::uStatic* __this, ::app::Uno::Exception* exception)
{
    ParseResult__Uno_Time_OffsetDateTime* inst = (ParseResult__Uno_Time_OffsetDateTime*)::uAllocObject(sizeof(ParseResult__Uno_Time_OffsetDateTime), ParseResult__Uno_Time_OffsetDateTime__typeof());
    inst->_ObjInit(exception);
    return inst;
}

ParseResult__Uno_Time_OffsetDateTime* ParseResult__Uno_Time_OffsetDateTime__New_2(::uStatic* __this, ::app::Uno::Time::OffsetDateTime* value)
{
    ParseResult__Uno_Time_OffsetDateTime* inst = (ParseResult__Uno_Time_OffsetDateTime*)::uAllocObject(sizeof(ParseResult__Uno_Time_OffsetDateTime), ParseResult__Uno_Time_OffsetDateTime__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

bool ParseResult__Uno_Time_OffsetDateTime__TryGetValue(ParseResult__Uno_Time_OffsetDateTime* __this, ::app::Uno::Time::OffsetDateTime* failureValue, ::app::Uno::Time::OffsetDateTime** result)
{
    bool success = __this->_exception == NULL;
    *result = success ? __this->_value : failureValue;
    return success;
}

}}}}
