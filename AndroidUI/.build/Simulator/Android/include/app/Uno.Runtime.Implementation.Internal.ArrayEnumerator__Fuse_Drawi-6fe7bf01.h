// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_6FE7BF01_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_6FE7BF01_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_GradientStop.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Drawing_GradientStop;

struct ArrayEnumerator__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Drawing_GradientStop__uType* ArrayEnumerator__Fuse_Drawing_GradientStop__typeof();

void ArrayEnumerator__Fuse_Drawing_GradientStop___ObjInit(ArrayEnumerator__Fuse_Drawing_GradientStop* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Drawing_GradientStop__Dispose(ArrayEnumerator__Fuse_Drawing_GradientStop* __this);
::app::Fuse::Drawing::GradientStop* ArrayEnumerator__Fuse_Drawing_GradientStop__get_Current(ArrayEnumerator__Fuse_Drawing_GradientStop* __this);
bool ArrayEnumerator__Fuse_Drawing_GradientStop__MoveNext(ArrayEnumerator__Fuse_Drawing_GradientStop* __this);
ArrayEnumerator__Fuse_Drawing_GradientStop* ArrayEnumerator__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Drawing_GradientStop__Reset(ArrayEnumerator__Fuse_Drawing_GradientStop* __this);

struct ArrayEnumerator__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::GradientStop*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Drawing_GradientStop___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Fuse_Drawing_GradientStop__Dispose(this); }
    ::app::Fuse::Drawing::GradientStop* Current() { return ArrayEnumerator__Fuse_Drawing_GradientStop__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Drawing_GradientStop__MoveNext(this); }
    void Reset() { ArrayEnumerator__Fuse_Drawing_GradientStop__Reset(this); }
};

}}}}}


#endif
