// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_DE961316_H__
#define __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_OFFSET_DATE_TIME_PATTERN_DE961316_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetDateTimePattern_OffsetDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

::uInterfaceType* IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof();

struct IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket
{
    int(*__fp_get_SkipNextPartsCountIfThisNotSpecified)(void*);
    int(*__fp_Read)(void*, ::uString*, int, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*);
    ::uString*(*__fp_Write)(void*, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket*);

    static int SkipNextPartsCountIfThisNotSpecified(::uObject* __this) { return ((IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)uGetInterfacePtr(__this, IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()))->__fp_get_SkipNextPartsCountIfThisNotSpecified((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int Read(::uObject* __this, ::uString* line, int position, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return ((IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)uGetInterfacePtr(__this, IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()))->__fp_Read((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), line, position, value); }
    static ::uString* Write(::uObject* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* value) { return ((IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)uGetInterfacePtr(__this, IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()))->__fp_Write((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}}


#endif
