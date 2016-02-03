// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_CONTROL_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_CONTROL_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Control.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_Control; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Controls_Control;

struct List1_Enumerator__Fuse_Controls_Control__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Controls_Control __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Controls_Control__uType* List1_Enumerator__Fuse_Controls_Control__typeof();

void List1_Enumerator__Fuse_Controls_Control___ObjInit(List1_Enumerator__Fuse_Controls_Control* __this, ::app::Uno::Collections::List__Fuse_Controls_Control* source);
void List1_Enumerator__Fuse_Controls_Control__Dispose(List1_Enumerator__Fuse_Controls_Control* __this);
::app::Fuse::Controls::Control* List1_Enumerator__Fuse_Controls_Control__get_Current(List1_Enumerator__Fuse_Controls_Control* __this);
bool List1_Enumerator__Fuse_Controls_Control__MoveNext(List1_Enumerator__Fuse_Controls_Control* __this);
List1_Enumerator__Fuse_Controls_Control List1_Enumerator__Fuse_Controls_Control__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_Control* source);
void List1_Enumerator__Fuse_Controls_Control__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_Control* __this);

struct List1_Enumerator__Fuse_Controls_Control
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Controls_Control*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Controls::Control*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Controls_Control* source) { List1_Enumerator__Fuse_Controls_Control___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Controls_Control__Dispose(this); }
    ::app::Fuse::Controls::Control* Current() { return List1_Enumerator__Fuse_Controls_Control__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Controls_Control__MoveNext(this); }
};

}}}


#endif
