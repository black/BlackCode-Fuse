#include <app/Fuse.Drawing.Cache__float2.h>
#include <app/Fuse.Drawing.Cache__Fuse_Drawing_Contour.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-9a669574.h>

namespace app {
namespace Fuse {
namespace Drawing {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Cache__float2__uType* Cache__float2__typeof()
{
    static ::uStaticStrong<Cache__float2__uType*> type;
    if (type != NULL) return type;

    type = (Cache__float2__uType*)::uAllocClassType(sizeof(Cache__float2__uType), "Fuse.Drawing.Cache<float2>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_cache", offsetof(Cache__float2, _cache),
        "_source", offsetof(Cache__float2, _source));

    return type;
}

void Cache__float2___ObjInit(Cache__float2* __this, ::uArray* immutableItems)
{
    __this->_cache = immutableItems;
}

void Cache__float2___ObjInit_1(Cache__float2* __this, ::uObject* source)
{
    __this->_source = source;
}

void Cache__float2__Evaluate(Cache__float2* __this)
{
    if (__this->_cache == NULL)
    {
        __this->_cache = ::app::Uno::Collections::EnumerableExtensions__ToArray__float2(NULL, __this->_source);
        __this->_source = NULL;
    }
}

::app::Uno::Float2 Cache__float2__get_Item(Cache__float2* __this, int index)
{
    __this->Evaluate();
    return ::uPtr< ::uArray*>(__this->_cache)->Item< ::app::Uno::Float2>(index);
}

::uObject* Cache__float2__get_Items(Cache__float2* __this)
{
    __this->Evaluate();
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, __this->_cache);
}

int Cache__float2__get_Length(Cache__float2* __this)
{
    __this->Evaluate();
    return ::uPtr< ::uArray*>(__this->_cache)->Length();
}

Cache__float2* Cache__float2__New_1(::uStatic* __this, ::uArray* immutableItems)
{
    Cache__float2* inst = (Cache__float2*)::uAllocObject(sizeof(Cache__float2), Cache__float2__typeof());
    inst->_ObjInit(immutableItems);
    return inst;
}

Cache__float2* Cache__float2__New_2(::uStatic* __this, ::uObject* source)
{
    Cache__float2* inst = (Cache__float2*)::uAllocObject(sizeof(Cache__float2), Cache__float2__typeof());
    inst->_ObjInit_1(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Cache__Fuse_Drawing_Contour__uType* Cache__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<Cache__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (Cache__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(Cache__Fuse_Drawing_Contour__uType), "Fuse.Drawing.Cache<Fuse.Drawing.Contour>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_cache", offsetof(Cache__Fuse_Drawing_Contour, _cache),
        "_source", offsetof(Cache__Fuse_Drawing_Contour, _source));

    return type;
}

void Cache__Fuse_Drawing_Contour___ObjInit(Cache__Fuse_Drawing_Contour* __this, ::uArray* immutableItems)
{
    __this->_cache = immutableItems;
}

void Cache__Fuse_Drawing_Contour___ObjInit_1(Cache__Fuse_Drawing_Contour* __this, ::uObject* source)
{
    __this->_source = source;
}

void Cache__Fuse_Drawing_Contour__Evaluate(Cache__Fuse_Drawing_Contour* __this)
{
    if (__this->_cache == NULL)
    {
        __this->_cache = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Contour(NULL, __this->_source);
        __this->_source = NULL;
    }
}

::app::Fuse::Drawing::Contour* Cache__Fuse_Drawing_Contour__get_Item(Cache__Fuse_Drawing_Contour* __this, int index)
{
    __this->Evaluate();
    return ::uPtr< ::uArray*>(__this->_cache)->Item< ::app::Fuse::Drawing::Contour*>(index);
}

::uObject* Cache__Fuse_Drawing_Contour__get_Items(Cache__Fuse_Drawing_Contour* __this)
{
    __this->Evaluate();
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Contour__New_1(NULL, __this->_cache);
}

int Cache__Fuse_Drawing_Contour__get_Length(Cache__Fuse_Drawing_Contour* __this)
{
    __this->Evaluate();
    return ::uPtr< ::uArray*>(__this->_cache)->Length();
}

Cache__Fuse_Drawing_Contour* Cache__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* immutableItems)
{
    Cache__Fuse_Drawing_Contour* inst = (Cache__Fuse_Drawing_Contour*)::uAllocObject(sizeof(Cache__Fuse_Drawing_Contour), Cache__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(immutableItems);
    return inst;
}

Cache__Fuse_Drawing_Contour* Cache__Fuse_Drawing_Contour__New_2(::uStatic* __this, ::uObject* source)
{
    Cache__Fuse_Drawing_Contour* inst = (Cache__Fuse_Drawing_Contour*)::uAllocObject(sizeof(Cache__Fuse_Drawing_Contour), Cache__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit_1(source);
    return inst;
}

}}}
