// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_LAYOUTS_DEFINITION_BASE_P_E6D8205A_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_LAYOUTS_DEFINITION_BASE_P_E6D8205A_H__

#include <app/Fuse.Layouts.DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_DefinitionBase_ParseDataItem; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem;

struct List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType* List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof();

void List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem* source);
void List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__Dispose(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
::app::Fuse::Layouts::DefinitionBase_ParseDataItem List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Current(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
bool List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__MoveNext(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem* source);
void List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);

struct List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem*> _source;
    int _version;
    int _iterator;
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem* source) { List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__Dispose(this); }
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem Current() { return List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__MoveNext(this); }
};

}}}


#endif
