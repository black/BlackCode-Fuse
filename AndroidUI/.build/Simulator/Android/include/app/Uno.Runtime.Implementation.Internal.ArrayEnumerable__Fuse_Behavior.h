// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_BEHAVIOR_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Behavior; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Behavior;

struct ArrayEnumerable__Fuse_Behavior__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Behavior __interface_0;
};

ArrayEnumerable__Fuse_Behavior__uType* ArrayEnumerable__Fuse_Behavior__typeof();

void ArrayEnumerable__Fuse_Behavior___ObjInit(ArrayEnumerable__Fuse_Behavior* __this, ::uArray* source);
::uObject* ArrayEnumerable__Fuse_Behavior__GetEnumerator(ArrayEnumerable__Fuse_Behavior* __this);
ArrayEnumerable__Fuse_Behavior* ArrayEnumerable__Fuse_Behavior__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Behavior : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Behavior___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Behavior__GetEnumerator(this); }
};

}}}}}


#endif
