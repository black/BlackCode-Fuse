// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_PATTERN_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN__3C704655_H__
#define __APP_UNO_TIME_TEXT_PATTERN_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN__3C704655_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetDateTimePattern-de961316.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetDateTimePattern_OffsetDateTimeBucket; } } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset;

struct PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType : ::uClassType
{
    ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket __interface_0;
    int(*__fp_Read)(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*);
    ::uString*(*__fp_Write)(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*);
};

PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__typeof();

void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset___ObjInit(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this);
::app::Uno::Time::Offset PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Get(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket);
int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this);
::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this);
bool PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this);
::uDelegate* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this);
int PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Set(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, ::app::Uno::Time::Offset val);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, int value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Getter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::uDelegate* value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Obligatory(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, bool value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Setter(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::uDelegate* value);
void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, int value);
::uString* PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Write(PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value);

struct PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset : ::uObject
{
    ::uStrong< ::uDelegate*> _Setter;
    ::uStrong< ::uDelegate*> _Getter;
    int _ExpectedSize;
    int _SkipNextPartsCountIfThisNotSpecified;
    bool _Obligatory;

    void _ObjInit() { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset___ObjInit(this); }
    ::app::Uno::Time::Offset Get(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket);
    int ExpectedSize() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_ExpectedSize(this); }
    ::uDelegate* Getter() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Getter(this); }
    bool Obligatory() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Obligatory(this); }
    ::uDelegate* Setter() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_Setter(this); }
    int SkipNextPartsCountIfThisNotSpecified() { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__get_SkipNextPartsCountIfThisNotSpecified(this); }
    int Read(::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return (((PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType*)this->__obj_type)->__fp_Read)(this, line, position, value); }
    void Set(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, ::app::Uno::Time::Offset val);
    void ExpectedSize(int value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_ExpectedSize(this, value); }
    void Getter(::uDelegate* value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Getter(this, value); }
    void Obligatory(bool value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Obligatory(this, value); }
    void Setter(::uDelegate* value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_Setter(this, value); }
    void SkipNextPartsCountIfThisNotSpecified(int value) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__set_SkipNextPartsCountIfThisNotSpecified(this, value); }
    ::uString* Write(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return (((PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__uType*)this->__obj_type)->__fp_Write)(this, value); }
};

}}}}

#include <app/Uno.Time.Offset.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

inline ::app::Uno::Time::Offset PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset::Get(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket) { return PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Get(this, bucket); }
inline void PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset::Set(::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket, ::app::Uno::Time::Offset val) { PatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Uno_Time_Offset__Set(this, bucket, val); }

}}}}


#endif
