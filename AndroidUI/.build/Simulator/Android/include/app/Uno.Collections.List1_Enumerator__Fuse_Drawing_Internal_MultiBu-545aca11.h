// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_INTERNAL_MULTI_BU_545ACA11_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_INTERNAL_MULTI_BU_545ACA11_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer_Field; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Internal_MultiBuffer_Field; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field;

struct List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Internal_MultiBuffer_Field __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__uType* List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__typeof();

void List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field___ObjInit(List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field* __this, ::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field* source);
void List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__Dispose(List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__get_Current(List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
bool List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__MoveNext(List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field* source);
void List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field* __this);

struct List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Internal::MultiBuffer_Field*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Internal_MultiBuffer_Field* source) { List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__Dispose(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* Current() { return List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field__MoveNext(this); }
};

}}}


#endif
