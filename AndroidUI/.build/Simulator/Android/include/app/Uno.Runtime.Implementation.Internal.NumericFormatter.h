// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_NUMERIC_FORMATTER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_NUMERIC_FORMATTER_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

extern ::uStaticStrong< ::uString*> NumericFormatter___decimalPoint;
extern int NumericFormatter__ExponentialDigits;
extern int NumericFormatter__NumberDecimalDigits;

struct NumericFormatter__uType : ::uClassType
{
};

NumericFormatter__uType* NumericFormatter__typeof();

void NumericFormatter___TypeInit(::uStatic* __this);
void NumericFormatter__CalculateExponential(::uStatic* __this, double d, double* significand, int* exponent);
int NumericFormatter__Digits(::uStatic* __this, ::uString* formatString);
::uString* NumericFormatter__DoFormatHex(::uStatic* __this, ::uString* formatString, ::uULong l, int maxLength);
::uString* NumericFormatter__Format(::uStatic* __this, ::uString* formatString, bool i);
::uString* NumericFormatter__Format_1(::uStatic* __this, ::uString* formatString, double d);
::uString* NumericFormatter__Format_2(::uStatic* __this, ::uString* formatString, float f);
::uString* NumericFormatter__Format_3(::uStatic* __this, ::uString* formatString, int i);
::uString* NumericFormatter__Format_4(::uStatic* __this, ::uString* formatString, ::uLong i);
::uString* NumericFormatter__Format_5(::uStatic* __this, ::uString* formatString, ::uSByte b);
::uString* NumericFormatter__Format_6(::uStatic* __this, ::uString* formatString, ::uShort s);
::uString* NumericFormatter__Format_7(::uStatic* __this, ::uString* formatString, ::uULong i);
::uString* NumericFormatter__FormatCustom(::uStatic* __this, ::uString* formatString, double value);
::uString* NumericFormatter__FormatCustom_1(::uStatic* __this, ::uString* formatString, ::uULong value);
::uString* NumericFormatter__FormatCustomDoublePart(::uStatic* __this, ::uString* doubleFormat, double d, bool* decimalPoint);
::uString* NumericFormatter__FormatCustomIntegerPart(::uStatic* __this, ::uString* integerFormat, ::uULong value);
::uString* NumericFormatter__FormatDecimal(::uStatic* __this, ::uString* formatString, ::uULong l);
::uString* NumericFormatter__FormatExponential(::uStatic* __this, ::uString* formatString, double d);
::uString* NumericFormatter__FormatFixedPoint(::uStatic* __this, ::uString* formatString, double d);
::uString* NumericFormatter__FormatFixedPoint_1(::uStatic* __this, ::uString* formatString, ::uULong d);
::uString* NumericFormatter__FormatFloatGeneral(::uStatic* __this, ::uString* formatString, float f);
::uString* NumericFormatter__FormatGeneral(::uStatic* __this, ::uString* formatString, double d);
::uString* NumericFormatter__FormatGeneral_1(::uStatic* __this, ::uString* formatString, ::uULong i);
::uString* NumericFormatter__FormatHex(::uStatic* __this, ::uString* formatString, int i);
::uString* NumericFormatter__FormatHex_1(::uStatic* __this, ::uString* formatString, ::uLong l);
::uString* NumericFormatter__FormatHex_2(::uStatic* __this, ::uString* formatString, ::uSByte b);
::uString* NumericFormatter__FormatHex_3(::uStatic* __this, ::uString* formatString, ::uShort s);
::uString* NumericFormatter__FormatHex_4(::uStatic* __this, ::uString* formatString, ::uULong l);
::uString* NumericFormatter__FormatNumber(::uStatic* __this, double d);
::uString* NumericFormatter__FormatNumber_1(::uStatic* __this, ::uString* formatString, double d);
::uString* NumericFormatter__FormatNumber_2(::uStatic* __this, ::uString* formatString, ::uULong i);
::uString* NumericFormatter__FormatNumber_3(::uStatic* __this, ::uULong i);
::uString* NumericFormatter__get_DecimalPoint(::uStatic* __this);
int NumericFormatter__GetFormatSpecifier(::uStatic* __this, ::uString* formatString);
int NumericFormatter__GetStandartFormat(::uStatic* __this, ::uChar symbol);
bool NumericFormatter__IsLetter(::uStatic* __this, ::uChar symbol);
::uString* NumericFormatter__Pad(::uStatic* __this, ::uString* unmodified, ::uString* formatString);
::uString* NumericFormatter__Padding(::uStatic* __this, int length);

}}}}}


#endif
