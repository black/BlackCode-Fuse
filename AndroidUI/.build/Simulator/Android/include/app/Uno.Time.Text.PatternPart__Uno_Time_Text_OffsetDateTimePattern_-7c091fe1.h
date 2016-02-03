// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PATTERN_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN__7C091FE1_H__
#define __APP_UNO_TIME_TEXT_PATTERN_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN__7C091FE1_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetDateTimePattern-de961316.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetDateTimePattern_OffsetDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char;

struct PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType : ::uClassType
{
    ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket __interface_0;
    int(*__fp_Read)(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*);
    ::uString*(*__fp_Write)(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*);
};

PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__typeof();

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char___ObjInit(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this);
::uChar PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Get(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket);
int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this);
::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this);
bool PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this);
::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this);
int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Set(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, ::uChar val);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, int value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::uDelegate* value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, bool value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::uDelegate* value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, int value);
::uString* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Write(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);

struct PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char : ::uObject
{
    ::uStrong< ::uDelegate*> _Setter;
    ::uStrong< ::uDelegate*> _Getter;
    int _ExpectedSize;
    int _SkipNextPartsCountIfThisNotSpecified;
    bool _Obligatory;

    void _ObjInit() { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char___ObjInit(this); }
    ::uChar Get(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket) { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Get(this, bucket); }
    int ExpectedSize() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_ExpectedSize(this); }
    ::uDelegate* Getter() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Getter(this); }
    bool Obligatory() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Obligatory(this); }
    ::uDelegate* Setter() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_Setter(this); }
    int SkipNextPartsCountIfThisNotSpecified() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified(this); }
    int Read(::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return (((PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType*)this->__obj_type)->__fp_Read)(this, line, position, value); }
    void Set(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, ::uChar val) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__Set(this, bucket, val); }
    void ExpectedSize(int value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_ExpectedSize(this, value); }
    void Getter(::uDelegate* value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Getter(this, value); }
    void Obligatory(bool value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Obligatory(this, value); }
    void Setter(::uDelegate* value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_Setter(this, value); }
    void SkipNextPartsCountIfThisNotSpecified(int value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__set_SkipNextPartsCountIfThisNotSpecified(this, value); }
    ::uString* Write(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return (((PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__char__uType*)this->__obj_type)->__fp_Write)(this, value); }
};

}}}}


#endif
