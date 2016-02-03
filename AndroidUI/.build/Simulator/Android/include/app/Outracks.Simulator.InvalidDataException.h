// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_INVALID_DATA_EXCEPTION_H__
#define __APP_OUTRACKS_SIMULATOR_INVALID_DATA_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {

struct InvalidDataException;

struct InvalidDataException__uType : ::app::Uno::Exception__uType
{
};

InvalidDataException__uType* InvalidDataException__typeof();

void InvalidDataException___ObjInit_2(InvalidDataException* __this);
InvalidDataException* InvalidDataException__New_3(::uStatic* __this);

struct InvalidDataException : ::app::Uno::Exception
{
    void _ObjInit_2() { InvalidDataException___ObjInit_2(this); }
};

}}}


#endif
