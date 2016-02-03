// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWING_BORDER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWING_BORDER_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Drawing_Border;

struct ArrayEnumerable__Fuse_Drawing_Border__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border __interface_0;
};

ArrayEnumerable__Fuse_Drawing_Border__uType* ArrayEnumerable__Fuse_Drawing_Border__typeof();

void ArrayEnumerable__Fuse_Drawing_Border___ObjInit(ArrayEnumerable__Fuse_Drawing_Border* __this, ::uArray* source);
::uObject* ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Border* __this);
ArrayEnumerable__Fuse_Drawing_Border* ArrayEnumerable__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Drawing_Border : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Drawing_Border___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator(this); }
};

}}}}}


#endif
