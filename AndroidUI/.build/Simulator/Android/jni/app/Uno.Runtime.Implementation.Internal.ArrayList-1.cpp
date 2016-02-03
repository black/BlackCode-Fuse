#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Uno_Exception.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayList__Uno_Exception.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayList__Uno_Exception__uType* ArrayList__Uno_Exception__typeof()
{
    static ::uStaticStrong<ArrayList__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (ArrayList__Uno_Exception__uType*)::uAllocClassType(sizeof(ArrayList__Uno_Exception__uType), "Uno.Runtime.Implementation.Internal.ArrayList<Uno.Exception>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Uno::Exception*(*)(void*, int))ArrayList__Uno_Exception__get_Item;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ArrayList__Uno_Exception__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayList__Uno_Exception__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_Exception__typeof(), offsetof(ArrayList__Uno_Exception__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_Exception__typeof(), offsetof(ArrayList__Uno_Exception__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof(), offsetof(ArrayList__Uno_Exception__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(ArrayList__Uno_Exception, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(ArrayList__Uno_Exception, _source), ::uGetArrayType(::app::Uno::Exception__typeof())));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ArrayList__Uno_Exception__Add, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("Clear", ArrayList__Uno_Exception__Clear, 0, false),
        ::uNewFunction("Contains", ArrayList__Uno_Exception__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Count", ArrayList__Uno_Exception__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ArrayList__Uno_Exception__get_Item, 0, false, ::app::Uno::Exception__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ArrayList__Uno_Exception__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Exception__typeof()),
        ::uNewFunctionVoid("Insert", ArrayList__Uno_Exception__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunction(".ctor", ArrayList__Uno_Exception__New_1, 0, true, ArrayList__Uno_Exception__typeof(), ::uGetArrayType(::app::Uno::Exception__typeof())),
        ::uNewFunction("Remove", ArrayList__Uno_Exception__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("RemoveAt", ArrayList__Uno_Exception__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Item", ArrayList__Uno_Exception__set_Item, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void ArrayList__Uno_Exception___ObjInit(ArrayList__Uno_Exception* __this, ::uArray* source)
{
    __this->_source = source;
}

void ArrayList__Uno_Exception__Add(ArrayList__Uno_Exception* __this, ::app::Uno::Exception* item)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

void ArrayList__Uno_Exception__Clear(ArrayList__Uno_Exception* __this)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

bool ArrayList__Uno_Exception__Contains(ArrayList__Uno_Exception* __this, ::app::Uno::Exception* item)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    for (array_123 = __this->_source, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Exception* t = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Exception*>(index_124);

        if (::app::Uno::Object::Equals(::uPtr< ::app::Uno::Exception*>(t), (::uObject*)item))
        {
            return true;
        }
    }

    return false;
}

int ArrayList__Uno_Exception__get_Count(ArrayList__Uno_Exception* __this)
{
    return ::uPtr< ::uArray*>(__this->_source)->Length();
}

::app::Uno::Exception* ArrayList__Uno_Exception__get_Item(ArrayList__Uno_Exception* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Uno::Exception*>(index);
}

::uObject* ArrayList__Uno_Exception__GetEnumerator(ArrayList__Uno_Exception* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Uno_Exception__New_1(NULL, __this->_source);
}

void ArrayList__Uno_Exception__Insert(ArrayList__Uno_Exception* __this, int index, ::app::Uno::Exception* item)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

ArrayList__Uno_Exception* ArrayList__Uno_Exception__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayList__Uno_Exception* inst = (ArrayList__Uno_Exception*)::uAllocObject(sizeof(ArrayList__Uno_Exception), ArrayList__Uno_Exception__typeof());
    inst->_ObjInit(source);
    return inst;
}

bool ArrayList__Uno_Exception__Remove(ArrayList__Uno_Exception* __this, ::app::Uno::Exception* item)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

void ArrayList__Uno_Exception__RemoveAt(ArrayList__Uno_Exception* __this, int index)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

void ArrayList__Uno_Exception__set_Item(ArrayList__Uno_Exception* __this, int index, ::app::Uno::Exception* value)
{
    ::uPtr< ::uArray*>(__this->_source)->ItemStrong< ::app::Uno::Exception*>(index) = value;
}

}}}}}
