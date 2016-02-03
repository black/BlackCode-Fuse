#include <app/Outracks.Simulator.Bytecode.NamespaceName.h>
#include <app/Outracks.Simulator.Bytecode.Optional.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Byteco-1ce5ab6b.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Byteco-8b791f23.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_DialogButton.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Protocol_Reify.h>
#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Runtim-2e4b6588.h>
#include <app/Outracks.Simulator.Bytecode.Optional__string.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.DialogButton.h>
#include <app/Outracks.Simulator.Protocol.Reify.h>
#include <app/Outracks.Simulator.Runtime.Environment.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Optional__Outracks_Simulator_Bytecode_NamespaceName__uType* Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof()
{
    static ::uStaticStrong<Optional__Outracks_Simulator_Bytecode_NamespaceName__uType*> type;
    if (type != NULL) return type;

    type = (Optional__Outracks_Simulator_Bytecode_NamespaceName__uType*)::uAllocStructType(sizeof(Optional__Outracks_Simulator_Bytecode_NamespaceName__uType), "Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.NamespaceName>", sizeof(Optional__Outracks_Simulator_Bytecode_NamespaceName), 1, 1, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Optional__Outracks_Simulator_Bytecode_NamespaceName__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Optional__Outracks_Simulator_Bytecode_NamespaceName__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_3__typeof(), offsetof(Optional__Outracks_Simulator_Bytecode_NamespaceName__uType, __interface_0));

    type->SetStrongRefs(
        "_value", offsetof(Optional__Outracks_Simulator_Bytecode_NamespaceName, _value));

    type->SetFields(2,
        ::uNewField("_hasValue", NULL, offsetof(Optional__Outracks_Simulator_Bytecode_NamespaceName, _hasValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_value", NULL, offsetof(Optional__Outracks_Simulator_Bytecode_NamespaceName, _value), ::app::Outracks::Simulator::Bytecode::NamespaceName__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Equals", Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof()),
        ::uNewFunction("get_HasValue", Optional__Outracks_Simulator_Bytecode_NamespaceName__get_HasValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Optional__Outracks_Simulator_Bytecode_NamespaceName__get_Value, 0, false, ::app::Outracks::Simulator::Bytecode::NamespaceName__typeof()));

    ::uRegisterType(type);
    return type;
}

void Optional__Outracks_Simulator_Bytecode_NamespaceName___ObjInit(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::NamespaceName* value)
{
    __this->_hasValue = hasValue;
    __this->_value = value;
}

bool Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    return ::uIs(obj, Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof()) && __this->Equals_2(::uUnbox< Optional__Outracks_Simulator_Bytecode_NamespaceName>(Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof(), obj));
}

bool Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals_2(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this, Optional__Outracks_Simulator_Bytecode_NamespaceName other)
{
    bool ind_123 = bool();
    return ::app::Uno::Bool::Equals((ind_123 = __this->_hasValue, ind_123), ::uBox(::app::Uno::Bool__typeof(), other._hasValue)) && ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Bytecode::NamespaceName*>(__this->_value), (::uObject*)other._value);
}

bool Optional__Outracks_Simulator_Bytecode_NamespaceName__get_HasValue(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this)
{
    return __this->_hasValue;
}

::app::Outracks::Simulator::Bytecode::NamespaceName* Optional__Outracks_Simulator_Bytecode_NamespaceName__get_Value(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this)
{
    if (!__this->_hasValue)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
    }

    return __this->_value;
}

int Optional__Outracks_Simulator_Bytecode_NamespaceName__GetHashCode(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this)
{
    bool ind_124 = bool();
    {
        return (::app::Uno::Bool::GetHashCode((ind_124 = __this->_hasValue, ind_124)) * 397) ^ ::app::Uno::Object::GetHashCode(::uPtr< ::app::Outracks::Simulator::Bytecode::NamespaceName*>(__this->_value));
    }
}

Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Outracks_Simulator_Bytecode_NamespaceName__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::NamespaceName* value)
{
    Optional__Outracks_Simulator_Bytecode_NamespaceName inst = ::uDefault< Optional__Outracks_Simulator_Bytecode_NamespaceName>();
    inst._ObjInit(hasValue, value);
    return inst;
}

bool Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_NamespaceName left, Optional__Outracks_Simulator_Bytecode_NamespaceName right)
{
    return left.Equals_2(right);
}

Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::NamespaceName* value)
{
    return Optional__Outracks_Simulator_Bytecode_NamespaceName__New_1(NULL, true, value);
}

Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value)
{
    return Optional__Outracks_Simulator_Bytecode_NamespaceName__New_1(NULL, false, NULL);
}

bool Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_NamespaceName left, Optional__Outracks_Simulator_Bytecode_NamespaceName right)
{
    return !left.Equals_2(right);
}

::uString* Optional__Outracks_Simulator_Bytecode_NamespaceName__ToString(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this)
{
    return __this->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Some {"), (::uObject*)__this->Value()), ::uGetConstString("}")) : ::uGetConstString("None");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Optional__Outracks_Simulator_Bytecode_TypeName__uType* Optional__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<Optional__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (Optional__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocStructType(sizeof(Optional__Outracks_Simulator_Bytecode_TypeName__uType), "Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName>", sizeof(Optional__Outracks_Simulator_Bytecode_TypeName), 1, 1, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Optional__Outracks_Simulator_Bytecode_TypeName__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Optional__Outracks_Simulator_Bytecode_TypeName__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Optional__Outracks_Simulator_Bytecode_TypeName__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_4__typeof(), offsetof(Optional__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0));

    type->SetStrongRefs(
        "_value", offsetof(Optional__Outracks_Simulator_Bytecode_TypeName, _value));

    type->SetFields(2,
        ::uNewField("_hasValue", NULL, offsetof(Optional__Outracks_Simulator_Bytecode_TypeName, _hasValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_value", NULL, offsetof(Optional__Outracks_Simulator_Bytecode_TypeName, _value), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Equals", Optional__Outracks_Simulator_Bytecode_TypeName__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Optional__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("get_HasValue", Optional__Outracks_Simulator_Bytecode_TypeName__get_HasValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Optional__Outracks_Simulator_Bytecode_TypeName__get_Value, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

void Optional__Outracks_Simulator_Bytecode_TypeName___ObjInit(Optional__Outracks_Simulator_Bytecode_TypeName* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    __this->_hasValue = hasValue;
    __this->_value = value;
}

bool Optional__Outracks_Simulator_Bytecode_TypeName__Equals(Optional__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    return ::uIs(obj, Optional__Outracks_Simulator_Bytecode_TypeName__typeof()) && __this->Equals_2(::uUnbox< Optional__Outracks_Simulator_Bytecode_TypeName>(Optional__Outracks_Simulator_Bytecode_TypeName__typeof(), obj));
}

bool Optional__Outracks_Simulator_Bytecode_TypeName__Equals_2(Optional__Outracks_Simulator_Bytecode_TypeName* __this, Optional__Outracks_Simulator_Bytecode_TypeName other)
{
    bool ind_123 = bool();
    return ::app::Uno::Bool::Equals((ind_123 = __this->_hasValue, ind_123), ::uBox(::app::Uno::Bool__typeof(), other._hasValue)) && ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->_value), (::uObject*)other._value);
}

bool Optional__Outracks_Simulator_Bytecode_TypeName__get_HasValue(Optional__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->_hasValue;
}

::app::Outracks::Simulator::Bytecode::TypeName* Optional__Outracks_Simulator_Bytecode_TypeName__get_Value(Optional__Outracks_Simulator_Bytecode_TypeName* __this)
{
    if (!__this->_hasValue)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
    }

    return __this->_value;
}

int Optional__Outracks_Simulator_Bytecode_TypeName__GetHashCode(Optional__Outracks_Simulator_Bytecode_TypeName* __this)
{
    bool ind_124 = bool();
    {
        return (::app::Uno::Bool::GetHashCode((ind_124 = __this->_hasValue, ind_124)) * 397) ^ ::app::Uno::Object::GetHashCode(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->_value));
    }
}

Optional__Outracks_Simulator_Bytecode_TypeName Optional__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    Optional__Outracks_Simulator_Bytecode_TypeName inst = ::uDefault< Optional__Outracks_Simulator_Bytecode_TypeName>();
    inst._ObjInit(hasValue, value);
    return inst;
}

bool Optional__Outracks_Simulator_Bytecode_TypeName__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_TypeName left, Optional__Outracks_Simulator_Bytecode_TypeName right)
{
    return left.Equals_2(right);
}

Optional__Outracks_Simulator_Bytecode_TypeName Optional__Outracks_Simulator_Bytecode_TypeName__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value)
{
    return Optional__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, false, NULL);
}

Optional__Outracks_Simulator_Bytecode_TypeName Optional__Outracks_Simulator_Bytecode_TypeName__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    return Optional__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, true, value);
}

bool Optional__Outracks_Simulator_Bytecode_TypeName__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_TypeName left, Optional__Outracks_Simulator_Bytecode_TypeName right)
{
    return !left.Equals_2(right);
}

::uString* Optional__Outracks_Simulator_Bytecode_TypeName__ToString(Optional__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return __this->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Some {"), (::uObject*)__this->Value()), ::uGetConstString("}")) : ::uGetConstString("None");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Optional__Outracks_Simulator_DialogButton__uType* Optional__Outracks_Simulator_DialogButton__typeof()
{
    static ::uStaticStrong<Optional__Outracks_Simulator_DialogButton__uType*> type;
    if (type != NULL) return type;

    type = (Optional__Outracks_Simulator_DialogButton__uType*)::uAllocStructType(sizeof(Optional__Outracks_Simulator_DialogButton__uType), "Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.DialogButton>", sizeof(Optional__Outracks_Simulator_DialogButton), 1, 1, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Optional__Outracks_Simulator_DialogButton__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Optional__Outracks_Simulator_DialogButton__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Optional__Outracks_Simulator_DialogButton__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_2__typeof(), offsetof(Optional__Outracks_Simulator_DialogButton__uType, __interface_0));

    type->SetStrongRefs(
        "_value", offsetof(Optional__Outracks_Simulator_DialogButton, _value));

    type->SetFields(2,
        ::uNewField("_hasValue", NULL, offsetof(Optional__Outracks_Simulator_DialogButton, _hasValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_value", NULL, offsetof(Optional__Outracks_Simulator_DialogButton, _value), ::app::Outracks::Simulator::DialogButton__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Equals", Optional__Outracks_Simulator_DialogButton__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Optional__Outracks_Simulator_DialogButton__typeof()),
        ::uNewFunction("get_HasValue", Optional__Outracks_Simulator_DialogButton__get_HasValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Optional__Outracks_Simulator_DialogButton__get_Value, 0, false, ::app::Outracks::Simulator::DialogButton__typeof()));

    ::uRegisterType(type);
    return type;
}

void Optional__Outracks_Simulator_DialogButton___ObjInit(Optional__Outracks_Simulator_DialogButton* __this, bool hasValue, ::app::Outracks::Simulator::DialogButton* value)
{
    __this->_hasValue = hasValue;
    __this->_value = value;
}

bool Optional__Outracks_Simulator_DialogButton__Equals(Optional__Outracks_Simulator_DialogButton* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    return ::uIs(obj, Optional__Outracks_Simulator_DialogButton__typeof()) && __this->Equals_2(::uUnbox< Optional__Outracks_Simulator_DialogButton>(Optional__Outracks_Simulator_DialogButton__typeof(), obj));
}

bool Optional__Outracks_Simulator_DialogButton__Equals_2(Optional__Outracks_Simulator_DialogButton* __this, Optional__Outracks_Simulator_DialogButton other)
{
    bool ind_123 = bool();
    return ::app::Uno::Bool::Equals((ind_123 = __this->_hasValue, ind_123), ::uBox(::app::Uno::Bool__typeof(), other._hasValue)) && ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::DialogButton*>(__this->_value), (::uObject*)other._value);
}

bool Optional__Outracks_Simulator_DialogButton__get_HasValue(Optional__Outracks_Simulator_DialogButton* __this)
{
    return __this->_hasValue;
}

::app::Outracks::Simulator::DialogButton* Optional__Outracks_Simulator_DialogButton__get_Value(Optional__Outracks_Simulator_DialogButton* __this)
{
    if (!__this->_hasValue)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
    }

    return __this->_value;
}

int Optional__Outracks_Simulator_DialogButton__GetHashCode(Optional__Outracks_Simulator_DialogButton* __this)
{
    bool ind_124 = bool();
    {
        return (::app::Uno::Bool::GetHashCode((ind_124 = __this->_hasValue, ind_124)) * 397) ^ ::app::Uno::Object::GetHashCode(::uPtr< ::app::Outracks::Simulator::DialogButton*>(__this->_value));
    }
}

Optional__Outracks_Simulator_DialogButton Optional__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::DialogButton* value)
{
    Optional__Outracks_Simulator_DialogButton inst = ::uDefault< Optional__Outracks_Simulator_DialogButton>();
    inst._ObjInit(hasValue, value);
    return inst;
}

bool Optional__Outracks_Simulator_DialogButton__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_DialogButton left, Optional__Outracks_Simulator_DialogButton right)
{
    return left.Equals_2(right);
}

Optional__Outracks_Simulator_DialogButton Optional__Outracks_Simulator_DialogButton__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::DialogButton* value)
{
    return Optional__Outracks_Simulator_DialogButton__New_1(NULL, true, value);
}

Optional__Outracks_Simulator_DialogButton Optional__Outracks_Simulator_DialogButton__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value)
{
    return Optional__Outracks_Simulator_DialogButton__New_1(NULL, false, NULL);
}

bool Optional__Outracks_Simulator_DialogButton__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_DialogButton left, Optional__Outracks_Simulator_DialogButton right)
{
    return !left.Equals_2(right);
}

::uString* Optional__Outracks_Simulator_DialogButton__ToString(Optional__Outracks_Simulator_DialogButton* __this)
{
    return __this->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Some {"), (::uObject*)__this->Value()), ::uGetConstString("}")) : ::uGetConstString("None");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Optional__Outracks_Simulator_Protocol_Reify__uType* Optional__Outracks_Simulator_Protocol_Reify__typeof()
{
    static ::uStaticStrong<Optional__Outracks_Simulator_Protocol_Reify__uType*> type;
    if (type != NULL) return type;

    type = (Optional__Outracks_Simulator_Protocol_Reify__uType*)::uAllocStructType(sizeof(Optional__Outracks_Simulator_Protocol_Reify__uType), "Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>", sizeof(Optional__Outracks_Simulator_Protocol_Reify), 1, 1, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Optional__Outracks_Simulator_Protocol_Reify__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Optional__Outracks_Simulator_Protocol_Reify__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Optional__Outracks_Simulator_Protocol_Reify__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional__typeof(), offsetof(Optional__Outracks_Simulator_Protocol_Reify__uType, __interface_0));

    type->SetStrongRefs(
        "_value", offsetof(Optional__Outracks_Simulator_Protocol_Reify, _value));

    type->SetFields(2,
        ::uNewField("_hasValue", NULL, offsetof(Optional__Outracks_Simulator_Protocol_Reify, _hasValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_value", NULL, offsetof(Optional__Outracks_Simulator_Protocol_Reify, _value), ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Equals", Optional__Outracks_Simulator_Protocol_Reify__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Optional__Outracks_Simulator_Protocol_Reify__typeof()),
        ::uNewFunction("get_HasValue", Optional__Outracks_Simulator_Protocol_Reify__get_HasValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Optional__Outracks_Simulator_Protocol_Reify__get_Value, 0, false, ::app::Outracks::Simulator::Protocol::Reify__typeof()));

    ::uRegisterType(type);
    return type;
}

void Optional__Outracks_Simulator_Protocol_Reify___ObjInit(Optional__Outracks_Simulator_Protocol_Reify* __this, bool hasValue, ::app::Outracks::Simulator::Protocol::Reify* value)
{
    __this->_hasValue = hasValue;
    __this->_value = value;
}

bool Optional__Outracks_Simulator_Protocol_Reify__Equals(Optional__Outracks_Simulator_Protocol_Reify* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    return ::uIs(obj, Optional__Outracks_Simulator_Protocol_Reify__typeof()) && __this->Equals_2(::uUnbox< Optional__Outracks_Simulator_Protocol_Reify>(Optional__Outracks_Simulator_Protocol_Reify__typeof(), obj));
}

bool Optional__Outracks_Simulator_Protocol_Reify__Equals_2(Optional__Outracks_Simulator_Protocol_Reify* __this, Optional__Outracks_Simulator_Protocol_Reify other)
{
    bool ind_123 = bool();
    return ::app::Uno::Bool::Equals((ind_123 = __this->_hasValue, ind_123), ::uBox(::app::Uno::Bool__typeof(), other._hasValue)) && ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Protocol::Reify*>(__this->_value), (::uObject*)other._value);
}

bool Optional__Outracks_Simulator_Protocol_Reify__get_HasValue(Optional__Outracks_Simulator_Protocol_Reify* __this)
{
    return __this->_hasValue;
}

::app::Outracks::Simulator::Protocol::Reify* Optional__Outracks_Simulator_Protocol_Reify__get_Value(Optional__Outracks_Simulator_Protocol_Reify* __this)
{
    if (!__this->_hasValue)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
    }

    return __this->_value;
}

int Optional__Outracks_Simulator_Protocol_Reify__GetHashCode(Optional__Outracks_Simulator_Protocol_Reify* __this)
{
    bool ind_124 = bool();
    {
        return (::app::Uno::Bool::GetHashCode((ind_124 = __this->_hasValue, ind_124)) * 397) ^ ::app::Uno::Object::GetHashCode(::uPtr< ::app::Outracks::Simulator::Protocol::Reify*>(__this->_value));
    }
}

Optional__Outracks_Simulator_Protocol_Reify Optional__Outracks_Simulator_Protocol_Reify__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Protocol::Reify* value)
{
    Optional__Outracks_Simulator_Protocol_Reify inst = ::uDefault< Optional__Outracks_Simulator_Protocol_Reify>();
    inst._ObjInit(hasValue, value);
    return inst;
}

bool Optional__Outracks_Simulator_Protocol_Reify__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Protocol_Reify left, Optional__Outracks_Simulator_Protocol_Reify right)
{
    return left.Equals_2(right);
}

Optional__Outracks_Simulator_Protocol_Reify Optional__Outracks_Simulator_Protocol_Reify__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value)
{
    return Optional__Outracks_Simulator_Protocol_Reify__New_1(NULL, false, NULL);
}

Optional__Outracks_Simulator_Protocol_Reify Optional__Outracks_Simulator_Protocol_Reify__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* value)
{
    return Optional__Outracks_Simulator_Protocol_Reify__New_1(NULL, true, value);
}

bool Optional__Outracks_Simulator_Protocol_Reify__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Protocol_Reify left, Optional__Outracks_Simulator_Protocol_Reify right)
{
    return !left.Equals_2(right);
}

::uString* Optional__Outracks_Simulator_Protocol_Reify__ToString(Optional__Outracks_Simulator_Protocol_Reify* __this)
{
    return __this->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Some {"), (::uObject*)__this->Value()), ::uGetConstString("}")) : ::uGetConstString("None");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Optional__Outracks_Simulator_Runtime_Environment__uType* Optional__Outracks_Simulator_Runtime_Environment__typeof()
{
    static ::uStaticStrong<Optional__Outracks_Simulator_Runtime_Environment__uType*> type;
    if (type != NULL) return type;

    type = (Optional__Outracks_Simulator_Runtime_Environment__uType*)::uAllocStructType(sizeof(Optional__Outracks_Simulator_Runtime_Environment__uType), "Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>", sizeof(Optional__Outracks_Simulator_Runtime_Environment), 1, 1, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Optional__Outracks_Simulator_Runtime_Environment__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Optional__Outracks_Simulator_Runtime_Environment__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Optional__Outracks_Simulator_Runtime_Environment__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_1__typeof(), offsetof(Optional__Outracks_Simulator_Runtime_Environment__uType, __interface_0));

    type->SetStrongRefs(
        "_value", offsetof(Optional__Outracks_Simulator_Runtime_Environment, _value));

    type->SetFields(2,
        ::uNewField("_hasValue", NULL, offsetof(Optional__Outracks_Simulator_Runtime_Environment, _hasValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_value", NULL, offsetof(Optional__Outracks_Simulator_Runtime_Environment, _value), ::app::Outracks::Simulator::Runtime::Environment__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Equals", Optional__Outracks_Simulator_Runtime_Environment__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Optional__Outracks_Simulator_Runtime_Environment__typeof()),
        ::uNewFunction("get_HasValue", Optional__Outracks_Simulator_Runtime_Environment__get_HasValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Optional__Outracks_Simulator_Runtime_Environment__get_Value, 0, false, ::app::Outracks::Simulator::Runtime::Environment__typeof()));

    ::uRegisterType(type);
    return type;
}

void Optional__Outracks_Simulator_Runtime_Environment___ObjInit(Optional__Outracks_Simulator_Runtime_Environment* __this, bool hasValue, ::app::Outracks::Simulator::Runtime::Environment* value)
{
    __this->_hasValue = hasValue;
    __this->_value = value;
}

bool Optional__Outracks_Simulator_Runtime_Environment__Equals(Optional__Outracks_Simulator_Runtime_Environment* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    return ::uIs(obj, Optional__Outracks_Simulator_Runtime_Environment__typeof()) && __this->Equals_2(::uUnbox< Optional__Outracks_Simulator_Runtime_Environment>(Optional__Outracks_Simulator_Runtime_Environment__typeof(), obj));
}

bool Optional__Outracks_Simulator_Runtime_Environment__Equals_2(Optional__Outracks_Simulator_Runtime_Environment* __this, Optional__Outracks_Simulator_Runtime_Environment other)
{
    bool ind_123 = bool();
    return ::app::Uno::Bool::Equals((ind_123 = __this->_hasValue, ind_123), ::uBox(::app::Uno::Bool__typeof(), other._hasValue)) && ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Runtime::Environment*>(__this->_value), (::uObject*)other._value);
}

bool Optional__Outracks_Simulator_Runtime_Environment__get_HasValue(Optional__Outracks_Simulator_Runtime_Environment* __this)
{
    return __this->_hasValue;
}

::app::Outracks::Simulator::Runtime::Environment* Optional__Outracks_Simulator_Runtime_Environment__get_Value(Optional__Outracks_Simulator_Runtime_Environment* __this)
{
    if (!__this->_hasValue)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
    }

    return __this->_value;
}

int Optional__Outracks_Simulator_Runtime_Environment__GetHashCode(Optional__Outracks_Simulator_Runtime_Environment* __this)
{
    bool ind_124 = bool();
    {
        return (::app::Uno::Bool::GetHashCode((ind_124 = __this->_hasValue, ind_124)) * 397) ^ ::app::Uno::Object::GetHashCode(::uPtr< ::app::Outracks::Simulator::Runtime::Environment*>(__this->_value));
    }
}

Optional__Outracks_Simulator_Runtime_Environment Optional__Outracks_Simulator_Runtime_Environment__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Runtime::Environment* value)
{
    Optional__Outracks_Simulator_Runtime_Environment inst = ::uDefault< Optional__Outracks_Simulator_Runtime_Environment>();
    inst._ObjInit(hasValue, value);
    return inst;
}

bool Optional__Outracks_Simulator_Runtime_Environment__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Runtime_Environment left, Optional__Outracks_Simulator_Runtime_Environment right)
{
    return left.Equals_2(right);
}

Optional__Outracks_Simulator_Runtime_Environment Optional__Outracks_Simulator_Runtime_Environment__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Runtime::Environment* value)
{
    return Optional__Outracks_Simulator_Runtime_Environment__New_1(NULL, true, value);
}

Optional__Outracks_Simulator_Runtime_Environment Optional__Outracks_Simulator_Runtime_Environment__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value)
{
    return Optional__Outracks_Simulator_Runtime_Environment__New_1(NULL, false, NULL);
}

bool Optional__Outracks_Simulator_Runtime_Environment__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Runtime_Environment left, Optional__Outracks_Simulator_Runtime_Environment right)
{
    return !left.Equals_2(right);
}

::uString* Optional__Outracks_Simulator_Runtime_Environment__ToString(Optional__Outracks_Simulator_Runtime_Environment* __this)
{
    return __this->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Some {"), (::uObject*)__this->Value()), ::uGetConstString("}")) : ::uGetConstString("None");
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Optional__string__uType* Optional__string__typeof()
{
    static ::uStaticStrong<Optional__string__uType*> type;
    if (type != NULL) return type;

    type = (Optional__string__uType*)::uAllocStructType(sizeof(Optional__string__uType), "Outracks.Simulator.Bytecode.Optional<string>", sizeof(Optional__string), 1, 1, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Optional__string__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Optional__string__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Optional__string__ToString;

    type->SetInterfaces(
        ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_5__typeof(), offsetof(Optional__string__uType, __interface_0));

    type->SetStrongRefs(
        "_value", offsetof(Optional__string, _value));

    type->SetFields(2,
        ::uNewField("_hasValue", NULL, offsetof(Optional__string, _hasValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_value", NULL, offsetof(Optional__string, _value), ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Equals", Optional__string__Equals_2, 0, false, ::app::Uno::Bool__typeof(), Optional__string__typeof()),
        ::uNewFunction("get_HasValue", Optional__string__get_HasValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Optional__string__get_Value, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Optional__string___ObjInit(Optional__string* __this, bool hasValue, ::uString* value)
{
    __this->_hasValue = hasValue;
    __this->_value = value;
}

bool Optional__string__Equals(Optional__string* __this, ::uObject* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, NULL, obj))
    {
        return false;
    }

    return ::uIs(obj, Optional__string__typeof()) && __this->Equals_2(::uUnbox< Optional__string>(Optional__string__typeof(), obj));
}

bool Optional__string__Equals_2(Optional__string* __this, Optional__string other)
{
    bool ind_123 = bool();
    return ::app::Uno::Bool::Equals((ind_123 = __this->_hasValue, ind_123), ::uBox(::app::Uno::Bool__typeof(), other._hasValue)) && ::app::Uno::Object::Equals(::uPtr< ::uString*>(__this->_value), (::uObject*)other._value);
}

bool Optional__string__get_HasValue(Optional__string* __this)
{
    return __this->_hasValue;
}

::uString* Optional__string__get_Value(Optional__string* __this)
{
    if (!__this->_hasValue)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
    }

    return __this->_value;
}

int Optional__string__GetHashCode(Optional__string* __this)
{
    bool ind_124 = bool();
    {
        return (::app::Uno::Bool::GetHashCode((ind_124 = __this->_hasValue, ind_124)) * 397) ^ ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(__this->_value));
    }
}

Optional__string Optional__string__New_1(::uStatic* __this, bool hasValue, ::uString* value)
{
    Optional__string inst = ::uDefault< Optional__string>();
    inst._ObjInit(hasValue, value);
    return inst;
}

bool Optional__string__op_Equality(::uStatic* __this, Optional__string left, Optional__string right)
{
    return left.Equals_2(right);
}

Optional__string Optional__string__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value)
{
    return Optional__string__New_1(NULL, false, NULL);
}

Optional__string Optional__string__op_Implicit_1(::uStatic* __this, ::uString* value)
{
    return Optional__string__New_1(NULL, true, value);
}

bool Optional__string__op_Inequality(::uStatic* __this, Optional__string left, Optional__string right)
{
    return !left.Equals_2(right);
}

::uString* Optional__string__ToString(Optional__string* __this)
{
    return __this->HasValue() ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Some {"), (::uObject*)__this->Value()), ::uGetConstString("}")) : ::uGetConstString("None");
}

}}}}
