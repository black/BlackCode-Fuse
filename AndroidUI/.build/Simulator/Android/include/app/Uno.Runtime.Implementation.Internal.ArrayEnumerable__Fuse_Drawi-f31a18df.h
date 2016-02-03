// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_F31A18DF_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_DRAWI_F31A18DF_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Drawing_GradientStop;

struct ArrayEnumerable__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop __interface_0;
};

ArrayEnumerable__Fuse_Drawing_GradientStop__uType* ArrayEnumerable__Fuse_Drawing_GradientStop__typeof();

void ArrayEnumerable__Fuse_Drawing_GradientStop___ObjInit(ArrayEnumerable__Fuse_Drawing_GradientStop* __this, ::uArray* source);
::uObject* ArrayEnumerable__Fuse_Drawing_GradientStop__GetEnumerator(ArrayEnumerable__Fuse_Drawing_GradientStop* __this);
ArrayEnumerable__Fuse_Drawing_GradientStop* ArrayEnumerable__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Drawing_GradientStop___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Drawing_GradientStop__GetEnumerator(this); }
};

}}}}}


#endif
