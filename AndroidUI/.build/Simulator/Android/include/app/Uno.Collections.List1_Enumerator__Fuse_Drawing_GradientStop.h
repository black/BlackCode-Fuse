// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_GradientStop.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_GradientStop; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_GradientStop;

struct List1_Enumerator__Fuse_Drawing_GradientStop__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_GradientStop__uType* List1_Enumerator__Fuse_Drawing_GradientStop__typeof();

void List1_Enumerator__Fuse_Drawing_GradientStop___ObjInit(List1_Enumerator__Fuse_Drawing_GradientStop* __this, ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* source);
void List1_Enumerator__Fuse_Drawing_GradientStop__Dispose(List1_Enumerator__Fuse_Drawing_GradientStop* __this);
::app::Fuse::Drawing::GradientStop* List1_Enumerator__Fuse_Drawing_GradientStop__get_Current(List1_Enumerator__Fuse_Drawing_GradientStop* __this);
bool List1_Enumerator__Fuse_Drawing_GradientStop__MoveNext(List1_Enumerator__Fuse_Drawing_GradientStop* __this);
List1_Enumerator__Fuse_Drawing_GradientStop List1_Enumerator__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* source);
void List1_Enumerator__Fuse_Drawing_GradientStop__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_GradientStop* __this);

struct List1_Enumerator__Fuse_Drawing_GradientStop
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::GradientStop*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_GradientStop* source) { List1_Enumerator__Fuse_Drawing_GradientStop___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Drawing_GradientStop__Dispose(this); }
    ::app::Fuse::Drawing::GradientStop* Current() { return List1_Enumerator__Fuse_Drawing_GradientStop__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_GradientStop__MoveNext(this); }
};

}}}


#endif
