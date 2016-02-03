// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_STYLE_PROPERTY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_STYLE_PROPERTY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_StyleProperty.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_StyleProperty; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_StyleProperty;

struct List1_Enumerator__Fuse_StyleProperty__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_StyleProperty __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_StyleProperty__uType* List1_Enumerator__Fuse_StyleProperty__typeof();

void List1_Enumerator__Fuse_StyleProperty___ObjInit(List1_Enumerator__Fuse_StyleProperty* __this, ::app::Uno::Collections::List__Fuse_StyleProperty* source);
void List1_Enumerator__Fuse_StyleProperty__Dispose(List1_Enumerator__Fuse_StyleProperty* __this);
::app::Fuse::StyleProperty* List1_Enumerator__Fuse_StyleProperty__get_Current(List1_Enumerator__Fuse_StyleProperty* __this);
bool List1_Enumerator__Fuse_StyleProperty__MoveNext(List1_Enumerator__Fuse_StyleProperty* __this);
List1_Enumerator__Fuse_StyleProperty List1_Enumerator__Fuse_StyleProperty__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_StyleProperty* source);
void List1_Enumerator__Fuse_StyleProperty__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_StyleProperty* __this);

struct List1_Enumerator__Fuse_StyleProperty
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_StyleProperty*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::StyleProperty*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_StyleProperty* source) { List1_Enumerator__Fuse_StyleProperty___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_StyleProperty__Dispose(this); }
    ::app::Fuse::StyleProperty* Current() { return List1_Enumerator__Fuse_StyleProperty__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_StyleProperty__MoveNext(this); }
};

}}}


#endif
