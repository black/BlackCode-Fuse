// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_CONTR_F9495A05_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_CONTR_F9495A05_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Control.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Controls_Control;

struct ArrayEnumerable__Fuse_Controls_Control__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Controls_Control __interface_0;
};

ArrayEnumerable__Fuse_Controls_Control__uType* ArrayEnumerable__Fuse_Controls_Control__typeof();

void ArrayEnumerable__Fuse_Controls_Control___ObjInit(ArrayEnumerable__Fuse_Controls_Control* __this, ::uArray* source);
::uObject* ArrayEnumerable__Fuse_Controls_Control__GetEnumerator(ArrayEnumerable__Fuse_Controls_Control* __this);
ArrayEnumerable__Fuse_Controls_Control* ArrayEnumerable__Fuse_Controls_Control__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Controls_Control : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Controls_Control___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Controls_Control__GetEnumerator(this); }
};

}}}}}


#endif
