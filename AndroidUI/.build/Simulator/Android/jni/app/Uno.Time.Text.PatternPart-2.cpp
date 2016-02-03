#include <app/Uno.Action__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char.h>
#include <app/Uno.Action__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char.h>
#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char.h>
#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeB-4a6a4765.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeB-67bb96c.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeB-cf8b4ae8.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__char.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBuc-620e8399.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDatePattern_LocalDateBucket.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDatePattern_Local-15b2e419.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDatePattern_Local-d55586a3.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDateTimePattern_L-d61e0367.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDateTimePattern_L-f24fb8a6.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalTimePattern_Local-95e022d4.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalTimePattern_Local-b192ce38.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetDateTimePattern_-1c0ee4a9.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetDateTimePattern_-3c704655.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetDateTimePattern_-7c091fe1.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetPattern_OffsetBu-dedad883.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__uType* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalDatePattern_LocalDateBucket,char>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char___ObjInit(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__Get(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__get_Getter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__get_Setter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__Set(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket, ::uChar val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*, ::uChar>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__set_Getter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__set_Setter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char__Write(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__char* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__uType* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalDatePattern_LocalDateBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*))PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int___ObjInit(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__Get(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__get_Getter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__get_Setter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__Set(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket, int val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket*, int>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__set_Getter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__set_Setter(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int__Write(PatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket__int* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket,char>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char___ObjInit(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Get(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_Setter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Set(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket, ::uChar val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*, ::uChar>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_Setter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Write(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int___ObjInit(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Get(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_Setter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Set(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket, int val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*, int>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_Setter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Write(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket,char>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char___ObjInit(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Get(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Set(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket, ::uChar val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*, ::uChar>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Write(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Get(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Set(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket, int val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*, int>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Write(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket,char>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char___ObjInit(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Get(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Set(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, ::uChar val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*, ::uChar>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Write(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__uType* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int___ObjInit(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__Get(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__get_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__get_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__Set(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, int val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*, int>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__set_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__set_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int__Write(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__int* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket,Uno.Time.Offset>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*))PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset___ObjInit(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this)
{
}

::app::Uno::Time::Offset PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Get(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::app::Uno::Time::Offset, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*>(bucket);
    }

    return ::uDefault< ::app::Uno::Time::Offset>();
}

int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Set(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, ::app::Uno::Time::Offset val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*, ::app::Uno::Time::Offset>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Write(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox(::app::Uno::Time::Offset__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.OffsetPattern_OffsetBucket,char>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char___ObjInit(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Get(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_Setter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Set(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket, ::uChar val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*, ::uChar>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_Setter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Write(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.OffsetPattern_OffsetBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Write;
    type->__interface_0.__fp_get_SkipNextPartsCountIfThisNotSpecified = (int(*)(void*))PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_SkipNextPartsCountIfThisNotSpecified;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int___ObjInit(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Get(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_Setter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_Setter;
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Set(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket, int val)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Setter(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Setter())->InvokeVoid< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*, int>(bucket, val);
    }
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_Setter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Write(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

}}}}
