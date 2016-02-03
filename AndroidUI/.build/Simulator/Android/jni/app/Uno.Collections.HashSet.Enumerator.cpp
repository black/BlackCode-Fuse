#include <app/Fuse.IFlush.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary__int__bool.h>
#include <app/Uno.Collections.Dictionary__string__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__bool.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.HashSet1_Enumerator__framebuffer.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_IFlush.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.HashSet1_Enumerator__int.h>
#include <app/Uno.Collections.HashSet1_Enumerator__string.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet1_Enumerator__framebuffer__uType* HashSet1_Enumerator__framebuffer__typeof()
{
    static ::uStaticStrong<HashSet1_Enumerator__framebuffer__uType*> type;
    if (type != NULL) return type;

    type = (HashSet1_Enumerator__framebuffer__uType*)::uAllocStructType(sizeof(HashSet1_Enumerator__framebuffer__uType), "Uno.Collections.HashSet<framebuffer>.Enumerator", sizeof(HashSet1_Enumerator__framebuffer), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))HashSet1_Enumerator__framebuffer__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Graphics::Framebuffer*(*)(void*))HashSet1_Enumerator__framebuffer__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__framebuffer__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__framebuffer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__framebuffer__typeof(), offsetof(HashSet1_Enumerator__framebuffer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HashSet1_Enumerator__framebuffer__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(HashSet1_Enumerator__framebuffer__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(HashSet1_Enumerator__framebuffer, _current),
        "_source", offsetof(HashSet1_Enumerator__framebuffer, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(HashSet1_Enumerator__framebuffer, _current), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_iterator", NULL, offsetof(HashSet1_Enumerator__framebuffer, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(HashSet1_Enumerator__framebuffer, _source), ::app::Uno::Collections::Dictionary__framebuffer__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(HashSet1_Enumerator__framebuffer, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", HashSet1_Enumerator__framebuffer__Dispose, 0, false),
        ::uNewFunction("get_Current", HashSet1_Enumerator__framebuffer__get_Current, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("MoveNext", HashSet1_Enumerator__framebuffer__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void HashSet1_Enumerator__framebuffer___ObjInit(HashSet1_Enumerator__framebuffer* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(source)->_version;
    __this->_iterator = -1;
}

void HashSet1_Enumerator__framebuffer__Dispose(HashSet1_Enumerator__framebuffer* __this)
{
}

::app::Uno::Graphics::Framebuffer* HashSet1_Enumerator__framebuffer__get_Current(HashSet1_Enumerator__framebuffer* __this)
{
    return __this->_current;
}

bool HashSet1_Enumerator__framebuffer__MoveNext(HashSet1_Enumerator__framebuffer* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

HashSet1_Enumerator__framebuffer HashSet1_Enumerator__framebuffer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source)
{
    HashSet1_Enumerator__framebuffer inst = ::uDefault< HashSet1_Enumerator__framebuffer>();
    inst._ObjInit(source);
    return inst;
}

void HashSet1_Enumerator__framebuffer__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__framebuffer* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet1_Enumerator__Fuse_IFlush__uType* HashSet1_Enumerator__Fuse_IFlush__typeof()
{
    static ::uStaticStrong<HashSet1_Enumerator__Fuse_IFlush__uType*> type;
    if (type != NULL) return type;

    type = (HashSet1_Enumerator__Fuse_IFlush__uType*)::uAllocStructType(sizeof(HashSet1_Enumerator__Fuse_IFlush__uType), "Uno.Collections.HashSet<Fuse.IFlush>.Enumerator", sizeof(HashSet1_Enumerator__Fuse_IFlush), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))HashSet1_Enumerator__Fuse_IFlush__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))HashSet1_Enumerator__Fuse_IFlush__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__Fuse_IFlush__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__Fuse_IFlush__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_IFlush__typeof(), offsetof(HashSet1_Enumerator__Fuse_IFlush__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HashSet1_Enumerator__Fuse_IFlush__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(HashSet1_Enumerator__Fuse_IFlush__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(HashSet1_Enumerator__Fuse_IFlush, _current),
        "_source", offsetof(HashSet1_Enumerator__Fuse_IFlush, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(HashSet1_Enumerator__Fuse_IFlush, _current), ::app::Fuse::IFlush__typeof()),
        ::uNewField("_iterator", NULL, offsetof(HashSet1_Enumerator__Fuse_IFlush, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(HashSet1_Enumerator__Fuse_IFlush, _source), ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(HashSet1_Enumerator__Fuse_IFlush, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", HashSet1_Enumerator__Fuse_IFlush__Dispose, 0, false),
        ::uNewFunction("get_Current", HashSet1_Enumerator__Fuse_IFlush__get_Current, 0, false, ::app::Fuse::IFlush__typeof()),
        ::uNewFunction("MoveNext", HashSet1_Enumerator__Fuse_IFlush__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void HashSet1_Enumerator__Fuse_IFlush___ObjInit(HashSet1_Enumerator__Fuse_IFlush* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(source)->_version;
    __this->_iterator = -1;
}

void HashSet1_Enumerator__Fuse_IFlush__Dispose(HashSet1_Enumerator__Fuse_IFlush* __this)
{
}

::uObject* HashSet1_Enumerator__Fuse_IFlush__get_Current(HashSet1_Enumerator__Fuse_IFlush* __this)
{
    return __this->_current;
}

bool HashSet1_Enumerator__Fuse_IFlush__MoveNext(HashSet1_Enumerator__Fuse_IFlush* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

HashSet1_Enumerator__Fuse_IFlush HashSet1_Enumerator__Fuse_IFlush__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    HashSet1_Enumerator__Fuse_IFlush inst = ::uDefault< HashSet1_Enumerator__Fuse_IFlush>();
    inst._ObjInit(source);
    return inst;
}

void HashSet1_Enumerator__Fuse_IFlush__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__Fuse_IFlush* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet1_Enumerator__Fuse_Node__uType* HashSet1_Enumerator__Fuse_Node__typeof()
{
    static ::uStaticStrong<HashSet1_Enumerator__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (HashSet1_Enumerator__Fuse_Node__uType*)::uAllocStructType(sizeof(HashSet1_Enumerator__Fuse_Node__uType), "Uno.Collections.HashSet<Fuse.Node>.Enumerator", sizeof(HashSet1_Enumerator__Fuse_Node), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))HashSet1_Enumerator__Fuse_Node__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Fuse::Node*(*)(void*))HashSet1_Enumerator__Fuse_Node__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__Fuse_Node__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__Fuse_Node__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Node__typeof(), offsetof(HashSet1_Enumerator__Fuse_Node__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HashSet1_Enumerator__Fuse_Node__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(HashSet1_Enumerator__Fuse_Node__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(HashSet1_Enumerator__Fuse_Node, _current),
        "_source", offsetof(HashSet1_Enumerator__Fuse_Node, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(HashSet1_Enumerator__Fuse_Node, _current), ::app::Fuse::Node__typeof()),
        ::uNewField("_iterator", NULL, offsetof(HashSet1_Enumerator__Fuse_Node, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(HashSet1_Enumerator__Fuse_Node, _source), ::app::Uno::Collections::Dictionary__Fuse_Node__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(HashSet1_Enumerator__Fuse_Node, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", HashSet1_Enumerator__Fuse_Node__Dispose, 0, false),
        ::uNewFunction("get_Current", HashSet1_Enumerator__Fuse_Node__get_Current, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("MoveNext", HashSet1_Enumerator__Fuse_Node__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void HashSet1_Enumerator__Fuse_Node___ObjInit(HashSet1_Enumerator__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(source)->_version;
    __this->_iterator = -1;
}

void HashSet1_Enumerator__Fuse_Node__Dispose(HashSet1_Enumerator__Fuse_Node* __this)
{
}

::app::Fuse::Node* HashSet1_Enumerator__Fuse_Node__get_Current(HashSet1_Enumerator__Fuse_Node* __this)
{
    return __this->_current;
}

bool HashSet1_Enumerator__Fuse_Node__MoveNext(HashSet1_Enumerator__Fuse_Node* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

HashSet1_Enumerator__Fuse_Node HashSet1_Enumerator__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    HashSet1_Enumerator__Fuse_Node inst = ::uDefault< HashSet1_Enumerator__Fuse_Node>();
    inst._ObjInit(source);
    return inst;
}

void HashSet1_Enumerator__Fuse_Node__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__Fuse_Node* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet1_Enumerator__int__uType* HashSet1_Enumerator__int__typeof()
{
    static ::uStaticStrong<HashSet1_Enumerator__int__uType*> type;
    if (type != NULL) return type;

    type = (HashSet1_Enumerator__int__uType*)::uAllocStructType(sizeof(HashSet1_Enumerator__int__uType), "Uno.Collections.HashSet<int>.Enumerator", sizeof(HashSet1_Enumerator__int), 3, 1, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))HashSet1_Enumerator__int__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (int(*)(void*))HashSet1_Enumerator__int__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__int__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__int__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__int__typeof(), offsetof(HashSet1_Enumerator__int__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HashSet1_Enumerator__int__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(HashSet1_Enumerator__int__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(HashSet1_Enumerator__int, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(HashSet1_Enumerator__int, _current), ::app::Uno::Int__typeof()),
        ::uNewField("_iterator", NULL, offsetof(HashSet1_Enumerator__int, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(HashSet1_Enumerator__int, _source), ::app::Uno::Collections::Dictionary__int__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(HashSet1_Enumerator__int, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", HashSet1_Enumerator__int__Dispose, 0, false),
        ::uNewFunction("get_Current", HashSet1_Enumerator__int__get_Current, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("MoveNext", HashSet1_Enumerator__int__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void HashSet1_Enumerator__int___ObjInit(HashSet1_Enumerator__int* __this, ::app::Uno::Collections::Dictionary__int__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(source)->_version;
    __this->_iterator = -1;
}

void HashSet1_Enumerator__int__Dispose(HashSet1_Enumerator__int* __this)
{
}

int HashSet1_Enumerator__int__get_Current(HashSet1_Enumerator__int* __this)
{
    return __this->_current;
}

bool HashSet1_Enumerator__int__MoveNext(HashSet1_Enumerator__int* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

HashSet1_Enumerator__int HashSet1_Enumerator__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__bool* source)
{
    HashSet1_Enumerator__int inst = ::uDefault< HashSet1_Enumerator__int>();
    inst._ObjInit(source);
    return inst;
}

void HashSet1_Enumerator__int__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__int* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_source)->_version;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet1_Enumerator__string__uType* HashSet1_Enumerator__string__typeof()
{
    static ::uStaticStrong<HashSet1_Enumerator__string__uType*> type;
    if (type != NULL) return type;

    type = (HashSet1_Enumerator__string__uType*)::uAllocStructType(sizeof(HashSet1_Enumerator__string__uType), "Uno.Collections.HashSet<string>.Enumerator", sizeof(HashSet1_Enumerator__string), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))HashSet1_Enumerator__string__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::uString*(*)(void*))HashSet1_Enumerator__string__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__string__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__string__typeof(), offsetof(HashSet1_Enumerator__string__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HashSet1_Enumerator__string__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(HashSet1_Enumerator__string__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(HashSet1_Enumerator__string, _current),
        "_source", offsetof(HashSet1_Enumerator__string, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(HashSet1_Enumerator__string, _current), ::app::Uno::String__typeof()),
        ::uNewField("_iterator", NULL, offsetof(HashSet1_Enumerator__string, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(HashSet1_Enumerator__string, _source), ::app::Uno::Collections::Dictionary__string__bool__typeof()),
        ::uNewField("_version", NULL, offsetof(HashSet1_Enumerator__string, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", HashSet1_Enumerator__string__Dispose, 0, false),
        ::uNewFunction("get_Current", HashSet1_Enumerator__string__get_Current, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("MoveNext", HashSet1_Enumerator__string__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void HashSet1_Enumerator__string___ObjInit(HashSet1_Enumerator__string* __this, ::app::Uno::Collections::Dictionary__string__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(source)->_version;
    __this->_iterator = -1;
}

void HashSet1_Enumerator__string__Dispose(HashSet1_Enumerator__string* __this)
{
}

::uString* HashSet1_Enumerator__string__get_Current(HashSet1_Enumerator__string* __this)
{
    return __this->_current;
}

bool HashSet1_Enumerator__string__MoveNext(HashSet1_Enumerator__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

HashSet1_Enumerator__string HashSet1_Enumerator__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__bool* source)
{
    HashSet1_Enumerator__string inst = ::uDefault< HashSet1_Enumerator__string>();
    inst._ObjInit(source);
    return inst;
}

void HashSet1_Enumerator__string__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__string* __this)
{
    __this->_iterator = -1;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_source)->_version;
    __this->_current = NULL;
}

}}}
