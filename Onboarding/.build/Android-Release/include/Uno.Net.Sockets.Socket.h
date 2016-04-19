// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.20.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public abstract class Socket :636
// {
struct Socket_type : uType
{
    void(*fp_Receive1)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*);
    void(*fp_Send1)(::g::Uno::Net::Sockets::Socket*, uArray*, int*, int*, int*);
};

Socket_type* Socket_typeof();

struct Socket : uObject
{
    int Receive1(uArray* buffer, int offset, int length) { int __retval; return (((Socket_type*)__type)->fp_Receive1)(this, buffer, &offset, &length, &__retval), __retval; }
    int Send1(uArray* buffer, int offset, int length) { int __retval; return (((Socket_type*)__type)->fp_Send1)(this, buffer, &offset, &length, &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Net::Sockets
