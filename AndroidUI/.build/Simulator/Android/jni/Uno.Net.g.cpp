// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.FormatException.h>
#include <Uno.Int.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
static uString* STRINGS[4];
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Net{

// C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.19.2\$.uno(11)
// ------------------------------------------------------------

// public abstract class EndPoint :11
// {
uType* EndPoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EndPoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.EndPoint", options);
    type->SetFields(0,
        ::g::Uno::Net::Sockets::AddressFamily_typeof(), offsetof(::g::Uno::Net::EndPoint, _AddressFamily), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_AddressFamily", NULL, (void*)EndPoint__get_AddressFamily_fn, 0, false, ::g::Uno::Net::Sockets::AddressFamily_typeof(), 0));
    return type;
}

// protected EndPoint(Uno.Net.Sockets.AddressFamily addressFamily) :19
void EndPoint__ctor__fn(EndPoint* __this, int* addressFamily)
{
    __this->ctor_(*addressFamily);
}

// public generated Uno.Net.Sockets.AddressFamily get_AddressFamily() :15
void EndPoint__get_AddressFamily_fn(EndPoint* __this, int* __retval)
{
    *__retval = __this->AddressFamily();
}

// private generated void set_AddressFamily(Uno.Net.Sockets.AddressFamily value) :16
void EndPoint__set_AddressFamily_fn(EndPoint* __this, int* value)
{
    __this->AddressFamily(*value);
}

// protected EndPoint(Uno.Net.Sockets.AddressFamily addressFamily) [instance] :19
void EndPoint::ctor_(int addressFamily)
{
    AddressFamily(addressFamily);
}

// public generated Uno.Net.Sockets.AddressFamily get_AddressFamily() [instance] :15
int EndPoint::AddressFamily()
{
    return _AddressFamily;
}

// private generated void set_AddressFamily(Uno.Net.Sockets.AddressFamily value) [instance] :16
void EndPoint::AddressFamily(int value)
{
    _AddressFamily = value;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.19.2\$.uno(47)
// ------------------------------------------------------------

// public sealed class IPAddress :47
// {
// static IPAddress() :47
static void IPAddress__cctor__fn(uType* __type)
{
    IPAddress::Any_ = IPAddress::New1(uArray::Init<int>(::TYPES[0/*byte[]*/], 4, 0, 0, 0, 0));
    IPAddress::Broadcast_ = IPAddress::New1(uArray::Init<int>(::TYPES[0/*byte[]*/], 4, 255, 255, 255, 255));
    IPAddress::Loopback_ = IPAddress::New1(uArray::Init<int>(::TYPES[0/*byte[]*/], 4, 127, 0, 0, 1));
}

uType* IPAddress_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(IPAddress);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.IPAddress", options);
    type->fp_cctor_ = IPAddress__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))IPAddress__ToString_fn;
    ::STRINGS[0] = uString::Const("Invalid ip address");
    ::STRINGS[1] = uString::Const("Invalid IPv4 address");
    ::STRINGS[2] = uString::Const(".");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Byte_typeof();
    ::TYPES[4] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Net::IPAddress, _address), 0,
        IPAddress_typeof(), (uintptr_t)&::g::Uno::Net::IPAddress::Any_, uFieldFlagsStatic,
        IPAddress_typeof(), (uintptr_t)&::g::Uno::Net::IPAddress::Broadcast_, uFieldFlagsStatic,
        IPAddress_typeof(), (uintptr_t)&::g::Uno::Net::IPAddress::Loopback_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Any", 1),
        new uField("Broadcast", 2),
        new uField("Loopback", 3));
    type->Reflection.SetFunctions(3,
        new uFunction("get_Address", NULL, (void*)IPAddress__get_Address_fn, 0, false, ::g::Uno::UInt_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)IPAddress__New1_fn, 0, true, IPAddress_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Parse", NULL, (void*)IPAddress__Parse_fn, 0, true, IPAddress_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public IPAddress(byte[] octets) :72
void IPAddress__ctor__fn(IPAddress* __this, uArray* octets)
{
    __this->ctor_(octets);
}

// public uint get_Address() :61
void IPAddress__get_Address_fn(IPAddress* __this, uint32_t* __retval)
{
    *__retval = __this->Address();
}

// public IPAddress New(byte[] octets) :72
void IPAddress__New1_fn(uArray* octets, IPAddress** __retval)
{
    *__retval = IPAddress::New1(octets);
}

// public static Uno.Net.IPAddress Parse(string address) :80
void IPAddress__Parse_fn(uString* address, IPAddress** __retval)
{
    *__retval = IPAddress::Parse(address);
}

// public override sealed string ToString() :109
void IPAddress__ToString_fn(IPAddress* __this, uString** __retval)
{
    uint8_t o1 = uPtr(__this->_address)->GetByte(0);
    uint8_t o2 = uPtr(__this->_address)->GetByte(1);
    uint8_t o3 = uPtr(__this->_address)->GetByte(2);
    uint8_t o4 = uPtr(__this->_address)->GetByte(3);
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<uint8_t>(::TYPES[3/*byte*/], o1), ::STRINGS[2/*"."*/]), uBox<uint8_t>(::TYPES[3/*byte*/], o2)), ::STRINGS[2/*"."*/]), uBox<uint8_t>(::TYPES[3/*byte*/], o3)), ::STRINGS[2/*"."*/]), uBox<uint8_t>(::TYPES[3/*byte*/], o4)), void();
}

uSStrong<IPAddress*> IPAddress::Any_;
uSStrong<IPAddress*> IPAddress::Broadcast_;
uSStrong<IPAddress*> IPAddress::Loopback_;

// public IPAddress(byte[] octets) [instance] :72
void IPAddress::ctor_(uArray* octets)
{
    if (uPtr(octets)->Length() != 4)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Invalid ip ...*/]));

    _address = ::g::Uno::Buffer::New1(octets);
}

// public uint get_Address() [instance] :61
uint32_t IPAddress::Address()
{
    return uPtr(_address)->GetUInt(0, true);
}

// public IPAddress New(byte[] octets) [static] :72
IPAddress* IPAddress::New1(uArray* octets)
{
    IPAddress* obj2 = (IPAddress*)uNew(IPAddress_typeof());
    obj2->ctor_(octets);
    return obj2;
}

// public static Uno.Net.IPAddress Parse(string address) [static] :80
IPAddress* IPAddress::Parse(uString* address)
{
    IPAddress_typeof()->Init();
    uArray* parts = ::g::Uno::String::Split(uPtr(address), uArray::Init<int>(::TYPES[1/*char[]*/], 1, '.'));

    if (uPtr(parts)->Length() != 4)
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Invalid IPv...*/]));

    uArray* octets = uArray::New(::TYPES[0/*byte[]*/], 4);

    for (int i = 0; i < 4; ++i)
    {
        int tmp = ::g::Uno::Int::Parse(uPtr(parts)->Strong<uString*>(i));

        if ((0 > tmp) || (tmp > 255))
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Invalid IPv...*/]));

        uPtr(octets)->Item<uint8_t>(i) = (uint8_t)tmp;
    }

    return IPAddress::New1(octets);
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Sockets\0.19.2\$.uno(26)
// ------------------------------------------------------------

// public sealed class IPEndPoint :26
// {
uType* IPEndPoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IPEndPoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.IPEndPoint", options);
    type->SetBase(::g::Uno::Net::EndPoint_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))IPEndPoint__ToString_fn;
    ::STRINGS[3] = uString::Const(":");
    ::TYPES[4] = uObject_typeof();
    type->SetFields(1,
        ::g::Uno::Net::IPAddress_typeof(), offsetof(::g::Uno::Net::IPEndPoint, _Address), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::IPEndPoint, _Port), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Address", NULL, (void*)IPEndPoint__get_Address_fn, 0, false, ::g::Uno::Net::IPAddress_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)IPEndPoint__New1_fn, 0, true, IPEndPoint_typeof(), 2, ::g::Uno::Net::IPAddress_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_Port", NULL, (void*)IPEndPoint__get_Port_fn, 0, false, ::g::Uno::Int_typeof(), 0));
    return type;
}

// public IPEndPoint(Uno.Net.IPAddress address, int port) :32
void IPEndPoint__ctor_1_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* address, int* port)
{
    __this->ctor_1(address, *port);
}

// public generated Uno.Net.IPAddress get_Address() :30
void IPEndPoint__get_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress** __retval)
{
    *__retval = __this->Address();
}

// private generated void set_Address(Uno.Net.IPAddress value) :30
void IPEndPoint__set_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* value)
{
    __this->Address(value);
}

// public IPEndPoint New(Uno.Net.IPAddress address, int port) :32
void IPEndPoint__New1_fn(::g::Uno::Net::IPAddress* address, int* port, IPEndPoint** __retval)
{
    *__retval = IPEndPoint::New1(address, *port);
}

// public generated int get_Port() :28
void IPEndPoint__get_Port_fn(IPEndPoint* __this, int* __retval)
{
    *__retval = __this->Port();
}

// private generated void set_Port(int value) :28
void IPEndPoint__set_Port_fn(IPEndPoint* __this, int* value)
{
    __this->Port(*value);
}

// public override sealed string ToString() :39
void IPEndPoint__ToString_fn(IPEndPoint* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(uPtr(__this->Address())->ToString(), ::STRINGS[3/*":"*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Port())), void();
}

// public IPEndPoint(Uno.Net.IPAddress address, int port) [instance] :32
void IPEndPoint::ctor_1(::g::Uno::Net::IPAddress* address, int port)
{
    ctor_(2);
    Address(address);
    Port(port);
}

// public generated Uno.Net.IPAddress get_Address() [instance] :30
::g::Uno::Net::IPAddress* IPEndPoint::Address()
{
    return _Address;
}

// private generated void set_Address(Uno.Net.IPAddress value) [instance] :30
void IPEndPoint::Address(::g::Uno::Net::IPAddress* value)
{
    _Address = value;
}

// public generated int get_Port() [instance] :28
int IPEndPoint::Port()
{
    return _Port;
}

// private generated void set_Port(int value) [instance] :28
void IPEndPoint::Port(int value)
{
    _Port = value;
}

// public IPEndPoint New(Uno.Net.IPAddress address, int port) [static] :32
IPEndPoint* IPEndPoint::New1(::g::Uno::Net::IPAddress* address, int port)
{
    IPEndPoint* obj1 = (IPEndPoint*)uNew(IPEndPoint_typeof());
    obj1->ctor_1(address, port);
    return obj1;
}
// }

}}} // ::g::Uno::Net
