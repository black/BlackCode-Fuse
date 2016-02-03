// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_TRANSFORM_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Transform.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Transform; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Transform;

struct List1_Enumerator__Fuse_Transform__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Transform __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Transform__uType* List1_Enumerator__Fuse_Transform__typeof();

void List1_Enumerator__Fuse_Transform___ObjInit(List1_Enumerator__Fuse_Transform* __this, ::app::Uno::Collections::List__Fuse_Transform* source);
void List1_Enumerator__Fuse_Transform__Dispose(List1_Enumerator__Fuse_Transform* __this);
::app::Fuse::Transform* List1_Enumerator__Fuse_Transform__get_Current(List1_Enumerator__Fuse_Transform* __this);
bool List1_Enumerator__Fuse_Transform__MoveNext(List1_Enumerator__Fuse_Transform* __this);
List1_Enumerator__Fuse_Transform List1_Enumerator__Fuse_Transform__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Transform* source);
void List1_Enumerator__Fuse_Transform__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Transform* __this);

struct List1_Enumerator__Fuse_Transform
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Transform*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Transform*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Transform* source) { List1_Enumerator__Fuse_Transform___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Transform__Dispose(this); }
    ::app::Fuse::Transform* Current() { return List1_Enumerator__Fuse_Transform__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Transform__MoveNext(this); }
};

}}}


#endif
