// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Delegate.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.Text.FixedFormatPattern-1.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.LocalDateTimePattern.h>
#include <Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h>
#include <Uno.Time.Text.NumberPart-1.h>
#include <Uno.Time.Text.OffsetPattern.h>
#include <Uno.Time.Text.OffsetPattern.OffsetBucket.h>
#include <Uno.Time.Text.PatternPart-2.h>
#include <Uno.Time.Text.SeparatorPart-1.h>
#include <Uno.Time.Text.SignPart-1.h>
static uString* STRINGS[4];
static uType* TYPES[28];

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(7)
// ------------------------------------------------------------------------

// internal sealed class FixedFormatPattern<T> :7
// {
uType* FixedFormatPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FixedFormatPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.FixedFormatPattern`1", options);
    ::TYPES[0] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0))->Array());
    type->SetFields(0,
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0))->Array(), offsetof(::g::Uno::Time::Text::FixedFormatPattern, _parts), 0);
    return type;
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) :11
void FixedFormatPattern__ctor__fn(FixedFormatPattern* __this, uArray* parts)
{
    __this->ctor_(parts);
}

// public string Format(T bucket) :35
void FixedFormatPattern__Format_fn(FixedFormatPattern* __this, void* bucket, uString** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Time.Text.IPatternPart<T>[]*/),
    };
    uArray* array1;
    int index2;
    int length3;
    uString* ret2;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (array1 = __this->_parts, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uObject* part = uPtr(array1)->Strong<uObject*>(index2);
        uPtr(sb)->Append1((::g::Uno::Time::Text::IPatternPart::Write_ex(uInterface(uPtr(part), ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(__types[0])), bucket, &ret2), ret2));
    }

    return *__retval = sb->ToString(), void();
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) :11
void FixedFormatPattern__New1_fn(uType* __type, uArray* parts, FixedFormatPattern** __retval)
{
    *__retval = FixedFormatPattern::New1(__type, parts);
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) [instance] :11
void FixedFormatPattern::ctor_(uArray* parts)
{
    _parts = parts;
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) [static] :11
FixedFormatPattern* FixedFormatPattern::New1(uType* __type, uArray* parts)
{
    FixedFormatPattern* obj1 = (FixedFormatPattern*)uNew(__type);
    obj1->ctor_(parts);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(812)
// --------------------------------------------------------------------------

// internal abstract interface IPatternPart<T> :812
// {
uInterfaceType* IPatternPart_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Time.Text.IPatternPart`1", 1, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(315)
// --------------------------------------------------------------------------

// private sealed class LocalDateTimePattern.LocalDateTimeBucket :315
// {
uType* LocalDateTimePattern__LocalDateTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LocalDateTimePattern__LocalDateTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket", options);
    type->fp_ctor_ = (void*)LocalDateTimePattern__LocalDateTimeBucket__New1_fn;
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Day), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Month), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Year), 0);
    return type;
}

// public generated LocalDateTimeBucket() :315
void LocalDateTimePattern__LocalDateTimeBucket__ctor__fn(LocalDateTimePattern__LocalDateTimeBucket* __this)
{
    __this->ctor_();
}

// public generated LocalDateTimeBucket New() :315
void LocalDateTimePattern__LocalDateTimeBucket__New1_fn(LocalDateTimePattern__LocalDateTimeBucket** __retval)
{
    *__retval = LocalDateTimePattern__LocalDateTimeBucket::New1();
}

// public generated LocalDateTimeBucket() [instance] :315
void LocalDateTimePattern__LocalDateTimeBucket::ctor_()
{
}

// public generated LocalDateTimeBucket New() [static] :315
LocalDateTimePattern__LocalDateTimeBucket* LocalDateTimePattern__LocalDateTimeBucket::New1()
{
    LocalDateTimePattern__LocalDateTimeBucket* obj1 = (LocalDateTimePattern__LocalDateTimeBucket*)uNew(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(176)
// --------------------------------------------------------------------------

// public sealed class LocalDateTimePattern :176
// {
uType* LocalDateTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDateTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern", options);
    type->fp_ctor_ = (void*)LocalDateTimePattern__New1_fn;
    ::TYPES[1] = ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    ::TYPES[2] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof())->Array();
    ::TYPES[3] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    ::TYPES[4] = ::g::Uno::Time::Text::SignPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    ::TYPES[5] = ::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[6] = ::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[7] = ::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    ::TYPES[8] = ::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    ::TYPES[9] = LocalDateTimePattern__LocalDateTimeBucket_typeof();
    ::TYPES[10] = ::g::Uno::Time::LocalDateTime_typeof();
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof()), offsetof(::g::Uno::Time::Text::LocalDateTimePattern, _generalPattern), 0,
        LocalDateTimePattern_typeof(), (uintptr_t)&::g::Uno::Time::Text::LocalDateTimePattern::General_, uFieldFlagsStatic);
    return type;
}

// private LocalDateTimePattern() :194
void LocalDateTimePattern__ctor__fn(LocalDateTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalDateTime value) :230
void LocalDateTimePattern__Format_fn(LocalDateTimePattern* __this, ::g::Uno::Time::LocalDateTime* value, uString** __retval)
{
    *__retval = __this->Format(value);
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() :182
void LocalDateTimePattern__get_GeneralIsoPattern_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :280
void LocalDateTimePattern__GetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :290
void LocalDateTimePattern__GetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :300
void LocalDateTimePattern__GetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :270
void LocalDateTimePattern__GetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :310
void LocalDateTimePattern__GetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :250
void LocalDateTimePattern__GetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :260
void LocalDateTimePattern__GetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetYear(value);
}

// private LocalDateTimePattern New() :194
void LocalDateTimePattern__New1_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::New1();
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) :275
void LocalDateTimePattern__SetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* day)
{
    __this->SetDay(value, *day);
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) :285
void LocalDateTimePattern__SetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) :295
void LocalDateTimePattern__SetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) :265
void LocalDateTimePattern__SetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* month)
{
    __this->SetMonth(value, *month);
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) :305
void LocalDateTimePattern__SetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) :245
void LocalDateTimePattern__SetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) :255
void LocalDateTimePattern__SetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* year)
{
    __this->SetYear(value, *year);
}

uSStrong<LocalDateTimePattern*> LocalDateTimePattern::General_;

// private LocalDateTimePattern() [instance] :194
void LocalDateTimePattern::ctor_()
{
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::TYPES[1/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], uArray::Init<uObject*>(::TYPES[2/*Uno.Time.Text.IPatternPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>[]*/], 12, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::TYPES[4/*Uno.Time.Text.SignPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], uDelegate::New(::TYPES[5/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetSign_fn, this), uDelegate::New(::TYPES[6/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[7/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 4, true, uDelegate::New(::TYPES[5/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetYear_fn, this), uDelegate::New(::TYPES[6/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[8/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[7/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[5/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetMonth_fn, this), uDelegate::New(::TYPES[6/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[8/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[7/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[5/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetDay_fn, this), uDelegate::New(::TYPES[6/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetDay_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[8/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, 'T', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[7/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[5/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetHour_fn, this), uDelegate::New(::TYPES[6/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[8/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[7/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[5/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetMinute_fn, this), uDelegate::New(::TYPES[6/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[8/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[7/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[5/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetSecond_fn, this), uDelegate::New(::TYPES[6/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.LocalDateTime value) [instance] :230
uString* LocalDateTimePattern::Format(::g::Uno::Time::LocalDateTime* value)
{
    LocalDateTimePattern__LocalDateTimeBucket* collection1;
    uString* ret3;
    collection1 = LocalDateTimePattern__LocalDateTimeBucket::New1();
    uPtr(collection1)->Sign = ((uPtr(value)->Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = uPtr(value)->Year();
    uPtr(collection1)->Month = uPtr(value)->Month();
    uPtr(collection1)->Day = uPtr(value)->Day();
    uPtr(collection1)->Hour = uPtr(value)->Hour();
    uPtr(collection1)->Minute = uPtr(value)->Minute();
    uPtr(collection1)->Second = uPtr(value)->Second();
    LocalDateTimePattern__LocalDateTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :280
int LocalDateTimePattern::GetDay(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Day;
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :290
int LocalDateTimePattern::GetHour(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :300
int LocalDateTimePattern::GetMinute(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Minute;
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :270
int LocalDateTimePattern::GetMonth(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Month;
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :310
int LocalDateTimePattern::GetSecond(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :250
int LocalDateTimePattern::GetSign(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :260
int LocalDateTimePattern::GetYear(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Year;
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) [instance] :275
void LocalDateTimePattern::SetDay(LocalDateTimePattern__LocalDateTimeBucket* value, int day)
{
    uPtr(value)->Day = day;
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) [instance] :285
void LocalDateTimePattern::SetHour(LocalDateTimePattern__LocalDateTimeBucket* value, int hour)
{
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) [instance] :295
void LocalDateTimePattern::SetMinute(LocalDateTimePattern__LocalDateTimeBucket* value, int minute)
{
    uPtr(value)->Minute = minute;
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) [instance] :265
void LocalDateTimePattern::SetMonth(LocalDateTimePattern__LocalDateTimeBucket* value, int month)
{
    uPtr(value)->Month = month;
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) [instance] :305
void LocalDateTimePattern::SetSecond(LocalDateTimePattern__LocalDateTimeBucket* value, int second)
{
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) [instance] :245
void LocalDateTimePattern::SetSign(LocalDateTimePattern__LocalDateTimeBucket* value, int sign)
{
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) [instance] :255
void LocalDateTimePattern::SetYear(LocalDateTimePattern__LocalDateTimeBucket* value, int year)
{
    uPtr(value)->Year = year;
}

// private LocalDateTimePattern New() [static] :194
LocalDateTimePattern* LocalDateTimePattern::New1()
{
    LocalDateTimePattern* obj2 = (LocalDateTimePattern*)uNew(LocalDateTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() [static] :182
LocalDateTimePattern* LocalDateTimePattern::GeneralIsoPattern()
{
    if (LocalDateTimePattern::General() == NULL)
        LocalDateTimePattern::General() = LocalDateTimePattern::New1();

    return LocalDateTimePattern::General();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(854)
// --------------------------------------------------------------------------

// internal sealed class NumberPart<T> :854
// {
::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(NumberPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.NumberPart`1", options);
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof()));
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))NumberPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))NumberPart__Write_fn;
    ::STRINGS[0] = uString::Const("{0:D");
    ::STRINGS[1] = uString::Const("}");
    ::TYPES[11] = ::g::Uno::Time::Text::PatternPart_typeof();
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[0] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[11/*Uno.Time.Text.PatternPart`2*/]->MakeType(type->T(0), ::TYPES[12/*int*/]));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
    return type;
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :856
void NumberPart__ctor_1_fn(NumberPart* __this, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*size, *obligatory, setter, getter);
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :856
void NumberPart__New1_fn(uType* __type, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter, NumberPart** __retval)
{
    *__retval = NumberPart::New1(__type, *size, *obligatory, setter, getter);
}

// public override sealed string Write(T value) :888
void NumberPart__Write_fn(NumberPart* __this, void* value, uString** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Time.Text.PatternPart<T, int>*/),
    };
    int ret2;
    return *__retval = ::g::Uno::String::Format(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"{0:D"*/], uBox<int>(::TYPES[12/*int*/], __this->ExpectedSize())), ::STRINGS[1/*"}"*/]), uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, uBox<int>(::TYPES[12/*int*/], ::g::Uno::Math::Abs5((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret2), ret2))))), void();
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :856
void NumberPart::ctor_1(int size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Time.Text.PatternPart<T, int>*/),
        __type->T(0),
    };
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(size);
    Obligatory(obligatory);
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :856
NumberPart* NumberPart::New1(uType* __type, int size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    NumberPart* obj1 = (NumberPart*)uNew(__type);
    obj1->ctor_1(size, obligatory, setter, getter);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(735)
// --------------------------------------------------------------------------

// private sealed class OffsetPattern.OffsetBucket :735
// {
uType* OffsetPattern__OffsetBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OffsetPattern__OffsetBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern.OffsetBucket", options);
    type->fp_ctor_ = (void*)OffsetPattern__OffsetBucket__New1_fn;
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Sign), 0);
    return type;
}

// public generated OffsetBucket() :735
void OffsetPattern__OffsetBucket__ctor__fn(OffsetPattern__OffsetBucket* __this)
{
    __this->ctor_();
}

// public generated OffsetBucket New() :735
void OffsetPattern__OffsetBucket__New1_fn(OffsetPattern__OffsetBucket** __retval)
{
    *__retval = OffsetPattern__OffsetBucket::New1();
}

// public generated OffsetBucket() [instance] :735
void OffsetPattern__OffsetBucket::ctor_()
{
}

// public generated OffsetBucket New() [static] :735
OffsetPattern__OffsetBucket* OffsetPattern__OffsetBucket::New1()
{
    OffsetPattern__OffsetBucket* obj1 = (OffsetPattern__OffsetBucket*)uNew(OffsetPattern__OffsetBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(632)
// --------------------------------------------------------------------------

// public sealed class OffsetPattern :632
// {
uType* OffsetPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OffsetPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern", options);
    type->fp_ctor_ = (void*)OffsetPattern__New1_fn;
    ::TYPES[14] = ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof());
    ::TYPES[15] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof())->Array();
    ::TYPES[16] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof());
    ::TYPES[17] = ::g::Uno::Time::Text::SignPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof());
    ::TYPES[18] = ::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[19] = ::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[20] = ::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof());
    ::TYPES[21] = ::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof());
    ::TYPES[22] = OffsetPattern__OffsetBucket_typeof();
    ::TYPES[23] = ::g::Uno::Time::Offset_typeof();
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof()), offsetof(::g::Uno::Time::Text::OffsetPattern, _generalPattern), 0,
        OffsetPattern_typeof(), (uintptr_t)&::g::Uno::Time::Text::OffsetPattern::General_, uFieldFlagsStatic);
    return type;
}

// private OffsetPattern() :650
void OffsetPattern__ctor__fn(OffsetPattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.Offset value) :683
void OffsetPattern__Format_fn(OffsetPattern* __this, ::g::Uno::Time::Offset* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() :638
void OffsetPattern__get_GeneralIsoPattern_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::GeneralIsoPattern();
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) :710
void OffsetPattern__GetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) :720
void OffsetPattern__GetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) :730
void OffsetPattern__GetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) :700
void OffsetPattern__GetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private OffsetPattern New() :650
void OffsetPattern__New1_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::New1();
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) :705
void OffsetPattern__SetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) :715
void OffsetPattern__SetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) :725
void OffsetPattern__SetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) :695
void OffsetPattern__SetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

uSStrong<OffsetPattern*> OffsetPattern::General_;

// private OffsetPattern() [instance] :650
void OffsetPattern::ctor_()
{
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::TYPES[14/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], uArray::Init<uObject*>(::TYPES[15/*Uno.Time.Text.IPatternPart<Uno.Time.Text.OffsetPattern.OffsetBucket>[]*/], 6, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New1(::TYPES[17/*Uno.Time.Text.SignPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], true, uDelegate::New(::TYPES[18/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetSign_fn, this), uDelegate::New(::TYPES[19/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[20/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], 2, true, uDelegate::New(::TYPES[18/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetHour_fn, this), uDelegate::New(::TYPES[19/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::TYPES[21/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[20/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], 2, false, uDelegate::New(::TYPES[18/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetMinute_fn, this), uDelegate::New(::TYPES[19/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::TYPES[21/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[20/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], 2, false, uDelegate::New(::TYPES[18/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetSecond_fn, this), uDelegate::New(::TYPES[19/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.Offset value) [instance] :683
uString* OffsetPattern::Format(::g::Uno::Time::Offset value)
{
    uString* ret2;
    OffsetPattern__OffsetBucket* bucket = OffsetPattern__OffsetBucket::New1();
    bucket->Sign = ((value.Milliseconds() < 0) ? -1 : 1);
    bucket->Hour = (value.Milliseconds() / 3600000);
    int remaining = value.Milliseconds() % 3600000;
    bucket->Minute = (remaining / 60000);
    remaining = remaining % 60000;
    bucket->Second = (remaining / 1000);
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret2), ret2);
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :710
int OffsetPattern::GetHour(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :720
int OffsetPattern::GetMinute(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Minute;
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :730
int OffsetPattern::GetSecond(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :700
int OffsetPattern::GetSign(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Sign;
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) [instance] :705
void OffsetPattern::SetHour(OffsetPattern__OffsetBucket* value, int hour)
{
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) [instance] :715
void OffsetPattern::SetMinute(OffsetPattern__OffsetBucket* value, int minute)
{
    uPtr(value)->Minute = minute;
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) [instance] :725
void OffsetPattern::SetSecond(OffsetPattern__OffsetBucket* value, int second)
{
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) [instance] :695
void OffsetPattern::SetSign(OffsetPattern__OffsetBucket* value, int sign)
{
    uPtr(value)->Sign = sign;
}

// private OffsetPattern New() [static] :650
OffsetPattern* OffsetPattern::New1()
{
    OffsetPattern* obj1 = (OffsetPattern*)uNew(OffsetPattern_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() [static] :638
OffsetPattern* OffsetPattern::GeneralIsoPattern()
{
    if (OffsetPattern::General() == NULL)
        OffsetPattern::General() = OffsetPattern::New1();

    return OffsetPattern::General();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(821)
// --------------------------------------------------------------------------

// internal abstract class PatternPart<TBucket, T> :821
// {
PatternPart_type* PatternPart_typeof()
{
    static uSStrong<PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PatternPart);
    options.TypeSize = sizeof(PatternPart_type);
    type = (PatternPart_type*)uClassType::New("Uno.Time.Text.PatternPart`2", options);
    type->fp_Write = PatternPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))PatternPart__Write_fn;
    ::TYPES[24] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::Func1_typeof();
    type->SetPrecalc(
        ::TYPES[25/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0)), offsetof(PatternPart_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::PatternPart, _ExpectedSize), 0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Time::Text::PatternPart, _Getter), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Time::Text::PatternPart, _Obligatory), 0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Uno::Time::Text::PatternPart, _Setter), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::PatternPart, _SkipNextPartsCountIfThisNotSpecified), 0);
    return type;
}

// protected generated PatternPart() :821
void PatternPart__ctor__fn(PatternPart* __this)
{
    __this->ctor_();
}

// public generated int get_ExpectedSize() :827
void PatternPart__get_ExpectedSize_fn(PatternPart* __this, int* __retval)
{
    *__retval = __this->ExpectedSize();
}

// protected generated void set_ExpectedSize(int value) :827
void PatternPart__set_ExpectedSize_fn(PatternPart* __this, int* value)
{
    __this->ExpectedSize(*value);
}

// protected T Get(TBucket bucket) :846
void PatternPart__Get_fn(PatternPart* __this, void* bucket, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(PatternPart_typeof())->T(0),
        __this->__type->GetBase(PatternPart_typeof())->T(1),
        __this->__type->GetBase(PatternPart_typeof())->Precalced(0/*Uno.Func<TBucket, T>*/),
    };
    uT ret1(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;

    if (::g::Uno::Delegate::op_Inequality(__this->Getter(), NULL))
        return __retval.Store((uPtr(__this->Getter())->Invoke(&ret1, 1, bucket), ret1)), void();

    return __retval.Store(__types[1], uT(__types[1], U_ALLOCA(__types[1]->ValueSize))), void();
}

// public generated Uno.Func<TBucket, T> get_Getter() :825
void PatternPart__get_Getter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Getter();
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) :825
void PatternPart__set_Getter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Getter(value);
}

// public generated bool get_Obligatory() :831
void PatternPart__get_Obligatory_fn(PatternPart* __this, bool* __retval)
{
    *__retval = __this->Obligatory();
}

// protected generated void set_Obligatory(bool value) :831
void PatternPart__set_Obligatory_fn(PatternPart* __this, bool* value)
{
    __this->Obligatory(*value);
}

// public generated Uno.Action<TBucket, T> get_Setter() :823
void PatternPart__get_Setter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Setter();
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) :823
void PatternPart__set_Setter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Setter(value);
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() :829
void PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* __retval)
{
    *__retval = __this->SkipNextPartsCountIfThisNotSpecified();
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) :829
void PatternPart__set_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* value)
{
    __this->SkipNextPartsCountIfThisNotSpecified(*value);
}

// public virtual string Write(TBucket value) :835
void PatternPart__Write_fn(PatternPart* __this, void* value, uString** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(PatternPart_typeof())->T(0),
        __this->__type->GetBase(PatternPart_typeof())->T(1),
    };
    uT ret2(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    return *__retval = ::g::Uno::Object::ToString(uBoxPtr(__types[1], (PatternPart__Get_fn(__this, value, &ret2), ret2), U_ALLOCA(__types[1]->ObjectSize))), void();
}

// protected generated PatternPart() [instance] :821
void PatternPart::ctor_()
{
}

// public generated int get_ExpectedSize() [instance] :827
int PatternPart::ExpectedSize()
{
    return _ExpectedSize;
}

// protected generated void set_ExpectedSize(int value) [instance] :827
void PatternPart::ExpectedSize(int value)
{
    _ExpectedSize = value;
}

// public generated Uno.Func<TBucket, T> get_Getter() [instance] :825
uDelegate* PatternPart::Getter()
{
    return _Getter;
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) [instance] :825
void PatternPart::Getter(uDelegate* value)
{
    _Getter = value;
}

// public generated bool get_Obligatory() [instance] :831
bool PatternPart::Obligatory()
{
    return _Obligatory;
}

// protected generated void set_Obligatory(bool value) [instance] :831
void PatternPart::Obligatory(bool value)
{
    _Obligatory = value;
}

// public generated Uno.Action<TBucket, T> get_Setter() [instance] :823
uDelegate* PatternPart::Setter()
{
    return _Setter;
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) [instance] :823
void PatternPart::Setter(uDelegate* value)
{
    _Setter = value;
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() [instance] :829
int PatternPart::SkipNextPartsCountIfThisNotSpecified()
{
    return _SkipNextPartsCountIfThisNotSpecified;
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) [instance] :829
void PatternPart::SkipNextPartsCountIfThisNotSpecified(int value)
{
    _SkipNextPartsCountIfThisNotSpecified = value;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(1001)
// ---------------------------------------------------------------------------

// internal sealed class SeparatorPart<T> :1001
// {
::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(SeparatorPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SeparatorPart`1", options);
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Char_typeof()));
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SeparatorPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SeparatorPart__Write_fn;
    ::TYPES[11] = ::g::Uno::Time::Text::PatternPart_typeof();
    ::TYPES[26] = ::g::Uno::Char_typeof();
    ::TYPES[27] = ::g::Uno::String_typeof();
    type->SetPrecalc(
        ::TYPES[11/*Uno.Time.Text.PatternPart`2*/]->MakeType(type->T(0), ::TYPES[26/*char*/]));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5,
        ::g::Uno::Char_typeof(), offsetof(::g::Uno::Time::Text::SeparatorPart, _separator), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Time::Text::SeparatorPart, _show), 0);
    return type;
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1016
void SeparatorPart__ctor_1_fn(SeparatorPart* __this, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_1(*obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1007
void SeparatorPart__ctor_2_fn(SeparatorPart* __this, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_2(*obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1016
void SeparatorPart__New1_fn(uType* __type, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New1(__type, *obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1007
void SeparatorPart__New2_fn(uType* __type, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New2(__type, *obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public override sealed string Write(T value) :1043
void SeparatorPart__Write_fn(SeparatorPart* __this, void* value, uString** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Time.Text.PatternPart<T, char>*/),
    };
    return *__retval = (__this->Obligatory() || __this->_show) ? (uString*)::g::Uno::Char::ToString(__this->_separator, ::TYPES[26/*char*/]) : (uString*)::g::Uno::String::Empty(), void();
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :1016
void SeparatorPart::ctor_1(bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Time.Text.PatternPart<T, char>*/),
        __type->T(0),
    };
    ctor_();
    ExpectedSize(1);
    Obligatory(obligatory);
    SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    _separator = separator;
    _show = show;
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :1007
void SeparatorPart::ctor_2(bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Time.Text.PatternPart<T, char>*/),
        __type->T(0),
    };
    ctor_();
    ExpectedSize(1);
    Obligatory(obligatory);
    SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    _separator = separator;
    _show = false;
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :1016
SeparatorPart* SeparatorPart::New1(uType* __type, bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj2 = (SeparatorPart*)uNew(__type);
    obj2->ctor_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return obj2;
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :1007
SeparatorPart* SeparatorPart::New2(uType* __type, bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj1 = (SeparatorPart*)uNew(__type);
    obj1->ctor_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Time\Text\$.uno(952)
// --------------------------------------------------------------------------

// internal sealed class SignPart<T> :952
// {
::g::Uno::Time::Text::PatternPart_type* SignPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(SignPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SignPart`1", options);
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof()));
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SignPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SignPart__Write_fn;
    ::STRINGS[2] = uString::Const("+");
    ::STRINGS[3] = uString::Const("-");
    ::TYPES[11] = ::g::Uno::Time::Text::PatternPart_typeof();
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[27] = ::g::Uno::String_typeof();
    type->SetPrecalc(
        ::TYPES[11/*Uno.Time.Text.PatternPart`2*/]->MakeType(type->T(0), ::TYPES[12/*int*/]));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
    return type;
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :963
void SignPart__ctor_1_fn(SignPart* __this, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*obligatory, setter, getter);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :955
void SignPart__ctor_2_fn(SignPart* __this, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_2(setter, getter);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :963
void SignPart__New1_fn(uType* __type, bool* obligatory, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New1(__type, *obligatory, setter, getter);
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :955
void SignPart__New2_fn(uType* __type, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New2(__type, setter, getter);
}

// public override sealed string Write(T value) :993
void SignPart__Write_fn(SignPart* __this, void* value, uString** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Time.Text.PatternPart<T, int>*/),
    };
    int ret3;

    if ((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret3), ret3) == 1)
        return *__retval = __this->Obligatory() ? ::STRINGS[2/*"+"*/] : (uString*)::g::Uno::String::Empty(), void();

    return *__retval = ::STRINGS[3/*"-"*/], void();
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :963
void SignPart::ctor_1(bool obligatory, uDelegate* setter, uDelegate* getter)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Time.Text.PatternPart<T, int>*/),
        __type->T(0),
    };
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(1);
    Obligatory(obligatory);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :955
void SignPart::ctor_2(uDelegate* setter, uDelegate* getter)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Time.Text.PatternPart<T, int>*/),
        __type->T(0),
    };
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(1);
    Obligatory(false);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :963
SignPart* SignPart::New1(uType* __type, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj2 = (SignPart*)uNew(__type);
    obj2->ctor_1(obligatory, setter, getter);
    return obj2;
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :955
SignPart* SignPart::New2(uType* __type, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj1 = (SignPart*)uNew(__type);
    obj1->ctor_2(setter, getter);
    return obj1;
}
// }

}}}} // ::g::Uno::Time::Text
