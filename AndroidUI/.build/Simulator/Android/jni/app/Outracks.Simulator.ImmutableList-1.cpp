#include <app/Outracks.Simulator.Bytecode.BindVariable.h>
#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <app/Outracks.Simulator.Bytecode.Parameter.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_B-14e938f8.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Outracks.Simulator.ImmutableList__Outracks_Simulator_Protocol_E-d530f22c.h>
#include <app/Outracks.Simulator.ImmutableList__string.h>
#include <app/Outracks.Simulator.ImmutableList__Uno_Exception.h>
#include <app/Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-184a0bb8.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-1886ece5.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-29121f2d.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-5e50637a.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-906b75d2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Outracks_S-b504f309.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__string.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Uno_Exception.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__Outracks_Simulator_Bytecode_BindVariable__uType* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof()
{
    static ::uStaticStrong<ImmutableList__Outracks_Simulator_Bytecode_BindVariable__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__Outracks_Simulator_Bytecode_BindVariable__uType*)::uAllocClassType(sizeof(ImmutableList__Outracks_Simulator_Bytecode_BindVariable__uType), "Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.BindVariable>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof(), offsetof(ImmutableList__Outracks_Simulator_Bytecode_BindVariable__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__Outracks_Simulator_Bytecode_BindVariable, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__Outracks_Simulator_Bytecode_BindVariable, _array), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::BindVariable__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Add, 0, false, ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Outracks::Simulator::Bytecode::BindVariable__typeof()),
        ::uNewFunction("Get", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Get, 0, false, ::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Empty, 0, true, ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction("get_Item", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Item, 0, false, ::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__InsertRange, 0, false, ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable__typeof()),
        ::uNewFunction("Replace", ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Replace, 0, false, ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof(), ::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), ::app::Outracks::Simulator::Bytecode::BindVariable__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__Outracks_Simulator_Bytecode_BindVariable___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Add(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* element)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__Outracks_Simulator_Bytecode_BindVariable(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*>(__this->Count()) = element;
    return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, copy);
}

::app::Outracks::Simulator::Bytecode::BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Get(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i);
}

int ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Count(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Empty(::uStatic* __this)
{
    return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), 0));
}

::app::Outracks::Simulator::Bytecode::BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Item(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i);
}

::uObject* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this)
{
    return ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, __this->_array)));
}

ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_BindVariable(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i) = itemsArray->Item< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, copy);
}

ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__Outracks_Simulator_Bytecode_BindVariable* inst = (ImmutableList__Outracks_Simulator_Bytecode_BindVariable*)::uAllocObject(sizeof(ImmutableList__Outracks_Simulator_Bytecode_BindVariable), ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Replace(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* element, ::app::Outracks::Simulator::Bytecode::BindVariable* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::BindVariable__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i) = ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Bytecode::BindVariable*>(::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::BindVariable*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(NULL, copy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__Outracks_Simulator_Bytecode_Expression__uType* ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()
{
    static ::uStaticStrong<ImmutableList__Outracks_Simulator_Bytecode_Expression__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__Outracks_Simulator_Bytecode_Expression__uType*)::uAllocClassType(sizeof(ImmutableList__Outracks_Simulator_Bytecode_Expression__uType), "Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__Outracks_Simulator_Bytecode_Expression__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression__typeof(), offsetof(ImmutableList__Outracks_Simulator_Bytecode_Expression__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__Outracks_Simulator_Bytecode_Expression, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__Outracks_Simulator_Bytecode_Expression, _array), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Expression__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__Outracks_Simulator_Bytecode_Expression__Add, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()),
        ::uNewFunction("Get", ImmutableList__Outracks_Simulator_Bytecode_Expression__Get, 0, false, ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Empty, 0, true, ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("get_Item", ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Item, 0, false, ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__Outracks_Simulator_Bytecode_Expression__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__Outracks_Simulator_Bytecode_Expression__InsertRange, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression__typeof()),
        ::uNewFunction("Replace", ImmutableList__Outracks_Simulator_Bytecode_Expression__Replace, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof(), ::app::Outracks::Simulator::Bytecode::Expression__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__Outracks_Simulator_Bytecode_Expression___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__Add(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, ::app::Outracks::Simulator::Bytecode::Expression* element)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Expression__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__Outracks_Simulator_Bytecode_Expression(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Expression*>(__this->Count()) = element;
    return ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(NULL, copy);
}

::app::Outracks::Simulator::Bytecode::Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__Get(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Expression*>(i);
}

int ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Count(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Empty(::uStatic* __this)
{
    return ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Bytecode::Expression__typeof(), 0));
}

::app::Outracks::Simulator::Bytecode::Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Item(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Expression*>(i);
}

::uObject* ImmutableList__Outracks_Simulator_Bytecode_Expression__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this)
{
    return ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Expression__New_1(NULL, __this->_array)));
}

ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Expression(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Expression__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Expression*>(i) = itemsArray->Item< ::app::Outracks::Simulator::Bytecode::Expression*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Expression*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Expression*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(NULL, copy);
}

ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__Outracks_Simulator_Bytecode_Expression* inst = (ImmutableList__Outracks_Simulator_Bytecode_Expression*)::uAllocObject(sizeof(ImmutableList__Outracks_Simulator_Bytecode_Expression), ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__Replace(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, ::app::Outracks::Simulator::Bytecode::Expression* element, ::app::Outracks::Simulator::Bytecode::Expression* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Expression__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Expression*>(i) = ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Bytecode::Expression*>(::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Expression*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Expression*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(NULL, copy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__Outracks_Simulator_Bytecode_Parameter__uType* ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof()
{
    static ::uStaticStrong<ImmutableList__Outracks_Simulator_Bytecode_Parameter__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__Outracks_Simulator_Bytecode_Parameter__uType*)::uAllocClassType(sizeof(ImmutableList__Outracks_Simulator_Bytecode_Parameter__uType), "Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__Outracks_Simulator_Bytecode_Parameter__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof(), offsetof(ImmutableList__Outracks_Simulator_Bytecode_Parameter__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__Outracks_Simulator_Bytecode_Parameter, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__Outracks_Simulator_Bytecode_Parameter, _array), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Parameter__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__Outracks_Simulator_Bytecode_Parameter__Add, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Outracks::Simulator::Bytecode::Parameter__typeof()),
        ::uNewFunction("Get", ImmutableList__Outracks_Simulator_Bytecode_Parameter__Get, 0, false, ::app::Outracks::Simulator::Bytecode::Parameter__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Empty, 0, true, ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewFunction("get_Item", ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Item, 0, false, ::app::Outracks::Simulator::Bytecode::Parameter__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__Outracks_Simulator_Bytecode_Parameter__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__Outracks_Simulator_Bytecode_Parameter__InsertRange, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter__typeof()),
        ::uNewFunction("Replace", ImmutableList__Outracks_Simulator_Bytecode_Parameter__Replace, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof(), ::app::Outracks::Simulator::Bytecode::Parameter__typeof(), ::app::Outracks::Simulator::Bytecode::Parameter__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__Outracks_Simulator_Bytecode_Parameter___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__Add(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, ::app::Outracks::Simulator::Bytecode::Parameter* element)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__Outracks_Simulator_Bytecode_Parameter(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(__this->Count()) = element;
    return ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, copy);
}

::app::Outracks::Simulator::Bytecode::Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__Get(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Parameter*>(i);
}

int ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Count(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Empty(::uStatic* __this)
{
    return ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), 0));
}

::app::Outracks::Simulator::Bytecode::Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Item(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Parameter*>(i);
}

::uObject* ImmutableList__Outracks_Simulator_Bytecode_Parameter__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this)
{
    return ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, __this->_array)));
}

ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Parameter(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(i) = itemsArray->Item< ::app::Outracks::Simulator::Bytecode::Parameter*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Parameter*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, copy);
}

ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__Outracks_Simulator_Bytecode_Parameter* inst = (ImmutableList__Outracks_Simulator_Bytecode_Parameter*)::uAllocObject(sizeof(ImmutableList__Outracks_Simulator_Bytecode_Parameter), ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__Replace(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, ::app::Outracks::Simulator::Bytecode::Parameter* element, ::app::Outracks::Simulator::Bytecode::Parameter* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Parameter__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Parameter*>(i) = ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Bytecode::Parameter*>(::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Parameter*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Parameter*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(NULL, copy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__Outracks_Simulator_Bytecode_Statement__uType* ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof()
{
    static ::uStaticStrong<ImmutableList__Outracks_Simulator_Bytecode_Statement__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__Outracks_Simulator_Bytecode_Statement__uType*)::uAllocClassType(sizeof(ImmutableList__Outracks_Simulator_Bytecode_Statement__uType), "Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Statement>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__Outracks_Simulator_Bytecode_Statement__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof(), offsetof(ImmutableList__Outracks_Simulator_Bytecode_Statement__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__Outracks_Simulator_Bytecode_Statement, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__Outracks_Simulator_Bytecode_Statement, _array), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::Statement__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__Outracks_Simulator_Bytecode_Statement__Add, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Outracks::Simulator::Bytecode::Statement__typeof()),
        ::uNewFunction("Get", ImmutableList__Outracks_Simulator_Bytecode_Statement__Get, 0, false, ::app::Outracks::Simulator::Bytecode::Statement__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Empty, 0, true, ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("get_Item", ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Item, 0, false, ::app::Outracks::Simulator::Bytecode::Statement__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__Outracks_Simulator_Bytecode_Statement__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__Outracks_Simulator_Bytecode_Statement__InsertRange, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement__typeof()),
        ::uNewFunction("Replace", ImmutableList__Outracks_Simulator_Bytecode_Statement__Replace, 0, false, ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof(), ::app::Outracks::Simulator::Bytecode::Statement__typeof(), ::app::Outracks::Simulator::Bytecode::Statement__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__Outracks_Simulator_Bytecode_Statement___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__Add(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, ::app::Outracks::Simulator::Bytecode::Statement* element)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Statement__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__Outracks_Simulator_Bytecode_Statement(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Statement*>(__this->Count()) = element;
    return ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(NULL, copy);
}

::app::Outracks::Simulator::Bytecode::Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__Get(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Statement*>(i);
}

int ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Count(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Empty(::uStatic* __this)
{
    return ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Bytecode::Statement__typeof(), 0));
}

::app::Outracks::Simulator::Bytecode::Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Item(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Statement*>(i);
}

::uObject* ImmutableList__Outracks_Simulator_Bytecode_Statement__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this)
{
    return ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_Statement__New_1(NULL, __this->_array)));
}

ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Statement(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Statement__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Statement*>(i) = itemsArray->Item< ::app::Outracks::Simulator::Bytecode::Statement*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Statement*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Statement*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(NULL, copy);
}

ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__Outracks_Simulator_Bytecode_Statement* inst = (ImmutableList__Outracks_Simulator_Bytecode_Statement*)::uAllocObject(sizeof(ImmutableList__Outracks_Simulator_Bytecode_Statement), ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__Replace(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, ::app::Outracks::Simulator::Bytecode::Statement* element, ::app::Outracks::Simulator::Bytecode::Statement* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::Statement__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::Statement*>(i) = ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Bytecode::Statement*>(::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Statement*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::Statement*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(NULL, copy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__Outracks_Simulator_Bytecode_TypeName__uType* ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<ImmutableList__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocClassType(sizeof(ImmutableList__Outracks_Simulator_Bytecode_TypeName__uType), "Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.TypeName>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__Outracks_Simulator_Bytecode_TypeName__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof(), offsetof(ImmutableList__Outracks_Simulator_Bytecode_TypeName__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__Outracks_Simulator_Bytecode_TypeName, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__Outracks_Simulator_Bytecode_TypeName, _array), ::uGetArrayType(::app::Outracks::Simulator::Bytecode::TypeName__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__Outracks_Simulator_Bytecode_TypeName__Add, 0, false, ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("Get", ImmutableList__Outracks_Simulator_Bytecode_TypeName__Get, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Empty, 0, true, ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("get_Item", ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Item, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__Outracks_Simulator_Bytecode_TypeName__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__Outracks_Simulator_Bytecode_TypeName__InsertRange, 0, false, ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunction("Replace", ImmutableList__Outracks_Simulator_Bytecode_TypeName__Replace, 0, false, ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__Outracks_Simulator_Bytecode_TypeName___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__Add(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* element)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::TypeName__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__Outracks_Simulator_Bytecode_TypeName(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::TypeName*>(__this->Count()) = element;
    return ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, copy);
}

::app::Outracks::Simulator::Bytecode::TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__Get(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(i);
}

int ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Count(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Empty(::uStatic* __this)
{
    return ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Bytecode::TypeName__typeof(), 0));
}

::app::Outracks::Simulator::Bytecode::TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Item(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(i);
}

::uObject* ImmutableList__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, __this->_array)));
}

ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_TypeName(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::TypeName__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::TypeName*>(i) = itemsArray->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::TypeName*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, copy);
}

ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__Outracks_Simulator_Bytecode_TypeName* inst = (ImmutableList__Outracks_Simulator_Bytecode_TypeName*)::uAllocObject(sizeof(ImmutableList__Outracks_Simulator_Bytecode_TypeName), ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__Replace(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* element, ::app::Outracks::Simulator::Bytecode::TypeName* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Bytecode::TypeName__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Bytecode::TypeName*>(i) = ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Bytecode::TypeName*>(::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Bytecode::TypeName*>(i);
    }

    return ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(NULL, copy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__uType* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof()
{
    static ::uStaticStrong<ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__uType*)::uAllocClassType(sizeof(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__uType), "Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), offsetof(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo, _array), ::uGetArrayType(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Add, 0, false, ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()),
        ::uNewFunction("Get", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Get, 0, false, ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Empty, 0, true, ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction("get_Item", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Item, 0, false, ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__InsertRange, 0, false, ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__typeof()),
        ::uNewFunction("Replace", ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Replace, 0, false, ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof(), ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), ::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Add(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* element)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__Outracks_Simulator_Protocol_ExceptionInfo(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(__this->Count()) = element;
    return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, copy);
}

::app::Outracks::Simulator::Protocol::ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Get(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i);
}

int ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Count(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Empty(::uStatic* __this)
{
    return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, ::uNewArray(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), 0));
}

::app::Outracks::Simulator::Protocol::ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Item(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i);
}

::uObject* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this)
{
    return ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, __this->_array)));
}

ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__InsertRange(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__Outracks_Simulator_Protocol_ExceptionInfo(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i) = itemsArray->Item< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i);
    }

    return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, copy);
}

ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* inst = (ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo*)::uAllocObject(sizeof(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo), ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Replace(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* element, ::app::Outracks::Simulator::Protocol::ExceptionInfo* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Outracks::Simulator::Protocol::ExceptionInfo__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i) = ::app::Uno::Object::Equals(::uPtr< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Outracks::Simulator::Protocol::ExceptionInfo*>(i);
    }

    return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(NULL, copy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__string__uType* ImmutableList__string__typeof()
{
    static ::uStaticStrong<ImmutableList__string__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__string__uType*)::uAllocClassType(sizeof(ImmutableList__string__uType), "Outracks.Simulator.ImmutableList<string>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__string__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(ImmutableList__string__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__string, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__string, _array), ::uGetArrayType(::app::Uno::String__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__string__Add, 0, false, ImmutableList__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Get", ImmutableList__string__Get, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__string__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__string__get_Empty, 0, true, ImmutableList__string__typeof()),
        ::uNewFunction("get_Item", ImmutableList__string__get_Item, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__string__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__string__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__string__InsertRange, 0, false, ImmutableList__string__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__string__typeof()),
        ::uNewFunction("Replace", ImmutableList__string__Replace, 0, false, ImmutableList__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__string___ObjInit(ImmutableList__string* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__string* ImmutableList__string__Add(ImmutableList__string* __this, ::uString* element)
{
    ::uArray* copy = ::uNewArray(::app::Uno::String__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__string(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::uString*>(__this->Count()) = element;
    return ImmutableList__string__New_1(NULL, copy);
}

::uString* ImmutableList__string__Get(ImmutableList__string* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::uString*>(i);
}

int ImmutableList__string__get_Count(ImmutableList__string* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__string* ImmutableList__string__get_Empty(::uStatic* __this)
{
    return ImmutableList__string__New_1(NULL, ::uNewArray(::app::Uno::String__typeof(), 0));
}

::uString* ImmutableList__string__get_Item(ImmutableList__string* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::uString*>(i);
}

::uObject* ImmutableList__string__GetEnumerator(ImmutableList__string* __this)
{
    return ::app::Uno::Collections::IEnumerable__string::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__string__New_1(NULL, __this->_array)));
}

ImmutableList__string* ImmutableList__string__InsertRange(ImmutableList__string* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__string(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Uno::String__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::uString*>(i) = itemsArray->Item< ::uString*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::uString*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::uString*>(i);
    }

    return ImmutableList__string__New_1(NULL, copy);
}

ImmutableList__string* ImmutableList__string__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__string* inst = (ImmutableList__string*)::uAllocObject(sizeof(ImmutableList__string), ImmutableList__string__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__string* ImmutableList__string__Replace(ImmutableList__string* __this, ::uString* element, ::uString* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Uno::String__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::uString*>(i) = ::app::Uno::Object::Equals(::uPtr< ::uString*>(::uPtr< ::uArray*>(__this->_array)->Item< ::uString*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::uString*>(i);
    }

    return ImmutableList__string__New_1(NULL, copy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImmutableList__Uno_Exception__uType* ImmutableList__Uno_Exception__typeof()
{
    static ::uStaticStrong<ImmutableList__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (ImmutableList__Uno_Exception__uType*)::uAllocClassType(sizeof(ImmutableList__Uno_Exception__uType), "Outracks.Simulator.ImmutableList<Uno.Exception>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ImmutableList__Uno_Exception__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof(), offsetof(ImmutableList__Uno_Exception__uType, __interface_0));

    type->SetStrongRefs(
        "_array", offsetof(ImmutableList__Uno_Exception, _array));

    type->SetFields(1,
        ::uNewField("_array", NULL, offsetof(ImmutableList__Uno_Exception, _array), ::uGetArrayType(::app::Uno::Exception__typeof())));

    type->SetFunctions(8,
        ::uNewFunction("Add", ImmutableList__Uno_Exception__Add, 0, false, ImmutableList__Uno_Exception__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunction("Get", ImmutableList__Uno_Exception__Get, 0, false, ::app::Uno::Exception__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", ImmutableList__Uno_Exception__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Empty", ImmutableList__Uno_Exception__get_Empty, 0, true, ImmutableList__Uno_Exception__typeof()),
        ::uNewFunction("get_Item", ImmutableList__Uno_Exception__get_Item, 0, false, ::app::Uno::Exception__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ImmutableList__Uno_Exception__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Exception__typeof()),
        ::uNewFunction("InsertRange", ImmutableList__Uno_Exception__InsertRange, 0, false, ImmutableList__Uno_Exception__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof()),
        ::uNewFunction("Replace", ImmutableList__Uno_Exception__Replace, 0, false, ImmutableList__Uno_Exception__typeof(), ::app::Uno::Exception__typeof(), ::app::Uno::Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImmutableList__Uno_Exception___ObjInit(ImmutableList__Uno_Exception* __this, ::uArray* array)
{
    __this->_array = array;
}

ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__Add(ImmutableList__Uno_Exception* __this, ::app::Uno::Exception* element)
{
    ::uArray* copy = ::uNewArray(::app::Uno::Exception__typeof(), __this->Count() + 1);
    ::app::Uno::Array__Copy__Uno_Exception(NULL, __this->_array, copy, __this->Count());
    copy->ItemStrong< ::app::Uno::Exception*>(__this->Count()) = element;
    return ImmutableList__Uno_Exception__New_1(NULL, copy);
}

::app::Uno::Exception* ImmutableList__Uno_Exception__Get(ImmutableList__Uno_Exception* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Uno::Exception*>(i);
}

int ImmutableList__Uno_Exception__get_Count(ImmutableList__Uno_Exception* __this)
{
    return ::uPtr< ::uArray*>(__this->_array)->Length();
}

ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__get_Empty(::uStatic* __this)
{
    return ImmutableList__Uno_Exception__New_1(NULL, ::uNewArray(::app::Uno::Exception__typeof(), 0));
}

::app::Uno::Exception* ImmutableList__Uno_Exception__get_Item(ImmutableList__Uno_Exception* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Uno::Exception*>(i);
}

::uObject* ImmutableList__Uno_Exception__GetEnumerator(ImmutableList__Uno_Exception* __this)
{
    return ::app::Uno::Collections::IEnumerable__Uno_Exception::GetEnumerator(::uPtr< ::uObject*>((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Uno_Exception__New_1(NULL, __this->_array)));
}

ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__InsertRange(ImmutableList__Uno_Exception* __this, int index, ::uObject* items)
{
    ::uArray* itemsArray = ::app::Uno::Collections::EnumerableExtensions__ToArray__Uno_Exception(NULL, items);
    ::uArray* copy = ::uNewArray(::app::Uno::Exception__typeof(), __this->Count() + ::uPtr< ::uArray*>(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
    {
        copy->ItemStrong< ::app::Uno::Exception*>(i) = itemsArray->Item< ::app::Uno::Exception*>(i);
    }

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Uno::Exception*>(itemsArray->Length() + i) = ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Uno::Exception*>(i);
    }

    return ImmutableList__Uno_Exception__New_1(NULL, copy);
}

ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__New_1(::uStatic* __this, ::uArray* array)
{
    ImmutableList__Uno_Exception* inst = (ImmutableList__Uno_Exception*)::uAllocObject(sizeof(ImmutableList__Uno_Exception), ImmutableList__Uno_Exception__typeof());
    inst->_ObjInit(array);
    return inst;
}

ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__Replace(ImmutableList__Uno_Exception* __this, ::app::Uno::Exception* element, ::app::Uno::Exception* replacement)
{
    ::uArray* copy = ::uNewArray(::app::Uno::Exception__typeof(), __this->Count());

    for (int i = 0; i < __this->Count(); i++)
    {
        copy->ItemStrong< ::app::Uno::Exception*>(i) = ::app::Uno::Object::Equals(::uPtr< ::app::Uno::Exception*>(::uPtr< ::uArray*>(__this->_array)->Item< ::app::Uno::Exception*>(i)), (::uObject*)element) ? replacement : ::uPtr< ::uArray*>(__this->_array)->Item< ::app::Uno::Exception*>(i);
    }

    return ImmutableList__Uno_Exception__New_1(NULL, copy);
}

}}}
