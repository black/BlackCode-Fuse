// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Time\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_OFFSET_H__
#define __APP_UNO_TIME_OFFSET_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {

struct Offset;

extern Offset Offset__MaxValue;
extern Offset Offset__MinValue;
extern Offset Offset__Zero;

struct Offset__uType : ::uStructType
{
};

Offset__uType* Offset__typeof();

void Offset___ObjInit(Offset* __this, int milliseconds);
void Offset___TypeInit(::uStatic* __this);
bool Offset__Equals(Offset* __this, ::uObject* obj);
bool Offset__Equals_2(Offset* __this, Offset other);
Offset Offset__FromHours(::uStatic* __this, int hours);
Offset Offset__FromHoursAndMinutes(::uStatic* __this, int hours, int minutes);
Offset Offset__FromMilliseconds(::uStatic* __this, int milliseconds);
Offset Offset__FromTicks(::uStatic* __this, ::uLong ticks);
int Offset__get_Milliseconds(Offset* __this);
::uLong Offset__get_Ticks(Offset* __this);
int Offset__GetHashCode(Offset* __this);
Offset Offset__New_1(::uStatic* __this, int milliseconds);
bool Offset__op_Equality(::uStatic* __this, Offset left, Offset right);
::uString* Offset__ToString(Offset* __this);

struct Offset
{
    int _milliseconds;

    void _ObjInit(int milliseconds) { Offset___ObjInit(this, milliseconds); }
    bool Equals(::uObject* obj) { return Offset__Equals(this, obj); }
    bool Equals_2(Offset other) { return Offset__Equals_2(this, other); }
    int Milliseconds() { return Offset__get_Milliseconds(this); }
    ::uLong Ticks() { return Offset__get_Ticks(this); }
    int GetHashCode() { return Offset__GetHashCode(this); }
    ::uString* ToString() { return Offset__ToString(this); }
};

}}}


#endif
