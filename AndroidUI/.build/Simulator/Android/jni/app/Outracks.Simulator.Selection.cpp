// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Outracks.Simulator.Runtime.ObjectTagRegistry.h>
#include <app/Outracks.Simulator.Selection.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerable__object.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__object.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {

Selection__uType* Selection__typeof()
{
    static ::uStaticStrong<Selection__uType*> type;
    if (type != NULL) return type;

    type = (Selection__uType*)::uAllocClassType(sizeof(Selection__uType), "Outracks.Simulator.Selection", false, 1, 2, 0);

    type->__interface_0.__fp_IsSelected = (bool(*)(void*, ::uObject*))Selection__IsSelected;

    type->SetInterfaces(
        ::app::Fuse::Preview::ISelection__typeof(), offsetof(Selection__uType, __interface_0));

    type->SetStrongRefs(
        "_property", offsetof(Selection, _property),
        "_tagHash", offsetof(Selection, _tagHash));

    type->SetFields(2,
        ::uNewField("_property", NULL, offsetof(Selection, _property), ::app::Uno::String__typeof()),
        ::uNewField("_tagHash", NULL, offsetof(Selection, _tagHash), ::app::Uno::String__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Each", Selection__Each, 0, false, ::app::Uno::Action__object__typeof()),
        ::uNewFunction("get_Items", Selection__get_Items, 0, false, ::app::Uno::Collections::IEnumerable__object__typeof()),
        ::uNewFunction("IsPropertySelected", Selection__IsPropertySelected, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("IsSelected", Selection__IsSelected, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", Selection__New_1, 0, true, Selection__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Selection___ObjInit(Selection* __this, ::uString* tagHash, ::uString* property)
{
    __this->_tagHash = tagHash;
    __this->_property = property;
}

void Selection__Each(Selection* __this, ::uDelegate* action)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__object::GetEnumerator(::uPtr< ::uObject*>(__this->Items())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::uObject* obj = ::app::Uno::Collections::IEnumerator__object::Current(::uPtr< ::uObject*>(enum_123));

        try
        {
            ::uPtr< ::uDelegate*>(action)->InvokeVoid< ::uObject*>(obj);
        }
        catch (const ::uThrowable& __t)
        {
            if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
            {
                ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uPtr< ::app::Uno::Exception*>(e)->ToString(), 1, ::uGetConstString("C:\\Users\\Kuro\\Documents\\Fuse\\Android UI\\.build\\Simulator\\Android\\.simulator\\$.uno"), 205);
            }
            else
            {
                throw __t;
            }
        }
    }
}

::uObject* Selection__get_Items(Selection* __this)
{
    return ::app::Outracks::Simulator::Runtime::ObjectTagRegistry__GetObjectsWithTag(NULL, __this->_tagHash);
}

bool Selection__IsPropertySelected(Selection* __this, ::uObject* obj, ::uString* property)
{
    return __this->IsSelected(obj) && ::app::Uno::String__op_Equality(NULL, property, __this->_property);
}

bool Selection__IsSelected(Selection* __this, ::uObject* obj)
{
    return ::app::Uno::String__op_Equality(NULL, ::app::Outracks::Simulator::Runtime::ObjectTagRegistry__GetTagHash(NULL, obj), __this->_tagHash);
}

Selection* Selection__New_1(::uStatic* __this, ::uString* tagHash, ::uString* property)
{
    Selection* inst = (Selection*)::uAllocObject(sizeof(Selection), Selection__typeof());
    inst->_ObjInit(tagHash, property);
    return inst;
}

}}}
