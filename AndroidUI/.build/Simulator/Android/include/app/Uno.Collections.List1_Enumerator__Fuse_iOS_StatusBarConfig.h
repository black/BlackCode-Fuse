// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_I_O_S_STATUS_BAR_CONFIG_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_I_O_S_STATUS_BAR_CONFIG_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_iOS_StatusBarConfig; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_iOS_StatusBarConfig;

struct List1_Enumerator__Fuse_iOS_StatusBarConfig__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_iOS_StatusBarConfig __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_iOS_StatusBarConfig__uType* List1_Enumerator__Fuse_iOS_StatusBarConfig__typeof();

void List1_Enumerator__Fuse_iOS_StatusBarConfig___ObjInit(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this, ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig* source);
void List1_Enumerator__Fuse_iOS_StatusBarConfig__Dispose(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this);
::app::Fuse::iOS::StatusBarConfig* List1_Enumerator__Fuse_iOS_StatusBarConfig__get_Current(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this);
bool List1_Enumerator__Fuse_iOS_StatusBarConfig__MoveNext(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this);
List1_Enumerator__Fuse_iOS_StatusBarConfig List1_Enumerator__Fuse_iOS_StatusBarConfig__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig* source);
void List1_Enumerator__Fuse_iOS_StatusBarConfig__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_iOS_StatusBarConfig* __this);

struct List1_Enumerator__Fuse_iOS_StatusBarConfig
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::iOS::StatusBarConfig*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig* source) { List1_Enumerator__Fuse_iOS_StatusBarConfig___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_iOS_StatusBarConfig__Dispose(this); }
    ::app::Fuse::iOS::StatusBarConfig* Current() { return List1_Enumerator__Fuse_iOS_StatusBarConfig__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_iOS_StatusBarConfig__MoveNext(this); }
};

}}}


#endif
