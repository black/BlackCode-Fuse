// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Resources_ImageSource;

struct List1_Enumerator__Fuse_Resources_ImageSource__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Resources_ImageSource__uType* List1_Enumerator__Fuse_Resources_ImageSource__typeof();

void List1_Enumerator__Fuse_Resources_ImageSource___ObjInit(List1_Enumerator__Fuse_Resources_ImageSource* __this, ::app::Uno::Collections::List__Fuse_Resources_ImageSource* source);
void List1_Enumerator__Fuse_Resources_ImageSource__Dispose(List1_Enumerator__Fuse_Resources_ImageSource* __this);
::app::Fuse::Resources::ImageSource* List1_Enumerator__Fuse_Resources_ImageSource__get_Current(List1_Enumerator__Fuse_Resources_ImageSource* __this);
bool List1_Enumerator__Fuse_Resources_ImageSource__MoveNext(List1_Enumerator__Fuse_Resources_ImageSource* __this);
List1_Enumerator__Fuse_Resources_ImageSource List1_Enumerator__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Resources_ImageSource* source);
void List1_Enumerator__Fuse_Resources_ImageSource__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Resources_ImageSource* __this);

struct List1_Enumerator__Fuse_Resources_ImageSource
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Resources_ImageSource* source) { List1_Enumerator__Fuse_Resources_ImageSource___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Resources_ImageSource__Dispose(this); }
    ::app::Fuse::Resources::ImageSource* Current() { return List1_Enumerator__Fuse_Resources_ImageSource__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Resources_ImageSource__MoveNext(this); }
};

}}}


#endif
