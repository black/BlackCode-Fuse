// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_BEHAVIOR_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Behavior; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Behavior;

struct ArrayEnumerator__Fuse_Behavior__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Behavior __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Behavior__uType* ArrayEnumerator__Fuse_Behavior__typeof();

void ArrayEnumerator__Fuse_Behavior___ObjInit(ArrayEnumerator__Fuse_Behavior* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Behavior__Dispose(ArrayEnumerator__Fuse_Behavior* __this);
::app::Fuse::Behavior* ArrayEnumerator__Fuse_Behavior__get_Current(ArrayEnumerator__Fuse_Behavior* __this);
bool ArrayEnumerator__Fuse_Behavior__MoveNext(ArrayEnumerator__Fuse_Behavior* __this);
ArrayEnumerator__Fuse_Behavior* ArrayEnumerator__Fuse_Behavior__New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Behavior__Reset(ArrayEnumerator__Fuse_Behavior* __this);

struct ArrayEnumerator__Fuse_Behavior : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Behavior*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Behavior___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Fuse_Behavior__Dispose(this); }
    ::app::Fuse::Behavior* Current() { return ArrayEnumerator__Fuse_Behavior__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Behavior__MoveNext(this); }
    void Reset() { ArrayEnumerator__Fuse_Behavior__Reset(this); }
};

}}}}}


#endif
