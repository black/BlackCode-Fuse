#include <app/Uno.Collections.ICollection__Uno_Exception.h>
#include <app/Uno.Collections.IList__Uno_Exception.h>
#include <app/Uno.Collections.ReadOnlyCollection__Uno_Exception.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ReadOnlyCollection__Uno_Exception__uType* ReadOnlyCollection__Uno_Exception__typeof()
{
    static ::uStaticStrong<ReadOnlyCollection__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (ReadOnlyCollection__Uno_Exception__uType*)::uAllocClassType(sizeof(ReadOnlyCollection__Uno_Exception__uType), "Uno.Collections.ReadOnlyCollection<Uno.Exception>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_list", offsetof(ReadOnlyCollection__Uno_Exception, _list));

    type->SetFields(1,
        ::uNewField("_list", NULL, offsetof(ReadOnlyCollection__Uno_Exception, _list), ::app::Uno::Collections::IList__Uno_Exception__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Count", ReadOnlyCollection__Uno_Exception__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ReadOnlyCollection__Uno_Exception__get_Item, 0, false, ::app::Uno::Exception__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", ReadOnlyCollection__Uno_Exception__New_1, 0, true, ReadOnlyCollection__Uno_Exception__typeof(), ::app::Uno::Collections::IList__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void ReadOnlyCollection__Uno_Exception___ObjInit(ReadOnlyCollection__Uno_Exception* __this, ::uObject* list)
{
    __this->_list = list;
}

int ReadOnlyCollection__Uno_Exception__get_Count(ReadOnlyCollection__Uno_Exception* __this)
{
    return ::app::Uno::Collections::ICollection__Uno_Exception::Count(::uPtr< ::uObject*>(__this->_list));
}

::app::Uno::Exception* ReadOnlyCollection__Uno_Exception__get_Item(ReadOnlyCollection__Uno_Exception* __this, int index)
{
    return ::app::Uno::Collections::IList__Uno_Exception::Item(::uPtr< ::uObject*>(__this->_list), index);
}

ReadOnlyCollection__Uno_Exception* ReadOnlyCollection__Uno_Exception__New_1(::uStatic* __this, ::uObject* list)
{
    ReadOnlyCollection__Uno_Exception* inst = (ReadOnlyCollection__Uno_Exception*)::uAllocObject(sizeof(ReadOnlyCollection__Uno_Exception), ReadOnlyCollection__Uno_Exception__typeof());
    inst->_ObjInit(list);
    return inst;
}

}}}
