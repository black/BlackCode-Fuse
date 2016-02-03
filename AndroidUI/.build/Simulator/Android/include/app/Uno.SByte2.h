// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_S_BYTE2_H__
#define __APP_UNO_S_BYTE2_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct SByte2;

struct SByte2__uType : ::uStructType
{
};

SByte2__uType* SByte2__typeof();

void SByte2___ObjInit_1(SByte2* __this, ::uSByte x, ::uSByte y);
bool SByte2__Equals(SByte2* __this, ::uObject* o);
::uSByte SByte2__get_Item(SByte2* __this, int index);
int SByte2__GetHashCode(SByte2* __this);
SByte2 SByte2__New_2(::uStatic* __this, ::uSByte x, ::uSByte y);
void SByte2__set_Item(SByte2* __this, int index, ::uSByte value);
::uString* SByte2__ToString(SByte2* __this);

struct SByte2
{
    ::uSByte X;
    ::uSByte Y;

    void _ObjInit_1(::uSByte x, ::uSByte y) { SByte2___ObjInit_1(this, x, y); }
    bool Equals(::uObject* o) { return SByte2__Equals(this, o); }
    ::uSByte Item(int index) { return SByte2__get_Item(this, index); }
    int GetHashCode() { return SByte2__GetHashCode(this); }
    void Item(int index, ::uSByte value) { SByte2__set_Item(this, index, value); }
    ::uString* ToString() { return SByte2__ToString(this); }
};

}}


#endif
