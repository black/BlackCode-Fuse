#include <app/Uno.Bool.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_LocalDatePatter-415ccfb0.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_LocalDateTimePa-9e0dc172.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_LocalTimePatter-788be00d.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_OffsetDateTimeP-455a4790.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_OffsetPattern_O-671021c9.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDatePattern_Loca-7947c8c4.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDateTimePattern_-12b203a0.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalTimePattern_Loca-1afbc6da.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetDateTimePattern-de961316.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.LocalDatePattern_LocalDateBucket.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDatePattern_LocalDateBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* inst = (FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket), FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

void FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket__Parse(FixedFormatPattern__Uno_Time_Text_LocalDatePattern_LocalDateBucket* __this, ::uString* line, ::app::Uno::Time::Text::LocalDatePattern_LocalDateBucket* bucket)
{
    int position = 0;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_parts)->Length(); i++)
    {
        ::uObject* part = ::uPtr< ::uArray*>(__this->_parts)->Item< ::uObject*>(i);
        int readCount = ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket::Read(::uPtr< ::uObject*>(part), line, position, bucket);
        position = position + readCount;

        if (readCount == 0)
        {
            i = i + ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDatePattern_LocalDateBucket::SkipNextPartsCountIfThisNotSpecified(part);
        }
    }

    if (position != ::uPtr< ::uString*>(line)->Length())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Line is too long")));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

void FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Parse(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uString* line, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket)
{
    int position = 0;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_parts)->Length(); i++)
    {
        ::uObject* part = ::uPtr< ::uArray*>(__this->_parts)->Item< ::uObject*>(i);
        int readCount = ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket::Read(::uPtr< ::uObject*>(part), line, position, bucket);
        position = position + readCount;

        if (readCount == 0)
        {
            i = i + ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket::SkipNextPartsCountIfThisNotSpecified(part);
        }
    }

    if (position != ::uPtr< ::uString*>(line)->Length())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Line is too long")));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

void FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Parse(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uString* line, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket)
{
    int position = 0;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_parts)->Length(); i++)
    {
        ::uObject* part = ::uPtr< ::uArray*>(__this->_parts)->Item< ::uObject*>(i);
        int readCount = ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket::Read(::uPtr< ::uObject*>(part), line, position, bucket);
        position = position + readCount;

        if (readCount == 0)
        {
            i = i + ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket::SkipNextPartsCountIfThisNotSpecified(part);
        }
    }

    if (position != ::uPtr< ::uString*>(line)->Length())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Line is too long")));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetDateTimePattern_OffsetDateTimeBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* inst = (FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket), FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

void FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket__Parse(FixedFormatPattern__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket* __this, ::uString* line, ::app::Uno::Time::Text::OffsetDateTimePattern_OffsetDateTimeBucket* bucket)
{
    int position = 0;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_parts)->Length(); i++)
    {
        ::uObject* part = ::uPtr< ::uArray*>(__this->_parts)->Item< ::uObject*>(i);
        int readCount = ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket::Read(::uPtr< ::uObject*>(part), line, position, bucket);
        position = position + readCount;

        if (readCount == 0)
        {
            i = i + ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetDateTimePattern_OffsetDateTimeBucket::SkipNextPartsCountIfThisNotSpecified(part);
        }
    }

    if (position != ::uPtr< ::uString*>(line)->Length())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Line is too long")));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__Format(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket), FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

void FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__Parse(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uString* line, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket)
{
    int position = 0;

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_parts)->Length(); i++)
    {
        ::uObject* part = ::uPtr< ::uArray*>(__this->_parts)->Item< ::uObject*>(i);
        int readCount = ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket::Read(::uPtr< ::uObject*>(part), line, position, bucket);
        position = position + readCount;

        if (readCount == 0)
        {
            i = i + ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket::SkipNextPartsCountIfThisNotSpecified(part);
        }
    }

    if (position != ::uPtr< ::uString*>(line)->Length())
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Line is too long")));
    }
}

}}}}
