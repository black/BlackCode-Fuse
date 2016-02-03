// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_SHORT2_H__
#define __APP_UNO_U_SHORT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct UShort2;

struct UShort2__uType : ::uStructType
{
};

UShort2__uType* UShort2__typeof();

void UShort2___ObjInit_1(UShort2* __this, ::uUShort x, ::uUShort y);
bool UShort2__Equals(UShort2* __this, ::uObject* o);
::uUShort UShort2__get_Item(UShort2* __this, int index);
int UShort2__GetHashCode(UShort2* __this);
UShort2 UShort2__New_2(::uStatic* __this, ::uUShort x, ::uUShort y);
void UShort2__set_Item(UShort2* __this, int index, ::uUShort value);
::uString* UShort2__ToString(UShort2* __this);

struct UShort2
{
    ::uUShort X;
    ::uUShort Y;

    void _ObjInit_1(::uUShort x, ::uUShort y) { UShort2___ObjInit_1(this, x, y); }
    bool Equals(::uObject* o) { return UShort2__Equals(this, o); }
    ::uUShort Item(int index) { return UShort2__get_Item(this, index); }
    int GetHashCode() { return UShort2__GetHashCode(this); }
    void Item(int index, ::uUShort value) { UShort2__set_Item(this, index, value); }
    ::uString* ToString() { return UShort2__ToString(this); }
};

}}


#endif
