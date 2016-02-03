// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_DE7A3B36_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_DE7A3B36_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton;

struct EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__typeof();

void EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* __this, ::app::Outracks::Simulator::DialogButton* item, EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* next);
EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, ::app::Outracks::Simulator::DialogButton* item, EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* next);

struct EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::DialogButton*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton*> Next;

    void _ObjInit(::app::Outracks::Simulator::DialogButton* item, EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton* next) { EnumerableExtensions_LinkedList__Outracks_Simulator_DialogButton___ObjInit(this, item, next); }
};

}}}


#endif
