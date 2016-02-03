#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.EndPoint.h>
#include <app/Uno.Net.IPAddress.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Net.Sockets.AddressFamily.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Uno {
namespace Net {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EndPoint__uType* EndPoint__typeof()
{
    static ::uStaticStrong<EndPoint__uType*> type;
    if (type != NULL) return type;

    type = (EndPoint__uType*)::uAllocClassType(sizeof(EndPoint__uType), "Uno.Net.EndPoint", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction("get_AddressFamily", EndPoint__get_AddressFamily, 0, false, ::app::Uno::Net::Sockets::AddressFamily__typeof()),
        ::uNewFunctionVoid("set_AddressFamily", EndPoint__set_AddressFamily, 0, false, ::app::Uno::Net::Sockets::AddressFamily__typeof()));

    ::uRegisterType(type);
    return type;
}

void EndPoint___ObjInit(EndPoint* __this, int addressFamily)
{
    __this->AddressFamily(__this->AddressFamily());
}

int EndPoint__get_AddressFamily(EndPoint* __this)
{
    return __this->_AddressFamily;
}

void EndPoint__set_AddressFamily(EndPoint* __this, int value)
{
    __this->_AddressFamily = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< IPAddress*> IPAddress__Any;
::uStaticStrong< IPAddress*> IPAddress__Broadcast;
::uStaticStrong< IPAddress*> IPAddress__Loopback;

IPAddress__uType* IPAddress__typeof()
{
    static ::uStaticStrong<IPAddress__uType*> type;
    if (type != NULL) return type;

    type = (IPAddress__uType*)::uAllocClassType(sizeof(IPAddress__uType), "Uno.Net.IPAddress", false, 0, 1, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))IPAddress__ToString;

    type->SetStrongRefs(
        "_address", offsetof(IPAddress, _address));

    type->SetFields(4,
        ::uNewField("_address", NULL, offsetof(IPAddress, _address), ::app::Uno::Buffer__typeof()),
        ::uNewField("Any", &IPAddress__Any, 0, IPAddress__typeof()),
        ::uNewField("Broadcast", &IPAddress__Broadcast, 0, IPAddress__typeof()),
        ::uNewField("Loopback", &IPAddress__Loopback, 0, IPAddress__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Address", IPAddress__get_Address, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunction("GetAddressBytes", IPAddress__GetAddressBytes, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction(".ctor", IPAddress__New_1, 0, true, IPAddress__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction(".ctor", IPAddress__New_2, 0, true, IPAddress__typeof(), ::app::Uno::UInt__typeof()),
        ::uNewFunction("Parse", IPAddress__Parse, 0, true, IPAddress__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void IPAddress___ObjInit(IPAddress* __this, ::uArray* octets)
{
    if (::uPtr< ::uArray*>(octets)->Length() != 4)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid ip address")));
    }

    __this->_address = ::app::Uno::Buffer__New_1(NULL, octets);
}

void IPAddress___ObjInit_1(IPAddress* __this, ::uUInt address)
{
    __this->_address = ::app::Uno::Buffer__New_3(NULL, 4);
    ::uPtr< ::app::Uno::Buffer*>(__this->_address)->SetUInt(0, address, true);
}

void IPAddress___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::uArray* array_125;
    IPAddress__Any = IPAddress__New_1(NULL, (array_123 = ::uNewArray(::app::Uno::Byte__typeof(), 4), ::uPtr< ::uArray*>(array_123)->Item< ::uByte>(0) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uByte>(1) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uByte>(2) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uByte>(3) = 0, array_123));
    IPAddress__Broadcast = IPAddress__New_1(NULL, (array_124 = ::uNewArray(::app::Uno::Byte__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::uByte>(0) = 255, ::uPtr< ::uArray*>(array_124)->Item< ::uByte>(1) = 255, ::uPtr< ::uArray*>(array_124)->Item< ::uByte>(2) = 255, ::uPtr< ::uArray*>(array_124)->Item< ::uByte>(3) = 255, array_124));
    IPAddress__Loopback = IPAddress__New_1(NULL, (array_125 = ::uNewArray(::app::Uno::Byte__typeof(), 4), ::uPtr< ::uArray*>(array_125)->Item< ::uByte>(0) = 127, ::uPtr< ::uArray*>(array_125)->Item< ::uByte>(1) = 0, ::uPtr< ::uArray*>(array_125)->Item< ::uByte>(2) = 0, ::uPtr< ::uArray*>(array_125)->Item< ::uByte>(3) = 1, array_125));
}

::uUInt IPAddress__get_Address(IPAddress* __this)
{
    return ::uPtr< ::app::Uno::Buffer*>(__this->_address)->GetUInt(0, true);
}

::uArray* IPAddress__GetAddressBytes(IPAddress* __this)
{
    ::uArray* address = ::uNewArray(::app::Uno::Byte__typeof(), ::uPtr< ::app::Uno::Buffer*>(__this->_address)->SizeInBytes());

    for (int i = 0; i < ::uPtr< ::app::Uno::Buffer*>(__this->_address)->SizeInBytes(); i++)
    {
        ::uPtr< ::uArray*>(address)->Item< ::uByte>(i) = ::uPtr< ::app::Uno::Buffer*>(__this->_address)->Item(i);
    }

    return address;
}

IPAddress* IPAddress__New_1(::uStatic* __this, ::uArray* octets)
{
    IPAddress* inst = (IPAddress*)::uAllocObject(sizeof(IPAddress), IPAddress__typeof());
    inst->_ObjInit(octets);
    return inst;
}

IPAddress* IPAddress__New_2(::uStatic* __this, ::uUInt address)
{
    IPAddress* inst = (IPAddress*)::uAllocObject(sizeof(IPAddress), IPAddress__typeof());
    inst->_ObjInit_1(address);
    return inst;
}

IPAddress* IPAddress__Parse(::uStatic* __this, ::uString* address)
{
    ::uArray* array_126;
    ::uArray* parts = ::app::Uno::String::Split(::uPtr< ::uString*>(address), (array_126 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_126)->Item< ::uChar>(0) = '.', array_126));

    if (::uPtr< ::uArray*>(parts)->Length() != 4)
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Invalid IPv4 address")));
    }

    ::uArray* octets = ::uNewArray(::app::Uno::Byte__typeof(), 4);

    for (int i = 0; i < 4; ++i)
    {
        int tmp = ::app::Uno::Int__Parse(NULL, ::uPtr< ::uArray*>(parts)->Item< ::uString*>(i));

        if ((0 > tmp) || (tmp > 255))
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Invalid IPv4 address")));
        }

        ::uPtr< ::uArray*>(octets)->Item< ::uByte>(i) = (::uByte)tmp;
    }

    return IPAddress__New_1(NULL, octets);
}

::uString* IPAddress__ToString(IPAddress* __this)
{
    ::uByte o1 = ::uPtr< ::app::Uno::Buffer*>(__this->_address)->GetByte(0);
    ::uByte o2 = ::uPtr< ::app::Uno::Buffer*>(__this->_address)->GetByte(1);
    ::uByte o3 = ::uPtr< ::app::Uno::Buffer*>(__this->_address)->GetByte(2);
    ::uByte o4 = ::uPtr< ::app::Uno::Buffer*>(__this->_address)->GetByte(3);
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uBox< ::uByte>(::app::Uno::Byte__typeof(), o1), ::uGetConstString(".")), ::uBox< ::uByte>(::app::Uno::Byte__typeof(), o2)), ::uGetConstString(".")), ::uBox< ::uByte>(::app::Uno::Byte__typeof(), o3)), ::uGetConstString(".")), ::uBox< ::uByte>(::app::Uno::Byte__typeof(), o4));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IPEndPoint__uType* IPEndPoint__typeof()
{
    static ::uStaticStrong<IPEndPoint__uType*> type;
    if (type != NULL) return type;

    type = (IPEndPoint__uType*)::uAllocClassType(sizeof(IPEndPoint__uType), "Uno.Net.IPEndPoint", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Net::EndPoint__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))IPEndPoint__ToString;

    type->SetStrongRefs(
        "_Address", offsetof(IPEndPoint, _Address));

    type->SetFunctions(5,
        ::uNewFunction("get_Address", IPEndPoint__get_Address, 0, false, ::app::Uno::Net::IPAddress__typeof()),
        ::uNewFunction("get_Port", IPEndPoint__get_Port, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", IPEndPoint__New_1, 0, true, IPEndPoint__typeof(), ::app::Uno::Net::IPAddress__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Address", IPEndPoint__set_Address, 0, false, ::app::Uno::Net::IPAddress__typeof()),
        ::uNewFunctionVoid("set_Port", IPEndPoint__set_Port, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void IPEndPoint___ObjInit_1(IPEndPoint* __this, ::app::Uno::Net::IPAddress* address, int port)
{
    ::app::Uno::Net::EndPoint___ObjInit(__this, 2);
    __this->Address(address);
    __this->Port(port);
}

::app::Uno::Net::IPAddress* IPEndPoint__get_Address(IPEndPoint* __this)
{
    return __this->_Address;
}

int IPEndPoint__get_Port(IPEndPoint* __this)
{
    return __this->_Port;
}

IPEndPoint* IPEndPoint__New_1(::uStatic* __this, ::app::Uno::Net::IPAddress* address, int port)
{
    IPEndPoint* inst = (IPEndPoint*)::uAllocObject(sizeof(IPEndPoint), IPEndPoint__typeof());
    inst->_ObjInit_1(address, port);
    return inst;
}

void IPEndPoint__set_Address(IPEndPoint* __this, ::app::Uno::Net::IPAddress* value)
{
    __this->_Address = value;
}

void IPEndPoint__set_Port(IPEndPoint* __this, int value)
{
    __this->_Port = value;
}

::uString* IPEndPoint__ToString(IPEndPoint* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Uno::Net::IPAddress*>(__this->Address())->ToString(), ::uGetConstString(":")), ::uBox< int>(::app::Uno::Int__typeof(), __this->Port()));
}

}}}
