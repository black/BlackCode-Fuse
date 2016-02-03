// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_SELECTION_H__
#define __APP_OUTRACKS_SIMULATOR_SELECTION_H__

#include <app/Fuse.Preview.ISelection.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {

struct Selection;

struct Selection__uType : ::uClassType
{
    ::app::Fuse::Preview::ISelection __interface_0;
};

Selection__uType* Selection__typeof();

void Selection___ObjInit(Selection* __this, ::uString* tagHash, ::uString* property);
void Selection__Each(Selection* __this, ::uDelegate* action);
::uObject* Selection__get_Items(Selection* __this);
bool Selection__IsPropertySelected(Selection* __this, ::uObject* obj, ::uString* property);
bool Selection__IsSelected(Selection* __this, ::uObject* obj);
Selection* Selection__New_1(::uStatic* __this, ::uString* tagHash, ::uString* property);

struct Selection : ::uObject
{
    ::uStrong< ::uString*> _tagHash;
    ::uStrong< ::uString*> _property;

    void _ObjInit(::uString* tagHash, ::uString* property) { Selection___ObjInit(this, tagHash, property); }
    void Each(::uDelegate* action) { Selection__Each(this, action); }
    ::uObject* Items() { return Selection__get_Items(this); }
    bool IsPropertySelected(::uObject* obj, ::uString* property) { return Selection__IsPropertySelected(this, obj, property); }
    bool IsSelected(::uObject* obj) { return Selection__IsSelected(this, obj); }
};

}}}


#endif
