#include <app/-.HashableWeakReference.h>
#include <app/-.WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/-.WeakDictionary__object__string.h>
#include <app/Outracks.Simulator.Bytecode.TypeName.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__HashableWeakReference__Outracks_Sim-1c81327d.h>
#include <app/Uno.Collections.Dictionary__HashableWeakReference__string.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Hasha-2efcb1d.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Hasha-e238d1dc.h>
#include <app/Uno.String.h>
#include <app/Uno.WeakReference__object.h>

namespace app {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__uType* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__typeof()
{
    static ::uStaticStrong<WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__uType*> type;
    if (type != NULL) return type;

    type = (WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__uType*)::uAllocClassType(sizeof(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__uType), "WeakDictionary<object,Outracks.Simulator.Bytecode.TypeName>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_dictionary", offsetof(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName, _dictionary));

    type->SetFields(1,
        ::uNewField("_dictionary", NULL, offsetof(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName, _dictionary), ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("AsEnumerable", WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__AsEnumerable, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_HashableWeakReference_Outracks_Simulator_Bytecode_TypeName___typeof()),
        ::uNewFunctionVoid("Clear", WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__Clear, 0, false),
        ::uNewFunction("get_Item", WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__get_Item, 0, false, ::app::Outracks::Simulator::Bytecode::TypeName__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__New_1, 0, true, WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__typeof()),
        ::uNewFunctionVoid("set_Item", WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__set_Item, 0, false, ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()),
        ::uNewFunction("TryGetValue", WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__TryGetValue, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Outracks::Simulator::Bytecode::TypeName__typeof()));

    ::uRegisterType(type);
    return type;
}

void WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName___ObjInit(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this)
{
    __this->_dictionary = ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(NULL);
}

::uObject* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__AsEnumerable(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this)
{
    return (::uObject*)__this->_dictionary;
}

void WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__Clear(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_dictionary)->Clear();
}

::app::Outracks::Simulator::Bytecode::TypeName* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__get_Item(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* key)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_dictionary)->Item(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__GetKey(NULL, key));
}

::app::HashableWeakReference* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__GetKey(::uStatic* __this, ::uObject* obj)
{
    return ::app::HashableWeakReference__New_1(NULL, ::app::Uno::WeakReference__object__New_1(NULL, obj));
}

WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this)
{
    WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* inst = (WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName*)::uAllocObject(sizeof(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName), WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__typeof());
    inst->_ObjInit();
    return inst;
}

void WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__set_Item(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* key, ::app::Outracks::Simulator::Bytecode::TypeName* value)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_dictionary)->Item(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__GetKey(NULL, key), value);
}

bool WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__TryGetValue(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* key, ::app::Outracks::Simulator::Bytecode::TypeName** value)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*>(__this->_dictionary)->TryGetValue(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__GetKey(NULL, key), value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakDictionary__object__string__uType* WeakDictionary__object__string__typeof()
{
    static ::uStaticStrong<WeakDictionary__object__string__uType*> type;
    if (type != NULL) return type;

    type = (WeakDictionary__object__string__uType*)::uAllocClassType(sizeof(WeakDictionary__object__string__uType), "WeakDictionary<object,string>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_dictionary", offsetof(WeakDictionary__object__string, _dictionary));

    type->SetFields(1,
        ::uNewField("_dictionary", NULL, offsetof(WeakDictionary__object__string, _dictionary), ::app::Uno::Collections::Dictionary__HashableWeakReference__string__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("AsEnumerable", WeakDictionary__object__string__AsEnumerable, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_HashableWeakReference_string___typeof()),
        ::uNewFunctionVoid("Clear", WeakDictionary__object__string__Clear, 0, false),
        ::uNewFunction("get_Item", WeakDictionary__object__string__get_Item, 0, false, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", WeakDictionary__object__string__New_1, 0, true, WeakDictionary__object__string__typeof()),
        ::uNewFunctionVoid("set_Item", WeakDictionary__object__string__set_Item, 0, false, ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("TryGetValue", WeakDictionary__object__string__TryGetValue, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void WeakDictionary__object__string___ObjInit(WeakDictionary__object__string* __this)
{
    __this->_dictionary = ::app::Uno::Collections::Dictionary__HashableWeakReference__string__New_1(NULL);
}

::uObject* WeakDictionary__object__string__AsEnumerable(WeakDictionary__object__string* __this)
{
    return (::uObject*)__this->_dictionary;
}

void WeakDictionary__object__string__Clear(WeakDictionary__object__string* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_dictionary)->Clear();
}

::uString* WeakDictionary__object__string__get_Item(WeakDictionary__object__string* __this, ::uObject* key)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_dictionary)->Item(WeakDictionary__object__string__GetKey(NULL, key));
}

::app::HashableWeakReference* WeakDictionary__object__string__GetKey(::uStatic* __this, ::uObject* obj)
{
    return ::app::HashableWeakReference__New_1(NULL, ::app::Uno::WeakReference__object__New_1(NULL, obj));
}

WeakDictionary__object__string* WeakDictionary__object__string__New_1(::uStatic* __this)
{
    WeakDictionary__object__string* inst = (WeakDictionary__object__string*)::uAllocObject(sizeof(WeakDictionary__object__string), WeakDictionary__object__string__typeof());
    inst->_ObjInit();
    return inst;
}

void WeakDictionary__object__string__set_Item(WeakDictionary__object__string* __this, ::uObject* key, ::uString* value)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_dictionary)->Item(WeakDictionary__object__string__GetKey(NULL, key), value);
}

bool WeakDictionary__object__string__TryGetValue(WeakDictionary__object__string* __this, ::uObject* key, ::uString** value)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*>(__this->_dictionary)->TryGetValue(WeakDictionary__object__string__GetKey(NULL, key), value);
}

}
