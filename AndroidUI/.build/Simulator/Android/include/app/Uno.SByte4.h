// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_S_BYTE4_H__
#define __APP_UNO_S_BYTE4_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct SByte4;

struct SByte4__uType : ::uStructType
{
};

SByte4__uType* SByte4__typeof();

void SByte4___ObjInit_1(SByte4* __this, ::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w);
bool SByte4__Equals(SByte4* __this, ::uObject* o);
::uSByte SByte4__get_Item(SByte4* __this, int index);
int SByte4__GetHashCode(SByte4* __this);
SByte4 SByte4__New_2(::uStatic* __this, ::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w);
void SByte4__set_Item(SByte4* __this, int index, ::uSByte value);
::uString* SByte4__ToString(SByte4* __this);

struct SByte4
{
    ::uSByte X;
    ::uSByte Y;
    ::uSByte Z;
    ::uSByte W;

    void _ObjInit_1(::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w) { SByte4___ObjInit_1(this, x, y, z, w); }
    bool Equals(::uObject* o) { return SByte4__Equals(this, o); }
    ::uSByte Item(int index) { return SByte4__get_Item(this, index); }
    int GetHashCode() { return SByte4__GetHashCode(this); }
    void Item(int index, ::uSByte value) { SByte4__set_Item(this, index, value); }
    ::uString* ToString() { return SByte4__ToString(this); }
};

}}


#endif
