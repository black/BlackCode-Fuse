// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_EFFECTS_EFFECT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_EFFECTS_EFFECT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Effects_Effect; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Effects_Effect;

struct List1_Enumerator__Fuse_Effects_Effect__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Effects_Effect__uType* List1_Enumerator__Fuse_Effects_Effect__typeof();

void List1_Enumerator__Fuse_Effects_Effect___ObjInit(List1_Enumerator__Fuse_Effects_Effect* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source);
void List1_Enumerator__Fuse_Effects_Effect__Dispose(List1_Enumerator__Fuse_Effects_Effect* __this);
::app::Fuse::Effects::Effect* List1_Enumerator__Fuse_Effects_Effect__get_Current(List1_Enumerator__Fuse_Effects_Effect* __this);
bool List1_Enumerator__Fuse_Effects_Effect__MoveNext(List1_Enumerator__Fuse_Effects_Effect* __this);
List1_Enumerator__Fuse_Effects_Effect List1_Enumerator__Fuse_Effects_Effect__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source);
void List1_Enumerator__Fuse_Effects_Effect__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Effects_Effect* __this);

struct List1_Enumerator__Fuse_Effects_Effect
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Effects_Effect*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Effects::Effect*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Effects_Effect* source) { List1_Enumerator__Fuse_Effects_Effect___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Effects_Effect__Dispose(this); }
    ::app::Fuse::Effects::Effect* Current() { return List1_Enumerator__Fuse_Effects_Effect__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Effects_Effect__MoveNext(this); }
};

}}}


#endif
