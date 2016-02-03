// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_PHYSICS_I_RULE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_PHYSICS_I_RULE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Physics_IRule.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Physics_IRule; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Physics_IRule;

struct List1_Enumerator__Fuse_Physics_IRule__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Physics_IRule __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Physics_IRule__uType* List1_Enumerator__Fuse_Physics_IRule__typeof();

void List1_Enumerator__Fuse_Physics_IRule___ObjInit(List1_Enumerator__Fuse_Physics_IRule* __this, ::app::Uno::Collections::List__Fuse_Physics_IRule* source);
void List1_Enumerator__Fuse_Physics_IRule__Dispose(List1_Enumerator__Fuse_Physics_IRule* __this);
::uObject* List1_Enumerator__Fuse_Physics_IRule__get_Current(List1_Enumerator__Fuse_Physics_IRule* __this);
bool List1_Enumerator__Fuse_Physics_IRule__MoveNext(List1_Enumerator__Fuse_Physics_IRule* __this);
List1_Enumerator__Fuse_Physics_IRule List1_Enumerator__Fuse_Physics_IRule__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Physics_IRule* source);
void List1_Enumerator__Fuse_Physics_IRule__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Physics_IRule* __this);

struct List1_Enumerator__Fuse_Physics_IRule
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Physics_IRule*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Physics_IRule* source) { List1_Enumerator__Fuse_Physics_IRule___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Physics_IRule__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Fuse_Physics_IRule__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Physics_IRule__MoveNext(this); }
};

}}}


#endif
