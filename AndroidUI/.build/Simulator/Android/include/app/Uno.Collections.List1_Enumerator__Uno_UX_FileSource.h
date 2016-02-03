// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_UX_FileSource;

struct List1_Enumerator__Uno_UX_FileSource__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_UX_FileSource__uType* List1_Enumerator__Uno_UX_FileSource__typeof();

void List1_Enumerator__Uno_UX_FileSource___ObjInit(List1_Enumerator__Uno_UX_FileSource* __this, ::app::Uno::Collections::List__Uno_UX_FileSource* source);
void List1_Enumerator__Uno_UX_FileSource__Dispose(List1_Enumerator__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* List1_Enumerator__Uno_UX_FileSource__get_Current(List1_Enumerator__Uno_UX_FileSource* __this);
bool List1_Enumerator__Uno_UX_FileSource__MoveNext(List1_Enumerator__Uno_UX_FileSource* __this);
List1_Enumerator__Uno_UX_FileSource List1_Enumerator__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_FileSource* source);
void List1_Enumerator__Uno_UX_FileSource__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_UX_FileSource* __this);

struct List1_Enumerator__Uno_UX_FileSource
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_FileSource*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::UX::FileSource*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_UX_FileSource* source) { List1_Enumerator__Uno_UX_FileSource___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_UX_FileSource__Dispose(this); }
    ::app::Uno::UX::FileSource* Current() { return List1_Enumerator__Uno_UX_FileSource__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_UX_FileSource__MoveNext(this); }
};

}}}


#endif
