// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_D9FE5C2F_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_D9FE5C2F_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Drawing_PolygonDrawable;

struct ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable __interface_0;
};

ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof();

void ArrayEnumerable__Fuse_Drawing_PolygonDrawable___ObjInit(ArrayEnumerable__Fuse_Drawing_PolygonDrawable* __this, ::uArray* source);
::uObject* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__GetEnumerator(ArrayEnumerable__Fuse_Drawing_PolygonDrawable* __this);
ArrayEnumerable__Fuse_Drawing_PolygonDrawable* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Drawing_PolygonDrawable : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Drawing_PolygonDrawable___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Drawing_PolygonDrawable__GetEnumerator(this); }
};

}}}}}


#endif
