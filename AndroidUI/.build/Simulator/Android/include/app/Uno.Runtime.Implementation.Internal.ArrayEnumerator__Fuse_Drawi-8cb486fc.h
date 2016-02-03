// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_8CB486FC_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_DRAWI_8CB486FC_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Drawing_Contour;

struct ArrayEnumerator__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Drawing_Contour__uType* ArrayEnumerator__Fuse_Drawing_Contour__typeof();

void ArrayEnumerator__Fuse_Drawing_Contour___ObjInit(ArrayEnumerator__Fuse_Drawing_Contour* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Drawing_Contour__Dispose(ArrayEnumerator__Fuse_Drawing_Contour* __this);
::app::Fuse::Drawing::Contour* ArrayEnumerator__Fuse_Drawing_Contour__get_Current(ArrayEnumerator__Fuse_Drawing_Contour* __this);
bool ArrayEnumerator__Fuse_Drawing_Contour__MoveNext(ArrayEnumerator__Fuse_Drawing_Contour* __this);
ArrayEnumerator__Fuse_Drawing_Contour* ArrayEnumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Drawing_Contour__Reset(ArrayEnumerator__Fuse_Drawing_Contour* __this);

struct ArrayEnumerator__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Contour*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Drawing_Contour___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Fuse_Drawing_Contour__Dispose(this); }
    ::app::Fuse::Drawing::Contour* Current() { return ArrayEnumerator__Fuse_Drawing_Contour__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Drawing_Contour__MoveNext(this); }
    void Reset() { ArrayEnumerator__Fuse_Drawing_Contour__Reset(this); }
};

}}}}}


#endif
