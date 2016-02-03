// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_A89FEA52_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_A89FEA52_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_DialogButton.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Outracks_Simulator_DialogButton;

struct ArrayEnumerable__Outracks_Simulator_DialogButton__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_DialogButton __interface_0;
};

ArrayEnumerable__Outracks_Simulator_DialogButton__uType* ArrayEnumerable__Outracks_Simulator_DialogButton__typeof();

void ArrayEnumerable__Outracks_Simulator_DialogButton___ObjInit(ArrayEnumerable__Outracks_Simulator_DialogButton* __this, ::uArray* source);
::uObject* ArrayEnumerable__Outracks_Simulator_DialogButton__GetEnumerator(ArrayEnumerable__Outracks_Simulator_DialogButton* __this);
ArrayEnumerable__Outracks_Simulator_DialogButton* ArrayEnumerable__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Outracks_Simulator_DialogButton : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Outracks_Simulator_DialogButton___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Outracks_Simulator_DialogButton__GetEnumerator(this); }
};

}}}}}


#endif
