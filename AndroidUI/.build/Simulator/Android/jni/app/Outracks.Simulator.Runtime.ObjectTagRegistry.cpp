// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.HashableWeakReference.h>
#include <app/-.WeakDictionary__object__string.h>
#include <app/Outracks.Simulator.Runtime.ObjectTagRegistry.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerable__object.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Hasha-2efcb1d.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__object.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Hasha-429a6cf.h>
#include <app/Uno.Collections.KeyValuePair__HashableWeakReference__string.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

::uStaticStrong< ::app::WeakDictionary__object__string*> ObjectTagRegistry__Objects;

ObjectTagRegistry__uType* ObjectTagRegistry__typeof()
{
    static ::uStaticStrong<ObjectTagRegistry__uType*> type;
    if (type != NULL) return type;

    type = (ObjectTagRegistry__uType*)::uAllocClassType(sizeof(ObjectTagRegistry__uType), "Outracks.Simulator.Runtime.ObjectTagRegistry", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("Objects", &ObjectTagRegistry__Objects, 0, ::app::WeakDictionary__object__string__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("Clear", ObjectTagRegistry__Clear, 0, true),
        ::uNewFunction("GetFirstObjectWithTag", ObjectTagRegistry__GetFirstObjectWithTag, 0, true, ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetObjectsWithTag", ObjectTagRegistry__GetObjectsWithTag, 0, true, ::app::Uno::Collections::IEnumerable__object__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("GetObjectsWithTag", ObjectTagRegistry__GetObjectsWithTag_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Action__object__typeof()),
        ::uNewFunction("GetTagHash", ObjectTagRegistry__GetTagHash, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", ObjectTagRegistry__New_1, 0, true, ObjectTagRegistry__typeof()),
        ::uNewFunction("RegisterObjectTag", ObjectTagRegistry__RegisterObjectTag, 0, true, ::uObject__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObjectTagRegistry___ObjInit(ObjectTagRegistry* __this)
{
}

void ObjectTagRegistry___TypeInit(::uStatic* __this)
{
    ObjectTagRegistry__Objects = ::app::WeakDictionary__object__string__New_1(NULL);
}

void ObjectTagRegistry__Clear(::uStatic* __this)
{
    ::uPtr< ::app::WeakDictionary__object__string*>(ObjectTagRegistry__Objects)->Clear();
}

::uObject* ObjectTagRegistry__GetFirstObjectWithTag(::uStatic* __this, ::uString* tag)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__object::GetEnumerator(::uPtr< ::uObject*>(ObjectTagRegistry__GetObjectsWithTag(NULL, tag))); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::uObject* obj = ::app::Uno::Collections::IEnumerator__object::Current(::uPtr< ::uObject*>(enum_124));

        try
        {
            return obj;
        }
        catch (const ::uThrowable& __t)
        {
            if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
            {
                ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
                ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uPtr< ::app::Uno::Exception*>(e)->ToString(), 1, ::uGetConstString("C:\\Users\\Kuro\\Documents\\Fuse\\Android UI\\.build\\Simulator\\Android\\.simulator\\$.uno"), 277);
            }
            else
            {
                throw __t;
            }
        }
    }

    return NULL;
}

::uObject* ObjectTagRegistry__GetObjectsWithTag(::uStatic* __this, ::uString* tag)
{
    ::app::Uno::Collections::List__object* list = ::app::Uno::Collections::List__object__New_1(NULL);

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_HashableWeakReference_string_::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::WeakDictionary__object__string*>(ObjectTagRegistry__Objects)->AsEnumerable())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Uno::Collections::KeyValuePair__HashableWeakReference__string kv = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_HashableWeakReference_string_::Current(::uPtr< ::uObject*>(enum_125));
        ::uObject* obj = NULL;

        if (::app::Uno::String__op_Equality(NULL, kv.Value(), tag) && ::uPtr< ::app::HashableWeakReference*>(kv.Key())->TryGetTarget(&obj))
        {
            ::uPtr< ::app::Uno::Collections::List__object*>(list)->Add(obj);
        }
    }

    return (::uObject*)list;
}

void ObjectTagRegistry__GetObjectsWithTag_1(::uStatic* __this, ::uString* tag, ::uDelegate* action)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__object::GetEnumerator(::uPtr< ::uObject*>(ObjectTagRegistry__GetObjectsWithTag(NULL, tag))); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
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
                ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uPtr< ::app::Uno::Exception*>(e)->ToString(), 1, ::uGetConstString("C:\\Users\\Kuro\\Documents\\Fuse\\Android UI\\.build\\Simulator\\Android\\.simulator\\$.uno"), 261);
            }
            else
            {
                throw __t;
            }
        }
    }
}

::uString* ObjectTagRegistry__GetTagHash(::uStatic* __this, ::uObject* obj)
{
    ::uString* tagHash = NULL;
    ::uPtr< ::app::WeakDictionary__object__string*>(ObjectTagRegistry__Objects)->TryGetValue(obj, &tagHash);
    return tagHash;
}

ObjectTagRegistry* ObjectTagRegistry__New_1(::uStatic* __this)
{
    ObjectTagRegistry* inst = (ObjectTagRegistry*)::uAllocObject(sizeof(ObjectTagRegistry), ObjectTagRegistry__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* ObjectTagRegistry__RegisterObjectTag(::uStatic* __this, ::uObject* obj, ::uString* tagHash)
{
    ::uPtr< ::app::WeakDictionary__object__string*>(ObjectTagRegistry__Objects)->Item(obj, tagHash);
    return obj;
}

}}}}
