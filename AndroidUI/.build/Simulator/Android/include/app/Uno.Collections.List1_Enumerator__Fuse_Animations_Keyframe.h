// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_KEYFRAME_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_KEYFRAME_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_Keyframe.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Keyframe; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_Keyframe; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_Keyframe;

struct List1_Enumerator__Fuse_Animations_Keyframe__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_Keyframe __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_Keyframe__uType* List1_Enumerator__Fuse_Animations_Keyframe__typeof();

void List1_Enumerator__Fuse_Animations_Keyframe___ObjInit(List1_Enumerator__Fuse_Animations_Keyframe* __this, ::app::Uno::Collections::List__Fuse_Animations_Keyframe* source);
void List1_Enumerator__Fuse_Animations_Keyframe__Dispose(List1_Enumerator__Fuse_Animations_Keyframe* __this);
::app::Fuse::Animations::Keyframe* List1_Enumerator__Fuse_Animations_Keyframe__get_Current(List1_Enumerator__Fuse_Animations_Keyframe* __this);
bool List1_Enumerator__Fuse_Animations_Keyframe__MoveNext(List1_Enumerator__Fuse_Animations_Keyframe* __this);
List1_Enumerator__Fuse_Animations_Keyframe List1_Enumerator__Fuse_Animations_Keyframe__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_Keyframe* source);
void List1_Enumerator__Fuse_Animations_Keyframe__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_Keyframe* __this);

struct List1_Enumerator__Fuse_Animations_Keyframe
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_Keyframe*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::Keyframe*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_Keyframe* source) { List1_Enumerator__Fuse_Animations_Keyframe___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_Keyframe__Dispose(this); }
    ::app::Fuse::Animations::Keyframe* Current() { return List1_Enumerator__Fuse_Animations_Keyframe__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_Keyframe__MoveNext(this); }
};

}}}


#endif
