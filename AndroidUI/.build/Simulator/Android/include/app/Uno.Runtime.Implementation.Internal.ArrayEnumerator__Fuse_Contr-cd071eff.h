// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_CONTR_CD071EFF_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_CONTR_CD071EFF_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Control.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Controls_Control;

struct ArrayEnumerator__Fuse_Controls_Control__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Controls_Control __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Controls_Control__uType* ArrayEnumerator__Fuse_Controls_Control__typeof();

void ArrayEnumerator__Fuse_Controls_Control___ObjInit(ArrayEnumerator__Fuse_Controls_Control* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Controls_Control__Dispose(ArrayEnumerator__Fuse_Controls_Control* __this);
::app::Fuse::Controls::Control* ArrayEnumerator__Fuse_Controls_Control__get_Current(ArrayEnumerator__Fuse_Controls_Control* __this);
bool ArrayEnumerator__Fuse_Controls_Control__MoveNext(ArrayEnumerator__Fuse_Controls_Control* __this);
ArrayEnumerator__Fuse_Controls_Control* ArrayEnumerator__Fuse_Controls_Control__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Controls_Control__Reset(ArrayEnumerator__Fuse_Controls_Control* __this);

struct ArrayEnumerator__Fuse_Controls_Control : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Controls::Control*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Controls_Control___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Fuse_Controls_Control__Dispose(this); }
    ::app::Fuse::Controls::Control* Current() { return ArrayEnumerator__Fuse_Controls_Control__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Controls_Control__MoveNext(this); }
    void Reset() { ArrayEnumerator__Fuse_Controls_Control__Reset(this); }
};

}}}}}


#endif
