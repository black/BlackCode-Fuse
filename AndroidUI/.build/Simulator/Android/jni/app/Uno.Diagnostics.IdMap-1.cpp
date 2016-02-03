#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__int.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Diagnostics.IdMap__string.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Diagnostics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IdMap__string__uType* IdMap__string__typeof()
{
    static ::uStaticStrong<IdMap__string__uType*> type;
    if (type != NULL) return type;

    type = (IdMap__string__uType*)::uAllocClassType(sizeof(IdMap__string__uType), "Uno.Diagnostics.IdMap<string>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_intToObject", offsetof(IdMap__string, _intToObject),
        "_objectToInt", offsetof(IdMap__string, _objectToInt));

    type->SetFields(4,
        ::uNewField("_intToObject", NULL, offsetof(IdMap__string, _intToObject), ::app::Uno::Collections::List__string__typeof()),
        ::uNewField("_nextId", NULL, offsetof(IdMap__string, _nextId), ::app::Uno::Int__typeof()),
        ::uNewField("_objectToInt", NULL, offsetof(IdMap__string, _objectToInt), ::app::Uno::Collections::Dictionary__string__int__typeof()),
        ::uNewField("_twoWay", NULL, offsetof(IdMap__string, _twoWay), ::app::Uno::Bool__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("IdFor", IdMap__string__IdFor, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", IdMap__string__New_1, 0, true, IdMap__string__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("StringFor", IdMap__string__StringFor, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void IdMap__string___ObjInit(IdMap__string* __this, bool twoWay)
{
    __this->_objectToInt = ::app::Uno::Collections::Dictionary__string__int__New_1(NULL);
    __this->_intToObject = ::app::Uno::Collections::List__string__New_1(NULL);
    __this->_twoWay = twoWay;
}

int IdMap__string__IdFor(IdMap__string* __this, ::uString* s)
{
    int id = int();

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_objectToInt)->TryGetValue(s, &id))
    {
        return id;
    }

    id = __this->_nextId++;
    ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(__this->_objectToInt)->Add(s, id);

    if (__this->_twoWay)
    {
        ::uPtr< ::app::Uno::Collections::List__string*>(__this->_intToObject)->Add(s);
    }

    return id;
}

IdMap__string* IdMap__string__New_1(::uStatic* __this, bool twoWay)
{
    IdMap__string* inst = (IdMap__string*)::uAllocObject(sizeof(IdMap__string), IdMap__string__typeof());
    inst->_ObjInit(twoWay);
    return inst;
}

::uString* IdMap__string__StringFor(IdMap__string* __this, int id)
{
    if (!__this->_twoWay)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Internal error: Cannot do reverse lookup on one-way IdMap.")));
    }

    return ::uPtr< ::app::Uno::Collections::List__string*>(__this->_intToObject)->Item(id);
}

}}}
