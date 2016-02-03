// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_STAGE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_STAGE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Stage.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Stage; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Stage; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Stage;

struct List1_Enumerator__Fuse_Stage__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Stage __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Stage__uType* List1_Enumerator__Fuse_Stage__typeof();

void List1_Enumerator__Fuse_Stage___ObjInit(List1_Enumerator__Fuse_Stage* __this, ::app::Uno::Collections::List__Fuse_Stage* source);
void List1_Enumerator__Fuse_Stage__Dispose(List1_Enumerator__Fuse_Stage* __this);
::app::Fuse::Stage* List1_Enumerator__Fuse_Stage__get_Current(List1_Enumerator__Fuse_Stage* __this);
bool List1_Enumerator__Fuse_Stage__MoveNext(List1_Enumerator__Fuse_Stage* __this);
List1_Enumerator__Fuse_Stage List1_Enumerator__Fuse_Stage__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Stage* source);
void List1_Enumerator__Fuse_Stage__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Stage* __this);

struct List1_Enumerator__Fuse_Stage
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Stage*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Stage*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Stage* source) { List1_Enumerator__Fuse_Stage___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Stage__Dispose(this); }
    ::app::Fuse::Stage* Current() { return List1_Enumerator__Fuse_Stage__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Stage__MoveNext(this); }
};

}}}


#endif
