// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_SHORT4_H__
#define __APP_UNO_U_SHORT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct UShort4;

struct UShort4__uType : ::uStructType
{
};

UShort4__uType* UShort4__typeof();

void UShort4___ObjInit_1(UShort4* __this, ::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w);
bool UShort4__Equals(UShort4* __this, ::uObject* o);
::uUShort UShort4__get_Item(UShort4* __this, int index);
int UShort4__GetHashCode(UShort4* __this);
UShort4 UShort4__New_2(::uStatic* __this, ::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w);
void UShort4__set_Item(UShort4* __this, int index, ::uUShort value);
::uString* UShort4__ToString(UShort4* __this);

struct UShort4
{
    ::uUShort X;
    ::uUShort Y;
    ::uUShort Z;
    ::uUShort W;

    void _ObjInit_1(::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w) { UShort4___ObjInit_1(this, x, y, z, w); }
    bool Equals(::uObject* o) { return UShort4__Equals(this, o); }
    ::uUShort Item(int index) { return UShort4__get_Item(this, index); }
    int GetHashCode() { return UShort4__GetHashCode(this); }
    void Item(int index, ::uUShort value) { UShort4__set_Item(this, index, value); }
    ::uString* ToString() { return UShort4__ToString(this); }
};

}}


#endif
